__author__ = 'Joao'

from copy import deepcopy


def write_file(chip):

    print "Creating the file "+chip.name+".hpp"
    with open(".\\hpp\\"+chip.name+".hpp", 'w') as f:
        f.write("// AUTHOR: JC\n")
        f.write("#include \"reg_t.hpp\"\n")
        f.write("#include \"rw_t.hpp\"\n")
        f.write("#include \"ro_t.hpp\"\n")
        f.write("#include \"wo_t.hpp\"\n\n\n")
        f.write("namespace STM32LIB{\n")

        for ph in chip.Peripherals:
            if len(ph.description) != 0:
                f.write("\t/*!\n\t"+ph.description+"\n\t*/\n")
            f.write("\tnamespace "+ph.name+"{\n")
            baseAddress = ph.baseAddress
            for reg in ph.registers:
                f.write("\t\t/*!\n\t\t"+reg.description+"\n\t\t*/\n")
                f.write("\t\tnamespace "+reg.name+"{\n")
                if reg.access != "FieldBased":
                    acess = reg.access
                    if acess == "read-write":
                        reg_opt = "rw_t"
                    elif acess == "read-only":
                        reg_opt = "ro_t"
                    elif acess == "write-only":
                        reg_opt = "wo_t"
                reg_addressOffset = reg.addressOffset
                for field in reg.fields:
                    if reg.access == "FieldBased":
                        acess = field.access
                        if acess == "read-write":
                            reg_opt = "rw_t"
                        elif acess == "read-only":
                            reg_opt = "ro_t"
                        elif acess == "write-only":
                            reg_opt = "wo_t"
                    bitOffset = field.bitOffset
                    bitWidth = field.bitWidth
                    addr = int(baseAddress, 16)+int(reg_addressOffset, 16)
                    addr = format(addr, '#10X')
                    f.write("\t\t\tusing "+field.name+" \t= reg_t<"+reg_opt+", "+addr+", "+bitOffset+", "+bitWidth+">;\t /*!<"+field.description +" */\n")


                f.write("\t\t}\n")
            f.write("\t}\n")
        f.write("}\n")
    f.closed


def copy_peripheral(chip, peripheral):

    for per in chip.Peripherals:
        if per.name == peripheral.BasedOn:
            peripheral.description = per.description+"\n\tBasedOn:"+peripheral.BasedOn
            peripheral.groupName = per.groupName
            peripheral.registers = per.registers

    return


class _chip:
    name = ""
    file_ver = ""
    AddressUnitBits = 0
    width = 0
    size = 0
    resetValue = 0
    resetMask = 0
    Peripherals = []

    def __init__(self):
        self.Peripherals = []

    def AddPeripheral(self, pheripheral):
        self.Peripherals.append(deepcopy(pheripheral))


class _Peripheral:
    name = ""
    description = ""
    groupName = ""
    baseAddress = ""
    BasedOn = ""
    registers = []

    def __init__(self):
        self.registers = []

    def AddRegister(self, register):
        self.registers.append(deepcopy(register))


class _register:
    name = ""
    displayName = ""
    description = ""
    addressOffset = ""
    size = ""
    access = ""
    resetValue = ""
    fields = []

    def __init__(self):
        self.fields = []

    def AddField(self, field):
        self.fields.append(deepcopy(field))


class _field:
    name = ""
    description = ""
    bitOffset = ""
    bitWidth = ""
    access = ""

def read_file(my_file):
    import xml.etree.ElementTree as ET

    tree = ET.parse(my_file)
    root = tree.getroot()

    chip = _chip()

    print "global info\n"

    chip.name = root.find('name').text
    chip.file_ver = root.find('version').text
    chip.AddressUnitBits = root.find('addressUnitBits').text
    chip.width = root.find('width').text
    chip.size = root.find('size').text
    chip.resetValue = root.find('resetValue').text
    chip.resetMask = root.find('resetMask').text

    Peripherals=root.find('peripherals')

    # run through the XML file creating all the peripherals
    print "Peripherals"



    for ph in Peripherals.findall('peripheral'):
        print "   |-->",  ph.find('name').text
        peripheral = _Peripheral()
        peripheral.name = ph.find('name').text
        peripheral.baseAddress = ph.find('baseAddress').text

        if len(ph.attrib) != 0:
            peripheral.BasedOn = ph.attrib['derivedFrom']
            print "      |-> Based on:", ph.attrib['derivedFrom']
            copy_peripheral(chip, peripheral)

        else:
            peripheral.description = ph.find('description').text
            peripheral.description = peripheral.description.replace("\n","")
            peripheral.description = " ".join(peripheral.description.split())
            peripheral.groupName = ph.find('groupName').text
            registers = ph.find('registers')


            for rg in registers.findall('register'):
                print "      |-->", rg.find('name').text
                register = _register()
                register.name = rg.find('name').text
                register.displayName = rg.find('displayName').text
                register.description = rg.find('description').text
                register.description = register.description.replace("\n","")
                register.description = " ".join(register.description.split())
                register.addressOffset = rg.find('addressOffset').text
                register.size = rg.find('size').text
                register.access = rg.find('access')
                if register.access == None:
                    register.access = "FieldBased"
                else:
                    register.access = register.access.text
                register.resetValue = rg.find('resetValue').text

                fields = rg.find('fields')

                for fd in fields.findall('field'):
                    field = _field()
                    field.name = fd.find('name').text
                    field.description = fd.find('description').text
                    field.description = field.description.replace("\n","")
                    field.description = " ".join(field.description.split())
                    field.bitOffset = fd.find('bitOffset').text
                    field.bitWidth = fd.find('bitWidth').text
                    field.access = fd.find('access')
                    if field.access == None:
                        field.access = ""
                    else:
                        field.access = field.access.text

                    register.AddField(field)
                    del field

                peripheral.AddRegister(register)
                del register

        chip.AddPeripheral(peripheral)
        del peripheral

    print "end of svd analysis \nI'm going to create the c++ file now\n"
    write_file(chip)


import os

for fname in os.listdir('.\\svd'):
    if fname.endswith('.svd'):
        read_file(".\\svd\\"+fname)
