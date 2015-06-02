// AUTHOR: JC
#include "reg_t.hpp"
#include "rw_t.hpp"
#include "ro_t.hpp"
#include "wo_t.hpp"


namespace STM32LIB{
	/*!
	cyclic redundancy check calculation unit
	*/
	namespace CRC{
		/*!
		Data register
		*/
		namespace DR{
			using DR 	= reg_t<rw_t, 0X40023000, 0, 32>;	 /*!<Data register bits */
		}
		/*!
		Independent data register
		*/
		namespace IDR{
			using IDR 	= reg_t<rw_t, 0X40023004, 0, 8>;	 /*!<General-purpose 8-bit data register bits */
		}
		/*!
		Control register
		*/
		namespace CR{
			using RESET 	= reg_t<rw_t, 0X40023008, 0, 1>;	 /*!<reset bit */
			using REV_IN 	= reg_t<rw_t, 0X40023008, 5, 2>;	 /*!<Reverse input data */
			using REV_OUT 	= reg_t<rw_t, 0X40023008, 7, 1>;	 /*!<Reverse output data */
		}
		/*!
		Initial CRC value
		*/
		namespace INIT{
			using INIT 	= reg_t<rw_t, 0X4002300C, 0, 32>;	 /*!<Programmable initial CRC value */
		}
	}
	/*!
	General-purpose I/Os
	*/
	namespace GPIOF{
		/*!
		GPIO port mode register
		*/
		namespace MODER{
			using MODER15 	= reg_t<rw_t, 0X48001400, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER14 	= reg_t<rw_t, 0X48001400, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER13 	= reg_t<rw_t, 0X48001400, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER12 	= reg_t<rw_t, 0X48001400, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER11 	= reg_t<rw_t, 0X48001400, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER10 	= reg_t<rw_t, 0X48001400, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER9 	= reg_t<rw_t, 0X48001400, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER8 	= reg_t<rw_t, 0X48001400, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER7 	= reg_t<rw_t, 0X48001400, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER6 	= reg_t<rw_t, 0X48001400, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER5 	= reg_t<rw_t, 0X48001400, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER4 	= reg_t<rw_t, 0X48001400, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER3 	= reg_t<rw_t, 0X48001400, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER2 	= reg_t<rw_t, 0X48001400, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER1 	= reg_t<rw_t, 0X48001400, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER0 	= reg_t<rw_t, 0X48001400, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port output type register
		*/
		namespace OTYPER{
			using OT15 	= reg_t<rw_t, 0X48001404, 15, 1>;	 /*!<Port x configuration bit 15 */
			using OT14 	= reg_t<rw_t, 0X48001404, 14, 1>;	 /*!<Port x configuration bit 14 */
			using OT13 	= reg_t<rw_t, 0X48001404, 13, 1>;	 /*!<Port x configuration bit 13 */
			using OT12 	= reg_t<rw_t, 0X48001404, 12, 1>;	 /*!<Port x configuration bit 12 */
			using OT11 	= reg_t<rw_t, 0X48001404, 11, 1>;	 /*!<Port x configuration bit 11 */
			using OT10 	= reg_t<rw_t, 0X48001404, 10, 1>;	 /*!<Port x configuration bit 10 */
			using OT9 	= reg_t<rw_t, 0X48001404, 9, 1>;	 /*!<Port x configuration bit 9 */
			using OT8 	= reg_t<rw_t, 0X48001404, 8, 1>;	 /*!<Port x configuration bit 8 */
			using OT7 	= reg_t<rw_t, 0X48001404, 7, 1>;	 /*!<Port x configuration bit 7 */
			using OT6 	= reg_t<rw_t, 0X48001404, 6, 1>;	 /*!<Port x configuration bit 6 */
			using OT5 	= reg_t<rw_t, 0X48001404, 5, 1>;	 /*!<Port x configuration bit 5 */
			using OT4 	= reg_t<rw_t, 0X48001404, 4, 1>;	 /*!<Port x configuration bit 4 */
			using OT3 	= reg_t<rw_t, 0X48001404, 3, 1>;	 /*!<Port x configuration bit 3 */
			using OT2 	= reg_t<rw_t, 0X48001404, 2, 1>;	 /*!<Port x configuration bit 2 */
			using OT1 	= reg_t<rw_t, 0X48001404, 1, 1>;	 /*!<Port x configuration bit 1 */
			using OT0 	= reg_t<rw_t, 0X48001404, 0, 1>;	 /*!<Port x configuration bit 0 */
		}
		/*!
		GPIO port output speed register
		*/
		namespace OSPEEDR{
			using OSPEEDR15 	= reg_t<rw_t, 0X48001408, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR14 	= reg_t<rw_t, 0X48001408, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR13 	= reg_t<rw_t, 0X48001408, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR12 	= reg_t<rw_t, 0X48001408, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR11 	= reg_t<rw_t, 0X48001408, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR10 	= reg_t<rw_t, 0X48001408, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR9 	= reg_t<rw_t, 0X48001408, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR8 	= reg_t<rw_t, 0X48001408, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR7 	= reg_t<rw_t, 0X48001408, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR6 	= reg_t<rw_t, 0X48001408, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR5 	= reg_t<rw_t, 0X48001408, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR4 	= reg_t<rw_t, 0X48001408, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR3 	= reg_t<rw_t, 0X48001408, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR2 	= reg_t<rw_t, 0X48001408, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR1 	= reg_t<rw_t, 0X48001408, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR0 	= reg_t<rw_t, 0X48001408, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port pull-up/pull-down register
		*/
		namespace PUPDR{
			using PUPDR15 	= reg_t<rw_t, 0X4800140C, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR14 	= reg_t<rw_t, 0X4800140C, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR13 	= reg_t<rw_t, 0X4800140C, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR12 	= reg_t<rw_t, 0X4800140C, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR11 	= reg_t<rw_t, 0X4800140C, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR10 	= reg_t<rw_t, 0X4800140C, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR9 	= reg_t<rw_t, 0X4800140C, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR8 	= reg_t<rw_t, 0X4800140C, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR7 	= reg_t<rw_t, 0X4800140C, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR6 	= reg_t<rw_t, 0X4800140C, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR5 	= reg_t<rw_t, 0X4800140C, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR4 	= reg_t<rw_t, 0X4800140C, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR3 	= reg_t<rw_t, 0X4800140C, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR2 	= reg_t<rw_t, 0X4800140C, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR1 	= reg_t<rw_t, 0X4800140C, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR0 	= reg_t<rw_t, 0X4800140C, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port input data register
		*/
		namespace IDR{
			using IDR15 	= reg_t<ro_t, 0X48001410, 15, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR14 	= reg_t<ro_t, 0X48001410, 14, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR13 	= reg_t<ro_t, 0X48001410, 13, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR12 	= reg_t<ro_t, 0X48001410, 12, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR11 	= reg_t<ro_t, 0X48001410, 11, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR10 	= reg_t<ro_t, 0X48001410, 10, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR9 	= reg_t<ro_t, 0X48001410, 9, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR8 	= reg_t<ro_t, 0X48001410, 8, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR7 	= reg_t<ro_t, 0X48001410, 7, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR6 	= reg_t<ro_t, 0X48001410, 6, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR5 	= reg_t<ro_t, 0X48001410, 5, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR4 	= reg_t<ro_t, 0X48001410, 4, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR3 	= reg_t<ro_t, 0X48001410, 3, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR2 	= reg_t<ro_t, 0X48001410, 2, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR1 	= reg_t<ro_t, 0X48001410, 1, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR0 	= reg_t<ro_t, 0X48001410, 0, 1>;	 /*!<Port input data (y = 0..15) */
		}
		/*!
		GPIO port output data register
		*/
		namespace ODR{
			using ODR15 	= reg_t<rw_t, 0X48001414, 15, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR14 	= reg_t<rw_t, 0X48001414, 14, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR13 	= reg_t<rw_t, 0X48001414, 13, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR12 	= reg_t<rw_t, 0X48001414, 12, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR11 	= reg_t<rw_t, 0X48001414, 11, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR10 	= reg_t<rw_t, 0X48001414, 10, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR9 	= reg_t<rw_t, 0X48001414, 9, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR8 	= reg_t<rw_t, 0X48001414, 8, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR7 	= reg_t<rw_t, 0X48001414, 7, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR6 	= reg_t<rw_t, 0X48001414, 6, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR5 	= reg_t<rw_t, 0X48001414, 5, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR4 	= reg_t<rw_t, 0X48001414, 4, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR3 	= reg_t<rw_t, 0X48001414, 3, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR2 	= reg_t<rw_t, 0X48001414, 2, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR1 	= reg_t<rw_t, 0X48001414, 1, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR0 	= reg_t<rw_t, 0X48001414, 0, 1>;	 /*!<Port output data (y = 0..15) */
		}
		/*!
		GPIO port bit set/reset register
		*/
		namespace BSRR{
			using BR15 	= reg_t<wo_t, 0X48001418, 31, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR14 	= reg_t<wo_t, 0X48001418, 30, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR13 	= reg_t<wo_t, 0X48001418, 29, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR12 	= reg_t<wo_t, 0X48001418, 28, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR11 	= reg_t<wo_t, 0X48001418, 27, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR10 	= reg_t<wo_t, 0X48001418, 26, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR9 	= reg_t<wo_t, 0X48001418, 25, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR8 	= reg_t<wo_t, 0X48001418, 24, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR7 	= reg_t<wo_t, 0X48001418, 23, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR6 	= reg_t<wo_t, 0X48001418, 22, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR5 	= reg_t<wo_t, 0X48001418, 21, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR4 	= reg_t<wo_t, 0X48001418, 20, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR3 	= reg_t<wo_t, 0X48001418, 19, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR2 	= reg_t<wo_t, 0X48001418, 18, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR1 	= reg_t<wo_t, 0X48001418, 17, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR0 	= reg_t<wo_t, 0X48001418, 16, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS15 	= reg_t<wo_t, 0X48001418, 15, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS14 	= reg_t<wo_t, 0X48001418, 14, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS13 	= reg_t<wo_t, 0X48001418, 13, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS12 	= reg_t<wo_t, 0X48001418, 12, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS11 	= reg_t<wo_t, 0X48001418, 11, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS10 	= reg_t<wo_t, 0X48001418, 10, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS9 	= reg_t<wo_t, 0X48001418, 9, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS8 	= reg_t<wo_t, 0X48001418, 8, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS7 	= reg_t<wo_t, 0X48001418, 7, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS6 	= reg_t<wo_t, 0X48001418, 6, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS5 	= reg_t<wo_t, 0X48001418, 5, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS4 	= reg_t<wo_t, 0X48001418, 4, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS3 	= reg_t<wo_t, 0X48001418, 3, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS2 	= reg_t<wo_t, 0X48001418, 2, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS1 	= reg_t<wo_t, 0X48001418, 1, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS0 	= reg_t<wo_t, 0X48001418, 0, 1>;	 /*!<Port x set bit y (y= 0..15) */
		}
		/*!
		GPIO port configuration lock register
		*/
		namespace LCKR{
			using LCKK 	= reg_t<rw_t, 0X4800141C, 16, 1>;	 /*!<Port x lock bit y */
			using LCK15 	= reg_t<rw_t, 0X4800141C, 15, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK14 	= reg_t<rw_t, 0X4800141C, 14, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK13 	= reg_t<rw_t, 0X4800141C, 13, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK12 	= reg_t<rw_t, 0X4800141C, 12, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK11 	= reg_t<rw_t, 0X4800141C, 11, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK10 	= reg_t<rw_t, 0X4800141C, 10, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK9 	= reg_t<rw_t, 0X4800141C, 9, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK8 	= reg_t<rw_t, 0X4800141C, 8, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK7 	= reg_t<rw_t, 0X4800141C, 7, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK6 	= reg_t<rw_t, 0X4800141C, 6, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK5 	= reg_t<rw_t, 0X4800141C, 5, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK4 	= reg_t<rw_t, 0X4800141C, 4, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK3 	= reg_t<rw_t, 0X4800141C, 3, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK2 	= reg_t<rw_t, 0X4800141C, 2, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK1 	= reg_t<rw_t, 0X4800141C, 1, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK0 	= reg_t<rw_t, 0X4800141C, 0, 1>;	 /*!<Port x lock bit y (y= 0..15) */
		}
		/*!
		GPIO alternate function low register
		*/
		namespace AFRL{
			using AFRL7 	= reg_t<rw_t, 0X48001420, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL6 	= reg_t<rw_t, 0X48001420, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL5 	= reg_t<rw_t, 0X48001420, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL4 	= reg_t<rw_t, 0X48001420, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL3 	= reg_t<rw_t, 0X48001420, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL2 	= reg_t<rw_t, 0X48001420, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL1 	= reg_t<rw_t, 0X48001420, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL0 	= reg_t<rw_t, 0X48001420, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
		}
		/*!
		GPIO alternate function high register
		*/
		namespace AFRH{
			using AFRH15 	= reg_t<rw_t, 0X48001424, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH14 	= reg_t<rw_t, 0X48001424, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH13 	= reg_t<rw_t, 0X48001424, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH12 	= reg_t<rw_t, 0X48001424, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH11 	= reg_t<rw_t, 0X48001424, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH10 	= reg_t<rw_t, 0X48001424, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH9 	= reg_t<rw_t, 0X48001424, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH8 	= reg_t<rw_t, 0X48001424, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
		}
		/*!
		Port bit reset register
		*/
		namespace BRR{
			using BR0 	= reg_t<wo_t, 0X48001428, 0, 1>;	 /*!<Port x Reset bit y */
			using BR1 	= reg_t<wo_t, 0X48001428, 1, 1>;	 /*!<Port x Reset bit y */
			using BR2 	= reg_t<wo_t, 0X48001428, 2, 1>;	 /*!<Port x Reset bit y */
			using BR3 	= reg_t<wo_t, 0X48001428, 3, 1>;	 /*!<Port x Reset bit y */
			using BR4 	= reg_t<wo_t, 0X48001428, 4, 1>;	 /*!<Port x Reset bit y */
			using BR5 	= reg_t<wo_t, 0X48001428, 5, 1>;	 /*!<Port x Reset bit y */
			using BR6 	= reg_t<wo_t, 0X48001428, 6, 1>;	 /*!<Port x Reset bit y */
			using BR7 	= reg_t<wo_t, 0X48001428, 7, 1>;	 /*!<Port x Reset bit y */
			using BR8 	= reg_t<wo_t, 0X48001428, 8, 1>;	 /*!<Port x Reset bit y */
			using BR9 	= reg_t<wo_t, 0X48001428, 9, 1>;	 /*!<Port x Reset bit y */
			using BR10 	= reg_t<wo_t, 0X48001428, 10, 1>;	 /*!<Port x Reset bit y */
			using BR11 	= reg_t<wo_t, 0X48001428, 11, 1>;	 /*!<Port x Reset bit y */
			using BR12 	= reg_t<wo_t, 0X48001428, 12, 1>;	 /*!<Port x Reset bit y */
			using BR13 	= reg_t<wo_t, 0X48001428, 13, 1>;	 /*!<Port x Reset bit y */
			using BR14 	= reg_t<wo_t, 0X48001428, 14, 1>;	 /*!<Port x Reset bit y */
			using BR15 	= reg_t<wo_t, 0X48001428, 15, 1>;	 /*!<Port x Reset bit y */
		}
	}
	/*!
	General-purpose I/Os
	BasedOn:GPIOF
	*/
	namespace GPIOD{
		/*!
		GPIO port mode register
		*/
		namespace MODER{
			using MODER15 	= reg_t<rw_t, 0X48000C00, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER14 	= reg_t<rw_t, 0X48000C00, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER13 	= reg_t<rw_t, 0X48000C00, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER12 	= reg_t<rw_t, 0X48000C00, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER11 	= reg_t<rw_t, 0X48000C00, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER10 	= reg_t<rw_t, 0X48000C00, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER9 	= reg_t<rw_t, 0X48000C00, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER8 	= reg_t<rw_t, 0X48000C00, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER7 	= reg_t<rw_t, 0X48000C00, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER6 	= reg_t<rw_t, 0X48000C00, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER5 	= reg_t<rw_t, 0X48000C00, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER4 	= reg_t<rw_t, 0X48000C00, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER3 	= reg_t<rw_t, 0X48000C00, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER2 	= reg_t<rw_t, 0X48000C00, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER1 	= reg_t<rw_t, 0X48000C00, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER0 	= reg_t<rw_t, 0X48000C00, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port output type register
		*/
		namespace OTYPER{
			using OT15 	= reg_t<rw_t, 0X48000C04, 15, 1>;	 /*!<Port x configuration bit 15 */
			using OT14 	= reg_t<rw_t, 0X48000C04, 14, 1>;	 /*!<Port x configuration bit 14 */
			using OT13 	= reg_t<rw_t, 0X48000C04, 13, 1>;	 /*!<Port x configuration bit 13 */
			using OT12 	= reg_t<rw_t, 0X48000C04, 12, 1>;	 /*!<Port x configuration bit 12 */
			using OT11 	= reg_t<rw_t, 0X48000C04, 11, 1>;	 /*!<Port x configuration bit 11 */
			using OT10 	= reg_t<rw_t, 0X48000C04, 10, 1>;	 /*!<Port x configuration bit 10 */
			using OT9 	= reg_t<rw_t, 0X48000C04, 9, 1>;	 /*!<Port x configuration bit 9 */
			using OT8 	= reg_t<rw_t, 0X48000C04, 8, 1>;	 /*!<Port x configuration bit 8 */
			using OT7 	= reg_t<rw_t, 0X48000C04, 7, 1>;	 /*!<Port x configuration bit 7 */
			using OT6 	= reg_t<rw_t, 0X48000C04, 6, 1>;	 /*!<Port x configuration bit 6 */
			using OT5 	= reg_t<rw_t, 0X48000C04, 5, 1>;	 /*!<Port x configuration bit 5 */
			using OT4 	= reg_t<rw_t, 0X48000C04, 4, 1>;	 /*!<Port x configuration bit 4 */
			using OT3 	= reg_t<rw_t, 0X48000C04, 3, 1>;	 /*!<Port x configuration bit 3 */
			using OT2 	= reg_t<rw_t, 0X48000C04, 2, 1>;	 /*!<Port x configuration bit 2 */
			using OT1 	= reg_t<rw_t, 0X48000C04, 1, 1>;	 /*!<Port x configuration bit 1 */
			using OT0 	= reg_t<rw_t, 0X48000C04, 0, 1>;	 /*!<Port x configuration bit 0 */
		}
		/*!
		GPIO port output speed register
		*/
		namespace OSPEEDR{
			using OSPEEDR15 	= reg_t<rw_t, 0X48000C08, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR14 	= reg_t<rw_t, 0X48000C08, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR13 	= reg_t<rw_t, 0X48000C08, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR12 	= reg_t<rw_t, 0X48000C08, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR11 	= reg_t<rw_t, 0X48000C08, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR10 	= reg_t<rw_t, 0X48000C08, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR9 	= reg_t<rw_t, 0X48000C08, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR8 	= reg_t<rw_t, 0X48000C08, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR7 	= reg_t<rw_t, 0X48000C08, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR6 	= reg_t<rw_t, 0X48000C08, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR5 	= reg_t<rw_t, 0X48000C08, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR4 	= reg_t<rw_t, 0X48000C08, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR3 	= reg_t<rw_t, 0X48000C08, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR2 	= reg_t<rw_t, 0X48000C08, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR1 	= reg_t<rw_t, 0X48000C08, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR0 	= reg_t<rw_t, 0X48000C08, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port pull-up/pull-down register
		*/
		namespace PUPDR{
			using PUPDR15 	= reg_t<rw_t, 0X48000C0C, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR14 	= reg_t<rw_t, 0X48000C0C, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR13 	= reg_t<rw_t, 0X48000C0C, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR12 	= reg_t<rw_t, 0X48000C0C, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR11 	= reg_t<rw_t, 0X48000C0C, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR10 	= reg_t<rw_t, 0X48000C0C, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR9 	= reg_t<rw_t, 0X48000C0C, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR8 	= reg_t<rw_t, 0X48000C0C, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR7 	= reg_t<rw_t, 0X48000C0C, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR6 	= reg_t<rw_t, 0X48000C0C, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR5 	= reg_t<rw_t, 0X48000C0C, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR4 	= reg_t<rw_t, 0X48000C0C, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR3 	= reg_t<rw_t, 0X48000C0C, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR2 	= reg_t<rw_t, 0X48000C0C, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR1 	= reg_t<rw_t, 0X48000C0C, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR0 	= reg_t<rw_t, 0X48000C0C, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port input data register
		*/
		namespace IDR{
			using IDR15 	= reg_t<ro_t, 0X48000C10, 15, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR14 	= reg_t<ro_t, 0X48000C10, 14, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR13 	= reg_t<ro_t, 0X48000C10, 13, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR12 	= reg_t<ro_t, 0X48000C10, 12, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR11 	= reg_t<ro_t, 0X48000C10, 11, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR10 	= reg_t<ro_t, 0X48000C10, 10, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR9 	= reg_t<ro_t, 0X48000C10, 9, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR8 	= reg_t<ro_t, 0X48000C10, 8, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR7 	= reg_t<ro_t, 0X48000C10, 7, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR6 	= reg_t<ro_t, 0X48000C10, 6, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR5 	= reg_t<ro_t, 0X48000C10, 5, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR4 	= reg_t<ro_t, 0X48000C10, 4, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR3 	= reg_t<ro_t, 0X48000C10, 3, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR2 	= reg_t<ro_t, 0X48000C10, 2, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR1 	= reg_t<ro_t, 0X48000C10, 1, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR0 	= reg_t<ro_t, 0X48000C10, 0, 1>;	 /*!<Port input data (y = 0..15) */
		}
		/*!
		GPIO port output data register
		*/
		namespace ODR{
			using ODR15 	= reg_t<rw_t, 0X48000C14, 15, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR14 	= reg_t<rw_t, 0X48000C14, 14, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR13 	= reg_t<rw_t, 0X48000C14, 13, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR12 	= reg_t<rw_t, 0X48000C14, 12, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR11 	= reg_t<rw_t, 0X48000C14, 11, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR10 	= reg_t<rw_t, 0X48000C14, 10, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR9 	= reg_t<rw_t, 0X48000C14, 9, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR8 	= reg_t<rw_t, 0X48000C14, 8, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR7 	= reg_t<rw_t, 0X48000C14, 7, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR6 	= reg_t<rw_t, 0X48000C14, 6, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR5 	= reg_t<rw_t, 0X48000C14, 5, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR4 	= reg_t<rw_t, 0X48000C14, 4, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR3 	= reg_t<rw_t, 0X48000C14, 3, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR2 	= reg_t<rw_t, 0X48000C14, 2, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR1 	= reg_t<rw_t, 0X48000C14, 1, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR0 	= reg_t<rw_t, 0X48000C14, 0, 1>;	 /*!<Port output data (y = 0..15) */
		}
		/*!
		GPIO port bit set/reset register
		*/
		namespace BSRR{
			using BR15 	= reg_t<wo_t, 0X48000C18, 31, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR14 	= reg_t<wo_t, 0X48000C18, 30, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR13 	= reg_t<wo_t, 0X48000C18, 29, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR12 	= reg_t<wo_t, 0X48000C18, 28, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR11 	= reg_t<wo_t, 0X48000C18, 27, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR10 	= reg_t<wo_t, 0X48000C18, 26, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR9 	= reg_t<wo_t, 0X48000C18, 25, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR8 	= reg_t<wo_t, 0X48000C18, 24, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR7 	= reg_t<wo_t, 0X48000C18, 23, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR6 	= reg_t<wo_t, 0X48000C18, 22, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR5 	= reg_t<wo_t, 0X48000C18, 21, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR4 	= reg_t<wo_t, 0X48000C18, 20, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR3 	= reg_t<wo_t, 0X48000C18, 19, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR2 	= reg_t<wo_t, 0X48000C18, 18, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR1 	= reg_t<wo_t, 0X48000C18, 17, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR0 	= reg_t<wo_t, 0X48000C18, 16, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS15 	= reg_t<wo_t, 0X48000C18, 15, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS14 	= reg_t<wo_t, 0X48000C18, 14, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS13 	= reg_t<wo_t, 0X48000C18, 13, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS12 	= reg_t<wo_t, 0X48000C18, 12, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS11 	= reg_t<wo_t, 0X48000C18, 11, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS10 	= reg_t<wo_t, 0X48000C18, 10, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS9 	= reg_t<wo_t, 0X48000C18, 9, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS8 	= reg_t<wo_t, 0X48000C18, 8, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS7 	= reg_t<wo_t, 0X48000C18, 7, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS6 	= reg_t<wo_t, 0X48000C18, 6, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS5 	= reg_t<wo_t, 0X48000C18, 5, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS4 	= reg_t<wo_t, 0X48000C18, 4, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS3 	= reg_t<wo_t, 0X48000C18, 3, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS2 	= reg_t<wo_t, 0X48000C18, 2, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS1 	= reg_t<wo_t, 0X48000C18, 1, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS0 	= reg_t<wo_t, 0X48000C18, 0, 1>;	 /*!<Port x set bit y (y= 0..15) */
		}
		/*!
		GPIO port configuration lock register
		*/
		namespace LCKR{
			using LCKK 	= reg_t<rw_t, 0X48000C1C, 16, 1>;	 /*!<Port x lock bit y */
			using LCK15 	= reg_t<rw_t, 0X48000C1C, 15, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK14 	= reg_t<rw_t, 0X48000C1C, 14, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK13 	= reg_t<rw_t, 0X48000C1C, 13, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK12 	= reg_t<rw_t, 0X48000C1C, 12, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK11 	= reg_t<rw_t, 0X48000C1C, 11, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK10 	= reg_t<rw_t, 0X48000C1C, 10, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK9 	= reg_t<rw_t, 0X48000C1C, 9, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK8 	= reg_t<rw_t, 0X48000C1C, 8, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK7 	= reg_t<rw_t, 0X48000C1C, 7, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK6 	= reg_t<rw_t, 0X48000C1C, 6, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK5 	= reg_t<rw_t, 0X48000C1C, 5, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK4 	= reg_t<rw_t, 0X48000C1C, 4, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK3 	= reg_t<rw_t, 0X48000C1C, 3, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK2 	= reg_t<rw_t, 0X48000C1C, 2, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK1 	= reg_t<rw_t, 0X48000C1C, 1, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK0 	= reg_t<rw_t, 0X48000C1C, 0, 1>;	 /*!<Port x lock bit y (y= 0..15) */
		}
		/*!
		GPIO alternate function low register
		*/
		namespace AFRL{
			using AFRL7 	= reg_t<rw_t, 0X48000C20, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL6 	= reg_t<rw_t, 0X48000C20, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL5 	= reg_t<rw_t, 0X48000C20, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL4 	= reg_t<rw_t, 0X48000C20, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL3 	= reg_t<rw_t, 0X48000C20, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL2 	= reg_t<rw_t, 0X48000C20, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL1 	= reg_t<rw_t, 0X48000C20, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL0 	= reg_t<rw_t, 0X48000C20, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
		}
		/*!
		GPIO alternate function high register
		*/
		namespace AFRH{
			using AFRH15 	= reg_t<rw_t, 0X48000C24, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH14 	= reg_t<rw_t, 0X48000C24, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH13 	= reg_t<rw_t, 0X48000C24, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH12 	= reg_t<rw_t, 0X48000C24, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH11 	= reg_t<rw_t, 0X48000C24, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH10 	= reg_t<rw_t, 0X48000C24, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH9 	= reg_t<rw_t, 0X48000C24, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH8 	= reg_t<rw_t, 0X48000C24, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
		}
		/*!
		Port bit reset register
		*/
		namespace BRR{
			using BR0 	= reg_t<wo_t, 0X48000C28, 0, 1>;	 /*!<Port x Reset bit y */
			using BR1 	= reg_t<wo_t, 0X48000C28, 1, 1>;	 /*!<Port x Reset bit y */
			using BR2 	= reg_t<wo_t, 0X48000C28, 2, 1>;	 /*!<Port x Reset bit y */
			using BR3 	= reg_t<wo_t, 0X48000C28, 3, 1>;	 /*!<Port x Reset bit y */
			using BR4 	= reg_t<wo_t, 0X48000C28, 4, 1>;	 /*!<Port x Reset bit y */
			using BR5 	= reg_t<wo_t, 0X48000C28, 5, 1>;	 /*!<Port x Reset bit y */
			using BR6 	= reg_t<wo_t, 0X48000C28, 6, 1>;	 /*!<Port x Reset bit y */
			using BR7 	= reg_t<wo_t, 0X48000C28, 7, 1>;	 /*!<Port x Reset bit y */
			using BR8 	= reg_t<wo_t, 0X48000C28, 8, 1>;	 /*!<Port x Reset bit y */
			using BR9 	= reg_t<wo_t, 0X48000C28, 9, 1>;	 /*!<Port x Reset bit y */
			using BR10 	= reg_t<wo_t, 0X48000C28, 10, 1>;	 /*!<Port x Reset bit y */
			using BR11 	= reg_t<wo_t, 0X48000C28, 11, 1>;	 /*!<Port x Reset bit y */
			using BR12 	= reg_t<wo_t, 0X48000C28, 12, 1>;	 /*!<Port x Reset bit y */
			using BR13 	= reg_t<wo_t, 0X48000C28, 13, 1>;	 /*!<Port x Reset bit y */
			using BR14 	= reg_t<wo_t, 0X48000C28, 14, 1>;	 /*!<Port x Reset bit y */
			using BR15 	= reg_t<wo_t, 0X48000C28, 15, 1>;	 /*!<Port x Reset bit y */
		}
	}
	/*!
	General-purpose I/Os
	BasedOn:GPIOF
	*/
	namespace GPIOC{
		/*!
		GPIO port mode register
		*/
		namespace MODER{
			using MODER15 	= reg_t<rw_t, 0X48000800, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER14 	= reg_t<rw_t, 0X48000800, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER13 	= reg_t<rw_t, 0X48000800, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER12 	= reg_t<rw_t, 0X48000800, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER11 	= reg_t<rw_t, 0X48000800, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER10 	= reg_t<rw_t, 0X48000800, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER9 	= reg_t<rw_t, 0X48000800, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER8 	= reg_t<rw_t, 0X48000800, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER7 	= reg_t<rw_t, 0X48000800, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER6 	= reg_t<rw_t, 0X48000800, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER5 	= reg_t<rw_t, 0X48000800, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER4 	= reg_t<rw_t, 0X48000800, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER3 	= reg_t<rw_t, 0X48000800, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER2 	= reg_t<rw_t, 0X48000800, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER1 	= reg_t<rw_t, 0X48000800, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER0 	= reg_t<rw_t, 0X48000800, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port output type register
		*/
		namespace OTYPER{
			using OT15 	= reg_t<rw_t, 0X48000804, 15, 1>;	 /*!<Port x configuration bit 15 */
			using OT14 	= reg_t<rw_t, 0X48000804, 14, 1>;	 /*!<Port x configuration bit 14 */
			using OT13 	= reg_t<rw_t, 0X48000804, 13, 1>;	 /*!<Port x configuration bit 13 */
			using OT12 	= reg_t<rw_t, 0X48000804, 12, 1>;	 /*!<Port x configuration bit 12 */
			using OT11 	= reg_t<rw_t, 0X48000804, 11, 1>;	 /*!<Port x configuration bit 11 */
			using OT10 	= reg_t<rw_t, 0X48000804, 10, 1>;	 /*!<Port x configuration bit 10 */
			using OT9 	= reg_t<rw_t, 0X48000804, 9, 1>;	 /*!<Port x configuration bit 9 */
			using OT8 	= reg_t<rw_t, 0X48000804, 8, 1>;	 /*!<Port x configuration bit 8 */
			using OT7 	= reg_t<rw_t, 0X48000804, 7, 1>;	 /*!<Port x configuration bit 7 */
			using OT6 	= reg_t<rw_t, 0X48000804, 6, 1>;	 /*!<Port x configuration bit 6 */
			using OT5 	= reg_t<rw_t, 0X48000804, 5, 1>;	 /*!<Port x configuration bit 5 */
			using OT4 	= reg_t<rw_t, 0X48000804, 4, 1>;	 /*!<Port x configuration bit 4 */
			using OT3 	= reg_t<rw_t, 0X48000804, 3, 1>;	 /*!<Port x configuration bit 3 */
			using OT2 	= reg_t<rw_t, 0X48000804, 2, 1>;	 /*!<Port x configuration bit 2 */
			using OT1 	= reg_t<rw_t, 0X48000804, 1, 1>;	 /*!<Port x configuration bit 1 */
			using OT0 	= reg_t<rw_t, 0X48000804, 0, 1>;	 /*!<Port x configuration bit 0 */
		}
		/*!
		GPIO port output speed register
		*/
		namespace OSPEEDR{
			using OSPEEDR15 	= reg_t<rw_t, 0X48000808, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR14 	= reg_t<rw_t, 0X48000808, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR13 	= reg_t<rw_t, 0X48000808, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR12 	= reg_t<rw_t, 0X48000808, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR11 	= reg_t<rw_t, 0X48000808, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR10 	= reg_t<rw_t, 0X48000808, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR9 	= reg_t<rw_t, 0X48000808, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR8 	= reg_t<rw_t, 0X48000808, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR7 	= reg_t<rw_t, 0X48000808, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR6 	= reg_t<rw_t, 0X48000808, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR5 	= reg_t<rw_t, 0X48000808, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR4 	= reg_t<rw_t, 0X48000808, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR3 	= reg_t<rw_t, 0X48000808, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR2 	= reg_t<rw_t, 0X48000808, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR1 	= reg_t<rw_t, 0X48000808, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR0 	= reg_t<rw_t, 0X48000808, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port pull-up/pull-down register
		*/
		namespace PUPDR{
			using PUPDR15 	= reg_t<rw_t, 0X4800080C, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR14 	= reg_t<rw_t, 0X4800080C, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR13 	= reg_t<rw_t, 0X4800080C, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR12 	= reg_t<rw_t, 0X4800080C, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR11 	= reg_t<rw_t, 0X4800080C, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR10 	= reg_t<rw_t, 0X4800080C, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR9 	= reg_t<rw_t, 0X4800080C, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR8 	= reg_t<rw_t, 0X4800080C, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR7 	= reg_t<rw_t, 0X4800080C, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR6 	= reg_t<rw_t, 0X4800080C, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR5 	= reg_t<rw_t, 0X4800080C, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR4 	= reg_t<rw_t, 0X4800080C, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR3 	= reg_t<rw_t, 0X4800080C, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR2 	= reg_t<rw_t, 0X4800080C, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR1 	= reg_t<rw_t, 0X4800080C, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR0 	= reg_t<rw_t, 0X4800080C, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port input data register
		*/
		namespace IDR{
			using IDR15 	= reg_t<ro_t, 0X48000810, 15, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR14 	= reg_t<ro_t, 0X48000810, 14, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR13 	= reg_t<ro_t, 0X48000810, 13, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR12 	= reg_t<ro_t, 0X48000810, 12, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR11 	= reg_t<ro_t, 0X48000810, 11, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR10 	= reg_t<ro_t, 0X48000810, 10, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR9 	= reg_t<ro_t, 0X48000810, 9, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR8 	= reg_t<ro_t, 0X48000810, 8, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR7 	= reg_t<ro_t, 0X48000810, 7, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR6 	= reg_t<ro_t, 0X48000810, 6, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR5 	= reg_t<ro_t, 0X48000810, 5, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR4 	= reg_t<ro_t, 0X48000810, 4, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR3 	= reg_t<ro_t, 0X48000810, 3, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR2 	= reg_t<ro_t, 0X48000810, 2, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR1 	= reg_t<ro_t, 0X48000810, 1, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR0 	= reg_t<ro_t, 0X48000810, 0, 1>;	 /*!<Port input data (y = 0..15) */
		}
		/*!
		GPIO port output data register
		*/
		namespace ODR{
			using ODR15 	= reg_t<rw_t, 0X48000814, 15, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR14 	= reg_t<rw_t, 0X48000814, 14, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR13 	= reg_t<rw_t, 0X48000814, 13, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR12 	= reg_t<rw_t, 0X48000814, 12, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR11 	= reg_t<rw_t, 0X48000814, 11, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR10 	= reg_t<rw_t, 0X48000814, 10, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR9 	= reg_t<rw_t, 0X48000814, 9, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR8 	= reg_t<rw_t, 0X48000814, 8, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR7 	= reg_t<rw_t, 0X48000814, 7, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR6 	= reg_t<rw_t, 0X48000814, 6, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR5 	= reg_t<rw_t, 0X48000814, 5, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR4 	= reg_t<rw_t, 0X48000814, 4, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR3 	= reg_t<rw_t, 0X48000814, 3, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR2 	= reg_t<rw_t, 0X48000814, 2, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR1 	= reg_t<rw_t, 0X48000814, 1, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR0 	= reg_t<rw_t, 0X48000814, 0, 1>;	 /*!<Port output data (y = 0..15) */
		}
		/*!
		GPIO port bit set/reset register
		*/
		namespace BSRR{
			using BR15 	= reg_t<wo_t, 0X48000818, 31, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR14 	= reg_t<wo_t, 0X48000818, 30, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR13 	= reg_t<wo_t, 0X48000818, 29, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR12 	= reg_t<wo_t, 0X48000818, 28, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR11 	= reg_t<wo_t, 0X48000818, 27, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR10 	= reg_t<wo_t, 0X48000818, 26, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR9 	= reg_t<wo_t, 0X48000818, 25, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR8 	= reg_t<wo_t, 0X48000818, 24, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR7 	= reg_t<wo_t, 0X48000818, 23, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR6 	= reg_t<wo_t, 0X48000818, 22, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR5 	= reg_t<wo_t, 0X48000818, 21, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR4 	= reg_t<wo_t, 0X48000818, 20, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR3 	= reg_t<wo_t, 0X48000818, 19, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR2 	= reg_t<wo_t, 0X48000818, 18, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR1 	= reg_t<wo_t, 0X48000818, 17, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR0 	= reg_t<wo_t, 0X48000818, 16, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS15 	= reg_t<wo_t, 0X48000818, 15, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS14 	= reg_t<wo_t, 0X48000818, 14, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS13 	= reg_t<wo_t, 0X48000818, 13, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS12 	= reg_t<wo_t, 0X48000818, 12, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS11 	= reg_t<wo_t, 0X48000818, 11, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS10 	= reg_t<wo_t, 0X48000818, 10, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS9 	= reg_t<wo_t, 0X48000818, 9, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS8 	= reg_t<wo_t, 0X48000818, 8, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS7 	= reg_t<wo_t, 0X48000818, 7, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS6 	= reg_t<wo_t, 0X48000818, 6, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS5 	= reg_t<wo_t, 0X48000818, 5, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS4 	= reg_t<wo_t, 0X48000818, 4, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS3 	= reg_t<wo_t, 0X48000818, 3, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS2 	= reg_t<wo_t, 0X48000818, 2, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS1 	= reg_t<wo_t, 0X48000818, 1, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS0 	= reg_t<wo_t, 0X48000818, 0, 1>;	 /*!<Port x set bit y (y= 0..15) */
		}
		/*!
		GPIO port configuration lock register
		*/
		namespace LCKR{
			using LCKK 	= reg_t<rw_t, 0X4800081C, 16, 1>;	 /*!<Port x lock bit y */
			using LCK15 	= reg_t<rw_t, 0X4800081C, 15, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK14 	= reg_t<rw_t, 0X4800081C, 14, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK13 	= reg_t<rw_t, 0X4800081C, 13, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK12 	= reg_t<rw_t, 0X4800081C, 12, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK11 	= reg_t<rw_t, 0X4800081C, 11, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK10 	= reg_t<rw_t, 0X4800081C, 10, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK9 	= reg_t<rw_t, 0X4800081C, 9, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK8 	= reg_t<rw_t, 0X4800081C, 8, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK7 	= reg_t<rw_t, 0X4800081C, 7, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK6 	= reg_t<rw_t, 0X4800081C, 6, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK5 	= reg_t<rw_t, 0X4800081C, 5, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK4 	= reg_t<rw_t, 0X4800081C, 4, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK3 	= reg_t<rw_t, 0X4800081C, 3, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK2 	= reg_t<rw_t, 0X4800081C, 2, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK1 	= reg_t<rw_t, 0X4800081C, 1, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK0 	= reg_t<rw_t, 0X4800081C, 0, 1>;	 /*!<Port x lock bit y (y= 0..15) */
		}
		/*!
		GPIO alternate function low register
		*/
		namespace AFRL{
			using AFRL7 	= reg_t<rw_t, 0X48000820, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL6 	= reg_t<rw_t, 0X48000820, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL5 	= reg_t<rw_t, 0X48000820, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL4 	= reg_t<rw_t, 0X48000820, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL3 	= reg_t<rw_t, 0X48000820, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL2 	= reg_t<rw_t, 0X48000820, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL1 	= reg_t<rw_t, 0X48000820, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL0 	= reg_t<rw_t, 0X48000820, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
		}
		/*!
		GPIO alternate function high register
		*/
		namespace AFRH{
			using AFRH15 	= reg_t<rw_t, 0X48000824, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH14 	= reg_t<rw_t, 0X48000824, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH13 	= reg_t<rw_t, 0X48000824, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH12 	= reg_t<rw_t, 0X48000824, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH11 	= reg_t<rw_t, 0X48000824, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH10 	= reg_t<rw_t, 0X48000824, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH9 	= reg_t<rw_t, 0X48000824, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH8 	= reg_t<rw_t, 0X48000824, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
		}
		/*!
		Port bit reset register
		*/
		namespace BRR{
			using BR0 	= reg_t<wo_t, 0X48000828, 0, 1>;	 /*!<Port x Reset bit y */
			using BR1 	= reg_t<wo_t, 0X48000828, 1, 1>;	 /*!<Port x Reset bit y */
			using BR2 	= reg_t<wo_t, 0X48000828, 2, 1>;	 /*!<Port x Reset bit y */
			using BR3 	= reg_t<wo_t, 0X48000828, 3, 1>;	 /*!<Port x Reset bit y */
			using BR4 	= reg_t<wo_t, 0X48000828, 4, 1>;	 /*!<Port x Reset bit y */
			using BR5 	= reg_t<wo_t, 0X48000828, 5, 1>;	 /*!<Port x Reset bit y */
			using BR6 	= reg_t<wo_t, 0X48000828, 6, 1>;	 /*!<Port x Reset bit y */
			using BR7 	= reg_t<wo_t, 0X48000828, 7, 1>;	 /*!<Port x Reset bit y */
			using BR8 	= reg_t<wo_t, 0X48000828, 8, 1>;	 /*!<Port x Reset bit y */
			using BR9 	= reg_t<wo_t, 0X48000828, 9, 1>;	 /*!<Port x Reset bit y */
			using BR10 	= reg_t<wo_t, 0X48000828, 10, 1>;	 /*!<Port x Reset bit y */
			using BR11 	= reg_t<wo_t, 0X48000828, 11, 1>;	 /*!<Port x Reset bit y */
			using BR12 	= reg_t<wo_t, 0X48000828, 12, 1>;	 /*!<Port x Reset bit y */
			using BR13 	= reg_t<wo_t, 0X48000828, 13, 1>;	 /*!<Port x Reset bit y */
			using BR14 	= reg_t<wo_t, 0X48000828, 14, 1>;	 /*!<Port x Reset bit y */
			using BR15 	= reg_t<wo_t, 0X48000828, 15, 1>;	 /*!<Port x Reset bit y */
		}
	}
	/*!
	General-purpose I/Os
	BasedOn:GPIOF
	*/
	namespace GPIOB{
		/*!
		GPIO port mode register
		*/
		namespace MODER{
			using MODER15 	= reg_t<rw_t, 0X48000400, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER14 	= reg_t<rw_t, 0X48000400, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER13 	= reg_t<rw_t, 0X48000400, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER12 	= reg_t<rw_t, 0X48000400, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER11 	= reg_t<rw_t, 0X48000400, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER10 	= reg_t<rw_t, 0X48000400, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER9 	= reg_t<rw_t, 0X48000400, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER8 	= reg_t<rw_t, 0X48000400, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER7 	= reg_t<rw_t, 0X48000400, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER6 	= reg_t<rw_t, 0X48000400, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER5 	= reg_t<rw_t, 0X48000400, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER4 	= reg_t<rw_t, 0X48000400, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER3 	= reg_t<rw_t, 0X48000400, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER2 	= reg_t<rw_t, 0X48000400, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER1 	= reg_t<rw_t, 0X48000400, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER0 	= reg_t<rw_t, 0X48000400, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port output type register
		*/
		namespace OTYPER{
			using OT15 	= reg_t<rw_t, 0X48000404, 15, 1>;	 /*!<Port x configuration bit 15 */
			using OT14 	= reg_t<rw_t, 0X48000404, 14, 1>;	 /*!<Port x configuration bit 14 */
			using OT13 	= reg_t<rw_t, 0X48000404, 13, 1>;	 /*!<Port x configuration bit 13 */
			using OT12 	= reg_t<rw_t, 0X48000404, 12, 1>;	 /*!<Port x configuration bit 12 */
			using OT11 	= reg_t<rw_t, 0X48000404, 11, 1>;	 /*!<Port x configuration bit 11 */
			using OT10 	= reg_t<rw_t, 0X48000404, 10, 1>;	 /*!<Port x configuration bit 10 */
			using OT9 	= reg_t<rw_t, 0X48000404, 9, 1>;	 /*!<Port x configuration bit 9 */
			using OT8 	= reg_t<rw_t, 0X48000404, 8, 1>;	 /*!<Port x configuration bit 8 */
			using OT7 	= reg_t<rw_t, 0X48000404, 7, 1>;	 /*!<Port x configuration bit 7 */
			using OT6 	= reg_t<rw_t, 0X48000404, 6, 1>;	 /*!<Port x configuration bit 6 */
			using OT5 	= reg_t<rw_t, 0X48000404, 5, 1>;	 /*!<Port x configuration bit 5 */
			using OT4 	= reg_t<rw_t, 0X48000404, 4, 1>;	 /*!<Port x configuration bit 4 */
			using OT3 	= reg_t<rw_t, 0X48000404, 3, 1>;	 /*!<Port x configuration bit 3 */
			using OT2 	= reg_t<rw_t, 0X48000404, 2, 1>;	 /*!<Port x configuration bit 2 */
			using OT1 	= reg_t<rw_t, 0X48000404, 1, 1>;	 /*!<Port x configuration bit 1 */
			using OT0 	= reg_t<rw_t, 0X48000404, 0, 1>;	 /*!<Port x configuration bit 0 */
		}
		/*!
		GPIO port output speed register
		*/
		namespace OSPEEDR{
			using OSPEEDR15 	= reg_t<rw_t, 0X48000408, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR14 	= reg_t<rw_t, 0X48000408, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR13 	= reg_t<rw_t, 0X48000408, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR12 	= reg_t<rw_t, 0X48000408, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR11 	= reg_t<rw_t, 0X48000408, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR10 	= reg_t<rw_t, 0X48000408, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR9 	= reg_t<rw_t, 0X48000408, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR8 	= reg_t<rw_t, 0X48000408, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR7 	= reg_t<rw_t, 0X48000408, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR6 	= reg_t<rw_t, 0X48000408, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR5 	= reg_t<rw_t, 0X48000408, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR4 	= reg_t<rw_t, 0X48000408, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR3 	= reg_t<rw_t, 0X48000408, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR2 	= reg_t<rw_t, 0X48000408, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR1 	= reg_t<rw_t, 0X48000408, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR0 	= reg_t<rw_t, 0X48000408, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port pull-up/pull-down register
		*/
		namespace PUPDR{
			using PUPDR15 	= reg_t<rw_t, 0X4800040C, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR14 	= reg_t<rw_t, 0X4800040C, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR13 	= reg_t<rw_t, 0X4800040C, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR12 	= reg_t<rw_t, 0X4800040C, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR11 	= reg_t<rw_t, 0X4800040C, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR10 	= reg_t<rw_t, 0X4800040C, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR9 	= reg_t<rw_t, 0X4800040C, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR8 	= reg_t<rw_t, 0X4800040C, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR7 	= reg_t<rw_t, 0X4800040C, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR6 	= reg_t<rw_t, 0X4800040C, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR5 	= reg_t<rw_t, 0X4800040C, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR4 	= reg_t<rw_t, 0X4800040C, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR3 	= reg_t<rw_t, 0X4800040C, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR2 	= reg_t<rw_t, 0X4800040C, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR1 	= reg_t<rw_t, 0X4800040C, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR0 	= reg_t<rw_t, 0X4800040C, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port input data register
		*/
		namespace IDR{
			using IDR15 	= reg_t<ro_t, 0X48000410, 15, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR14 	= reg_t<ro_t, 0X48000410, 14, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR13 	= reg_t<ro_t, 0X48000410, 13, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR12 	= reg_t<ro_t, 0X48000410, 12, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR11 	= reg_t<ro_t, 0X48000410, 11, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR10 	= reg_t<ro_t, 0X48000410, 10, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR9 	= reg_t<ro_t, 0X48000410, 9, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR8 	= reg_t<ro_t, 0X48000410, 8, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR7 	= reg_t<ro_t, 0X48000410, 7, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR6 	= reg_t<ro_t, 0X48000410, 6, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR5 	= reg_t<ro_t, 0X48000410, 5, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR4 	= reg_t<ro_t, 0X48000410, 4, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR3 	= reg_t<ro_t, 0X48000410, 3, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR2 	= reg_t<ro_t, 0X48000410, 2, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR1 	= reg_t<ro_t, 0X48000410, 1, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR0 	= reg_t<ro_t, 0X48000410, 0, 1>;	 /*!<Port input data (y = 0..15) */
		}
		/*!
		GPIO port output data register
		*/
		namespace ODR{
			using ODR15 	= reg_t<rw_t, 0X48000414, 15, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR14 	= reg_t<rw_t, 0X48000414, 14, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR13 	= reg_t<rw_t, 0X48000414, 13, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR12 	= reg_t<rw_t, 0X48000414, 12, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR11 	= reg_t<rw_t, 0X48000414, 11, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR10 	= reg_t<rw_t, 0X48000414, 10, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR9 	= reg_t<rw_t, 0X48000414, 9, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR8 	= reg_t<rw_t, 0X48000414, 8, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR7 	= reg_t<rw_t, 0X48000414, 7, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR6 	= reg_t<rw_t, 0X48000414, 6, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR5 	= reg_t<rw_t, 0X48000414, 5, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR4 	= reg_t<rw_t, 0X48000414, 4, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR3 	= reg_t<rw_t, 0X48000414, 3, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR2 	= reg_t<rw_t, 0X48000414, 2, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR1 	= reg_t<rw_t, 0X48000414, 1, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR0 	= reg_t<rw_t, 0X48000414, 0, 1>;	 /*!<Port output data (y = 0..15) */
		}
		/*!
		GPIO port bit set/reset register
		*/
		namespace BSRR{
			using BR15 	= reg_t<wo_t, 0X48000418, 31, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR14 	= reg_t<wo_t, 0X48000418, 30, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR13 	= reg_t<wo_t, 0X48000418, 29, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR12 	= reg_t<wo_t, 0X48000418, 28, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR11 	= reg_t<wo_t, 0X48000418, 27, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR10 	= reg_t<wo_t, 0X48000418, 26, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR9 	= reg_t<wo_t, 0X48000418, 25, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR8 	= reg_t<wo_t, 0X48000418, 24, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR7 	= reg_t<wo_t, 0X48000418, 23, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR6 	= reg_t<wo_t, 0X48000418, 22, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR5 	= reg_t<wo_t, 0X48000418, 21, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR4 	= reg_t<wo_t, 0X48000418, 20, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR3 	= reg_t<wo_t, 0X48000418, 19, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR2 	= reg_t<wo_t, 0X48000418, 18, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR1 	= reg_t<wo_t, 0X48000418, 17, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR0 	= reg_t<wo_t, 0X48000418, 16, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS15 	= reg_t<wo_t, 0X48000418, 15, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS14 	= reg_t<wo_t, 0X48000418, 14, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS13 	= reg_t<wo_t, 0X48000418, 13, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS12 	= reg_t<wo_t, 0X48000418, 12, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS11 	= reg_t<wo_t, 0X48000418, 11, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS10 	= reg_t<wo_t, 0X48000418, 10, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS9 	= reg_t<wo_t, 0X48000418, 9, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS8 	= reg_t<wo_t, 0X48000418, 8, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS7 	= reg_t<wo_t, 0X48000418, 7, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS6 	= reg_t<wo_t, 0X48000418, 6, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS5 	= reg_t<wo_t, 0X48000418, 5, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS4 	= reg_t<wo_t, 0X48000418, 4, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS3 	= reg_t<wo_t, 0X48000418, 3, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS2 	= reg_t<wo_t, 0X48000418, 2, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS1 	= reg_t<wo_t, 0X48000418, 1, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS0 	= reg_t<wo_t, 0X48000418, 0, 1>;	 /*!<Port x set bit y (y= 0..15) */
		}
		/*!
		GPIO port configuration lock register
		*/
		namespace LCKR{
			using LCKK 	= reg_t<rw_t, 0X4800041C, 16, 1>;	 /*!<Port x lock bit y */
			using LCK15 	= reg_t<rw_t, 0X4800041C, 15, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK14 	= reg_t<rw_t, 0X4800041C, 14, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK13 	= reg_t<rw_t, 0X4800041C, 13, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK12 	= reg_t<rw_t, 0X4800041C, 12, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK11 	= reg_t<rw_t, 0X4800041C, 11, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK10 	= reg_t<rw_t, 0X4800041C, 10, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK9 	= reg_t<rw_t, 0X4800041C, 9, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK8 	= reg_t<rw_t, 0X4800041C, 8, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK7 	= reg_t<rw_t, 0X4800041C, 7, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK6 	= reg_t<rw_t, 0X4800041C, 6, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK5 	= reg_t<rw_t, 0X4800041C, 5, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK4 	= reg_t<rw_t, 0X4800041C, 4, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK3 	= reg_t<rw_t, 0X4800041C, 3, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK2 	= reg_t<rw_t, 0X4800041C, 2, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK1 	= reg_t<rw_t, 0X4800041C, 1, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK0 	= reg_t<rw_t, 0X4800041C, 0, 1>;	 /*!<Port x lock bit y (y= 0..15) */
		}
		/*!
		GPIO alternate function low register
		*/
		namespace AFRL{
			using AFRL7 	= reg_t<rw_t, 0X48000420, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL6 	= reg_t<rw_t, 0X48000420, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL5 	= reg_t<rw_t, 0X48000420, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL4 	= reg_t<rw_t, 0X48000420, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL3 	= reg_t<rw_t, 0X48000420, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL2 	= reg_t<rw_t, 0X48000420, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL1 	= reg_t<rw_t, 0X48000420, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL0 	= reg_t<rw_t, 0X48000420, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
		}
		/*!
		GPIO alternate function high register
		*/
		namespace AFRH{
			using AFRH15 	= reg_t<rw_t, 0X48000424, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH14 	= reg_t<rw_t, 0X48000424, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH13 	= reg_t<rw_t, 0X48000424, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH12 	= reg_t<rw_t, 0X48000424, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH11 	= reg_t<rw_t, 0X48000424, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH10 	= reg_t<rw_t, 0X48000424, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH9 	= reg_t<rw_t, 0X48000424, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH8 	= reg_t<rw_t, 0X48000424, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
		}
		/*!
		Port bit reset register
		*/
		namespace BRR{
			using BR0 	= reg_t<wo_t, 0X48000428, 0, 1>;	 /*!<Port x Reset bit y */
			using BR1 	= reg_t<wo_t, 0X48000428, 1, 1>;	 /*!<Port x Reset bit y */
			using BR2 	= reg_t<wo_t, 0X48000428, 2, 1>;	 /*!<Port x Reset bit y */
			using BR3 	= reg_t<wo_t, 0X48000428, 3, 1>;	 /*!<Port x Reset bit y */
			using BR4 	= reg_t<wo_t, 0X48000428, 4, 1>;	 /*!<Port x Reset bit y */
			using BR5 	= reg_t<wo_t, 0X48000428, 5, 1>;	 /*!<Port x Reset bit y */
			using BR6 	= reg_t<wo_t, 0X48000428, 6, 1>;	 /*!<Port x Reset bit y */
			using BR7 	= reg_t<wo_t, 0X48000428, 7, 1>;	 /*!<Port x Reset bit y */
			using BR8 	= reg_t<wo_t, 0X48000428, 8, 1>;	 /*!<Port x Reset bit y */
			using BR9 	= reg_t<wo_t, 0X48000428, 9, 1>;	 /*!<Port x Reset bit y */
			using BR10 	= reg_t<wo_t, 0X48000428, 10, 1>;	 /*!<Port x Reset bit y */
			using BR11 	= reg_t<wo_t, 0X48000428, 11, 1>;	 /*!<Port x Reset bit y */
			using BR12 	= reg_t<wo_t, 0X48000428, 12, 1>;	 /*!<Port x Reset bit y */
			using BR13 	= reg_t<wo_t, 0X48000428, 13, 1>;	 /*!<Port x Reset bit y */
			using BR14 	= reg_t<wo_t, 0X48000428, 14, 1>;	 /*!<Port x Reset bit y */
			using BR15 	= reg_t<wo_t, 0X48000428, 15, 1>;	 /*!<Port x Reset bit y */
		}
	}
	/*!
	General-purpose I/Os
	*/
	namespace GPIOA{
		/*!
		GPIO port mode register
		*/
		namespace MODER{
			using MODER15 	= reg_t<rw_t, 0X48000000, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER14 	= reg_t<rw_t, 0X48000000, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER13 	= reg_t<rw_t, 0X48000000, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER12 	= reg_t<rw_t, 0X48000000, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER11 	= reg_t<rw_t, 0X48000000, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER10 	= reg_t<rw_t, 0X48000000, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER9 	= reg_t<rw_t, 0X48000000, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER8 	= reg_t<rw_t, 0X48000000, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER7 	= reg_t<rw_t, 0X48000000, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER6 	= reg_t<rw_t, 0X48000000, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER5 	= reg_t<rw_t, 0X48000000, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER4 	= reg_t<rw_t, 0X48000000, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER3 	= reg_t<rw_t, 0X48000000, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER2 	= reg_t<rw_t, 0X48000000, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER1 	= reg_t<rw_t, 0X48000000, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using MODER0 	= reg_t<rw_t, 0X48000000, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port output type register
		*/
		namespace OTYPER{
			using OT15 	= reg_t<rw_t, 0X48000004, 15, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT14 	= reg_t<rw_t, 0X48000004, 14, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT13 	= reg_t<rw_t, 0X48000004, 13, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT12 	= reg_t<rw_t, 0X48000004, 12, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT11 	= reg_t<rw_t, 0X48000004, 11, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT10 	= reg_t<rw_t, 0X48000004, 10, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT9 	= reg_t<rw_t, 0X48000004, 9, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT8 	= reg_t<rw_t, 0X48000004, 8, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT7 	= reg_t<rw_t, 0X48000004, 7, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT6 	= reg_t<rw_t, 0X48000004, 6, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT5 	= reg_t<rw_t, 0X48000004, 5, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT4 	= reg_t<rw_t, 0X48000004, 4, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT3 	= reg_t<rw_t, 0X48000004, 3, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT2 	= reg_t<rw_t, 0X48000004, 2, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT1 	= reg_t<rw_t, 0X48000004, 1, 1>;	 /*!<Port x configuration bits (y = 0..15) */
			using OT0 	= reg_t<rw_t, 0X48000004, 0, 1>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port output speed register
		*/
		namespace OSPEEDR{
			using OSPEEDR15 	= reg_t<rw_t, 0X48000008, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR14 	= reg_t<rw_t, 0X48000008, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR13 	= reg_t<rw_t, 0X48000008, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR12 	= reg_t<rw_t, 0X48000008, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR11 	= reg_t<rw_t, 0X48000008, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR10 	= reg_t<rw_t, 0X48000008, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR9 	= reg_t<rw_t, 0X48000008, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR8 	= reg_t<rw_t, 0X48000008, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR7 	= reg_t<rw_t, 0X48000008, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR6 	= reg_t<rw_t, 0X48000008, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR5 	= reg_t<rw_t, 0X48000008, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR4 	= reg_t<rw_t, 0X48000008, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR3 	= reg_t<rw_t, 0X48000008, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR2 	= reg_t<rw_t, 0X48000008, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR1 	= reg_t<rw_t, 0X48000008, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using OSPEEDR0 	= reg_t<rw_t, 0X48000008, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port pull-up/pull-down register
		*/
		namespace PUPDR{
			using PUPDR15 	= reg_t<rw_t, 0X4800000C, 30, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR14 	= reg_t<rw_t, 0X4800000C, 28, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR13 	= reg_t<rw_t, 0X4800000C, 26, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR12 	= reg_t<rw_t, 0X4800000C, 24, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR11 	= reg_t<rw_t, 0X4800000C, 22, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR10 	= reg_t<rw_t, 0X4800000C, 20, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR9 	= reg_t<rw_t, 0X4800000C, 18, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR8 	= reg_t<rw_t, 0X4800000C, 16, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR7 	= reg_t<rw_t, 0X4800000C, 14, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR6 	= reg_t<rw_t, 0X4800000C, 12, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR5 	= reg_t<rw_t, 0X4800000C, 10, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR4 	= reg_t<rw_t, 0X4800000C, 8, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR3 	= reg_t<rw_t, 0X4800000C, 6, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR2 	= reg_t<rw_t, 0X4800000C, 4, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR1 	= reg_t<rw_t, 0X4800000C, 2, 2>;	 /*!<Port x configuration bits (y = 0..15) */
			using PUPDR0 	= reg_t<rw_t, 0X4800000C, 0, 2>;	 /*!<Port x configuration bits (y = 0..15) */
		}
		/*!
		GPIO port input data register
		*/
		namespace IDR{
			using IDR15 	= reg_t<ro_t, 0X48000010, 15, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR14 	= reg_t<ro_t, 0X48000010, 14, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR13 	= reg_t<ro_t, 0X48000010, 13, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR12 	= reg_t<ro_t, 0X48000010, 12, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR11 	= reg_t<ro_t, 0X48000010, 11, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR10 	= reg_t<ro_t, 0X48000010, 10, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR9 	= reg_t<ro_t, 0X48000010, 9, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR8 	= reg_t<ro_t, 0X48000010, 8, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR7 	= reg_t<ro_t, 0X48000010, 7, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR6 	= reg_t<ro_t, 0X48000010, 6, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR5 	= reg_t<ro_t, 0X48000010, 5, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR4 	= reg_t<ro_t, 0X48000010, 4, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR3 	= reg_t<ro_t, 0X48000010, 3, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR2 	= reg_t<ro_t, 0X48000010, 2, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR1 	= reg_t<ro_t, 0X48000010, 1, 1>;	 /*!<Port input data (y = 0..15) */
			using IDR0 	= reg_t<ro_t, 0X48000010, 0, 1>;	 /*!<Port input data (y = 0..15) */
		}
		/*!
		GPIO port output data register
		*/
		namespace ODR{
			using ODR15 	= reg_t<rw_t, 0X48000014, 15, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR14 	= reg_t<rw_t, 0X48000014, 14, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR13 	= reg_t<rw_t, 0X48000014, 13, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR12 	= reg_t<rw_t, 0X48000014, 12, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR11 	= reg_t<rw_t, 0X48000014, 11, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR10 	= reg_t<rw_t, 0X48000014, 10, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR9 	= reg_t<rw_t, 0X48000014, 9, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR8 	= reg_t<rw_t, 0X48000014, 8, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR7 	= reg_t<rw_t, 0X48000014, 7, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR6 	= reg_t<rw_t, 0X48000014, 6, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR5 	= reg_t<rw_t, 0X48000014, 5, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR4 	= reg_t<rw_t, 0X48000014, 4, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR3 	= reg_t<rw_t, 0X48000014, 3, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR2 	= reg_t<rw_t, 0X48000014, 2, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR1 	= reg_t<rw_t, 0X48000014, 1, 1>;	 /*!<Port output data (y = 0..15) */
			using ODR0 	= reg_t<rw_t, 0X48000014, 0, 1>;	 /*!<Port output data (y = 0..15) */
		}
		/*!
		GPIO port bit set/reset register
		*/
		namespace BSRR{
			using BR15 	= reg_t<wo_t, 0X48000018, 31, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR14 	= reg_t<wo_t, 0X48000018, 30, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR13 	= reg_t<wo_t, 0X48000018, 29, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR12 	= reg_t<wo_t, 0X48000018, 28, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR11 	= reg_t<wo_t, 0X48000018, 27, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR10 	= reg_t<wo_t, 0X48000018, 26, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR9 	= reg_t<wo_t, 0X48000018, 25, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR8 	= reg_t<wo_t, 0X48000018, 24, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR7 	= reg_t<wo_t, 0X48000018, 23, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR6 	= reg_t<wo_t, 0X48000018, 22, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR5 	= reg_t<wo_t, 0X48000018, 21, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR4 	= reg_t<wo_t, 0X48000018, 20, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR3 	= reg_t<wo_t, 0X48000018, 19, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR2 	= reg_t<wo_t, 0X48000018, 18, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR1 	= reg_t<wo_t, 0X48000018, 17, 1>;	 /*!<Port x reset bit y (y = 0..15) */
			using BR0 	= reg_t<wo_t, 0X48000018, 16, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS15 	= reg_t<wo_t, 0X48000018, 15, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS14 	= reg_t<wo_t, 0X48000018, 14, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS13 	= reg_t<wo_t, 0X48000018, 13, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS12 	= reg_t<wo_t, 0X48000018, 12, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS11 	= reg_t<wo_t, 0X48000018, 11, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS10 	= reg_t<wo_t, 0X48000018, 10, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS9 	= reg_t<wo_t, 0X48000018, 9, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS8 	= reg_t<wo_t, 0X48000018, 8, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS7 	= reg_t<wo_t, 0X48000018, 7, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS6 	= reg_t<wo_t, 0X48000018, 6, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS5 	= reg_t<wo_t, 0X48000018, 5, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS4 	= reg_t<wo_t, 0X48000018, 4, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS3 	= reg_t<wo_t, 0X48000018, 3, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS2 	= reg_t<wo_t, 0X48000018, 2, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS1 	= reg_t<wo_t, 0X48000018, 1, 1>;	 /*!<Port x set bit y (y= 0..15) */
			using BS0 	= reg_t<wo_t, 0X48000018, 0, 1>;	 /*!<Port x set bit y (y= 0..15) */
		}
		/*!
		GPIO port configuration lock register
		*/
		namespace LCKR{
			using LCKK 	= reg_t<rw_t, 0X4800001C, 16, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK15 	= reg_t<rw_t, 0X4800001C, 15, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK14 	= reg_t<rw_t, 0X4800001C, 14, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK13 	= reg_t<rw_t, 0X4800001C, 13, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK12 	= reg_t<rw_t, 0X4800001C, 12, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK11 	= reg_t<rw_t, 0X4800001C, 11, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK10 	= reg_t<rw_t, 0X4800001C, 10, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK9 	= reg_t<rw_t, 0X4800001C, 9, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK8 	= reg_t<rw_t, 0X4800001C, 8, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK7 	= reg_t<rw_t, 0X4800001C, 7, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK6 	= reg_t<rw_t, 0X4800001C, 6, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK5 	= reg_t<rw_t, 0X4800001C, 5, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK4 	= reg_t<rw_t, 0X4800001C, 4, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK3 	= reg_t<rw_t, 0X4800001C, 3, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK2 	= reg_t<rw_t, 0X4800001C, 2, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK1 	= reg_t<rw_t, 0X4800001C, 1, 1>;	 /*!<Port x lock bit y (y= 0..15) */
			using LCK0 	= reg_t<rw_t, 0X4800001C, 0, 1>;	 /*!<Port x lock bit y (y= 0..15) */
		}
		/*!
		GPIO alternate function low register
		*/
		namespace AFRL{
			using AFRL7 	= reg_t<rw_t, 0X48000020, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL6 	= reg_t<rw_t, 0X48000020, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL5 	= reg_t<rw_t, 0X48000020, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL4 	= reg_t<rw_t, 0X48000020, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL3 	= reg_t<rw_t, 0X48000020, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL2 	= reg_t<rw_t, 0X48000020, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL1 	= reg_t<rw_t, 0X48000020, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
			using AFRL0 	= reg_t<rw_t, 0X48000020, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 0..7) */
		}
		/*!
		GPIO alternate function high register
		*/
		namespace AFRH{
			using AFRH15 	= reg_t<rw_t, 0X48000024, 28, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH14 	= reg_t<rw_t, 0X48000024, 24, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH13 	= reg_t<rw_t, 0X48000024, 20, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH12 	= reg_t<rw_t, 0X48000024, 16, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH11 	= reg_t<rw_t, 0X48000024, 12, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH10 	= reg_t<rw_t, 0X48000024, 8, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH9 	= reg_t<rw_t, 0X48000024, 4, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
			using AFRH8 	= reg_t<rw_t, 0X48000024, 0, 4>;	 /*!<Alternate function selection for port x bit y (y = 8..15) */
		}
		/*!
		Port bit reset register
		*/
		namespace BRR{
			using BR0 	= reg_t<wo_t, 0X48000028, 0, 1>;	 /*!<Port x Reset bit y */
			using BR1 	= reg_t<wo_t, 0X48000028, 1, 1>;	 /*!<Port x Reset bit y */
			using BR2 	= reg_t<wo_t, 0X48000028, 2, 1>;	 /*!<Port x Reset bit y */
			using BR3 	= reg_t<wo_t, 0X48000028, 3, 1>;	 /*!<Port x Reset bit y */
			using BR4 	= reg_t<wo_t, 0X48000028, 4, 1>;	 /*!<Port x Reset bit y */
			using BR5 	= reg_t<wo_t, 0X48000028, 5, 1>;	 /*!<Port x Reset bit y */
			using BR6 	= reg_t<wo_t, 0X48000028, 6, 1>;	 /*!<Port x Reset bit y */
			using BR7 	= reg_t<wo_t, 0X48000028, 7, 1>;	 /*!<Port x Reset bit y */
			using BR8 	= reg_t<wo_t, 0X48000028, 8, 1>;	 /*!<Port x Reset bit y */
			using BR9 	= reg_t<wo_t, 0X48000028, 9, 1>;	 /*!<Port x Reset bit y */
			using BR10 	= reg_t<wo_t, 0X48000028, 10, 1>;	 /*!<Port x Reset bit y */
			using BR11 	= reg_t<wo_t, 0X48000028, 11, 1>;	 /*!<Port x Reset bit y */
			using BR12 	= reg_t<wo_t, 0X48000028, 12, 1>;	 /*!<Port x Reset bit y */
			using BR13 	= reg_t<wo_t, 0X48000028, 13, 1>;	 /*!<Port x Reset bit y */
			using BR14 	= reg_t<wo_t, 0X48000028, 14, 1>;	 /*!<Port x Reset bit y */
			using BR15 	= reg_t<wo_t, 0X48000028, 15, 1>;	 /*!<Port x Reset bit y */
		}
	}
	/*!
	Serial peripheral interface
	*/
	namespace SPI1{
		/*!
		control register 1
		*/
		namespace CR1{
			using BIDIMODE 	= reg_t<rw_t, 0X40013000, 15, 1>;	 /*!<Bidirectional data mode enable */
			using BIDIOE 	= reg_t<rw_t, 0X40013000, 14, 1>;	 /*!<Output enable in bidirectional mode */
			using CRCEN 	= reg_t<rw_t, 0X40013000, 13, 1>;	 /*!<Hardware CRC calculation enable */
			using CRCNEXT 	= reg_t<rw_t, 0X40013000, 12, 1>;	 /*!<CRC transfer next */
			using DFF 	= reg_t<rw_t, 0X40013000, 11, 1>;	 /*!<Data frame format */
			using RXONLY 	= reg_t<rw_t, 0X40013000, 10, 1>;	 /*!<Receive only */
			using SSM 	= reg_t<rw_t, 0X40013000, 9, 1>;	 /*!<Software slave management */
			using SSI 	= reg_t<rw_t, 0X40013000, 8, 1>;	 /*!<Internal slave select */
			using LSBFIRST 	= reg_t<rw_t, 0X40013000, 7, 1>;	 /*!<Frame format */
			using SPE 	= reg_t<rw_t, 0X40013000, 6, 1>;	 /*!<SPI enable */
			using BR 	= reg_t<rw_t, 0X40013000, 3, 3>;	 /*!<Baud rate control */
			using MSTR 	= reg_t<rw_t, 0X40013000, 2, 1>;	 /*!<Master selection */
			using CPOL 	= reg_t<rw_t, 0X40013000, 1, 1>;	 /*!<Clock polarity */
			using CPHA 	= reg_t<rw_t, 0X40013000, 0, 1>;	 /*!<Clock phase */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using RXDMAEN 	= reg_t<rw_t, 0X40013004, 0, 1>;	 /*!<Rx buffer DMA enable */
			using TXDMAEN 	= reg_t<rw_t, 0X40013004, 1, 1>;	 /*!<Tx buffer DMA enable */
			using SSOE 	= reg_t<rw_t, 0X40013004, 2, 1>;	 /*!<SS output enable */
			using NSSP 	= reg_t<rw_t, 0X40013004, 3, 1>;	 /*!<NSS pulse management */
			using FRF 	= reg_t<rw_t, 0X40013004, 4, 1>;	 /*!<Frame format */
			using ERRIE 	= reg_t<rw_t, 0X40013004, 5, 1>;	 /*!<Error interrupt enable */
			using RXNEIE 	= reg_t<rw_t, 0X40013004, 6, 1>;	 /*!<RX buffer not empty interrupt enable */
			using TXEIE 	= reg_t<rw_t, 0X40013004, 7, 1>;	 /*!<Tx buffer empty interrupt enable */
			using DS 	= reg_t<rw_t, 0X40013004, 8, 4>;	 /*!<Data size */
			using FRXTH 	= reg_t<rw_t, 0X40013004, 12, 1>;	 /*!<FIFO reception threshold */
			using LDMA_RX 	= reg_t<rw_t, 0X40013004, 13, 1>;	 /*!<Last DMA transfer for reception */
			using LDMA_TX 	= reg_t<rw_t, 0X40013004, 14, 1>;	 /*!<Last DMA transfer for transmission */
		}
		/*!
		status register
		*/
		namespace SR{
			using RXNE 	= reg_t<ro_t, 0X40013008, 0, 1>;	 /*!<Receive buffer not empty */
			using TXE 	= reg_t<ro_t, 0X40013008, 1, 1>;	 /*!<Transmit buffer empty */
			using CHSIDE 	= reg_t<ro_t, 0X40013008, 2, 1>;	 /*!<Channel side */
			using UDR 	= reg_t<ro_t, 0X40013008, 3, 1>;	 /*!<Underrun flag */
			using CRCERR 	= reg_t<rw_t, 0X40013008, 4, 1>;	 /*!<CRC error flag */
			using MODF 	= reg_t<ro_t, 0X40013008, 5, 1>;	 /*!<Mode fault */
			using OVR 	= reg_t<ro_t, 0X40013008, 6, 1>;	 /*!<Overrun flag */
			using BSY 	= reg_t<ro_t, 0X40013008, 7, 1>;	 /*!<Busy flag */
			using TIFRFE 	= reg_t<ro_t, 0X40013008, 8, 1>;	 /*!<TI frame format error */
			using FRLVL 	= reg_t<ro_t, 0X40013008, 9, 2>;	 /*!<FIFO reception level */
			using FTLVL 	= reg_t<ro_t, 0X40013008, 11, 2>;	 /*!<FIFO transmission level */
		}
		/*!
		data register
		*/
		namespace DR{
			using DR 	= reg_t<rw_t, 0X4001300C, 0, 16>;	 /*!<Data register */
		}
		/*!
		CRC polynomial register
		*/
		namespace CRCPR{
			using CRCPOLY 	= reg_t<rw_t, 0X40013010, 0, 16>;	 /*!<CRC polynomial register */
		}
		/*!
		RX CRC register
		*/
		namespace RXCRCR{
			using RxCRC 	= reg_t<ro_t, 0X40013014, 0, 16>;	 /*!<Rx CRC register */
		}
		/*!
		TX CRC register
		*/
		namespace TXCRCR{
			using TxCRC 	= reg_t<ro_t, 0X40013018, 0, 16>;	 /*!<Tx CRC register */
		}
		/*!
		I2S configuration register
		*/
		namespace I2SCFGR{
			using I2SMOD 	= reg_t<rw_t, 0X4001301C, 11, 1>;	 /*!<I2S mode selection */
			using I2SE 	= reg_t<rw_t, 0X4001301C, 10, 1>;	 /*!<I2S Enable */
			using I2SCFG 	= reg_t<rw_t, 0X4001301C, 8, 2>;	 /*!<I2S configuration mode */
			using PCMSYNC 	= reg_t<rw_t, 0X4001301C, 7, 1>;	 /*!<PCM frame synchronization */
			using I2SSTD 	= reg_t<rw_t, 0X4001301C, 4, 2>;	 /*!<I2S standard selection */
			using CKPOL 	= reg_t<rw_t, 0X4001301C, 3, 1>;	 /*!<Steady state clock polarity */
			using DATLEN 	= reg_t<rw_t, 0X4001301C, 1, 2>;	 /*!<Data length to be transferred */
			using CHLEN 	= reg_t<rw_t, 0X4001301C, 0, 1>;	 /*!<Channel length (number of bits per audio channel) */
		}
		/*!
		I2S prescaler register
		*/
		namespace I2SPR{
			using MCKOE 	= reg_t<rw_t, 0X40013020, 9, 1>;	 /*!<Master clock output enable */
			using ODD 	= reg_t<rw_t, 0X40013020, 8, 1>;	 /*!<Odd factor for the prescaler */
			using I2SDIV 	= reg_t<rw_t, 0X40013020, 0, 8>;	 /*!<I2S Linear prescaler */
		}
	}
	/*!
	Serial peripheral interface
	BasedOn:SPI1
	*/
	namespace SPI2{
		/*!
		control register 1
		*/
		namespace CR1{
			using BIDIMODE 	= reg_t<rw_t, 0X40003800, 15, 1>;	 /*!<Bidirectional data mode enable */
			using BIDIOE 	= reg_t<rw_t, 0X40003800, 14, 1>;	 /*!<Output enable in bidirectional mode */
			using CRCEN 	= reg_t<rw_t, 0X40003800, 13, 1>;	 /*!<Hardware CRC calculation enable */
			using CRCNEXT 	= reg_t<rw_t, 0X40003800, 12, 1>;	 /*!<CRC transfer next */
			using DFF 	= reg_t<rw_t, 0X40003800, 11, 1>;	 /*!<Data frame format */
			using RXONLY 	= reg_t<rw_t, 0X40003800, 10, 1>;	 /*!<Receive only */
			using SSM 	= reg_t<rw_t, 0X40003800, 9, 1>;	 /*!<Software slave management */
			using SSI 	= reg_t<rw_t, 0X40003800, 8, 1>;	 /*!<Internal slave select */
			using LSBFIRST 	= reg_t<rw_t, 0X40003800, 7, 1>;	 /*!<Frame format */
			using SPE 	= reg_t<rw_t, 0X40003800, 6, 1>;	 /*!<SPI enable */
			using BR 	= reg_t<rw_t, 0X40003800, 3, 3>;	 /*!<Baud rate control */
			using MSTR 	= reg_t<rw_t, 0X40003800, 2, 1>;	 /*!<Master selection */
			using CPOL 	= reg_t<rw_t, 0X40003800, 1, 1>;	 /*!<Clock polarity */
			using CPHA 	= reg_t<rw_t, 0X40003800, 0, 1>;	 /*!<Clock phase */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using RXDMAEN 	= reg_t<rw_t, 0X40003804, 0, 1>;	 /*!<Rx buffer DMA enable */
			using TXDMAEN 	= reg_t<rw_t, 0X40003804, 1, 1>;	 /*!<Tx buffer DMA enable */
			using SSOE 	= reg_t<rw_t, 0X40003804, 2, 1>;	 /*!<SS output enable */
			using NSSP 	= reg_t<rw_t, 0X40003804, 3, 1>;	 /*!<NSS pulse management */
			using FRF 	= reg_t<rw_t, 0X40003804, 4, 1>;	 /*!<Frame format */
			using ERRIE 	= reg_t<rw_t, 0X40003804, 5, 1>;	 /*!<Error interrupt enable */
			using RXNEIE 	= reg_t<rw_t, 0X40003804, 6, 1>;	 /*!<RX buffer not empty interrupt enable */
			using TXEIE 	= reg_t<rw_t, 0X40003804, 7, 1>;	 /*!<Tx buffer empty interrupt enable */
			using DS 	= reg_t<rw_t, 0X40003804, 8, 4>;	 /*!<Data size */
			using FRXTH 	= reg_t<rw_t, 0X40003804, 12, 1>;	 /*!<FIFO reception threshold */
			using LDMA_RX 	= reg_t<rw_t, 0X40003804, 13, 1>;	 /*!<Last DMA transfer for reception */
			using LDMA_TX 	= reg_t<rw_t, 0X40003804, 14, 1>;	 /*!<Last DMA transfer for transmission */
		}
		/*!
		status register
		*/
		namespace SR{
			using RXNE 	= reg_t<ro_t, 0X40003808, 0, 1>;	 /*!<Receive buffer not empty */
			using TXE 	= reg_t<ro_t, 0X40003808, 1, 1>;	 /*!<Transmit buffer empty */
			using CHSIDE 	= reg_t<ro_t, 0X40003808, 2, 1>;	 /*!<Channel side */
			using UDR 	= reg_t<ro_t, 0X40003808, 3, 1>;	 /*!<Underrun flag */
			using CRCERR 	= reg_t<rw_t, 0X40003808, 4, 1>;	 /*!<CRC error flag */
			using MODF 	= reg_t<ro_t, 0X40003808, 5, 1>;	 /*!<Mode fault */
			using OVR 	= reg_t<ro_t, 0X40003808, 6, 1>;	 /*!<Overrun flag */
			using BSY 	= reg_t<ro_t, 0X40003808, 7, 1>;	 /*!<Busy flag */
			using TIFRFE 	= reg_t<ro_t, 0X40003808, 8, 1>;	 /*!<TI frame format error */
			using FRLVL 	= reg_t<ro_t, 0X40003808, 9, 2>;	 /*!<FIFO reception level */
			using FTLVL 	= reg_t<ro_t, 0X40003808, 11, 2>;	 /*!<FIFO transmission level */
		}
		/*!
		data register
		*/
		namespace DR{
			using DR 	= reg_t<rw_t, 0X4000380C, 0, 16>;	 /*!<Data register */
		}
		/*!
		CRC polynomial register
		*/
		namespace CRCPR{
			using CRCPOLY 	= reg_t<rw_t, 0X40003810, 0, 16>;	 /*!<CRC polynomial register */
		}
		/*!
		RX CRC register
		*/
		namespace RXCRCR{
			using RxCRC 	= reg_t<ro_t, 0X40003814, 0, 16>;	 /*!<Rx CRC register */
		}
		/*!
		TX CRC register
		*/
		namespace TXCRCR{
			using TxCRC 	= reg_t<ro_t, 0X40003818, 0, 16>;	 /*!<Tx CRC register */
		}
		/*!
		I2S configuration register
		*/
		namespace I2SCFGR{
			using I2SMOD 	= reg_t<rw_t, 0X4000381C, 11, 1>;	 /*!<I2S mode selection */
			using I2SE 	= reg_t<rw_t, 0X4000381C, 10, 1>;	 /*!<I2S Enable */
			using I2SCFG 	= reg_t<rw_t, 0X4000381C, 8, 2>;	 /*!<I2S configuration mode */
			using PCMSYNC 	= reg_t<rw_t, 0X4000381C, 7, 1>;	 /*!<PCM frame synchronization */
			using I2SSTD 	= reg_t<rw_t, 0X4000381C, 4, 2>;	 /*!<I2S standard selection */
			using CKPOL 	= reg_t<rw_t, 0X4000381C, 3, 1>;	 /*!<Steady state clock polarity */
			using DATLEN 	= reg_t<rw_t, 0X4000381C, 1, 2>;	 /*!<Data length to be transferred */
			using CHLEN 	= reg_t<rw_t, 0X4000381C, 0, 1>;	 /*!<Channel length (number of bits per audio channel) */
		}
		/*!
		I2S prescaler register
		*/
		namespace I2SPR{
			using MCKOE 	= reg_t<rw_t, 0X40003820, 9, 1>;	 /*!<Master clock output enable */
			using ODD 	= reg_t<rw_t, 0X40003820, 8, 1>;	 /*!<Odd factor for the prescaler */
			using I2SDIV 	= reg_t<rw_t, 0X40003820, 0, 8>;	 /*!<I2S Linear prescaler */
		}
	}
	/*!
	Power control
	*/
	namespace PWR{
		/*!
		power control register
		*/
		namespace CR{
			using FPDS 	= reg_t<rw_t, 0X40007000, 9, 1>;	 /*!<Flash power down in Stop mode */
			using DBP 	= reg_t<rw_t, 0X40007000, 8, 1>;	 /*!<Disable backup domain write protection */
			using PLS 	= reg_t<rw_t, 0X40007000, 5, 3>;	 /*!<PVD level selection */
			using PVDE 	= reg_t<rw_t, 0X40007000, 4, 1>;	 /*!<Power voltage detector enable */
			using CSBF 	= reg_t<rw_t, 0X40007000, 3, 1>;	 /*!<Clear standby flag */
			using CWUF 	= reg_t<rw_t, 0X40007000, 2, 1>;	 /*!<Clear wakeup flag */
			using PDDS 	= reg_t<rw_t, 0X40007000, 1, 1>;	 /*!<Power down deepsleep */
			using LPDS 	= reg_t<rw_t, 0X40007000, 0, 1>;	 /*!<Low-power deep sleep */
		}
		/*!
		power control/status register
		*/
		namespace CSR{
			using BRE 	= reg_t<rw_t, 0X40007004, 9, 1>;	 /*!<Backup regulator enable */
			using EWUP 	= reg_t<rw_t, 0X40007004, 8, 1>;	 /*!<Enable WKUP pin */
			using BRR 	= reg_t<ro_t, 0X40007004, 3, 1>;	 /*!<Backup regulator ready */
			using PVDO 	= reg_t<ro_t, 0X40007004, 2, 1>;	 /*!<PVD output */
			using SBF 	= reg_t<ro_t, 0X40007004, 1, 1>;	 /*!<Standby flag */
			using WUF 	= reg_t<ro_t, 0X40007004, 0, 1>;	 /*!<Wakeup flag */
		}
	}
	/*!
	Inter-integrated circuit
	*/
	namespace I2C1{
		/*!
		Control register 1
		*/
		namespace CR1{
			using PE 	= reg_t<rw_t, 0X40005400, 0, 1>;	 /*!<Peripheral enable */
			using TXIE 	= reg_t<rw_t, 0X40005400, 1, 1>;	 /*!<TX Interrupt enable */
			using RXIE 	= reg_t<rw_t, 0X40005400, 2, 1>;	 /*!<RX Interrupt enable */
			using ADDRIE 	= reg_t<rw_t, 0X40005400, 3, 1>;	 /*!<Address match interrupt enable (slave only) */
			using NACKIE 	= reg_t<rw_t, 0X40005400, 4, 1>;	 /*!<Not acknowledge received interrupt enable */
			using STOPIE 	= reg_t<rw_t, 0X40005400, 5, 1>;	 /*!<STOP detection Interrupt enable */
			using TCIE 	= reg_t<rw_t, 0X40005400, 6, 1>;	 /*!<Transfer Complete interrupt enable */
			using ERRIE 	= reg_t<rw_t, 0X40005400, 7, 1>;	 /*!<Error interrupts enable */
			using DNF 	= reg_t<rw_t, 0X40005400, 8, 4>;	 /*!<Digital noise filter */
			using ANFOFF 	= reg_t<rw_t, 0X40005400, 12, 1>;	 /*!<Analog noise filter OFF */
			using SWRST 	= reg_t<wo_t, 0X40005400, 13, 1>;	 /*!<Software reset */
			using TXDMAEN 	= reg_t<rw_t, 0X40005400, 14, 1>;	 /*!<DMA transmission requests enable */
			using RXDMAEN 	= reg_t<rw_t, 0X40005400, 15, 1>;	 /*!<DMA reception requests enable */
			using SBC 	= reg_t<rw_t, 0X40005400, 16, 1>;	 /*!<Slave byte control */
			using NOSTRETCH 	= reg_t<rw_t, 0X40005400, 17, 1>;	 /*!<Clock stretching disable */
			using WUPEN 	= reg_t<rw_t, 0X40005400, 18, 1>;	 /*!<Wakeup from STOP enable */
			using GCEN 	= reg_t<rw_t, 0X40005400, 19, 1>;	 /*!<General call enable */
			using SMBHEN 	= reg_t<rw_t, 0X40005400, 20, 1>;	 /*!<SMBus Host address enable */
			using SMBDEN 	= reg_t<rw_t, 0X40005400, 21, 1>;	 /*!<SMBus Device Default address enable */
			using ALERTEN 	= reg_t<rw_t, 0X40005400, 22, 1>;	 /*!<SMBUS alert enable */
			using PECEN 	= reg_t<rw_t, 0X40005400, 23, 1>;	 /*!<PEC enable */
		}
		/*!
		Control register 2
		*/
		namespace CR2{
			using PECBYTE 	= reg_t<rw_t, 0X40005404, 26, 1>;	 /*!<Packet error checking byte */
			using AUTOEND 	= reg_t<rw_t, 0X40005404, 25, 1>;	 /*!<Automatic end mode (master mode) */
			using RELOAD 	= reg_t<rw_t, 0X40005404, 24, 1>;	 /*!<NBYTES reload mode */
			using NBYTES 	= reg_t<rw_t, 0X40005404, 16, 8>;	 /*!<Number of bytes */
			using NACK 	= reg_t<rw_t, 0X40005404, 15, 1>;	 /*!<NACK generation (slave mode) */
			using STOP 	= reg_t<rw_t, 0X40005404, 14, 1>;	 /*!<Stop generation (master mode) */
			using START 	= reg_t<rw_t, 0X40005404, 13, 1>;	 /*!<Start generation */
			using HEAD10R 	= reg_t<rw_t, 0X40005404, 12, 1>;	 /*!<10-bit address header only read direction (master receiver mode) */
			using ADD10 	= reg_t<rw_t, 0X40005404, 11, 1>;	 /*!<10-bit addressing mode (master mode) */
			using RD_WRN 	= reg_t<rw_t, 0X40005404, 10, 1>;	 /*!<Transfer direction (master mode) */
			using SADD8 	= reg_t<rw_t, 0X40005404, 8, 2>;	 /*!<Slave address bit 9:8 (master mode) */
			using SADD1 	= reg_t<rw_t, 0X40005404, 1, 7>;	 /*!<Slave address bit 7:1 (master mode) */
			using SADD0 	= reg_t<rw_t, 0X40005404, 0, 1>;	 /*!<Slave address bit 0 (master mode) */
		}
		/*!
		Own address register 1
		*/
		namespace OAR1{
			using OA1_0 	= reg_t<rw_t, 0X40005408, 0, 1>;	 /*!<Interface address */
			using OA1_1 	= reg_t<rw_t, 0X40005408, 1, 7>;	 /*!<Interface address */
			using OA1_8 	= reg_t<rw_t, 0X40005408, 8, 2>;	 /*!<Interface address */
			using OA1MODE 	= reg_t<rw_t, 0X40005408, 10, 1>;	 /*!<Own Address 1 10-bit mode */
			using OA1EN 	= reg_t<rw_t, 0X40005408, 15, 1>;	 /*!<Own Address 1 enable */
		}
		/*!
		Own address register 2
		*/
		namespace OAR2{
			using OA2 	= reg_t<rw_t, 0X4000540C, 1, 7>;	 /*!<Interface address */
			using OA2MSK 	= reg_t<rw_t, 0X4000540C, 8, 3>;	 /*!<Own Address 2 masks */
			using OA2EN 	= reg_t<rw_t, 0X4000540C, 15, 1>;	 /*!<Own Address 2 enable */
		}
		/*!
		Timing register
		*/
		namespace TIMINGR{
			using SCLL 	= reg_t<rw_t, 0X40005410, 0, 8>;	 /*!<SCL low period (master mode) */
			using SCLH 	= reg_t<rw_t, 0X40005410, 8, 8>;	 /*!<SCL high period (master mode) */
			using SDADEL 	= reg_t<rw_t, 0X40005410, 16, 4>;	 /*!<Data hold time */
			using SCLDEL 	= reg_t<rw_t, 0X40005410, 20, 4>;	 /*!<Data setup time */
			using PRESC 	= reg_t<rw_t, 0X40005410, 28, 4>;	 /*!<Timing prescaler */
		}
		/*!
		Status register 1
		*/
		namespace TIMEOUTR{
			using TIMEOUTA 	= reg_t<rw_t, 0X40005414, 0, 12>;	 /*!<Bus timeout A */
			using TIDLE 	= reg_t<rw_t, 0X40005414, 12, 1>;	 /*!<Idle clock timeout detection */
			using TIMOUTEN 	= reg_t<rw_t, 0X40005414, 15, 1>;	 /*!<Clock timeout enable */
			using TIMEOUTB 	= reg_t<rw_t, 0X40005414, 16, 12>;	 /*!<Bus timeout B */
			using TEXTEN 	= reg_t<rw_t, 0X40005414, 31, 1>;	 /*!<Extended clock timeout enable */
		}
		/*!
		Interrupt and Status register
		*/
		namespace ISR{
			using ADDCODE 	= reg_t<ro_t, 0X40005418, 17, 7>;	 /*!<Address match code (Slave mode) */
			using DIR 	= reg_t<ro_t, 0X40005418, 16, 1>;	 /*!<Transfer direction (Slave mode) */
			using BUSY 	= reg_t<ro_t, 0X40005418, 15, 1>;	 /*!<Bus busy */
			using ALERT 	= reg_t<ro_t, 0X40005418, 13, 1>;	 /*!<SMBus alert */
			using TIMEOUT 	= reg_t<ro_t, 0X40005418, 12, 1>;	 /*!<Timeout or t_low detection flag */
			using PECERR 	= reg_t<ro_t, 0X40005418, 11, 1>;	 /*!<PEC Error in reception */
			using OVR 	= reg_t<ro_t, 0X40005418, 10, 1>;	 /*!<Overrun/Underrun (slave mode) */
			using ARLO 	= reg_t<ro_t, 0X40005418, 9, 1>;	 /*!<Arbitration lost */
			using BERR 	= reg_t<ro_t, 0X40005418, 8, 1>;	 /*!<Bus error */
			using TCR 	= reg_t<ro_t, 0X40005418, 7, 1>;	 /*!<Transfer Complete Reload */
			using TC 	= reg_t<ro_t, 0X40005418, 6, 1>;	 /*!<Transfer Complete (master mode) */
			using STOPF 	= reg_t<ro_t, 0X40005418, 5, 1>;	 /*!<Stop detection flag */
			using NACKF 	= reg_t<ro_t, 0X40005418, 4, 1>;	 /*!<Not acknowledge received flag */
			using ADDR 	= reg_t<ro_t, 0X40005418, 3, 1>;	 /*!<Address matched (slave mode) */
			using RXNE 	= reg_t<ro_t, 0X40005418, 2, 1>;	 /*!<Receive data register not empty (receivers) */
			using TXIS 	= reg_t<rw_t, 0X40005418, 1, 1>;	 /*!<Transmit interrupt status (transmitters) */
			using TXE 	= reg_t<rw_t, 0X40005418, 0, 1>;	 /*!<Transmit data register empty (transmitters) */
		}
		/*!
		Interrupt clear register
		*/
		namespace ICR{
			using ALERTCF 	= reg_t<wo_t, 0X4000541C, 13, 1>;	 /*!<Alert flag clear */
			using TIMOUTCF 	= reg_t<wo_t, 0X4000541C, 12, 1>;	 /*!<Timeout detection flag clear */
			using PECCF 	= reg_t<wo_t, 0X4000541C, 11, 1>;	 /*!<PEC Error flag clear */
			using OVRCF 	= reg_t<wo_t, 0X4000541C, 10, 1>;	 /*!<Overrun/Underrun flag clear */
			using ARLOCF 	= reg_t<wo_t, 0X4000541C, 9, 1>;	 /*!<Arbitration lost flag clear */
			using BERRCF 	= reg_t<wo_t, 0X4000541C, 8, 1>;	 /*!<Bus error flag clear */
			using STOPCF 	= reg_t<wo_t, 0X4000541C, 5, 1>;	 /*!<Stop detection flag clear */
			using NACKCF 	= reg_t<wo_t, 0X4000541C, 4, 1>;	 /*!<Not Acknowledge flag clear */
			using ADDRCF 	= reg_t<wo_t, 0X4000541C, 3, 1>;	 /*!<Address Matched flag clear */
		}
		/*!
		PEC register
		*/
		namespace PECR{
			using PEC 	= reg_t<ro_t, 0X40005420, 0, 8>;	 /*!<Packet error checking register */
		}
		/*!
		Receive data register
		*/
		namespace RXDR{
			using RXDATA 	= reg_t<ro_t, 0X40005424, 0, 8>;	 /*!<8-bit receive data */
		}
		/*!
		Transmit data register
		*/
		namespace TXDR{
			using TXDATA 	= reg_t<rw_t, 0X40005428, 0, 8>;	 /*!<8-bit transmit data */
		}
	}
	/*!
	Inter-integrated circuit
	BasedOn:I2C1
	*/
	namespace I2C2{
		/*!
		Control register 1
		*/
		namespace CR1{
			using PE 	= reg_t<rw_t, 0X40005800, 0, 1>;	 /*!<Peripheral enable */
			using TXIE 	= reg_t<rw_t, 0X40005800, 1, 1>;	 /*!<TX Interrupt enable */
			using RXIE 	= reg_t<rw_t, 0X40005800, 2, 1>;	 /*!<RX Interrupt enable */
			using ADDRIE 	= reg_t<rw_t, 0X40005800, 3, 1>;	 /*!<Address match interrupt enable (slave only) */
			using NACKIE 	= reg_t<rw_t, 0X40005800, 4, 1>;	 /*!<Not acknowledge received interrupt enable */
			using STOPIE 	= reg_t<rw_t, 0X40005800, 5, 1>;	 /*!<STOP detection Interrupt enable */
			using TCIE 	= reg_t<rw_t, 0X40005800, 6, 1>;	 /*!<Transfer Complete interrupt enable */
			using ERRIE 	= reg_t<rw_t, 0X40005800, 7, 1>;	 /*!<Error interrupts enable */
			using DNF 	= reg_t<rw_t, 0X40005800, 8, 4>;	 /*!<Digital noise filter */
			using ANFOFF 	= reg_t<rw_t, 0X40005800, 12, 1>;	 /*!<Analog noise filter OFF */
			using SWRST 	= reg_t<wo_t, 0X40005800, 13, 1>;	 /*!<Software reset */
			using TXDMAEN 	= reg_t<rw_t, 0X40005800, 14, 1>;	 /*!<DMA transmission requests enable */
			using RXDMAEN 	= reg_t<rw_t, 0X40005800, 15, 1>;	 /*!<DMA reception requests enable */
			using SBC 	= reg_t<rw_t, 0X40005800, 16, 1>;	 /*!<Slave byte control */
			using NOSTRETCH 	= reg_t<rw_t, 0X40005800, 17, 1>;	 /*!<Clock stretching disable */
			using WUPEN 	= reg_t<rw_t, 0X40005800, 18, 1>;	 /*!<Wakeup from STOP enable */
			using GCEN 	= reg_t<rw_t, 0X40005800, 19, 1>;	 /*!<General call enable */
			using SMBHEN 	= reg_t<rw_t, 0X40005800, 20, 1>;	 /*!<SMBus Host address enable */
			using SMBDEN 	= reg_t<rw_t, 0X40005800, 21, 1>;	 /*!<SMBus Device Default address enable */
			using ALERTEN 	= reg_t<rw_t, 0X40005800, 22, 1>;	 /*!<SMBUS alert enable */
			using PECEN 	= reg_t<rw_t, 0X40005800, 23, 1>;	 /*!<PEC enable */
		}
		/*!
		Control register 2
		*/
		namespace CR2{
			using PECBYTE 	= reg_t<rw_t, 0X40005804, 26, 1>;	 /*!<Packet error checking byte */
			using AUTOEND 	= reg_t<rw_t, 0X40005804, 25, 1>;	 /*!<Automatic end mode (master mode) */
			using RELOAD 	= reg_t<rw_t, 0X40005804, 24, 1>;	 /*!<NBYTES reload mode */
			using NBYTES 	= reg_t<rw_t, 0X40005804, 16, 8>;	 /*!<Number of bytes */
			using NACK 	= reg_t<rw_t, 0X40005804, 15, 1>;	 /*!<NACK generation (slave mode) */
			using STOP 	= reg_t<rw_t, 0X40005804, 14, 1>;	 /*!<Stop generation (master mode) */
			using START 	= reg_t<rw_t, 0X40005804, 13, 1>;	 /*!<Start generation */
			using HEAD10R 	= reg_t<rw_t, 0X40005804, 12, 1>;	 /*!<10-bit address header only read direction (master receiver mode) */
			using ADD10 	= reg_t<rw_t, 0X40005804, 11, 1>;	 /*!<10-bit addressing mode (master mode) */
			using RD_WRN 	= reg_t<rw_t, 0X40005804, 10, 1>;	 /*!<Transfer direction (master mode) */
			using SADD8 	= reg_t<rw_t, 0X40005804, 8, 2>;	 /*!<Slave address bit 9:8 (master mode) */
			using SADD1 	= reg_t<rw_t, 0X40005804, 1, 7>;	 /*!<Slave address bit 7:1 (master mode) */
			using SADD0 	= reg_t<rw_t, 0X40005804, 0, 1>;	 /*!<Slave address bit 0 (master mode) */
		}
		/*!
		Own address register 1
		*/
		namespace OAR1{
			using OA1_0 	= reg_t<rw_t, 0X40005808, 0, 1>;	 /*!<Interface address */
			using OA1_1 	= reg_t<rw_t, 0X40005808, 1, 7>;	 /*!<Interface address */
			using OA1_8 	= reg_t<rw_t, 0X40005808, 8, 2>;	 /*!<Interface address */
			using OA1MODE 	= reg_t<rw_t, 0X40005808, 10, 1>;	 /*!<Own Address 1 10-bit mode */
			using OA1EN 	= reg_t<rw_t, 0X40005808, 15, 1>;	 /*!<Own Address 1 enable */
		}
		/*!
		Own address register 2
		*/
		namespace OAR2{
			using OA2 	= reg_t<rw_t, 0X4000580C, 1, 7>;	 /*!<Interface address */
			using OA2MSK 	= reg_t<rw_t, 0X4000580C, 8, 3>;	 /*!<Own Address 2 masks */
			using OA2EN 	= reg_t<rw_t, 0X4000580C, 15, 1>;	 /*!<Own Address 2 enable */
		}
		/*!
		Timing register
		*/
		namespace TIMINGR{
			using SCLL 	= reg_t<rw_t, 0X40005810, 0, 8>;	 /*!<SCL low period (master mode) */
			using SCLH 	= reg_t<rw_t, 0X40005810, 8, 8>;	 /*!<SCL high period (master mode) */
			using SDADEL 	= reg_t<rw_t, 0X40005810, 16, 4>;	 /*!<Data hold time */
			using SCLDEL 	= reg_t<rw_t, 0X40005810, 20, 4>;	 /*!<Data setup time */
			using PRESC 	= reg_t<rw_t, 0X40005810, 28, 4>;	 /*!<Timing prescaler */
		}
		/*!
		Status register 1
		*/
		namespace TIMEOUTR{
			using TIMEOUTA 	= reg_t<rw_t, 0X40005814, 0, 12>;	 /*!<Bus timeout A */
			using TIDLE 	= reg_t<rw_t, 0X40005814, 12, 1>;	 /*!<Idle clock timeout detection */
			using TIMOUTEN 	= reg_t<rw_t, 0X40005814, 15, 1>;	 /*!<Clock timeout enable */
			using TIMEOUTB 	= reg_t<rw_t, 0X40005814, 16, 12>;	 /*!<Bus timeout B */
			using TEXTEN 	= reg_t<rw_t, 0X40005814, 31, 1>;	 /*!<Extended clock timeout enable */
		}
		/*!
		Interrupt and Status register
		*/
		namespace ISR{
			using ADDCODE 	= reg_t<ro_t, 0X40005818, 17, 7>;	 /*!<Address match code (Slave mode) */
			using DIR 	= reg_t<ro_t, 0X40005818, 16, 1>;	 /*!<Transfer direction (Slave mode) */
			using BUSY 	= reg_t<ro_t, 0X40005818, 15, 1>;	 /*!<Bus busy */
			using ALERT 	= reg_t<ro_t, 0X40005818, 13, 1>;	 /*!<SMBus alert */
			using TIMEOUT 	= reg_t<ro_t, 0X40005818, 12, 1>;	 /*!<Timeout or t_low detection flag */
			using PECERR 	= reg_t<ro_t, 0X40005818, 11, 1>;	 /*!<PEC Error in reception */
			using OVR 	= reg_t<ro_t, 0X40005818, 10, 1>;	 /*!<Overrun/Underrun (slave mode) */
			using ARLO 	= reg_t<ro_t, 0X40005818, 9, 1>;	 /*!<Arbitration lost */
			using BERR 	= reg_t<ro_t, 0X40005818, 8, 1>;	 /*!<Bus error */
			using TCR 	= reg_t<ro_t, 0X40005818, 7, 1>;	 /*!<Transfer Complete Reload */
			using TC 	= reg_t<ro_t, 0X40005818, 6, 1>;	 /*!<Transfer Complete (master mode) */
			using STOPF 	= reg_t<ro_t, 0X40005818, 5, 1>;	 /*!<Stop detection flag */
			using NACKF 	= reg_t<ro_t, 0X40005818, 4, 1>;	 /*!<Not acknowledge received flag */
			using ADDR 	= reg_t<ro_t, 0X40005818, 3, 1>;	 /*!<Address matched (slave mode) */
			using RXNE 	= reg_t<ro_t, 0X40005818, 2, 1>;	 /*!<Receive data register not empty (receivers) */
			using TXIS 	= reg_t<rw_t, 0X40005818, 1, 1>;	 /*!<Transmit interrupt status (transmitters) */
			using TXE 	= reg_t<rw_t, 0X40005818, 0, 1>;	 /*!<Transmit data register empty (transmitters) */
		}
		/*!
		Interrupt clear register
		*/
		namespace ICR{
			using ALERTCF 	= reg_t<wo_t, 0X4000581C, 13, 1>;	 /*!<Alert flag clear */
			using TIMOUTCF 	= reg_t<wo_t, 0X4000581C, 12, 1>;	 /*!<Timeout detection flag clear */
			using PECCF 	= reg_t<wo_t, 0X4000581C, 11, 1>;	 /*!<PEC Error flag clear */
			using OVRCF 	= reg_t<wo_t, 0X4000581C, 10, 1>;	 /*!<Overrun/Underrun flag clear */
			using ARLOCF 	= reg_t<wo_t, 0X4000581C, 9, 1>;	 /*!<Arbitration lost flag clear */
			using BERRCF 	= reg_t<wo_t, 0X4000581C, 8, 1>;	 /*!<Bus error flag clear */
			using STOPCF 	= reg_t<wo_t, 0X4000581C, 5, 1>;	 /*!<Stop detection flag clear */
			using NACKCF 	= reg_t<wo_t, 0X4000581C, 4, 1>;	 /*!<Not Acknowledge flag clear */
			using ADDRCF 	= reg_t<wo_t, 0X4000581C, 3, 1>;	 /*!<Address Matched flag clear */
		}
		/*!
		PEC register
		*/
		namespace PECR{
			using PEC 	= reg_t<ro_t, 0X40005820, 0, 8>;	 /*!<Packet error checking register */
		}
		/*!
		Receive data register
		*/
		namespace RXDR{
			using RXDATA 	= reg_t<ro_t, 0X40005824, 0, 8>;	 /*!<8-bit receive data */
		}
		/*!
		Transmit data register
		*/
		namespace TXDR{
			using TXDATA 	= reg_t<rw_t, 0X40005828, 0, 8>;	 /*!<8-bit transmit data */
		}
	}
	/*!
	Independent watchdog
	*/
	namespace IWDG{
		/*!
		Key register
		*/
		namespace KR{
			using KEY 	= reg_t<wo_t, 0X40003000, 0, 16>;	 /*!<Key value */
		}
		/*!
		Prescaler register
		*/
		namespace PR{
			using PR 	= reg_t<rw_t, 0X40003004, 0, 3>;	 /*!<Prescaler divider */
		}
		/*!
		Reload register
		*/
		namespace RLR{
			using RL 	= reg_t<rw_t, 0X40003008, 0, 12>;	 /*!<Watchdog counter reload value */
		}
		/*!
		Status register
		*/
		namespace SR{
			using PVU 	= reg_t<ro_t, 0X4000300C, 0, 1>;	 /*!<Watchdog prescaler value update */
			using RVU 	= reg_t<ro_t, 0X4000300C, 1, 1>;	 /*!<Watchdog counter reload value update */
			using WVU 	= reg_t<ro_t, 0X4000300C, 2, 1>;	 /*!<Watchdog counter window value update */
		}
		/*!
		Window register
		*/
		namespace WINR{
			using WIN 	= reg_t<rw_t, 0X40003010, 0, 12>;	 /*!<Watchdog counter window value */
		}
	}
	/*!
	Window watchdog
	*/
	namespace WWDG{
		/*!
		Control register
		*/
		namespace CR{
			using WDGA 	= reg_t<rw_t, 0X40002C00, 7, 1>;	 /*!<Activation bit */
			using T 	= reg_t<rw_t, 0X40002C00, 0, 7>;	 /*!<7-bit counter */
		}
		/*!
		Configuration register
		*/
		namespace CFR{
			using EWI 	= reg_t<rw_t, 0X40002C04, 9, 1>;	 /*!<Early wakeup interrupt */
			using WDGTB 	= reg_t<rw_t, 0X40002C04, 7, 2>;	 /*!<Timer base */
			using W 	= reg_t<rw_t, 0X40002C04, 0, 7>;	 /*!<7-bit window value */
		}
		/*!
		Status register
		*/
		namespace SR{
			using EWIF 	= reg_t<rw_t, 0X40002C08, 0, 1>;	 /*!<Early wakeup interrupt flag */
		}
	}
	/*!
	Advanced-timers
	*/
	namespace TIM1{
		/*!
		control register 1
		*/
		namespace CR1{
			using CKD 	= reg_t<rw_t, 0X40012C00, 8, 2>;	 /*!<Clock division */
			using ARPE 	= reg_t<rw_t, 0X40012C00, 7, 1>;	 /*!<Auto-reload preload enable */
			using CMS 	= reg_t<rw_t, 0X40012C00, 5, 2>;	 /*!<Center-aligned mode selection */
			using DIR 	= reg_t<rw_t, 0X40012C00, 4, 1>;	 /*!<Direction */
			using OPM 	= reg_t<rw_t, 0X40012C00, 3, 1>;	 /*!<One-pulse mode */
			using URS 	= reg_t<rw_t, 0X40012C00, 2, 1>;	 /*!<Update request source */
			using UDIS 	= reg_t<rw_t, 0X40012C00, 1, 1>;	 /*!<Update disable */
			using CEN 	= reg_t<rw_t, 0X40012C00, 0, 1>;	 /*!<Counter enable */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using OIS4 	= reg_t<rw_t, 0X40012C04, 14, 1>;	 /*!<Output Idle state 4 */
			using OIS3N 	= reg_t<rw_t, 0X40012C04, 13, 1>;	 /*!<Output Idle state 3 */
			using OIS3 	= reg_t<rw_t, 0X40012C04, 12, 1>;	 /*!<Output Idle state 3 */
			using OIS2N 	= reg_t<rw_t, 0X40012C04, 11, 1>;	 /*!<Output Idle state 2 */
			using OIS2 	= reg_t<rw_t, 0X40012C04, 10, 1>;	 /*!<Output Idle state 2 */
			using OIS1N 	= reg_t<rw_t, 0X40012C04, 9, 1>;	 /*!<Output Idle state 1 */
			using OIS1 	= reg_t<rw_t, 0X40012C04, 8, 1>;	 /*!<Output Idle state 1 */
			using TI1S 	= reg_t<rw_t, 0X40012C04, 7, 1>;	 /*!<TI1 selection */
			using MMS 	= reg_t<rw_t, 0X40012C04, 4, 3>;	 /*!<Master mode selection */
			using CCDS 	= reg_t<rw_t, 0X40012C04, 3, 1>;	 /*!<Capture/compare DMA selection */
			using CCUS 	= reg_t<rw_t, 0X40012C04, 2, 1>;	 /*!<Capture/compare control update selection */
			using CCPC 	= reg_t<rw_t, 0X40012C04, 0, 1>;	 /*!<Capture/compare preloaded control */
		}
		/*!
		slave mode control register
		*/
		namespace SMCR{
			using ETP 	= reg_t<rw_t, 0X40012C08, 15, 1>;	 /*!<External trigger polarity */
			using ECE 	= reg_t<rw_t, 0X40012C08, 14, 1>;	 /*!<External clock enable */
			using ETPS 	= reg_t<rw_t, 0X40012C08, 12, 2>;	 /*!<External trigger prescaler */
			using ETF 	= reg_t<rw_t, 0X40012C08, 8, 4>;	 /*!<External trigger filter */
			using MSM 	= reg_t<rw_t, 0X40012C08, 7, 1>;	 /*!<Master/Slave mode */
			using TS 	= reg_t<rw_t, 0X40012C08, 4, 3>;	 /*!<Trigger selection */
			using SMS 	= reg_t<rw_t, 0X40012C08, 0, 3>;	 /*!<Slave mode selection */
		}
		/*!
		DMA/Interrupt enable register
		*/
		namespace DIER{
			using TDE 	= reg_t<rw_t, 0X40012C0C, 14, 1>;	 /*!<Trigger DMA request enable */
			using COMDE 	= reg_t<rw_t, 0X40012C0C, 13, 1>;	 /*!<Reserved */
			using CC4DE 	= reg_t<rw_t, 0X40012C0C, 12, 1>;	 /*!<Capture/Compare 4 DMA request enable */
			using CC3DE 	= reg_t<rw_t, 0X40012C0C, 11, 1>;	 /*!<Capture/Compare 3 DMA request enable */
			using CC2DE 	= reg_t<rw_t, 0X40012C0C, 10, 1>;	 /*!<Capture/Compare 2 DMA request enable */
			using CC1DE 	= reg_t<rw_t, 0X40012C0C, 9, 1>;	 /*!<Capture/Compare 1 DMA request enable */
			using UDE 	= reg_t<rw_t, 0X40012C0C, 8, 1>;	 /*!<Update DMA request enable */
			using BIE 	= reg_t<rw_t, 0X40012C0C, 7, 1>;	 /*!<Break interrupt enable */
			using TIE 	= reg_t<rw_t, 0X40012C0C, 6, 1>;	 /*!<Trigger interrupt enable */
			using COMIE 	= reg_t<rw_t, 0X40012C0C, 5, 1>;	 /*!<COM interrupt enable */
			using CC4IE 	= reg_t<rw_t, 0X40012C0C, 4, 1>;	 /*!<Capture/Compare 4 interrupt enable */
			using CC3IE 	= reg_t<rw_t, 0X40012C0C, 3, 1>;	 /*!<Capture/Compare 3 interrupt enable */
			using CC2IE 	= reg_t<rw_t, 0X40012C0C, 2, 1>;	 /*!<Capture/Compare 2 interrupt enable */
			using CC1IE 	= reg_t<rw_t, 0X40012C0C, 1, 1>;	 /*!<Capture/Compare 1 interrupt enable */
			using UIE 	= reg_t<rw_t, 0X40012C0C, 0, 1>;	 /*!<Update interrupt enable */
		}
		/*!
		status register
		*/
		namespace SR{
			using CC4OF 	= reg_t<rw_t, 0X40012C10, 12, 1>;	 /*!<Capture/Compare 4 overcapture flag */
			using CC3OF 	= reg_t<rw_t, 0X40012C10, 11, 1>;	 /*!<Capture/Compare 3 overcapture flag */
			using CC2OF 	= reg_t<rw_t, 0X40012C10, 10, 1>;	 /*!<Capture/compare 2 overcapture flag */
			using CC1OF 	= reg_t<rw_t, 0X40012C10, 9, 1>;	 /*!<Capture/Compare 1 overcapture flag */
			using BIF 	= reg_t<rw_t, 0X40012C10, 7, 1>;	 /*!<Break interrupt flag */
			using TIF 	= reg_t<rw_t, 0X40012C10, 6, 1>;	 /*!<Trigger interrupt flag */
			using COMIF 	= reg_t<rw_t, 0X40012C10, 5, 1>;	 /*!<COM interrupt flag */
			using CC4IF 	= reg_t<rw_t, 0X40012C10, 4, 1>;	 /*!<Capture/Compare 4 interrupt flag */
			using CC3IF 	= reg_t<rw_t, 0X40012C10, 3, 1>;	 /*!<Capture/Compare 3 interrupt flag */
			using CC2IF 	= reg_t<rw_t, 0X40012C10, 2, 1>;	 /*!<Capture/Compare 2 interrupt flag */
			using CC1IF 	= reg_t<rw_t, 0X40012C10, 1, 1>;	 /*!<Capture/compare 1 interrupt flag */
			using UIF 	= reg_t<rw_t, 0X40012C10, 0, 1>;	 /*!<Update interrupt flag */
		}
		/*!
		event generation register
		*/
		namespace EGR{
			using BG 	= reg_t<wo_t, 0X40012C14, 7, 1>;	 /*!<Break generation */
			using TG 	= reg_t<wo_t, 0X40012C14, 6, 1>;	 /*!<Trigger generation */
			using COMG 	= reg_t<wo_t, 0X40012C14, 5, 1>;	 /*!<Capture/Compare control update generation */
			using CC4G 	= reg_t<wo_t, 0X40012C14, 4, 1>;	 /*!<Capture/compare 4 generation */
			using CC3G 	= reg_t<wo_t, 0X40012C14, 3, 1>;	 /*!<Capture/compare 3 generation */
			using CC2G 	= reg_t<wo_t, 0X40012C14, 2, 1>;	 /*!<Capture/compare 2 generation */
			using CC1G 	= reg_t<wo_t, 0X40012C14, 1, 1>;	 /*!<Capture/compare 1 generation */
			using UG 	= reg_t<wo_t, 0X40012C14, 0, 1>;	 /*!<Update generation */
		}
		/*!
		capture/compare mode register (output mode)
		*/
		namespace CCMR1_Output{
			using OC2CE 	= reg_t<rw_t, 0X40012C18, 15, 1>;	 /*!<Output Compare 2 clear enable */
			using OC2M 	= reg_t<rw_t, 0X40012C18, 12, 3>;	 /*!<Output Compare 2 mode */
			using OC2PE 	= reg_t<rw_t, 0X40012C18, 11, 1>;	 /*!<Output Compare 2 preload enable */
			using OC2FE 	= reg_t<rw_t, 0X40012C18, 10, 1>;	 /*!<Output Compare 2 fast enable */
			using CC2S 	= reg_t<rw_t, 0X40012C18, 8, 2>;	 /*!<Capture/Compare 2 selection */
			using OC1CE 	= reg_t<rw_t, 0X40012C18, 7, 1>;	 /*!<Output Compare 1 clear enable */
			using OC1M 	= reg_t<rw_t, 0X40012C18, 4, 3>;	 /*!<Output Compare 1 mode */
			using OC1PE 	= reg_t<rw_t, 0X40012C18, 3, 1>;	 /*!<Output Compare 1 preload enable */
			using OC1FE 	= reg_t<rw_t, 0X40012C18, 2, 1>;	 /*!<Output Compare 1 fast enable */
			using CC1S 	= reg_t<rw_t, 0X40012C18, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare mode register 1 (input mode)
		*/
		namespace CCMR1_Input{
			using IC2F 	= reg_t<rw_t, 0X40012C18, 12, 4>;	 /*!<Input capture 2 filter */
			using IC2PCS 	= reg_t<rw_t, 0X40012C18, 10, 2>;	 /*!<Input capture 2 prescaler */
			using CC2S 	= reg_t<rw_t, 0X40012C18, 8, 2>;	 /*!<Capture/Compare 2 selection */
			using IC1F 	= reg_t<rw_t, 0X40012C18, 4, 4>;	 /*!<Input capture 1 filter */
			using IC1PCS 	= reg_t<rw_t, 0X40012C18, 2, 2>;	 /*!<Input capture 1 prescaler */
			using CC1S 	= reg_t<rw_t, 0X40012C18, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare mode register (output mode)
		*/
		namespace CCMR2_Output{
			using OC4CE 	= reg_t<rw_t, 0X40012C1C, 15, 1>;	 /*!<Output compare 4 clear enable */
			using OC4M 	= reg_t<rw_t, 0X40012C1C, 12, 3>;	 /*!<Output compare 4 mode */
			using OC4PE 	= reg_t<rw_t, 0X40012C1C, 11, 1>;	 /*!<Output compare 4 preload enable */
			using OC4FE 	= reg_t<rw_t, 0X40012C1C, 10, 1>;	 /*!<Output compare 4 fast enable */
			using CC4S 	= reg_t<rw_t, 0X40012C1C, 8, 2>;	 /*!<Capture/Compare 4 selection */
			using OC3CE 	= reg_t<rw_t, 0X40012C1C, 7, 1>;	 /*!<Output compare 3 clear enable */
			using OC3M 	= reg_t<rw_t, 0X40012C1C, 4, 3>;	 /*!<Output compare 3 mode */
			using OC3PE 	= reg_t<rw_t, 0X40012C1C, 3, 1>;	 /*!<Output compare 3 preload enable */
			using OC3FE 	= reg_t<rw_t, 0X40012C1C, 2, 1>;	 /*!<Output compare 3 fast enable */
			using CC3S 	= reg_t<rw_t, 0X40012C1C, 0, 2>;	 /*!<Capture/Compare 3 selection */
		}
		/*!
		capture/compare mode register 2 (input mode)
		*/
		namespace CCMR2_Input{
			using IC4F 	= reg_t<rw_t, 0X40012C1C, 12, 4>;	 /*!<Input capture 4 filter */
			using IC4PSC 	= reg_t<rw_t, 0X40012C1C, 10, 2>;	 /*!<Input capture 4 prescaler */
			using CC4S 	= reg_t<rw_t, 0X40012C1C, 8, 2>;	 /*!<Capture/Compare 4 selection */
			using IC3F 	= reg_t<rw_t, 0X40012C1C, 4, 4>;	 /*!<Input capture 3 filter */
			using IC3PSC 	= reg_t<rw_t, 0X40012C1C, 2, 2>;	 /*!<Input capture 3 prescaler */
			using CC3S 	= reg_t<rw_t, 0X40012C1C, 0, 2>;	 /*!<Capture/compare 3 selection */
		}
		/*!
		capture/compare enable register
		*/
		namespace CCER{
			using CC4P 	= reg_t<rw_t, 0X40012C20, 13, 1>;	 /*!<Capture/Compare 3 output Polarity */
			using CC4E 	= reg_t<rw_t, 0X40012C20, 12, 1>;	 /*!<Capture/Compare 4 output enable */
			using CC3NP 	= reg_t<rw_t, 0X40012C20, 11, 1>;	 /*!<Capture/Compare 3 output Polarity */
			using CC3NE 	= reg_t<rw_t, 0X40012C20, 10, 1>;	 /*!<Capture/Compare 3 complementary output enable */
			using CC3P 	= reg_t<rw_t, 0X40012C20, 9, 1>;	 /*!<Capture/Compare 3 output Polarity */
			using CC3E 	= reg_t<rw_t, 0X40012C20, 8, 1>;	 /*!<Capture/Compare 3 output enable */
			using CC2NP 	= reg_t<rw_t, 0X40012C20, 7, 1>;	 /*!<Capture/Compare 2 output Polarity */
			using CC2NE 	= reg_t<rw_t, 0X40012C20, 6, 1>;	 /*!<Capture/Compare 2 complementary output enable */
			using CC2P 	= reg_t<rw_t, 0X40012C20, 5, 1>;	 /*!<Capture/Compare 2 output Polarity */
			using CC2E 	= reg_t<rw_t, 0X40012C20, 4, 1>;	 /*!<Capture/Compare 2 output enable */
			using CC1NP 	= reg_t<rw_t, 0X40012C20, 3, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1NE 	= reg_t<rw_t, 0X40012C20, 2, 1>;	 /*!<Capture/Compare 1 complementary output enable */
			using CC1P 	= reg_t<rw_t, 0X40012C20, 1, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1E 	= reg_t<rw_t, 0X40012C20, 0, 1>;	 /*!<Capture/Compare 1 output enable */
		}
		/*!
		counter
		*/
		namespace CNT{
			using CNT 	= reg_t<rw_t, 0X40012C24, 0, 16>;	 /*!<counter value */
		}
		/*!
		prescaler
		*/
		namespace PSC{
			using PSC 	= reg_t<rw_t, 0X40012C28, 0, 16>;	 /*!<Prescaler value */
		}
		/*!
		auto-reload register
		*/
		namespace ARR{
			using ARR 	= reg_t<rw_t, 0X40012C2C, 0, 16>;	 /*!<Auto-reload value */
		}
		/*!
		repetition counter register
		*/
		namespace RCR{
			using REP 	= reg_t<rw_t, 0X40012C30, 0, 8>;	 /*!<Repetition counter value */
		}
		/*!
		capture/compare register 1
		*/
		namespace CCR1{
			using CCR1 	= reg_t<rw_t, 0X40012C34, 0, 16>;	 /*!<Capture/Compare 1 value */
		}
		/*!
		capture/compare register 2
		*/
		namespace CCR2{
			using CCR2 	= reg_t<rw_t, 0X40012C38, 0, 16>;	 /*!<Capture/Compare 2 value */
		}
		/*!
		capture/compare register 3
		*/
		namespace CCR3{
			using CCR3 	= reg_t<rw_t, 0X40012C3C, 0, 16>;	 /*!<Capture/Compare 3 value */
		}
		/*!
		capture/compare register 4
		*/
		namespace CCR4{
			using CCR4 	= reg_t<rw_t, 0X40012C40, 0, 16>;	 /*!<Capture/Compare 3 value */
		}
		/*!
		break and dead-time register
		*/
		namespace BDTR{
			using MOE 	= reg_t<rw_t, 0X40012C44, 15, 1>;	 /*!<Main output enable */
			using AOE 	= reg_t<rw_t, 0X40012C44, 14, 1>;	 /*!<Automatic output enable */
			using BKP 	= reg_t<rw_t, 0X40012C44, 13, 1>;	 /*!<Break polarity */
			using BKE 	= reg_t<rw_t, 0X40012C44, 12, 1>;	 /*!<Break enable */
			using OSSR 	= reg_t<rw_t, 0X40012C44, 11, 1>;	 /*!<Off-state selection for Run mode */
			using OSSI 	= reg_t<rw_t, 0X40012C44, 10, 1>;	 /*!<Off-state selection for Idle mode */
			using LOCK 	= reg_t<rw_t, 0X40012C44, 8, 2>;	 /*!<Lock configuration */
			using DTG 	= reg_t<rw_t, 0X40012C44, 0, 8>;	 /*!<Dead-time generator setup */
		}
		/*!
		DMA control register
		*/
		namespace DCR{
			using DBL 	= reg_t<rw_t, 0X40012C48, 8, 5>;	 /*!<DMA burst length */
			using DBA 	= reg_t<rw_t, 0X40012C48, 0, 5>;	 /*!<DMA base address */
		}
		/*!
		DMA address for full transfer
		*/
		namespace DMAR{
			using DMAB 	= reg_t<rw_t, 0X40012C4C, 0, 16>;	 /*!<DMA register for burst accesses */
		}
	}
	/*!
	General-purpose-timers
	*/
	namespace TIM3{
		/*!
		control register 1
		*/
		namespace CR1{
			using CKD 	= reg_t<rw_t, 0X40000400, 8, 2>;	 /*!<Clock division */
			using ARPE 	= reg_t<rw_t, 0X40000400, 7, 1>;	 /*!<Auto-reload preload enable */
			using CMS 	= reg_t<rw_t, 0X40000400, 5, 2>;	 /*!<Center-aligned mode selection */
			using DIR 	= reg_t<rw_t, 0X40000400, 4, 1>;	 /*!<Direction */
			using OPM 	= reg_t<rw_t, 0X40000400, 3, 1>;	 /*!<One-pulse mode */
			using URS 	= reg_t<rw_t, 0X40000400, 2, 1>;	 /*!<Update request source */
			using UDIS 	= reg_t<rw_t, 0X40000400, 1, 1>;	 /*!<Update disable */
			using CEN 	= reg_t<rw_t, 0X40000400, 0, 1>;	 /*!<Counter enable */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using TI1S 	= reg_t<rw_t, 0X40000404, 7, 1>;	 /*!<TI1 selection */
			using MMS 	= reg_t<rw_t, 0X40000404, 4, 3>;	 /*!<Master mode selection */
			using CCDS 	= reg_t<rw_t, 0X40000404, 3, 1>;	 /*!<Capture/compare DMA selection */
		}
		/*!
		slave mode control register
		*/
		namespace SMCR{
			using ETP 	= reg_t<rw_t, 0X40000408, 15, 1>;	 /*!<External trigger polarity */
			using ECE 	= reg_t<rw_t, 0X40000408, 14, 1>;	 /*!<External clock enable */
			using ETPS 	= reg_t<rw_t, 0X40000408, 12, 2>;	 /*!<External trigger prescaler */
			using ETF 	= reg_t<rw_t, 0X40000408, 8, 4>;	 /*!<External trigger filter */
			using MSM 	= reg_t<rw_t, 0X40000408, 7, 1>;	 /*!<Master/Slave mode */
			using TS 	= reg_t<rw_t, 0X40000408, 4, 3>;	 /*!<Trigger selection */
			using SMS 	= reg_t<rw_t, 0X40000408, 0, 3>;	 /*!<Slave mode selection */
		}
		/*!
		DMA/Interrupt enable register
		*/
		namespace DIER{
			using TDE 	= reg_t<rw_t, 0X4000040C, 14, 1>;	 /*!<Trigger DMA request enable */
			using COMDE 	= reg_t<rw_t, 0X4000040C, 13, 1>;	 /*!<Reserved */
			using CC4DE 	= reg_t<rw_t, 0X4000040C, 12, 1>;	 /*!<Capture/Compare 4 DMA request enable */
			using CC3DE 	= reg_t<rw_t, 0X4000040C, 11, 1>;	 /*!<Capture/Compare 3 DMA request enable */
			using CC2DE 	= reg_t<rw_t, 0X4000040C, 10, 1>;	 /*!<Capture/Compare 2 DMA request enable */
			using CC1DE 	= reg_t<rw_t, 0X4000040C, 9, 1>;	 /*!<Capture/Compare 1 DMA request enable */
			using UDE 	= reg_t<rw_t, 0X4000040C, 8, 1>;	 /*!<Update DMA request enable */
			using TIE 	= reg_t<rw_t, 0X4000040C, 6, 1>;	 /*!<Trigger interrupt enable */
			using CC4IE 	= reg_t<rw_t, 0X4000040C, 4, 1>;	 /*!<Capture/Compare 4 interrupt enable */
			using CC3IE 	= reg_t<rw_t, 0X4000040C, 3, 1>;	 /*!<Capture/Compare 3 interrupt enable */
			using CC2IE 	= reg_t<rw_t, 0X4000040C, 2, 1>;	 /*!<Capture/Compare 2 interrupt enable */
			using CC1IE 	= reg_t<rw_t, 0X4000040C, 1, 1>;	 /*!<Capture/Compare 1 interrupt enable */
			using UIE 	= reg_t<rw_t, 0X4000040C, 0, 1>;	 /*!<Update interrupt enable */
		}
		/*!
		status register
		*/
		namespace SR{
			using CC4OF 	= reg_t<rw_t, 0X40000410, 12, 1>;	 /*!<Capture/Compare 4 overcapture flag */
			using CC3OF 	= reg_t<rw_t, 0X40000410, 11, 1>;	 /*!<Capture/Compare 3 overcapture flag */
			using CC2OF 	= reg_t<rw_t, 0X40000410, 10, 1>;	 /*!<Capture/compare 2 overcapture flag */
			using CC1OF 	= reg_t<rw_t, 0X40000410, 9, 1>;	 /*!<Capture/Compare 1 overcapture flag */
			using TIF 	= reg_t<rw_t, 0X40000410, 6, 1>;	 /*!<Trigger interrupt flag */
			using CC4IF 	= reg_t<rw_t, 0X40000410, 4, 1>;	 /*!<Capture/Compare 4 interrupt flag */
			using CC3IF 	= reg_t<rw_t, 0X40000410, 3, 1>;	 /*!<Capture/Compare 3 interrupt flag */
			using CC2IF 	= reg_t<rw_t, 0X40000410, 2, 1>;	 /*!<Capture/Compare 2 interrupt flag */
			using CC1IF 	= reg_t<rw_t, 0X40000410, 1, 1>;	 /*!<Capture/compare 1 interrupt flag */
			using UIF 	= reg_t<rw_t, 0X40000410, 0, 1>;	 /*!<Update interrupt flag */
		}
		/*!
		event generation register
		*/
		namespace EGR{
			using TG 	= reg_t<wo_t, 0X40000414, 6, 1>;	 /*!<Trigger generation */
			using CC4G 	= reg_t<wo_t, 0X40000414, 4, 1>;	 /*!<Capture/compare 4 generation */
			using CC3G 	= reg_t<wo_t, 0X40000414, 3, 1>;	 /*!<Capture/compare 3 generation */
			using CC2G 	= reg_t<wo_t, 0X40000414, 2, 1>;	 /*!<Capture/compare 2 generation */
			using CC1G 	= reg_t<wo_t, 0X40000414, 1, 1>;	 /*!<Capture/compare 1 generation */
			using UG 	= reg_t<wo_t, 0X40000414, 0, 1>;	 /*!<Update generation */
		}
		/*!
		capture/compare mode register 1 (output mode)
		*/
		namespace CCMR1_Output{
			using OC2CE 	= reg_t<rw_t, 0X40000418, 15, 1>;	 /*!<Output compare 2 clear enable */
			using OC2M 	= reg_t<rw_t, 0X40000418, 12, 3>;	 /*!<Output compare 2 mode */
			using OC2PE 	= reg_t<rw_t, 0X40000418, 11, 1>;	 /*!<Output compare 2 preload enable */
			using OC2FE 	= reg_t<rw_t, 0X40000418, 10, 1>;	 /*!<Output compare 2 fast enable */
			using CC2S 	= reg_t<rw_t, 0X40000418, 8, 2>;	 /*!<Capture/Compare 2 selection */
			using OC1CE 	= reg_t<rw_t, 0X40000418, 7, 1>;	 /*!<Output compare 1 clear enable */
			using OC1M 	= reg_t<rw_t, 0X40000418, 4, 3>;	 /*!<Output compare 1 mode */
			using OC1PE 	= reg_t<rw_t, 0X40000418, 3, 1>;	 /*!<Output compare 1 preload enable */
			using OC1FE 	= reg_t<rw_t, 0X40000418, 2, 1>;	 /*!<Output compare 1 fast enable */
			using CC1S 	= reg_t<rw_t, 0X40000418, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare mode register 1 (input mode)
		*/
		namespace CCMR1_Input{
			using IC2F 	= reg_t<rw_t, 0X40000418, 12, 4>;	 /*!<Input capture 2 filter */
			using IC2PSC 	= reg_t<rw_t, 0X40000418, 10, 2>;	 /*!<Input capture 2 prescaler */
			using CC2S 	= reg_t<rw_t, 0X40000418, 8, 2>;	 /*!<Capture/compare 2 selection */
			using IC1F 	= reg_t<rw_t, 0X40000418, 4, 4>;	 /*!<Input capture 1 filter */
			using IC1PSC 	= reg_t<rw_t, 0X40000418, 2, 2>;	 /*!<Input capture 1 prescaler */
			using CC1S 	= reg_t<rw_t, 0X40000418, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare mode register 2 (output mode)
		*/
		namespace CCMR2_Output{
			using OC4CE 	= reg_t<rw_t, 0X4000041C, 15, 1>;	 /*!<Output compare 4 clear enable */
			using OC4M 	= reg_t<rw_t, 0X4000041C, 12, 3>;	 /*!<Output compare 4 mode */
			using OC4PE 	= reg_t<rw_t, 0X4000041C, 11, 1>;	 /*!<Output compare 4 preload enable */
			using OC4FE 	= reg_t<rw_t, 0X4000041C, 10, 1>;	 /*!<Output compare 4 fast enable */
			using CC4S 	= reg_t<rw_t, 0X4000041C, 8, 2>;	 /*!<Capture/Compare 4 selection */
			using OC3CE 	= reg_t<rw_t, 0X4000041C, 7, 1>;	 /*!<Output compare 3 clear enable */
			using OC3M 	= reg_t<rw_t, 0X4000041C, 4, 3>;	 /*!<Output compare 3 mode */
			using OC3PE 	= reg_t<rw_t, 0X4000041C, 3, 1>;	 /*!<Output compare 3 preload enable */
			using OC3FE 	= reg_t<rw_t, 0X4000041C, 2, 1>;	 /*!<Output compare 3 fast enable */
			using CC3S 	= reg_t<rw_t, 0X4000041C, 0, 2>;	 /*!<Capture/Compare 3 selection */
		}
		/*!
		capture/compare mode register 2 (input mode)
		*/
		namespace CCMR2_Input{
			using IC4F 	= reg_t<rw_t, 0X4000041C, 12, 4>;	 /*!<Input capture 4 filter */
			using IC4PSC 	= reg_t<rw_t, 0X4000041C, 10, 2>;	 /*!<Input capture 4 prescaler */
			using CC4S 	= reg_t<rw_t, 0X4000041C, 8, 2>;	 /*!<Capture/Compare 4 selection */
			using IC3F 	= reg_t<rw_t, 0X4000041C, 4, 4>;	 /*!<Input capture 3 filter */
			using IC3PSC 	= reg_t<rw_t, 0X4000041C, 2, 2>;	 /*!<Input capture 3 prescaler */
			using CC3S 	= reg_t<rw_t, 0X4000041C, 0, 2>;	 /*!<Capture/Compare 3 selection */
		}
		/*!
		capture/compare enable register
		*/
		namespace CCER{
			using CC4NP 	= reg_t<rw_t, 0X40000420, 15, 1>;	 /*!<Capture/Compare 4 output Polarity */
			using CC4P 	= reg_t<rw_t, 0X40000420, 13, 1>;	 /*!<Capture/Compare 3 output Polarity */
			using CC4E 	= reg_t<rw_t, 0X40000420, 12, 1>;	 /*!<Capture/Compare 4 output enable */
			using CC3NP 	= reg_t<rw_t, 0X40000420, 11, 1>;	 /*!<Capture/Compare 3 output Polarity */
			using CC3P 	= reg_t<rw_t, 0X40000420, 9, 1>;	 /*!<Capture/Compare 3 output Polarity */
			using CC3E 	= reg_t<rw_t, 0X40000420, 8, 1>;	 /*!<Capture/Compare 3 output enable */
			using CC2NP 	= reg_t<rw_t, 0X40000420, 7, 1>;	 /*!<Capture/Compare 2 output Polarity */
			using CC2P 	= reg_t<rw_t, 0X40000420, 5, 1>;	 /*!<Capture/Compare 2 output Polarity */
			using CC2E 	= reg_t<rw_t, 0X40000420, 4, 1>;	 /*!<Capture/Compare 2 output enable */
			using CC1NP 	= reg_t<rw_t, 0X40000420, 3, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1P 	= reg_t<rw_t, 0X40000420, 1, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1E 	= reg_t<rw_t, 0X40000420, 0, 1>;	 /*!<Capture/Compare 1 output enable */
		}
		/*!
		counter
		*/
		namespace CNT{
			using CNT_H 	= reg_t<rw_t, 0X40000424, 16, 16>;	 /*!<High counter value (TIM2 only) */
			using CNT_L 	= reg_t<rw_t, 0X40000424, 0, 16>;	 /*!<Low counter value */
		}
		/*!
		prescaler
		*/
		namespace PSC{
			using PSC 	= reg_t<rw_t, 0X40000428, 0, 16>;	 /*!<Prescaler value */
		}
		/*!
		auto-reload register
		*/
		namespace ARR{
			using ARR_H 	= reg_t<rw_t, 0X4000042C, 16, 16>;	 /*!<High Auto-reload value (TIM2 only) */
			using ARR_L 	= reg_t<rw_t, 0X4000042C, 0, 16>;	 /*!<Low Auto-reload value */
		}
		/*!
		capture/compare register 1
		*/
		namespace CCR1{
			using CCR1_H 	= reg_t<rw_t, 0X40000434, 16, 16>;	 /*!<High Capture/Compare 1 value (TIM2 only) */
			using CCR1_L 	= reg_t<rw_t, 0X40000434, 0, 16>;	 /*!<Low Capture/Compare 1 value */
		}
		/*!
		capture/compare register 2
		*/
		namespace CCR2{
			using CCR2_H 	= reg_t<rw_t, 0X40000438, 16, 16>;	 /*!<High Capture/Compare 2 value (TIM2 only) */
			using CCR2_L 	= reg_t<rw_t, 0X40000438, 0, 16>;	 /*!<Low Capture/Compare 2 value */
		}
		/*!
		capture/compare register 3
		*/
		namespace CCR3{
			using CCR3_H 	= reg_t<rw_t, 0X4000043C, 16, 16>;	 /*!<High Capture/Compare value (TIM2 only) */
			using CCR3_L 	= reg_t<rw_t, 0X4000043C, 0, 16>;	 /*!<Low Capture/Compare value */
		}
		/*!
		capture/compare register 4
		*/
		namespace CCR4{
			using CCR4_H 	= reg_t<rw_t, 0X40000440, 16, 16>;	 /*!<High Capture/Compare value (TIM2 only) */
			using CCR4_L 	= reg_t<rw_t, 0X40000440, 0, 16>;	 /*!<Low Capture/Compare value */
		}
		/*!
		DMA control register
		*/
		namespace DCR{
			using DBL 	= reg_t<rw_t, 0X40000448, 8, 5>;	 /*!<DMA burst length */
			using DBA 	= reg_t<rw_t, 0X40000448, 0, 5>;	 /*!<DMA base address */
		}
		/*!
		DMA address for full transfer
		*/
		namespace DMAR{
			using DMAR 	= reg_t<rw_t, 0X4000044C, 0, 16>;	 /*!<DMA register for burst accesses */
		}
	}
	/*!
	General-purpose-timers
	*/
	namespace TIM14{
		/*!
		control register 1
		*/
		namespace CR1{
			using CKD 	= reg_t<rw_t, 0X40002000, 8, 2>;	 /*!<Clock division */
			using ARPE 	= reg_t<rw_t, 0X40002000, 7, 1>;	 /*!<Auto-reload preload enable */
			using URS 	= reg_t<rw_t, 0X40002000, 2, 1>;	 /*!<Update request source */
			using UDIS 	= reg_t<rw_t, 0X40002000, 1, 1>;	 /*!<Update disable */
			using CEN 	= reg_t<rw_t, 0X40002000, 0, 1>;	 /*!<Counter enable */
		}
		/*!
		DMA/Interrupt enable register
		*/
		namespace DIER{
			using CC1IE 	= reg_t<rw_t, 0X4000200C, 1, 1>;	 /*!<Capture/Compare 1 interrupt enable */
			using UIE 	= reg_t<rw_t, 0X4000200C, 0, 1>;	 /*!<Update interrupt enable */
		}
		/*!
		status register
		*/
		namespace SR{
			using CC1OF 	= reg_t<rw_t, 0X40002010, 9, 1>;	 /*!<Capture/Compare 1 overcapture flag */
			using CC1IF 	= reg_t<rw_t, 0X40002010, 1, 1>;	 /*!<Capture/compare 1 interrupt flag */
			using UIF 	= reg_t<rw_t, 0X40002010, 0, 1>;	 /*!<Update interrupt flag */
		}
		/*!
		event generation register
		*/
		namespace EGR{
			using CC1G 	= reg_t<wo_t, 0X40002014, 1, 1>;	 /*!<Capture/compare 1 generation */
			using UG 	= reg_t<wo_t, 0X40002014, 0, 1>;	 /*!<Update generation */
		}
		/*!
		capture/compare mode register (output mode)
		*/
		namespace CCMR1_Output{
			using CC1S 	= reg_t<rw_t, 0X40002018, 0, 2>;	 /*!<Capture/Compare 1 selection */
			using OC1FE 	= reg_t<rw_t, 0X40002018, 2, 1>;	 /*!<Output compare 1 fast enable */
			using OC1PE 	= reg_t<rw_t, 0X40002018, 3, 1>;	 /*!<Output Compare 1 preload enable */
			using OC1M 	= reg_t<rw_t, 0X40002018, 4, 3>;	 /*!<Output Compare 1 mode */
		}
		/*!
		capture/compare mode register (input mode)
		*/
		namespace CCMR1_Input{
			using IC1F 	= reg_t<rw_t, 0X40002018, 4, 4>;	 /*!<Input capture 1 filter */
			using IC1PSC 	= reg_t<rw_t, 0X40002018, 2, 2>;	 /*!<Input capture 1 prescaler */
			using CC1S 	= reg_t<rw_t, 0X40002018, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare enable register
		*/
		namespace CCER{
			using CC1NP 	= reg_t<rw_t, 0X40002020, 3, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1P 	= reg_t<rw_t, 0X40002020, 1, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1E 	= reg_t<rw_t, 0X40002020, 0, 1>;	 /*!<Capture/Compare 1 output enable */
		}
		/*!
		counter
		*/
		namespace CNT{
			using CNT 	= reg_t<rw_t, 0X40002024, 0, 16>;	 /*!<counter value */
		}
		/*!
		prescaler
		*/
		namespace PSC{
			using PSC 	= reg_t<rw_t, 0X40002028, 0, 16>;	 /*!<Prescaler value */
		}
		/*!
		auto-reload register
		*/
		namespace ARR{
			using ARR 	= reg_t<rw_t, 0X4000202C, 0, 16>;	 /*!<Auto-reload value */
		}
		/*!
		capture/compare register 1
		*/
		namespace CCR1{
			using CCR1 	= reg_t<rw_t, 0X40002034, 0, 16>;	 /*!<Capture/Compare 1 value */
		}
		/*!
		option register
		*/
		namespace OR{
			using RMP 	= reg_t<rw_t, 0X40002050, 0, 2>;	 /*!<Timer input 1 remap */
		}
	}
	/*!
	Basic-timers
	*/
	namespace TIM6{
		/*!
		control register 1
		*/
		namespace CR1{
			using ARPE 	= reg_t<rw_t, 0X40001000, 7, 1>;	 /*!<Auto-reload preload enable */
			using OPM 	= reg_t<rw_t, 0X40001000, 3, 1>;	 /*!<One-pulse mode */
			using URS 	= reg_t<rw_t, 0X40001000, 2, 1>;	 /*!<Update request source */
			using UDIS 	= reg_t<rw_t, 0X40001000, 1, 1>;	 /*!<Update disable */
			using CEN 	= reg_t<rw_t, 0X40001000, 0, 1>;	 /*!<Counter enable */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using MMS 	= reg_t<rw_t, 0X40001004, 4, 3>;	 /*!<Master mode selection */
		}
		/*!
		DMA/Interrupt enable register
		*/
		namespace DIER{
			using UDE 	= reg_t<rw_t, 0X4000100C, 8, 1>;	 /*!<Update DMA request enable */
			using UIE 	= reg_t<rw_t, 0X4000100C, 0, 1>;	 /*!<Update interrupt enable */
		}
		/*!
		status register
		*/
		namespace SR{
			using UIF 	= reg_t<rw_t, 0X40001010, 0, 1>;	 /*!<Update interrupt flag */
		}
		/*!
		event generation register
		*/
		namespace EGR{
			using UG 	= reg_t<wo_t, 0X40001014, 0, 1>;	 /*!<Update generation */
		}
		/*!
		counter
		*/
		namespace CNT{
			using CNT 	= reg_t<rw_t, 0X40001024, 0, 16>;	 /*!<Low counter value */
		}
		/*!
		prescaler
		*/
		namespace PSC{
			using PSC 	= reg_t<rw_t, 0X40001028, 0, 16>;	 /*!<Prescaler value */
		}
		/*!
		auto-reload register
		*/
		namespace ARR{
			using ARR 	= reg_t<rw_t, 0X4000102C, 0, 16>;	 /*!<Low Auto-reload value */
		}
	}
	/*!
	External interrupt/event controller
	*/
	namespace EXTI{
		/*!
		Interrupt mask register (EXTI_IMR)
		*/
		namespace IMR{
			using MR0 	= reg_t<rw_t, 0X40010400, 0, 1>;	 /*!<Interrupt Mask on line 0 */
			using MR1 	= reg_t<rw_t, 0X40010400, 1, 1>;	 /*!<Interrupt Mask on line 1 */
			using MR2 	= reg_t<rw_t, 0X40010400, 2, 1>;	 /*!<Interrupt Mask on line 2 */
			using MR3 	= reg_t<rw_t, 0X40010400, 3, 1>;	 /*!<Interrupt Mask on line 3 */
			using MR4 	= reg_t<rw_t, 0X40010400, 4, 1>;	 /*!<Interrupt Mask on line 4 */
			using MR5 	= reg_t<rw_t, 0X40010400, 5, 1>;	 /*!<Interrupt Mask on line 5 */
			using MR6 	= reg_t<rw_t, 0X40010400, 6, 1>;	 /*!<Interrupt Mask on line 6 */
			using MR7 	= reg_t<rw_t, 0X40010400, 7, 1>;	 /*!<Interrupt Mask on line 7 */
			using MR8 	= reg_t<rw_t, 0X40010400, 8, 1>;	 /*!<Interrupt Mask on line 8 */
			using MR9 	= reg_t<rw_t, 0X40010400, 9, 1>;	 /*!<Interrupt Mask on line 9 */
			using MR10 	= reg_t<rw_t, 0X40010400, 10, 1>;	 /*!<Interrupt Mask on line 10 */
			using MR11 	= reg_t<rw_t, 0X40010400, 11, 1>;	 /*!<Interrupt Mask on line 11 */
			using MR12 	= reg_t<rw_t, 0X40010400, 12, 1>;	 /*!<Interrupt Mask on line 12 */
			using MR13 	= reg_t<rw_t, 0X40010400, 13, 1>;	 /*!<Interrupt Mask on line 13 */
			using MR14 	= reg_t<rw_t, 0X40010400, 14, 1>;	 /*!<Interrupt Mask on line 14 */
			using MR15 	= reg_t<rw_t, 0X40010400, 15, 1>;	 /*!<Interrupt Mask on line 15 */
			using MR16 	= reg_t<rw_t, 0X40010400, 16, 1>;	 /*!<Interrupt Mask on line 16 */
			using MR17 	= reg_t<rw_t, 0X40010400, 17, 1>;	 /*!<Interrupt Mask on line 17 */
			using MR18 	= reg_t<rw_t, 0X40010400, 18, 1>;	 /*!<Interrupt Mask on line 18 */
			using MR19 	= reg_t<rw_t, 0X40010400, 19, 1>;	 /*!<Interrupt Mask on line 19 */
			using MR20 	= reg_t<rw_t, 0X40010400, 20, 1>;	 /*!<Interrupt Mask on line 20 */
			using MR21 	= reg_t<rw_t, 0X40010400, 21, 1>;	 /*!<Interrupt Mask on line 21 */
			using MR22 	= reg_t<rw_t, 0X40010400, 22, 1>;	 /*!<Interrupt Mask on line 22 */
			using MR23 	= reg_t<rw_t, 0X40010400, 23, 1>;	 /*!<Interrupt Mask on line 23 */
			using MR24 	= reg_t<rw_t, 0X40010400, 24, 1>;	 /*!<Interrupt Mask on line 24 */
			using MR25 	= reg_t<rw_t, 0X40010400, 25, 1>;	 /*!<Interrupt Mask on line 25 */
			using MR26 	= reg_t<rw_t, 0X40010400, 26, 1>;	 /*!<Interrupt Mask on line 26 */
			using MR27 	= reg_t<rw_t, 0X40010400, 27, 1>;	 /*!<Interrupt Mask on line 27 */
		}
		/*!
		Event mask register (EXTI_EMR)
		*/
		namespace EMR{
			using MR0 	= reg_t<rw_t, 0X40010404, 0, 1>;	 /*!<Event Mask on line 0 */
			using MR1 	= reg_t<rw_t, 0X40010404, 1, 1>;	 /*!<Event Mask on line 1 */
			using MR2 	= reg_t<rw_t, 0X40010404, 2, 1>;	 /*!<Event Mask on line 2 */
			using MR3 	= reg_t<rw_t, 0X40010404, 3, 1>;	 /*!<Event Mask on line 3 */
			using MR4 	= reg_t<rw_t, 0X40010404, 4, 1>;	 /*!<Event Mask on line 4 */
			using MR5 	= reg_t<rw_t, 0X40010404, 5, 1>;	 /*!<Event Mask on line 5 */
			using MR6 	= reg_t<rw_t, 0X40010404, 6, 1>;	 /*!<Event Mask on line 6 */
			using MR7 	= reg_t<rw_t, 0X40010404, 7, 1>;	 /*!<Event Mask on line 7 */
			using MR8 	= reg_t<rw_t, 0X40010404, 8, 1>;	 /*!<Event Mask on line 8 */
			using MR9 	= reg_t<rw_t, 0X40010404, 9, 1>;	 /*!<Event Mask on line 9 */
			using MR10 	= reg_t<rw_t, 0X40010404, 10, 1>;	 /*!<Event Mask on line 10 */
			using MR11 	= reg_t<rw_t, 0X40010404, 11, 1>;	 /*!<Event Mask on line 11 */
			using MR12 	= reg_t<rw_t, 0X40010404, 12, 1>;	 /*!<Event Mask on line 12 */
			using MR13 	= reg_t<rw_t, 0X40010404, 13, 1>;	 /*!<Event Mask on line 13 */
			using MR14 	= reg_t<rw_t, 0X40010404, 14, 1>;	 /*!<Event Mask on line 14 */
			using MR15 	= reg_t<rw_t, 0X40010404, 15, 1>;	 /*!<Event Mask on line 15 */
			using MR16 	= reg_t<rw_t, 0X40010404, 16, 1>;	 /*!<Event Mask on line 16 */
			using MR17 	= reg_t<rw_t, 0X40010404, 17, 1>;	 /*!<Event Mask on line 17 */
			using MR18 	= reg_t<rw_t, 0X40010404, 18, 1>;	 /*!<Event Mask on line 18 */
			using MR19 	= reg_t<rw_t, 0X40010404, 19, 1>;	 /*!<Event Mask on line 19 */
			using MR20 	= reg_t<rw_t, 0X40010404, 20, 1>;	 /*!<Event Mask on line 20 */
			using MR21 	= reg_t<rw_t, 0X40010404, 21, 1>;	 /*!<Event Mask on line 21 */
			using MR22 	= reg_t<rw_t, 0X40010404, 22, 1>;	 /*!<Event Mask on line 22 */
			using MR23 	= reg_t<rw_t, 0X40010404, 23, 1>;	 /*!<Event Mask on line 23 */
			using MR24 	= reg_t<rw_t, 0X40010404, 24, 1>;	 /*!<Event Mask on line 24 */
			using MR25 	= reg_t<rw_t, 0X40010404, 25, 1>;	 /*!<Event Mask on line 25 */
			using MR26 	= reg_t<rw_t, 0X40010404, 26, 1>;	 /*!<Event Mask on line 26 */
			using MR27 	= reg_t<rw_t, 0X40010404, 27, 1>;	 /*!<Event Mask on line 27 */
		}
		/*!
		Rising Trigger selection register (EXTI_RTSR)
		*/
		namespace RTSR{
			using TR0 	= reg_t<rw_t, 0X40010408, 0, 1>;	 /*!<Rising trigger event configuration of line 0 */
			using TR1 	= reg_t<rw_t, 0X40010408, 1, 1>;	 /*!<Rising trigger event configuration of line 1 */
			using TR2 	= reg_t<rw_t, 0X40010408, 2, 1>;	 /*!<Rising trigger event configuration of line 2 */
			using TR3 	= reg_t<rw_t, 0X40010408, 3, 1>;	 /*!<Rising trigger event configuration of line 3 */
			using TR4 	= reg_t<rw_t, 0X40010408, 4, 1>;	 /*!<Rising trigger event configuration of line 4 */
			using TR5 	= reg_t<rw_t, 0X40010408, 5, 1>;	 /*!<Rising trigger event configuration of line 5 */
			using TR6 	= reg_t<rw_t, 0X40010408, 6, 1>;	 /*!<Rising trigger event configuration of line 6 */
			using TR7 	= reg_t<rw_t, 0X40010408, 7, 1>;	 /*!<Rising trigger event configuration of line 7 */
			using TR8 	= reg_t<rw_t, 0X40010408, 8, 1>;	 /*!<Rising trigger event configuration of line 8 */
			using TR9 	= reg_t<rw_t, 0X40010408, 9, 1>;	 /*!<Rising trigger event configuration of line 9 */
			using TR10 	= reg_t<rw_t, 0X40010408, 10, 1>;	 /*!<Rising trigger event configuration of line 10 */
			using TR11 	= reg_t<rw_t, 0X40010408, 11, 1>;	 /*!<Rising trigger event configuration of line 11 */
			using TR12 	= reg_t<rw_t, 0X40010408, 12, 1>;	 /*!<Rising trigger event configuration of line 12 */
			using TR13 	= reg_t<rw_t, 0X40010408, 13, 1>;	 /*!<Rising trigger event configuration of line 13 */
			using TR14 	= reg_t<rw_t, 0X40010408, 14, 1>;	 /*!<Rising trigger event configuration of line 14 */
			using TR15 	= reg_t<rw_t, 0X40010408, 15, 1>;	 /*!<Rising trigger event configuration of line 15 */
			using TR16 	= reg_t<rw_t, 0X40010408, 16, 1>;	 /*!<Rising trigger event configuration of line 16 */
			using TR17 	= reg_t<rw_t, 0X40010408, 17, 1>;	 /*!<Rising trigger event configuration of line 17 */
			using TR19 	= reg_t<rw_t, 0X40010408, 19, 1>;	 /*!<Rising trigger event configuration of line 19 */
		}
		/*!
		Falling Trigger selection register (EXTI_FTSR)
		*/
		namespace FTSR{
			using TR0 	= reg_t<rw_t, 0X4001040C, 0, 1>;	 /*!<Falling trigger event configuration of line 0 */
			using TR1 	= reg_t<rw_t, 0X4001040C, 1, 1>;	 /*!<Falling trigger event configuration of line 1 */
			using TR2 	= reg_t<rw_t, 0X4001040C, 2, 1>;	 /*!<Falling trigger event configuration of line 2 */
			using TR3 	= reg_t<rw_t, 0X4001040C, 3, 1>;	 /*!<Falling trigger event configuration of line 3 */
			using TR4 	= reg_t<rw_t, 0X4001040C, 4, 1>;	 /*!<Falling trigger event configuration of line 4 */
			using TR5 	= reg_t<rw_t, 0X4001040C, 5, 1>;	 /*!<Falling trigger event configuration of line 5 */
			using TR6 	= reg_t<rw_t, 0X4001040C, 6, 1>;	 /*!<Falling trigger event configuration of line 6 */
			using TR7 	= reg_t<rw_t, 0X4001040C, 7, 1>;	 /*!<Falling trigger event configuration of line 7 */
			using TR8 	= reg_t<rw_t, 0X4001040C, 8, 1>;	 /*!<Falling trigger event configuration of line 8 */
			using TR9 	= reg_t<rw_t, 0X4001040C, 9, 1>;	 /*!<Falling trigger event configuration of line 9 */
			using TR10 	= reg_t<rw_t, 0X4001040C, 10, 1>;	 /*!<Falling trigger event configuration of line 10 */
			using TR11 	= reg_t<rw_t, 0X4001040C, 11, 1>;	 /*!<Falling trigger event configuration of line 11 */
			using TR12 	= reg_t<rw_t, 0X4001040C, 12, 1>;	 /*!<Falling trigger event configuration of line 12 */
			using TR13 	= reg_t<rw_t, 0X4001040C, 13, 1>;	 /*!<Falling trigger event configuration of line 13 */
			using TR14 	= reg_t<rw_t, 0X4001040C, 14, 1>;	 /*!<Falling trigger event configuration of line 14 */
			using TR15 	= reg_t<rw_t, 0X4001040C, 15, 1>;	 /*!<Falling trigger event configuration of line 15 */
			using TR16 	= reg_t<rw_t, 0X4001040C, 16, 1>;	 /*!<Falling trigger event configuration of line 16 */
			using TR17 	= reg_t<rw_t, 0X4001040C, 17, 1>;	 /*!<Falling trigger event configuration of line 17 */
			using TR19 	= reg_t<rw_t, 0X4001040C, 19, 1>;	 /*!<Falling trigger event configuration of line 19 */
		}
		/*!
		Software interrupt event register (EXTI_SWIER)
		*/
		namespace SWIER{
			using SWIER0 	= reg_t<rw_t, 0X40010410, 0, 1>;	 /*!<Software Interrupt on line 0 */
			using SWIER1 	= reg_t<rw_t, 0X40010410, 1, 1>;	 /*!<Software Interrupt on line 1 */
			using SWIER2 	= reg_t<rw_t, 0X40010410, 2, 1>;	 /*!<Software Interrupt on line 2 */
			using SWIER3 	= reg_t<rw_t, 0X40010410, 3, 1>;	 /*!<Software Interrupt on line 3 */
			using SWIER4 	= reg_t<rw_t, 0X40010410, 4, 1>;	 /*!<Software Interrupt on line 4 */
			using SWIER5 	= reg_t<rw_t, 0X40010410, 5, 1>;	 /*!<Software Interrupt on line 5 */
			using SWIER6 	= reg_t<rw_t, 0X40010410, 6, 1>;	 /*!<Software Interrupt on line 6 */
			using SWIER7 	= reg_t<rw_t, 0X40010410, 7, 1>;	 /*!<Software Interrupt on line 7 */
			using SWIER8 	= reg_t<rw_t, 0X40010410, 8, 1>;	 /*!<Software Interrupt on line 8 */
			using SWIER9 	= reg_t<rw_t, 0X40010410, 9, 1>;	 /*!<Software Interrupt on line 9 */
			using SWIER10 	= reg_t<rw_t, 0X40010410, 10, 1>;	 /*!<Software Interrupt on line 10 */
			using SWIER11 	= reg_t<rw_t, 0X40010410, 11, 1>;	 /*!<Software Interrupt on line 11 */
			using SWIER12 	= reg_t<rw_t, 0X40010410, 12, 1>;	 /*!<Software Interrupt on line 12 */
			using SWIER13 	= reg_t<rw_t, 0X40010410, 13, 1>;	 /*!<Software Interrupt on line 13 */
			using SWIER14 	= reg_t<rw_t, 0X40010410, 14, 1>;	 /*!<Software Interrupt on line 14 */
			using SWIER15 	= reg_t<rw_t, 0X40010410, 15, 1>;	 /*!<Software Interrupt on line 15 */
			using SWIER16 	= reg_t<rw_t, 0X40010410, 16, 1>;	 /*!<Software Interrupt on line 16 */
			using SWIER17 	= reg_t<rw_t, 0X40010410, 17, 1>;	 /*!<Software Interrupt on line 17 */
			using SWIER19 	= reg_t<rw_t, 0X40010410, 19, 1>;	 /*!<Software Interrupt on line 19 */
		}
		/*!
		Pending register (EXTI_PR)
		*/
		namespace PR{
			using PR0 	= reg_t<rw_t, 0X40010414, 0, 1>;	 /*!<Pending bit 0 */
			using PR1 	= reg_t<rw_t, 0X40010414, 1, 1>;	 /*!<Pending bit 1 */
			using PR2 	= reg_t<rw_t, 0X40010414, 2, 1>;	 /*!<Pending bit 2 */
			using PR3 	= reg_t<rw_t, 0X40010414, 3, 1>;	 /*!<Pending bit 3 */
			using PR4 	= reg_t<rw_t, 0X40010414, 4, 1>;	 /*!<Pending bit 4 */
			using PR5 	= reg_t<rw_t, 0X40010414, 5, 1>;	 /*!<Pending bit 5 */
			using PR6 	= reg_t<rw_t, 0X40010414, 6, 1>;	 /*!<Pending bit 6 */
			using PR7 	= reg_t<rw_t, 0X40010414, 7, 1>;	 /*!<Pending bit 7 */
			using PR8 	= reg_t<rw_t, 0X40010414, 8, 1>;	 /*!<Pending bit 8 */
			using PR9 	= reg_t<rw_t, 0X40010414, 9, 1>;	 /*!<Pending bit 9 */
			using PR10 	= reg_t<rw_t, 0X40010414, 10, 1>;	 /*!<Pending bit 10 */
			using PR11 	= reg_t<rw_t, 0X40010414, 11, 1>;	 /*!<Pending bit 11 */
			using PR12 	= reg_t<rw_t, 0X40010414, 12, 1>;	 /*!<Pending bit 12 */
			using PR13 	= reg_t<rw_t, 0X40010414, 13, 1>;	 /*!<Pending bit 13 */
			using PR14 	= reg_t<rw_t, 0X40010414, 14, 1>;	 /*!<Pending bit 14 */
			using PR15 	= reg_t<rw_t, 0X40010414, 15, 1>;	 /*!<Pending bit 15 */
			using PR16 	= reg_t<rw_t, 0X40010414, 16, 1>;	 /*!<Pending bit 16 */
			using PR17 	= reg_t<rw_t, 0X40010414, 17, 1>;	 /*!<Pending bit 17 */
			using PR19 	= reg_t<rw_t, 0X40010414, 19, 1>;	 /*!<Pending bit 19 */
		}
	}
	/*!
	Nested Vectored Interrupt Controller
	*/
	namespace NVIC{
		/*!
		Interrupt Set Enable Register
		*/
		namespace ISER{
			using SETENA 	= reg_t<rw_t, 0XE000E100, 0, 32>;	 /*!<SETENA */
		}
		/*!
		Interrupt Clear Enable Register
		*/
		namespace ICER{
			using CLRENA 	= reg_t<rw_t, 0XE000E180, 0, 32>;	 /*!<CLRENA */
		}
		/*!
		Interrupt Set-Pending Register
		*/
		namespace ISPR{
			using SETPEND 	= reg_t<rw_t, 0XE000E200, 0, 32>;	 /*!<SETPEND */
		}
		/*!
		Interrupt Clear-Pending Register
		*/
		namespace ICPR{
			using CLRPEND 	= reg_t<rw_t, 0XE000E280, 0, 32>;	 /*!<CLRPEND */
		}
		/*!
		Interrupt Priority Register 0
		*/
		namespace IPR0{
			using PRI_00 	= reg_t<rw_t, 0XE000E400, 6, 2>;	 /*!<PRI_00 */
			using PRI_01 	= reg_t<rw_t, 0XE000E400, 14, 2>;	 /*!<PRI_01 */
			using PRI_02 	= reg_t<rw_t, 0XE000E400, 22, 2>;	 /*!<PRI_02 */
			using PRI_03 	= reg_t<rw_t, 0XE000E400, 30, 2>;	 /*!<PRI_03 */
		}
		/*!
		Interrupt Priority Register 1
		*/
		namespace IPR1{
			using PRI_40 	= reg_t<rw_t, 0XE000E404, 6, 2>;	 /*!<PRI_40 */
			using PRI_41 	= reg_t<rw_t, 0XE000E404, 14, 2>;	 /*!<PRI_41 */
			using PRI_42 	= reg_t<rw_t, 0XE000E404, 22, 2>;	 /*!<PRI_42 */
			using PRI_43 	= reg_t<rw_t, 0XE000E404, 30, 2>;	 /*!<PRI_43 */
		}
		/*!
		Interrupt Priority Register 2
		*/
		namespace IPR2{
			using PRI_80 	= reg_t<rw_t, 0XE000E408, 6, 2>;	 /*!<PRI_80 */
			using PRI_81 	= reg_t<rw_t, 0XE000E408, 14, 2>;	 /*!<PRI_81 */
			using PRI_82 	= reg_t<rw_t, 0XE000E408, 22, 2>;	 /*!<PRI_82 */
			using PRI_83 	= reg_t<rw_t, 0XE000E408, 30, 2>;	 /*!<PRI_83 */
		}
		/*!
		Interrupt Priority Register 3
		*/
		namespace IPR3{
			using PRI_120 	= reg_t<rw_t, 0XE000E40C, 6, 2>;	 /*!<PRI_120 */
			using PRI_121 	= reg_t<rw_t, 0XE000E40C, 14, 2>;	 /*!<PRI_121 */
			using PRI_122 	= reg_t<rw_t, 0XE000E40C, 22, 2>;	 /*!<PRI_122 */
			using PRI_123 	= reg_t<rw_t, 0XE000E40C, 30, 2>;	 /*!<PRI_123 */
		}
		/*!
		Interrupt Priority Register 4
		*/
		namespace IPR4{
			using PRI_160 	= reg_t<rw_t, 0XE000E410, 6, 2>;	 /*!<PRI_160 */
			using PRI_161 	= reg_t<rw_t, 0XE000E410, 14, 2>;	 /*!<PRI_161 */
			using PRI_162 	= reg_t<rw_t, 0XE000E410, 22, 2>;	 /*!<PRI_162 */
			using PRI_163 	= reg_t<rw_t, 0XE000E410, 30, 2>;	 /*!<PRI_163 */
		}
		/*!
		Interrupt Priority Register 5
		*/
		namespace IPR5{
			using PRI_200 	= reg_t<rw_t, 0XE000E414, 6, 2>;	 /*!<PRI_200 */
			using PRI_201 	= reg_t<rw_t, 0XE000E414, 14, 2>;	 /*!<PRI_201 */
			using PRI_202 	= reg_t<rw_t, 0XE000E414, 22, 2>;	 /*!<PRI_202 */
			using PRI_203 	= reg_t<rw_t, 0XE000E414, 30, 2>;	 /*!<PRI_203 */
		}
		/*!
		Interrupt Priority Register 6
		*/
		namespace IPR6{
			using PRI_240 	= reg_t<rw_t, 0XE000E418, 6, 2>;	 /*!<PRI_240 */
			using PRI_241 	= reg_t<rw_t, 0XE000E418, 14, 2>;	 /*!<PRI_241 */
			using PRI_242 	= reg_t<rw_t, 0XE000E418, 22, 2>;	 /*!<PRI_242 */
			using PRI_243 	= reg_t<rw_t, 0XE000E418, 30, 2>;	 /*!<PRI_243 */
		}
		/*!
		Interrupt Priority Register 7
		*/
		namespace IPR7{
			using PRI_280 	= reg_t<rw_t, 0XE000E41C, 6, 2>;	 /*!<PRI_280 */
			using PRI_281 	= reg_t<rw_t, 0XE000E41C, 14, 2>;	 /*!<PRI_281 */
			using PRI_282 	= reg_t<rw_t, 0XE000E41C, 22, 2>;	 /*!<PRI_282 */
			using PRI_283 	= reg_t<rw_t, 0XE000E41C, 30, 2>;	 /*!<PRI_283 */
		}
	}
	/*!
	DMA controller
	*/
	namespace DMA{
		/*!
		DMA interrupt status register (DMA_ISR)
		*/
		namespace ISR{
			using GIF1 	= reg_t<ro_t, 0X40020000, 0, 1>;	 /*!<Channel 1 Global interrupt flag */
			using TCIF1 	= reg_t<ro_t, 0X40020000, 1, 1>;	 /*!<Channel 1 Transfer Complete flag */
			using HTIF1 	= reg_t<ro_t, 0X40020000, 2, 1>;	 /*!<Channel 1 Half Transfer Complete flag */
			using TEIF1 	= reg_t<ro_t, 0X40020000, 3, 1>;	 /*!<Channel 1 Transfer Error flag */
			using GIF2 	= reg_t<ro_t, 0X40020000, 4, 1>;	 /*!<Channel 2 Global interrupt flag */
			using TCIF2 	= reg_t<ro_t, 0X40020000, 5, 1>;	 /*!<Channel 2 Transfer Complete flag */
			using HTIF2 	= reg_t<ro_t, 0X40020000, 6, 1>;	 /*!<Channel 2 Half Transfer Complete flag */
			using TEIF2 	= reg_t<ro_t, 0X40020000, 7, 1>;	 /*!<Channel 2 Transfer Error flag */
			using GIF3 	= reg_t<ro_t, 0X40020000, 8, 1>;	 /*!<Channel 3 Global interrupt flag */
			using TCIF3 	= reg_t<ro_t, 0X40020000, 9, 1>;	 /*!<Channel 3 Transfer Complete flag */
			using HTIF3 	= reg_t<ro_t, 0X40020000, 10, 1>;	 /*!<Channel 3 Half Transfer Complete flag */
			using TEIF3 	= reg_t<ro_t, 0X40020000, 11, 1>;	 /*!<Channel 3 Transfer Error flag */
			using GIF4 	= reg_t<ro_t, 0X40020000, 12, 1>;	 /*!<Channel 4 Global interrupt flag */
			using TCIF4 	= reg_t<ro_t, 0X40020000, 13, 1>;	 /*!<Channel 4 Transfer Complete flag */
			using HTIF4 	= reg_t<ro_t, 0X40020000, 14, 1>;	 /*!<Channel 4 Half Transfer Complete flag */
			using TEIF4 	= reg_t<ro_t, 0X40020000, 15, 1>;	 /*!<Channel 4 Transfer Error flag */
			using GIF5 	= reg_t<ro_t, 0X40020000, 16, 1>;	 /*!<Channel 5 Global interrupt flag */
			using TCIF5 	= reg_t<ro_t, 0X40020000, 17, 1>;	 /*!<Channel 5 Transfer Complete flag */
			using HTIF5 	= reg_t<ro_t, 0X40020000, 18, 1>;	 /*!<Channel 5 Half Transfer Complete flag */
			using TEIF5 	= reg_t<ro_t, 0X40020000, 19, 1>;	 /*!<Channel 5 Transfer Error flag */
			using GIF6 	= reg_t<ro_t, 0X40020000, 20, 1>;	 /*!<Channel 6 Global interrupt flag */
			using TCIF6 	= reg_t<ro_t, 0X40020000, 21, 1>;	 /*!<Channel 6 Transfer Complete flag */
			using HTIF6 	= reg_t<ro_t, 0X40020000, 22, 1>;	 /*!<Channel 6 Half Transfer Complete flag */
			using TEIF6 	= reg_t<ro_t, 0X40020000, 23, 1>;	 /*!<Channel 6 Transfer Error flag */
			using GIF7 	= reg_t<ro_t, 0X40020000, 24, 1>;	 /*!<Channel 7 Global interrupt flag */
			using TCIF7 	= reg_t<ro_t, 0X40020000, 25, 1>;	 /*!<Channel 7 Transfer Complete flag */
			using HTIF7 	= reg_t<ro_t, 0X40020000, 26, 1>;	 /*!<Channel 7 Half Transfer Complete flag */
			using TEIF7 	= reg_t<ro_t, 0X40020000, 27, 1>;	 /*!<Channel 7 Transfer Error flag */
		}
		/*!
		DMA interrupt flag clear register (DMA_IFCR)
		*/
		namespace IFCR{
			using CGIF1 	= reg_t<wo_t, 0X40020004, 0, 1>;	 /*!<Channel 1 Global interrupt clear */
			using CTCIF1 	= reg_t<wo_t, 0X40020004, 1, 1>;	 /*!<Channel 1 Transfer Complete clear */
			using CHTIF1 	= reg_t<wo_t, 0X40020004, 2, 1>;	 /*!<Channel 1 Half Transfer clear */
			using CTEIF1 	= reg_t<wo_t, 0X40020004, 3, 1>;	 /*!<Channel 1 Transfer Error clear */
			using CGIF2 	= reg_t<wo_t, 0X40020004, 4, 1>;	 /*!<Channel 2 Global interrupt clear */
			using CTCIF2 	= reg_t<wo_t, 0X40020004, 5, 1>;	 /*!<Channel 2 Transfer Complete clear */
			using CHTIF2 	= reg_t<wo_t, 0X40020004, 6, 1>;	 /*!<Channel 2 Half Transfer clear */
			using CTEIF2 	= reg_t<wo_t, 0X40020004, 7, 1>;	 /*!<Channel 2 Transfer Error clear */
			using CGIF3 	= reg_t<wo_t, 0X40020004, 8, 1>;	 /*!<Channel 3 Global interrupt clear */
			using CTCIF3 	= reg_t<wo_t, 0X40020004, 9, 1>;	 /*!<Channel 3 Transfer Complete clear */
			using CHTIF3 	= reg_t<wo_t, 0X40020004, 10, 1>;	 /*!<Channel 3 Half Transfer clear */
			using CTEIF3 	= reg_t<wo_t, 0X40020004, 11, 1>;	 /*!<Channel 3 Transfer Error clear */
			using CGIF4 	= reg_t<wo_t, 0X40020004, 12, 1>;	 /*!<Channel 4 Global interrupt clear */
			using CTCIF4 	= reg_t<wo_t, 0X40020004, 13, 1>;	 /*!<Channel 4 Transfer Complete clear */
			using CHTIF4 	= reg_t<wo_t, 0X40020004, 14, 1>;	 /*!<Channel 4 Half Transfer clear */
			using CTEIF4 	= reg_t<wo_t, 0X40020004, 15, 1>;	 /*!<Channel 4 Transfer Error clear */
			using CGIF5 	= reg_t<wo_t, 0X40020004, 16, 1>;	 /*!<Channel 5 Global interrupt clear */
			using CTCIF5 	= reg_t<wo_t, 0X40020004, 17, 1>;	 /*!<Channel 5 Transfer Complete clear */
			using CHTIF5 	= reg_t<wo_t, 0X40020004, 18, 1>;	 /*!<Channel 5 Half Transfer clear */
			using CTEIF5 	= reg_t<wo_t, 0X40020004, 19, 1>;	 /*!<Channel 5 Transfer Error clear */
			using CGIF6 	= reg_t<wo_t, 0X40020004, 20, 1>;	 /*!<Channel 6 Global interrupt clear */
			using CTCIF6 	= reg_t<wo_t, 0X40020004, 21, 1>;	 /*!<Channel 6 Transfer Complete clear */
			using CHTIF6 	= reg_t<wo_t, 0X40020004, 22, 1>;	 /*!<Channel 6 Half Transfer clear */
			using CTEIF6 	= reg_t<wo_t, 0X40020004, 23, 1>;	 /*!<Channel 6 Transfer Error clear */
			using CGIF7 	= reg_t<wo_t, 0X40020004, 24, 1>;	 /*!<Channel 7 Global interrupt clear */
			using CTCIF7 	= reg_t<wo_t, 0X40020004, 25, 1>;	 /*!<Channel 7 Transfer Complete clear */
			using CHTIF7 	= reg_t<wo_t, 0X40020004, 26, 1>;	 /*!<Channel 7 Half Transfer clear */
			using CTEIF7 	= reg_t<wo_t, 0X40020004, 27, 1>;	 /*!<Channel 7 Transfer Error clear */
		}
		/*!
		DMA channel configuration register (DMA_CCR)
		*/
		namespace CCR1{
			using EN 	= reg_t<rw_t, 0X40020008, 0, 1>;	 /*!<Channel enable */
			using TCIE 	= reg_t<rw_t, 0X40020008, 1, 1>;	 /*!<Transfer complete interrupt enable */
			using HTIE 	= reg_t<rw_t, 0X40020008, 2, 1>;	 /*!<Half Transfer interrupt enable */
			using TEIE 	= reg_t<rw_t, 0X40020008, 3, 1>;	 /*!<Transfer error interrupt enable */
			using DIR 	= reg_t<rw_t, 0X40020008, 4, 1>;	 /*!<Data transfer direction */
			using CIRC 	= reg_t<rw_t, 0X40020008, 5, 1>;	 /*!<Circular mode */
			using PINC 	= reg_t<rw_t, 0X40020008, 6, 1>;	 /*!<Peripheral increment mode */
			using MINC 	= reg_t<rw_t, 0X40020008, 7, 1>;	 /*!<Memory increment mode */
			using PSIZE 	= reg_t<rw_t, 0X40020008, 8, 2>;	 /*!<Peripheral size */
			using MSIZE 	= reg_t<rw_t, 0X40020008, 10, 2>;	 /*!<Memory size */
			using PL 	= reg_t<rw_t, 0X40020008, 12, 2>;	 /*!<Channel Priority level */
			using MEM2MEM 	= reg_t<rw_t, 0X40020008, 14, 1>;	 /*!<Memory to memory mode */
		}
		/*!
		DMA channel 1 number of data register
		*/
		namespace CNDTR1{
			using NDT 	= reg_t<rw_t, 0X4002000C, 0, 16>;	 /*!<Number of data to transfer */
		}
		/*!
		DMA channel 1 peripheral address register
		*/
		namespace CPAR1{
			using PA 	= reg_t<rw_t, 0X40020010, 0, 32>;	 /*!<Peripheral address */
		}
		/*!
		DMA channel 1 memory address register
		*/
		namespace CMAR1{
			using MA 	= reg_t<rw_t, 0X40020014, 0, 32>;	 /*!<Memory address */
		}
		/*!
		DMA channel configuration register (DMA_CCR)
		*/
		namespace CCR2{
			using EN 	= reg_t<rw_t, 0X4002001C, 0, 1>;	 /*!<Channel enable */
			using TCIE 	= reg_t<rw_t, 0X4002001C, 1, 1>;	 /*!<Transfer complete interrupt enable */
			using HTIE 	= reg_t<rw_t, 0X4002001C, 2, 1>;	 /*!<Half Transfer interrupt enable */
			using TEIE 	= reg_t<rw_t, 0X4002001C, 3, 1>;	 /*!<Transfer error interrupt enable */
			using DIR 	= reg_t<rw_t, 0X4002001C, 4, 1>;	 /*!<Data transfer direction */
			using CIRC 	= reg_t<rw_t, 0X4002001C, 5, 1>;	 /*!<Circular mode */
			using PINC 	= reg_t<rw_t, 0X4002001C, 6, 1>;	 /*!<Peripheral increment mode */
			using MINC 	= reg_t<rw_t, 0X4002001C, 7, 1>;	 /*!<Memory increment mode */
			using PSIZE 	= reg_t<rw_t, 0X4002001C, 8, 2>;	 /*!<Peripheral size */
			using MSIZE 	= reg_t<rw_t, 0X4002001C, 10, 2>;	 /*!<Memory size */
			using PL 	= reg_t<rw_t, 0X4002001C, 12, 2>;	 /*!<Channel Priority level */
			using MEM2MEM 	= reg_t<rw_t, 0X4002001C, 14, 1>;	 /*!<Memory to memory mode */
		}
		/*!
		DMA channel 2 number of data register
		*/
		namespace CNDTR2{
			using NDT 	= reg_t<rw_t, 0X40020020, 0, 16>;	 /*!<Number of data to transfer */
		}
		/*!
		DMA channel 2 peripheral address register
		*/
		namespace CPAR2{
			using PA 	= reg_t<rw_t, 0X40020024, 0, 32>;	 /*!<Peripheral address */
		}
		/*!
		DMA channel 2 memory address register
		*/
		namespace CMAR2{
			using MA 	= reg_t<rw_t, 0X40020028, 0, 32>;	 /*!<Memory address */
		}
		/*!
		DMA channel configuration register (DMA_CCR)
		*/
		namespace CCR3{
			using EN 	= reg_t<rw_t, 0X40020030, 0, 1>;	 /*!<Channel enable */
			using TCIE 	= reg_t<rw_t, 0X40020030, 1, 1>;	 /*!<Transfer complete interrupt enable */
			using HTIE 	= reg_t<rw_t, 0X40020030, 2, 1>;	 /*!<Half Transfer interrupt enable */
			using TEIE 	= reg_t<rw_t, 0X40020030, 3, 1>;	 /*!<Transfer error interrupt enable */
			using DIR 	= reg_t<rw_t, 0X40020030, 4, 1>;	 /*!<Data transfer direction */
			using CIRC 	= reg_t<rw_t, 0X40020030, 5, 1>;	 /*!<Circular mode */
			using PINC 	= reg_t<rw_t, 0X40020030, 6, 1>;	 /*!<Peripheral increment mode */
			using MINC 	= reg_t<rw_t, 0X40020030, 7, 1>;	 /*!<Memory increment mode */
			using PSIZE 	= reg_t<rw_t, 0X40020030, 8, 2>;	 /*!<Peripheral size */
			using MSIZE 	= reg_t<rw_t, 0X40020030, 10, 2>;	 /*!<Memory size */
			using PL 	= reg_t<rw_t, 0X40020030, 12, 2>;	 /*!<Channel Priority level */
			using MEM2MEM 	= reg_t<rw_t, 0X40020030, 14, 1>;	 /*!<Memory to memory mode */
		}
		/*!
		DMA channel 3 number of data register
		*/
		namespace CNDTR3{
			using NDT 	= reg_t<rw_t, 0X40020034, 0, 16>;	 /*!<Number of data to transfer */
		}
		/*!
		DMA channel 3 peripheral address register
		*/
		namespace CPAR3{
			using PA 	= reg_t<rw_t, 0X40020038, 0, 32>;	 /*!<Peripheral address */
		}
		/*!
		DMA channel 3 memory address register
		*/
		namespace CMAR3{
			using MA 	= reg_t<rw_t, 0X4002003C, 0, 32>;	 /*!<Memory address */
		}
		/*!
		DMA channel configuration register (DMA_CCR)
		*/
		namespace CCR4{
			using EN 	= reg_t<rw_t, 0X40020044, 0, 1>;	 /*!<Channel enable */
			using TCIE 	= reg_t<rw_t, 0X40020044, 1, 1>;	 /*!<Transfer complete interrupt enable */
			using HTIE 	= reg_t<rw_t, 0X40020044, 2, 1>;	 /*!<Half Transfer interrupt enable */
			using TEIE 	= reg_t<rw_t, 0X40020044, 3, 1>;	 /*!<Transfer error interrupt enable */
			using DIR 	= reg_t<rw_t, 0X40020044, 4, 1>;	 /*!<Data transfer direction */
			using CIRC 	= reg_t<rw_t, 0X40020044, 5, 1>;	 /*!<Circular mode */
			using PINC 	= reg_t<rw_t, 0X40020044, 6, 1>;	 /*!<Peripheral increment mode */
			using MINC 	= reg_t<rw_t, 0X40020044, 7, 1>;	 /*!<Memory increment mode */
			using PSIZE 	= reg_t<rw_t, 0X40020044, 8, 2>;	 /*!<Peripheral size */
			using MSIZE 	= reg_t<rw_t, 0X40020044, 10, 2>;	 /*!<Memory size */
			using PL 	= reg_t<rw_t, 0X40020044, 12, 2>;	 /*!<Channel Priority level */
			using MEM2MEM 	= reg_t<rw_t, 0X40020044, 14, 1>;	 /*!<Memory to memory mode */
		}
		/*!
		DMA channel 4 number of data register
		*/
		namespace CNDTR4{
			using NDT 	= reg_t<rw_t, 0X40020048, 0, 16>;	 /*!<Number of data to transfer */
		}
		/*!
		DMA channel 4 peripheral address register
		*/
		namespace CPAR4{
			using PA 	= reg_t<rw_t, 0X4002004C, 0, 32>;	 /*!<Peripheral address */
		}
		/*!
		DMA channel 4 memory address register
		*/
		namespace CMAR4{
			using MA 	= reg_t<rw_t, 0X40020050, 0, 32>;	 /*!<Memory address */
		}
		/*!
		DMA channel configuration register (DMA_CCR)
		*/
		namespace CCR5{
			using EN 	= reg_t<rw_t, 0X40020058, 0, 1>;	 /*!<Channel enable */
			using TCIE 	= reg_t<rw_t, 0X40020058, 1, 1>;	 /*!<Transfer complete interrupt enable */
			using HTIE 	= reg_t<rw_t, 0X40020058, 2, 1>;	 /*!<Half Transfer interrupt enable */
			using TEIE 	= reg_t<rw_t, 0X40020058, 3, 1>;	 /*!<Transfer error interrupt enable */
			using DIR 	= reg_t<rw_t, 0X40020058, 4, 1>;	 /*!<Data transfer direction */
			using CIRC 	= reg_t<rw_t, 0X40020058, 5, 1>;	 /*!<Circular mode */
			using PINC 	= reg_t<rw_t, 0X40020058, 6, 1>;	 /*!<Peripheral increment mode */
			using MINC 	= reg_t<rw_t, 0X40020058, 7, 1>;	 /*!<Memory increment mode */
			using PSIZE 	= reg_t<rw_t, 0X40020058, 8, 2>;	 /*!<Peripheral size */
			using MSIZE 	= reg_t<rw_t, 0X40020058, 10, 2>;	 /*!<Memory size */
			using PL 	= reg_t<rw_t, 0X40020058, 12, 2>;	 /*!<Channel Priority level */
			using MEM2MEM 	= reg_t<rw_t, 0X40020058, 14, 1>;	 /*!<Memory to memory mode */
		}
		/*!
		DMA channel 5 number of data register
		*/
		namespace CNDTR5{
			using NDT 	= reg_t<rw_t, 0X4002005C, 0, 16>;	 /*!<Number of data to transfer */
		}
		/*!
		DMA channel 5 peripheral address register
		*/
		namespace CPAR5{
			using PA 	= reg_t<rw_t, 0X40020060, 0, 32>;	 /*!<Peripheral address */
		}
		/*!
		DMA channel 5 memory address register
		*/
		namespace CMAR5{
			using MA 	= reg_t<rw_t, 0X40020064, 0, 32>;	 /*!<Memory address */
		}
		/*!
		DMA channel configuration register (DMA_CCR)
		*/
		namespace CCR6{
			using EN 	= reg_t<rw_t, 0X4002006C, 0, 1>;	 /*!<Channel enable */
			using TCIE 	= reg_t<rw_t, 0X4002006C, 1, 1>;	 /*!<Transfer complete interrupt enable */
			using HTIE 	= reg_t<rw_t, 0X4002006C, 2, 1>;	 /*!<Half Transfer interrupt enable */
			using TEIE 	= reg_t<rw_t, 0X4002006C, 3, 1>;	 /*!<Transfer error interrupt enable */
			using DIR 	= reg_t<rw_t, 0X4002006C, 4, 1>;	 /*!<Data transfer direction */
			using CIRC 	= reg_t<rw_t, 0X4002006C, 5, 1>;	 /*!<Circular mode */
			using PINC 	= reg_t<rw_t, 0X4002006C, 6, 1>;	 /*!<Peripheral increment mode */
			using MINC 	= reg_t<rw_t, 0X4002006C, 7, 1>;	 /*!<Memory increment mode */
			using PSIZE 	= reg_t<rw_t, 0X4002006C, 8, 2>;	 /*!<Peripheral size */
			using MSIZE 	= reg_t<rw_t, 0X4002006C, 10, 2>;	 /*!<Memory size */
			using PL 	= reg_t<rw_t, 0X4002006C, 12, 2>;	 /*!<Channel Priority level */
			using MEM2MEM 	= reg_t<rw_t, 0X4002006C, 14, 1>;	 /*!<Memory to memory mode */
		}
		/*!
		DMA channel 6 number of data register
		*/
		namespace CNDTR6{
			using NDT 	= reg_t<rw_t, 0X40020070, 0, 16>;	 /*!<Number of data to transfer */
		}
		/*!
		DMA channel 6 peripheral address register
		*/
		namespace CPAR6{
			using PA 	= reg_t<rw_t, 0X40020074, 0, 32>;	 /*!<Peripheral address */
		}
		/*!
		DMA channel 6 memory address register
		*/
		namespace CMAR6{
			using MA 	= reg_t<rw_t, 0X40020078, 0, 32>;	 /*!<Memory address */
		}
		/*!
		DMA channel configuration register (DMA_CCR)
		*/
		namespace CCR7{
			using EN 	= reg_t<rw_t, 0X40020080, 0, 1>;	 /*!<Channel enable */
			using TCIE 	= reg_t<rw_t, 0X40020080, 1, 1>;	 /*!<Transfer complete interrupt enable */
			using HTIE 	= reg_t<rw_t, 0X40020080, 2, 1>;	 /*!<Half Transfer interrupt enable */
			using TEIE 	= reg_t<rw_t, 0X40020080, 3, 1>;	 /*!<Transfer error interrupt enable */
			using DIR 	= reg_t<rw_t, 0X40020080, 4, 1>;	 /*!<Data transfer direction */
			using CIRC 	= reg_t<rw_t, 0X40020080, 5, 1>;	 /*!<Circular mode */
			using PINC 	= reg_t<rw_t, 0X40020080, 6, 1>;	 /*!<Peripheral increment mode */
			using MINC 	= reg_t<rw_t, 0X40020080, 7, 1>;	 /*!<Memory increment mode */
			using PSIZE 	= reg_t<rw_t, 0X40020080, 8, 2>;	 /*!<Peripheral size */
			using MSIZE 	= reg_t<rw_t, 0X40020080, 10, 2>;	 /*!<Memory size */
			using PL 	= reg_t<rw_t, 0X40020080, 12, 2>;	 /*!<Channel Priority level */
			using MEM2MEM 	= reg_t<rw_t, 0X40020080, 14, 1>;	 /*!<Memory to memory mode */
		}
		/*!
		DMA channel 7 number of data register
		*/
		namespace CNDTR7{
			using NDT 	= reg_t<rw_t, 0X40020084, 0, 16>;	 /*!<Number of data to transfer */
		}
		/*!
		DMA channel 7 peripheral address register
		*/
		namespace CPAR7{
			using PA 	= reg_t<rw_t, 0X40020088, 0, 32>;	 /*!<Peripheral address */
		}
		/*!
		DMA channel 7 memory address register
		*/
		namespace CMAR7{
			using MA 	= reg_t<rw_t, 0X4002008C, 0, 32>;	 /*!<Memory address */
		}
	}
	/*!
	Reset and clock control
	*/
	namespace RCC{
		/*!
		Clock control register
		*/
		namespace CR{
			using HSION 	= reg_t<rw_t, 0X40021000, 0, 1>;	 /*!<Internal High Speed clock enable */
			using HSIRDY 	= reg_t<ro_t, 0X40021000, 1, 1>;	 /*!<Internal High Speed clock ready flag */
			using HSITRIM 	= reg_t<rw_t, 0X40021000, 3, 5>;	 /*!<Internal High Speed clock trimming */
			using HSICAL 	= reg_t<ro_t, 0X40021000, 8, 8>;	 /*!<Internal High Speed clock Calibration */
			using HSEON 	= reg_t<rw_t, 0X40021000, 16, 1>;	 /*!<External High Speed clock enable */
			using HSERDY 	= reg_t<ro_t, 0X40021000, 17, 1>;	 /*!<External High Speed clock ready flag */
			using HSEBYP 	= reg_t<rw_t, 0X40021000, 18, 1>;	 /*!<External High Speed clock Bypass */
			using CSSON 	= reg_t<rw_t, 0X40021000, 19, 1>;	 /*!<Clock Security System enable */
			using PLLON 	= reg_t<rw_t, 0X40021000, 24, 1>;	 /*!<PLL enable */
			using PLLRDY 	= reg_t<ro_t, 0X40021000, 25, 1>;	 /*!<PLL clock ready flag */
		}
		/*!
		Clock configuration register (RCC_CFGR)
		*/
		namespace CFGR{
			using SW 	= reg_t<rw_t, 0X40021004, 0, 2>;	 /*!<System clock Switch */
			using SWS 	= reg_t<ro_t, 0X40021004, 2, 2>;	 /*!<System Clock Switch Status */
			using HPRE 	= reg_t<rw_t, 0X40021004, 4, 4>;	 /*!<AHB prescaler */
			using PPRE 	= reg_t<rw_t, 0X40021004, 8, 3>;	 /*!<APB Low speed prescaler (APB1) */
			using ADCPRE 	= reg_t<rw_t, 0X40021004, 14, 1>;	 /*!<ADC prescaler */
			using PLLSRC 	= reg_t<rw_t, 0X40021004, 15, 2>;	 /*!<PLL input clock source */
			using PLLXTPRE 	= reg_t<rw_t, 0X40021004, 17, 1>;	 /*!<HSE divider for PLL entry */
			using PLLMUL 	= reg_t<rw_t, 0X40021004, 18, 4>;	 /*!<PLL Multiplication Factor */
			using MCO 	= reg_t<rw_t, 0X40021004, 24, 3>;	 /*!<Microcontroller clock output */
			using MCOPRE 	= reg_t<rw_t, 0X40021004, 28, 3>;	 /*!<Microcontroller Clock Output Prescaler */
			using PLLNODIV 	= reg_t<rw_t, 0X40021004, 31, 1>;	 /*!<PLL clock not divided for MCO */
		}
		/*!
		Clock interrupt register (RCC_CIR)
		*/
		namespace CIR{
			using LSIRDYF 	= reg_t<ro_t, 0X40021008, 0, 1>;	 /*!<LSI Ready Interrupt flag */
			using LSERDYF 	= reg_t<ro_t, 0X40021008, 1, 1>;	 /*!<LSE Ready Interrupt flag */
			using HSIRDYF 	= reg_t<ro_t, 0X40021008, 2, 1>;	 /*!<HSI Ready Interrupt flag */
			using HSERDYF 	= reg_t<ro_t, 0X40021008, 3, 1>;	 /*!<HSE Ready Interrupt flag */
			using PLLRDYF 	= reg_t<ro_t, 0X40021008, 4, 1>;	 /*!<PLL Ready Interrupt flag */
			using HSI14RDYF 	= reg_t<ro_t, 0X40021008, 5, 1>;	 /*!<HSI14 ready interrupt flag */
			using HSI48RDYF 	= reg_t<ro_t, 0X40021008, 6, 1>;	 /*!<HSI48 ready interrupt flag */
			using CSSF 	= reg_t<ro_t, 0X40021008, 7, 1>;	 /*!<Clock Security System Interrupt flag */
			using LSIRDYIE 	= reg_t<rw_t, 0X40021008, 8, 1>;	 /*!<LSI Ready Interrupt Enable */
			using LSERDYIE 	= reg_t<rw_t, 0X40021008, 9, 1>;	 /*!<LSE Ready Interrupt Enable */
			using HSIRDYIE 	= reg_t<rw_t, 0X40021008, 10, 1>;	 /*!<HSI Ready Interrupt Enable */
			using HSERDYIE 	= reg_t<rw_t, 0X40021008, 11, 1>;	 /*!<HSE Ready Interrupt Enable */
			using PLLRDYIE 	= reg_t<rw_t, 0X40021008, 12, 1>;	 /*!<PLL Ready Interrupt Enable */
			using HSI14RDYE 	= reg_t<rw_t, 0X40021008, 13, 1>;	 /*!<HSI14 ready interrupt enable */
			using HSI48RDYIE 	= reg_t<rw_t, 0X40021008, 14, 1>;	 /*!<HSI48 ready interrupt enable */
			using LSIRDYC 	= reg_t<wo_t, 0X40021008, 16, 1>;	 /*!<LSI Ready Interrupt Clear */
			using LSERDYC 	= reg_t<wo_t, 0X40021008, 17, 1>;	 /*!<LSE Ready Interrupt Clear */
			using HSIRDYC 	= reg_t<wo_t, 0X40021008, 18, 1>;	 /*!<HSI Ready Interrupt Clear */
			using HSERDYC 	= reg_t<wo_t, 0X40021008, 19, 1>;	 /*!<HSE Ready Interrupt Clear */
			using PLLRDYC 	= reg_t<wo_t, 0X40021008, 20, 1>;	 /*!<PLL Ready Interrupt Clear */
			using HSI14RDYC 	= reg_t<wo_t, 0X40021008, 21, 1>;	 /*!<HSI 14 MHz Ready Interrupt Clear */
			using HSI48RDYC 	= reg_t<wo_t, 0X40021008, 22, 1>;	 /*!<HSI48 Ready Interrupt Clear */
			using CSSC 	= reg_t<wo_t, 0X40021008, 23, 1>;	 /*!<Clock security system interrupt clear */
		}
		/*!
		APB2 peripheral reset register (RCC_APB2RSTR)
		*/
		namespace APB2RSTR{
			using SYSCFGRST 	= reg_t<rw_t, 0X4002100C, 0, 1>;	 /*!<SYSCFG and COMP reset */
			using ADCRST 	= reg_t<rw_t, 0X4002100C, 9, 1>;	 /*!<ADC interface reset */
			using TIM1RST 	= reg_t<rw_t, 0X4002100C, 11, 1>;	 /*!<TIM1 timer reset */
			using SPI1RST 	= reg_t<rw_t, 0X4002100C, 12, 1>;	 /*!<SPI 1 reset */
			using USART1RST 	= reg_t<rw_t, 0X4002100C, 14, 1>;	 /*!<USART1 reset */
			using TIM15RST 	= reg_t<rw_t, 0X4002100C, 16, 1>;	 /*!<TIM15 timer reset */
			using TIM16RST 	= reg_t<rw_t, 0X4002100C, 17, 1>;	 /*!<TIM16 timer reset */
			using TIM17RST 	= reg_t<rw_t, 0X4002100C, 18, 1>;	 /*!<TIM17 timer reset */
			using DBGMCURST 	= reg_t<rw_t, 0X4002100C, 22, 1>;	 /*!<Debug MCU reset */
		}
		/*!
		APB1 peripheral reset register (RCC_APB1RSTR)
		*/
		namespace APB1RSTR{
			using TIM3RST 	= reg_t<rw_t, 0X40021010, 1, 1>;	 /*!<Timer 3 reset */
			using TIM6RST 	= reg_t<rw_t, 0X40021010, 4, 1>;	 /*!<Timer 6 reset */
			using TIM14RST 	= reg_t<rw_t, 0X40021010, 8, 1>;	 /*!<Timer 14 reset */
			using WWDGRST 	= reg_t<rw_t, 0X40021010, 11, 1>;	 /*!<Window watchdog reset */
			using SPI2RST 	= reg_t<rw_t, 0X40021010, 14, 1>;	 /*!<SPI2 reset */
			using USART2RST 	= reg_t<rw_t, 0X40021010, 17, 1>;	 /*!<USART 2 reset */
			using I2C1RST 	= reg_t<rw_t, 0X40021010, 21, 1>;	 /*!<I2C1 reset */
			using I2C2RST 	= reg_t<rw_t, 0X40021010, 22, 1>;	 /*!<I2C2 reset */
			using PWRRST 	= reg_t<rw_t, 0X40021010, 28, 1>;	 /*!<Power interface reset */
		}
		/*!
		AHB Peripheral Clock enable register (RCC_AHBENR)
		*/
		namespace AHBENR{
			using DMAEN 	= reg_t<rw_t, 0X40021014, 0, 1>;	 /*!<DMA1 clock enable */
			using SRAMEN 	= reg_t<rw_t, 0X40021014, 2, 1>;	 /*!<SRAM interface clock enable */
			using FLITFEN 	= reg_t<rw_t, 0X40021014, 4, 1>;	 /*!<FLITF clock enable */
			using CRCEN 	= reg_t<rw_t, 0X40021014, 6, 1>;	 /*!<CRC clock enable */
			using IOPAEN 	= reg_t<rw_t, 0X40021014, 17, 1>;	 /*!<I/O port A clock enable */
			using IOPBEN 	= reg_t<rw_t, 0X40021014, 18, 1>;	 /*!<I/O port B clock enable */
			using IOPCEN 	= reg_t<rw_t, 0X40021014, 19, 1>;	 /*!<I/O port C clock enable */
			using IOPDEN 	= reg_t<rw_t, 0X40021014, 20, 1>;	 /*!<I/O port D clock enable */
			using IOPFEN 	= reg_t<rw_t, 0X40021014, 22, 1>;	 /*!<I/O port F clock enable */
		}
		/*!
		APB2 peripheral clock enable register (RCC_APB2ENR)
		*/
		namespace APB2ENR{
			using SYSCFGEN 	= reg_t<rw_t, 0X40021018, 0, 1>;	 /*!<SYSCFG clock enable */
			using ADCEN 	= reg_t<rw_t, 0X40021018, 9, 1>;	 /*!<ADC 1 interface clock enable */
			using TIM1EN 	= reg_t<rw_t, 0X40021018, 11, 1>;	 /*!<TIM1 Timer clock enable */
			using SPI1EN 	= reg_t<rw_t, 0X40021018, 12, 1>;	 /*!<SPI 1 clock enable */
			using USART1EN 	= reg_t<rw_t, 0X40021018, 14, 1>;	 /*!<USART1 clock enable */
			using TIM15EN 	= reg_t<rw_t, 0X40021018, 16, 1>;	 /*!<TIM15 timer clock enable */
			using TIM16EN 	= reg_t<rw_t, 0X40021018, 17, 1>;	 /*!<TIM16 timer clock enable */
			using TIM17EN 	= reg_t<rw_t, 0X40021018, 18, 1>;	 /*!<TIM17 timer clock enable */
			using DBGMCUEN 	= reg_t<rw_t, 0X40021018, 22, 1>;	 /*!<MCU debug module clock enable */
		}
		/*!
		APB1 peripheral clock enable register (RCC_APB1ENR)
		*/
		namespace APB1ENR{
			using TIM3EN 	= reg_t<rw_t, 0X4002101C, 1, 1>;	 /*!<Timer 3 clock enable */
			using TIM6EN 	= reg_t<rw_t, 0X4002101C, 4, 1>;	 /*!<Timer 6 clock enable */
			using TIM14EN 	= reg_t<rw_t, 0X4002101C, 8, 1>;	 /*!<Timer 14 clock enable */
			using WWDGEN 	= reg_t<rw_t, 0X4002101C, 11, 1>;	 /*!<Window watchdog clock enable */
			using SPI2EN 	= reg_t<rw_t, 0X4002101C, 14, 1>;	 /*!<SPI 2 clock enable */
			using USART2EN 	= reg_t<rw_t, 0X4002101C, 17, 1>;	 /*!<USART 2 clock enable */
			using I2C1EN 	= reg_t<rw_t, 0X4002101C, 21, 1>;	 /*!<I2C 1 clock enable */
			using I2C2EN 	= reg_t<rw_t, 0X4002101C, 22, 1>;	 /*!<I2C 2 clock enable */
			using PWREN 	= reg_t<rw_t, 0X4002101C, 28, 1>;	 /*!<Power interface clock enable */
		}
		/*!
		Backup domain control register (RCC_BDCR)
		*/
		namespace BDCR{
			using LSEON 	= reg_t<rw_t, 0X40021020, 0, 1>;	 /*!<External Low Speed oscillator enable */
			using LSERDY 	= reg_t<ro_t, 0X40021020, 1, 1>;	 /*!<External Low Speed oscillator ready */
			using LSEBYP 	= reg_t<rw_t, 0X40021020, 2, 1>;	 /*!<External Low Speed oscillator bypass */
			using LSEDRV 	= reg_t<rw_t, 0X40021020, 3, 2>;	 /*!<LSE oscillator drive capability */
			using RTCSEL 	= reg_t<rw_t, 0X40021020, 8, 2>;	 /*!<RTC clock source selection */
			using RTCEN 	= reg_t<rw_t, 0X40021020, 15, 1>;	 /*!<RTC clock enable */
			using BDRST 	= reg_t<rw_t, 0X40021020, 16, 1>;	 /*!<Backup domain software reset */
		}
		/*!
		Control/status register (RCC_CSR)
		*/
		namespace CSR{
			using LSION 	= reg_t<rw_t, 0X40021024, 0, 1>;	 /*!<Internal low speed oscillator enable */
			using LSIRDY 	= reg_t<ro_t, 0X40021024, 1, 1>;	 /*!<Internal low speed oscillator ready */
			using RMVF 	= reg_t<rw_t, 0X40021024, 24, 1>;	 /*!<Remove reset flag */
			using OBLRSTF 	= reg_t<rw_t, 0X40021024, 25, 1>;	 /*!<Option byte loader reset flag */
			using PINRSTF 	= reg_t<rw_t, 0X40021024, 26, 1>;	 /*!<PIN reset flag */
			using PORRSTF 	= reg_t<rw_t, 0X40021024, 27, 1>;	 /*!<POR/PDR reset flag */
			using SFTRSTF 	= reg_t<rw_t, 0X40021024, 28, 1>;	 /*!<Software reset flag */
			using IWDGRSTF 	= reg_t<rw_t, 0X40021024, 29, 1>;	 /*!<Independent watchdog reset flag */
			using WWDGRSTF 	= reg_t<rw_t, 0X40021024, 30, 1>;	 /*!<Window watchdog reset flag */
			using LPWRRSTF 	= reg_t<rw_t, 0X40021024, 31, 1>;	 /*!<Low-power reset flag */
		}
		/*!
		AHB peripheral reset register
		*/
		namespace AHBRSTR{
			using IOPARST 	= reg_t<rw_t, 0X40021028, 17, 1>;	 /*!<I/O port A reset */
			using IOPBRST 	= reg_t<rw_t, 0X40021028, 18, 1>;	 /*!<I/O port B reset */
			using IOPCRST 	= reg_t<rw_t, 0X40021028, 19, 1>;	 /*!<I/O port C reset */
			using IOPDRST 	= reg_t<rw_t, 0X40021028, 20, 1>;	 /*!<I/O port D reset */
			using IOPFRST 	= reg_t<rw_t, 0X40021028, 22, 1>;	 /*!<I/O port F reset */
		}
		/*!
		Clock configuration register 2
		*/
		namespace CFGR2{
			using PREDIV 	= reg_t<rw_t, 0X4002102C, 0, 4>;	 /*!<PREDIV division factor */
		}
		/*!
		Clock configuration register 3
		*/
		namespace CFGR3{
			using USART1SW 	= reg_t<rw_t, 0X40021030, 0, 2>;	 /*!<USART1 clock source selection */
			using I2C1SW 	= reg_t<rw_t, 0X40021030, 4, 1>;	 /*!<I2C1 clock source selection */
			using ADCSW 	= reg_t<rw_t, 0X40021030, 8, 1>;	 /*!<ADC clock source selection */
			using USART2SW 	= reg_t<rw_t, 0X40021030, 16, 2>;	 /*!<USART2 clock source selection */
		}
		/*!
		Clock control register 2
		*/
		namespace CR2{
			using HSI14ON 	= reg_t<rw_t, 0X40021034, 0, 1>;	 /*!<HSI14 clock enable */
			using HSI14RDY 	= reg_t<ro_t, 0X40021034, 1, 1>;	 /*!<HR14 clock ready flag */
			using HSI14DIS 	= reg_t<rw_t, 0X40021034, 2, 1>;	 /*!<HSI14 clock request from ADC disable */
			using HSI14TRIM 	= reg_t<rw_t, 0X40021034, 3, 5>;	 /*!<HSI14 clock trimming */
			using HSI14CAL 	= reg_t<ro_t, 0X40021034, 8, 8>;	 /*!<HSI14 clock calibration */
			using HSI48ON 	= reg_t<rw_t, 0X40021034, 16, 1>;	 /*!<HSI48 clock enable */
			using HSI48RDY 	= reg_t<ro_t, 0X40021034, 17, 1>;	 /*!<HSI48 clock ready flag */
			using HSI48CAL 	= reg_t<ro_t, 0X40021034, 24, 1>;	 /*!<HSI48 factory clock calibration */
		}
	}
	/*!
	System configuration controller
	*/
	namespace SYSCFG{
		/*!
		configuration register 1
		*/
		namespace CFGR1{
			using MEM_MODE 	= reg_t<rw_t, 0X40010000, 0, 2>;	 /*!<Memory mapping selection bits */
			using ADC_DMA_RMP 	= reg_t<rw_t, 0X40010000, 8, 1>;	 /*!<ADC DMA remapping bit */
			using USART1_TX_DMA_RMP 	= reg_t<rw_t, 0X40010000, 9, 1>;	 /*!<USART1_TX DMA remapping bit */
			using USART1_RX_DMA_RMP 	= reg_t<rw_t, 0X40010000, 10, 1>;	 /*!<USART1_RX DMA request remapping bit */
			using TIM16_DMA_RMP 	= reg_t<rw_t, 0X40010000, 11, 1>;	 /*!<TIM16 DMA request remapping bit */
			using TIM17_DMA_RMP 	= reg_t<rw_t, 0X40010000, 12, 1>;	 /*!<TIM17 DMA request remapping bit */
			using I2C_PB6_FM 	= reg_t<rw_t, 0X40010000, 16, 1>;	 /*!<Fast Mode Plus (FM plus) driving capability activation bits. */
			using I2C_PB7_FM 	= reg_t<rw_t, 0X40010000, 17, 1>;	 /*!<Fast Mode Plus (FM+) driving capability activation bits. */
			using I2C_PB8_FM 	= reg_t<rw_t, 0X40010000, 18, 1>;	 /*!<Fast Mode Plus (FM+) driving capability activation bits. */
			using I2C_PB9_FM 	= reg_t<rw_t, 0X40010000, 19, 1>;	 /*!<Fast Mode Plus (FM+) driving capability activation bits. */
			using I2C1_FM_plus 	= reg_t<rw_t, 0X40010000, 20, 1>;	 /*!<FM+ driving capability activation for I2C1 */
			using I2C2_FM_plus 	= reg_t<rw_t, 0X40010000, 21, 1>;	 /*!<FM+ driving capability activation for I2C2 */
			using SPI2_DMA_RMP 	= reg_t<rw_t, 0X40010000, 24, 1>;	 /*!<SPI2 DMA request remapping bit */
			using USART2_DMA_RMP 	= reg_t<rw_t, 0X40010000, 25, 1>;	 /*!<USART2 DMA request remapping bit */
			using USART3_DMA_RMP 	= reg_t<rw_t, 0X40010000, 26, 1>;	 /*!<USART3 DMA request remapping bit */
			using I2C1_DMA_RMP 	= reg_t<rw_t, 0X40010000, 27, 1>;	 /*!<I2C1 DMA request remapping bit */
			using TIM1_DMA_RMP 	= reg_t<rw_t, 0X40010000, 28, 1>;	 /*!<TIM1 DMA request remapping bit */
			using TIM2_DMA_RMP 	= reg_t<rw_t, 0X40010000, 29, 1>;	 /*!<TIM2 DMA request remapping bit */
			using TIM3_DMA_RMP 	= reg_t<rw_t, 0X40010000, 30, 1>;	 /*!<TIM3 DMA request remapping bit */
		}
		/*!
		external interrupt configuration register 1
		*/
		namespace EXTICR1{
			using EXTI3 	= reg_t<rw_t, 0X40010008, 12, 4>;	 /*!<EXTI 3 configuration bits */
			using EXTI2 	= reg_t<rw_t, 0X40010008, 8, 4>;	 /*!<EXTI 2 configuration bits */
			using EXTI1 	= reg_t<rw_t, 0X40010008, 4, 4>;	 /*!<EXTI 1 configuration bits */
			using EXTI0 	= reg_t<rw_t, 0X40010008, 0, 4>;	 /*!<EXTI 0 configuration bits */
		}
		/*!
		external interrupt configuration register 2
		*/
		namespace EXTICR2{
			using EXTI7 	= reg_t<rw_t, 0X4001000C, 12, 4>;	 /*!<EXTI 7 configuration bits */
			using EXTI6 	= reg_t<rw_t, 0X4001000C, 8, 4>;	 /*!<EXTI 6 configuration bits */
			using EXTI5 	= reg_t<rw_t, 0X4001000C, 4, 4>;	 /*!<EXTI 5 configuration bits */
			using EXTI4 	= reg_t<rw_t, 0X4001000C, 0, 4>;	 /*!<EXTI 4 configuration bits */
		}
		/*!
		external interrupt configuration register 3
		*/
		namespace EXTICR3{
			using EXTI11 	= reg_t<rw_t, 0X40010010, 12, 4>;	 /*!<EXTI 11 configuration bits */
			using EXTI10 	= reg_t<rw_t, 0X40010010, 8, 4>;	 /*!<EXTI 10 configuration bits */
			using EXTI9 	= reg_t<rw_t, 0X40010010, 4, 4>;	 /*!<EXTI 9 configuration bits */
			using EXTI8 	= reg_t<rw_t, 0X40010010, 0, 4>;	 /*!<EXTI 8 configuration bits */
		}
		/*!
		external interrupt configuration register 4
		*/
		namespace EXTICR4{
			using EXTI15 	= reg_t<rw_t, 0X40010014, 12, 4>;	 /*!<EXTI 15 configuration bits */
			using EXTI14 	= reg_t<rw_t, 0X40010014, 8, 4>;	 /*!<EXTI 14 configuration bits */
			using EXTI13 	= reg_t<rw_t, 0X40010014, 4, 4>;	 /*!<EXTI 13 configuration bits */
			using EXTI12 	= reg_t<rw_t, 0X40010014, 0, 4>;	 /*!<EXTI 12 configuration bits */
		}
		/*!
		configuration register 2
		*/
		namespace CFGR2{
			using SRAM_PEF 	= reg_t<rw_t, 0X40010018, 8, 1>;	 /*!<SRAM parity flag */
			using PVD_LOCK 	= reg_t<rw_t, 0X40010018, 2, 1>;	 /*!<PVD lock enable bit */
			using SRAM_PARITY_LOCK 	= reg_t<rw_t, 0X40010018, 1, 1>;	 /*!<SRAM parity lock bit */
			using LOCUP_LOCK 	= reg_t<rw_t, 0X40010018, 0, 1>;	 /*!<Cortex-M0 LOCKUP bit enable bit */
		}
	}
	/*!
	Analog-to-digital converter
	*/
	namespace ADC{
		/*!
		interrupt and status register
		*/
		namespace ISR{
			using AWD 	= reg_t<rw_t, 0X40012400, 7, 1>;	 /*!<Analog watchdog flag */
			using OVR 	= reg_t<rw_t, 0X40012400, 4, 1>;	 /*!<ADC overrun */
			using EOS 	= reg_t<rw_t, 0X40012400, 3, 1>;	 /*!<End of sequence flag */
			using EOC 	= reg_t<rw_t, 0X40012400, 2, 1>;	 /*!<End of conversion flag */
			using EOSMP 	= reg_t<rw_t, 0X40012400, 1, 1>;	 /*!<End of sampling flag */
			using ADRDY 	= reg_t<rw_t, 0X40012400, 0, 1>;	 /*!<ADC ready */
		}
		/*!
		interrupt enable register
		*/
		namespace IER{
			using AWDIE 	= reg_t<rw_t, 0X40012404, 7, 1>;	 /*!<Analog watchdog interrupt enable */
			using OVRIE 	= reg_t<rw_t, 0X40012404, 4, 1>;	 /*!<Overrun interrupt enable */
			using EOSIE 	= reg_t<rw_t, 0X40012404, 3, 1>;	 /*!<End of conversion sequence interrupt enable */
			using EOCIE 	= reg_t<rw_t, 0X40012404, 2, 1>;	 /*!<End of conversion interrupt enable */
			using EOSMPIE 	= reg_t<rw_t, 0X40012404, 1, 1>;	 /*!<End of sampling flag interrupt enable */
			using ADRDYIE 	= reg_t<rw_t, 0X40012404, 0, 1>;	 /*!<ADC ready interrupt enable */
		}
		/*!
		control register
		*/
		namespace CR{
			using ADCAL 	= reg_t<rw_t, 0X40012408, 31, 1>;	 /*!<ADC calibration */
			using ADSTP 	= reg_t<rw_t, 0X40012408, 4, 1>;	 /*!<ADC stop conversion command */
			using ADSTART 	= reg_t<rw_t, 0X40012408, 2, 1>;	 /*!<ADC start conversion command */
			using ADDIS 	= reg_t<rw_t, 0X40012408, 1, 1>;	 /*!<ADC disable command */
			using ADEN 	= reg_t<rw_t, 0X40012408, 0, 1>;	 /*!<ADC enable command */
		}
		/*!
		configuration register 1
		*/
		namespace CFGR1{
			using AWDCH 	= reg_t<rw_t, 0X4001240C, 26, 5>;	 /*!<Analog watchdog channel selection */
			using AWDEN 	= reg_t<rw_t, 0X4001240C, 23, 1>;	 /*!<Analog watchdog enable */
			using AWDSGL 	= reg_t<rw_t, 0X4001240C, 22, 1>;	 /*!<Enable the watchdog on a single channel or on all channels */
			using DISCEN 	= reg_t<rw_t, 0X4001240C, 16, 1>;	 /*!<Discontinuous mode */
			using AUTOFF 	= reg_t<rw_t, 0X4001240C, 15, 1>;	 /*!<Auto-off mode */
			using AUTDLY 	= reg_t<rw_t, 0X4001240C, 14, 1>;	 /*!<Auto-delayed conversion mode */
			using CONT 	= reg_t<rw_t, 0X4001240C, 13, 1>;	 /*!<Single / continuous conversion mode */
			using OVRMOD 	= reg_t<rw_t, 0X4001240C, 12, 1>;	 /*!<Overrun management mode */
			using EXTEN 	= reg_t<rw_t, 0X4001240C, 10, 2>;	 /*!<External trigger enable and polarity selection */
			using EXTSEL 	= reg_t<rw_t, 0X4001240C, 6, 3>;	 /*!<External trigger selection */
			using ALIGN 	= reg_t<rw_t, 0X4001240C, 5, 1>;	 /*!<Data alignment */
			using RES 	= reg_t<rw_t, 0X4001240C, 3, 2>;	 /*!<Data resolution */
			using SCANDIR 	= reg_t<rw_t, 0X4001240C, 2, 1>;	 /*!<Scan sequence direction */
			using DMACFG 	= reg_t<rw_t, 0X4001240C, 1, 1>;	 /*!<Direct memery access configuration */
			using DMAEN 	= reg_t<rw_t, 0X4001240C, 0, 1>;	 /*!<Direct memory access enable */
		}
		/*!
		configuration register 2
		*/
		namespace CFGR2{
			using JITOFF_D4 	= reg_t<rw_t, 0X40012410, 31, 1>;	 /*!<JITOFF_D4 */
			using JITOFF_D2 	= reg_t<rw_t, 0X40012410, 30, 1>;	 /*!<JITOFF_D2 */
		}
		/*!
		sampling time register
		*/
		namespace SMPR{
			using SMPR 	= reg_t<rw_t, 0X40012414, 0, 3>;	 /*!<Sampling time selection */
		}
		/*!
		watchdog threshold register
		*/
		namespace TR{
			using HT 	= reg_t<rw_t, 0X40012420, 16, 12>;	 /*!<Analog watchdog higher threshold */
			using LT 	= reg_t<rw_t, 0X40012420, 0, 12>;	 /*!<Analog watchdog lower threshold */
		}
		/*!
		channel selection register
		*/
		namespace CHSELR{
			using CHSEL18 	= reg_t<rw_t, 0X40012428, 18, 1>;	 /*!<Channel-x selection */
			using CHSEL17 	= reg_t<rw_t, 0X40012428, 17, 1>;	 /*!<Channel-x selection */
			using CHSEL16 	= reg_t<rw_t, 0X40012428, 16, 1>;	 /*!<Channel-x selection */
			using CHSEL15 	= reg_t<rw_t, 0X40012428, 15, 1>;	 /*!<Channel-x selection */
			using CHSEL14 	= reg_t<rw_t, 0X40012428, 14, 1>;	 /*!<Channel-x selection */
			using CHSEL13 	= reg_t<rw_t, 0X40012428, 13, 1>;	 /*!<Channel-x selection */
			using CHSEL12 	= reg_t<rw_t, 0X40012428, 12, 1>;	 /*!<Channel-x selection */
			using CHSEL11 	= reg_t<rw_t, 0X40012428, 11, 1>;	 /*!<Channel-x selection */
			using CHSEL10 	= reg_t<rw_t, 0X40012428, 10, 1>;	 /*!<Channel-x selection */
			using CHSEL9 	= reg_t<rw_t, 0X40012428, 9, 1>;	 /*!<Channel-x selection */
			using CHSEL8 	= reg_t<rw_t, 0X40012428, 8, 1>;	 /*!<Channel-x selection */
			using CHSEL7 	= reg_t<rw_t, 0X40012428, 7, 1>;	 /*!<Channel-x selection */
			using CHSEL6 	= reg_t<rw_t, 0X40012428, 6, 1>;	 /*!<Channel-x selection */
			using CHSEL5 	= reg_t<rw_t, 0X40012428, 5, 1>;	 /*!<Channel-x selection */
			using CHSEL4 	= reg_t<rw_t, 0X40012428, 4, 1>;	 /*!<Channel-x selection */
			using CHSEL3 	= reg_t<rw_t, 0X40012428, 3, 1>;	 /*!<Channel-x selection */
			using CHSEL2 	= reg_t<rw_t, 0X40012428, 2, 1>;	 /*!<Channel-x selection */
			using CHSEL1 	= reg_t<rw_t, 0X40012428, 1, 1>;	 /*!<Channel-x selection */
			using CHSEL0 	= reg_t<rw_t, 0X40012428, 0, 1>;	 /*!<Channel-x selection */
		}
		/*!
		data register
		*/
		namespace DR{
			using DATA 	= reg_t<ro_t, 0X40012440, 0, 16>;	 /*!<Converted data */
		}
		/*!
		common configuration register
		*/
		namespace CCR{
			using VBATEN 	= reg_t<rw_t, 0X40012708, 24, 1>;	 /*!<VBAT enable */
			using TSEN 	= reg_t<rw_t, 0X40012708, 23, 1>;	 /*!<Temperature sensor enable */
			using VREFEN 	= reg_t<rw_t, 0X40012708, 22, 1>;	 /*!<Temperature sensor and VREFINT enable */
		}
	}
	/*!
	Universal synchronous asynchronous receiver transmitter
	*/
	namespace USART1{
		/*!
		Control register 1
		*/
		namespace CR1{
			using UE 	= reg_t<rw_t, 0X40013800, 0, 1>;	 /*!<USART enable */
			using UESM 	= reg_t<rw_t, 0X40013800, 1, 1>;	 /*!<USART enable in Stop mode */
			using RE 	= reg_t<rw_t, 0X40013800, 2, 1>;	 /*!<Receiver enable */
			using TE 	= reg_t<rw_t, 0X40013800, 3, 1>;	 /*!<Transmitter enable */
			using IDLEIE 	= reg_t<rw_t, 0X40013800, 4, 1>;	 /*!<IDLE interrupt enable */
			using RXNEIE 	= reg_t<rw_t, 0X40013800, 5, 1>;	 /*!<RXNE interrupt enable */
			using TCIE 	= reg_t<rw_t, 0X40013800, 6, 1>;	 /*!<Transmission complete interrupt enable */
			using TXEIE 	= reg_t<rw_t, 0X40013800, 7, 1>;	 /*!<interrupt enable */
			using PEIE 	= reg_t<rw_t, 0X40013800, 8, 1>;	 /*!<PE interrupt enable */
			using PS 	= reg_t<rw_t, 0X40013800, 9, 1>;	 /*!<Parity selection */
			using PCE 	= reg_t<rw_t, 0X40013800, 10, 1>;	 /*!<Parity control enable */
			using WAKE 	= reg_t<rw_t, 0X40013800, 11, 1>;	 /*!<Receiver wakeup method */
			using M 	= reg_t<rw_t, 0X40013800, 12, 1>;	 /*!<Word length */
			using MME 	= reg_t<rw_t, 0X40013800, 13, 1>;	 /*!<Mute mode enable */
			using CMIE 	= reg_t<rw_t, 0X40013800, 14, 1>;	 /*!<Character match interrupt enable */
			using OVER8 	= reg_t<rw_t, 0X40013800, 15, 1>;	 /*!<Oversampling mode */
			using DEDT 	= reg_t<rw_t, 0X40013800, 16, 5>;	 /*!<Driver Enable deassertion time */
			using DEAT 	= reg_t<rw_t, 0X40013800, 21, 5>;	 /*!<Driver Enable assertion time */
			using RTOIE 	= reg_t<rw_t, 0X40013800, 26, 1>;	 /*!<Receiver timeout interrupt enable */
			using EOBIE 	= reg_t<rw_t, 0X40013800, 27, 1>;	 /*!<End of Block interrupt enable */
			using M1 	= reg_t<rw_t, 0X40013800, 28, 1>;	 /*!<Word length */
		}
		/*!
		Control register 2
		*/
		namespace CR2{
			using ADD4 	= reg_t<rw_t, 0X40013804, 28, 4>;	 /*!<Address of the USART node */
			using ADD0 	= reg_t<rw_t, 0X40013804, 24, 4>;	 /*!<Address of the USART node */
			using RTOEN 	= reg_t<rw_t, 0X40013804, 23, 1>;	 /*!<Receiver timeout enable */
			using ABRMOD 	= reg_t<rw_t, 0X40013804, 21, 2>;	 /*!<Auto baud rate mode */
			using ABREN 	= reg_t<rw_t, 0X40013804, 20, 1>;	 /*!<Auto baud rate enable */
			using MSBFIRST 	= reg_t<rw_t, 0X40013804, 19, 1>;	 /*!<Most significant bit first */
			using DATAINV 	= reg_t<rw_t, 0X40013804, 18, 1>;	 /*!<Binary data inversion */
			using TXINV 	= reg_t<rw_t, 0X40013804, 17, 1>;	 /*!<TX pin active level inversion */
			using RXINV 	= reg_t<rw_t, 0X40013804, 16, 1>;	 /*!<RX pin active level inversion */
			using SWAP 	= reg_t<rw_t, 0X40013804, 15, 1>;	 /*!<Swap TX/RX pins */
			using LINEN 	= reg_t<rw_t, 0X40013804, 14, 1>;	 /*!<LIN mode enable */
			using STOP 	= reg_t<rw_t, 0X40013804, 12, 2>;	 /*!<STOP bits */
			using CLKEN 	= reg_t<rw_t, 0X40013804, 11, 1>;	 /*!<Clock enable */
			using CPOL 	= reg_t<rw_t, 0X40013804, 10, 1>;	 /*!<Clock polarity */
			using CPHA 	= reg_t<rw_t, 0X40013804, 9, 1>;	 /*!<Clock phase */
			using LBCL 	= reg_t<rw_t, 0X40013804, 8, 1>;	 /*!<Last bit clock pulse */
			using LBDIE 	= reg_t<rw_t, 0X40013804, 6, 1>;	 /*!<LIN break detection interrupt enable */
			using LBDL 	= reg_t<rw_t, 0X40013804, 5, 1>;	 /*!<LIN break detection length */
			using ADDM7 	= reg_t<rw_t, 0X40013804, 4, 1>;	 /*!<7-bit Address Detection/4-bit Address Detection */
		}
		/*!
		Control register 3
		*/
		namespace CR3{
			using WUFIE 	= reg_t<rw_t, 0X40013808, 22, 1>;	 /*!<Wakeup from Stop mode interrupt enable */
			using WUS 	= reg_t<rw_t, 0X40013808, 20, 2>;	 /*!<Wakeup from Stop mode interrupt flag selection */
			using SCARCNT 	= reg_t<rw_t, 0X40013808, 17, 3>;	 /*!<Smartcard auto-retry count */
			using DEP 	= reg_t<rw_t, 0X40013808, 15, 1>;	 /*!<Driver enable polarity selection */
			using DEM 	= reg_t<rw_t, 0X40013808, 14, 1>;	 /*!<Driver enable mode */
			using DDRE 	= reg_t<rw_t, 0X40013808, 13, 1>;	 /*!<DMA Disable on Reception Error */
			using OVRDIS 	= reg_t<rw_t, 0X40013808, 12, 1>;	 /*!<Overrun Disable */
			using ONEBIT 	= reg_t<rw_t, 0X40013808, 11, 1>;	 /*!<One sample bit method enable */
			using CTSIE 	= reg_t<rw_t, 0X40013808, 10, 1>;	 /*!<CTS interrupt enable */
			using CTSE 	= reg_t<rw_t, 0X40013808, 9, 1>;	 /*!<CTS enable */
			using RTSE 	= reg_t<rw_t, 0X40013808, 8, 1>;	 /*!<RTS enable */
			using DMAT 	= reg_t<rw_t, 0X40013808, 7, 1>;	 /*!<DMA enable transmitter */
			using DMAR 	= reg_t<rw_t, 0X40013808, 6, 1>;	 /*!<DMA enable receiver */
			using SCEN 	= reg_t<rw_t, 0X40013808, 5, 1>;	 /*!<Smartcard mode enable */
			using NACK 	= reg_t<rw_t, 0X40013808, 4, 1>;	 /*!<Smartcard NACK enable */
			using HDSEL 	= reg_t<rw_t, 0X40013808, 3, 1>;	 /*!<Half-duplex selection */
			using IRLP 	= reg_t<rw_t, 0X40013808, 2, 1>;	 /*!<IrDA low-power */
			using IREN 	= reg_t<rw_t, 0X40013808, 1, 1>;	 /*!<IrDA mode enable */
			using EIE 	= reg_t<rw_t, 0X40013808, 0, 1>;	 /*!<Error interrupt enable */
		}
		/*!
		Baud rate register
		*/
		namespace BRR{
			using DIV_Mantissa 	= reg_t<rw_t, 0X4001380C, 4, 12>;	 /*!<mantissa of USARTDIV */
			using DIV_Fraction 	= reg_t<rw_t, 0X4001380C, 0, 4>;	 /*!<fraction of USARTDIV */
		}
		/*!
		Guard time and prescaler register
		*/
		namespace GTPR{
			using GT 	= reg_t<rw_t, 0X40013810, 8, 8>;	 /*!<Guard time value */
			using PSC 	= reg_t<rw_t, 0X40013810, 0, 8>;	 /*!<Prescaler value */
		}
		/*!
		Receiver timeout register
		*/
		namespace RTOR{
			using BLEN 	= reg_t<rw_t, 0X40013814, 24, 8>;	 /*!<Block Length */
			using RTO 	= reg_t<rw_t, 0X40013814, 0, 24>;	 /*!<Receiver timeout value */
		}
		/*!
		Request register
		*/
		namespace RQR{
			using TXFRQ 	= reg_t<rw_t, 0X40013818, 4, 1>;	 /*!<Transmit data flush request */
			using RXFRQ 	= reg_t<rw_t, 0X40013818, 3, 1>;	 /*!<Receive data flush request */
			using MMRQ 	= reg_t<rw_t, 0X40013818, 2, 1>;	 /*!<Mute mode request */
			using SBKRQ 	= reg_t<rw_t, 0X40013818, 1, 1>;	 /*!<Send break request */
			using ABRRQ 	= reg_t<rw_t, 0X40013818, 0, 1>;	 /*!<Auto baud rate request */
		}
		/*!
		Interrupt & status register
		*/
		namespace ISR{
			using REACK 	= reg_t<ro_t, 0X4001381C, 22, 1>;	 /*!<Receive enable acknowledge flag */
			using TEACK 	= reg_t<ro_t, 0X4001381C, 21, 1>;	 /*!<Transmit enable acknowledge flag */
			using WUF 	= reg_t<ro_t, 0X4001381C, 20, 1>;	 /*!<Wakeup from Stop mode flag */
			using RWU 	= reg_t<ro_t, 0X4001381C, 19, 1>;	 /*!<Receiver wakeup from Mute mode */
			using SBKF 	= reg_t<ro_t, 0X4001381C, 18, 1>;	 /*!<Send break flag */
			using CMF 	= reg_t<ro_t, 0X4001381C, 17, 1>;	 /*!<character match flag */
			using BUSY 	= reg_t<ro_t, 0X4001381C, 16, 1>;	 /*!<Busy flag */
			using ABRF 	= reg_t<ro_t, 0X4001381C, 15, 1>;	 /*!<Auto baud rate flag */
			using ABRE 	= reg_t<ro_t, 0X4001381C, 14, 1>;	 /*!<Auto baud rate error */
			using EOBF 	= reg_t<ro_t, 0X4001381C, 12, 1>;	 /*!<End of block flag */
			using RTOF 	= reg_t<ro_t, 0X4001381C, 11, 1>;	 /*!<Receiver timeout */
			using CTS 	= reg_t<ro_t, 0X4001381C, 10, 1>;	 /*!<CTS flag */
			using CTSIF 	= reg_t<ro_t, 0X4001381C, 9, 1>;	 /*!<CTS interrupt flag */
			using LBDF 	= reg_t<ro_t, 0X4001381C, 8, 1>;	 /*!<LIN break detection flag */
			using TXE 	= reg_t<ro_t, 0X4001381C, 7, 1>;	 /*!<Transmit data register empty */
			using TC 	= reg_t<ro_t, 0X4001381C, 6, 1>;	 /*!<Transmission complete */
			using RXNE 	= reg_t<ro_t, 0X4001381C, 5, 1>;	 /*!<Read data register not empty */
			using IDLE 	= reg_t<ro_t, 0X4001381C, 4, 1>;	 /*!<Idle line detected */
			using ORE 	= reg_t<ro_t, 0X4001381C, 3, 1>;	 /*!<Overrun error */
			using NF 	= reg_t<ro_t, 0X4001381C, 2, 1>;	 /*!<Noise detected flag */
			using FE 	= reg_t<ro_t, 0X4001381C, 1, 1>;	 /*!<Framing error */
			using PE 	= reg_t<ro_t, 0X4001381C, 0, 1>;	 /*!<Parity error */
		}
		/*!
		Interrupt flag clear register
		*/
		namespace ICR{
			using WUCF 	= reg_t<rw_t, 0X40013820, 20, 1>;	 /*!<Wakeup from Stop mode clear flag */
			using CMCF 	= reg_t<rw_t, 0X40013820, 17, 1>;	 /*!<Character match clear flag */
			using EOBCF 	= reg_t<rw_t, 0X40013820, 12, 1>;	 /*!<End of timeout clear flag */
			using RTOCF 	= reg_t<rw_t, 0X40013820, 11, 1>;	 /*!<Receiver timeout clear flag */
			using CTSCF 	= reg_t<rw_t, 0X40013820, 9, 1>;	 /*!<CTS clear flag */
			using LBDCF 	= reg_t<rw_t, 0X40013820, 8, 1>;	 /*!<LIN break detection clear flag */
			using TCCF 	= reg_t<rw_t, 0X40013820, 6, 1>;	 /*!<Transmission complete clear flag */
			using IDLECF 	= reg_t<rw_t, 0X40013820, 4, 1>;	 /*!<Idle line detected clear flag */
			using ORECF 	= reg_t<rw_t, 0X40013820, 3, 1>;	 /*!<Overrun error clear flag */
			using NCF 	= reg_t<rw_t, 0X40013820, 2, 1>;	 /*!<Noise detected clear flag */
			using FECF 	= reg_t<rw_t, 0X40013820, 1, 1>;	 /*!<Framing error clear flag */
			using PECF 	= reg_t<rw_t, 0X40013820, 0, 1>;	 /*!<Parity error clear flag */
		}
		/*!
		Receive data register
		*/
		namespace RDR{
			using RDR 	= reg_t<ro_t, 0X40013824, 0, 9>;	 /*!<Receive data value */
		}
		/*!
		Transmit data register
		*/
		namespace TDR{
			using TDR 	= reg_t<rw_t, 0X40013828, 0, 9>;	 /*!<Transmit data value */
		}
	}
	/*!
	Universal synchronous asynchronous receiver transmitter
	BasedOn:USART1
	*/
	namespace USART2{
		/*!
		Control register 1
		*/
		namespace CR1{
			using UE 	= reg_t<rw_t, 0X40004400, 0, 1>;	 /*!<USART enable */
			using UESM 	= reg_t<rw_t, 0X40004400, 1, 1>;	 /*!<USART enable in Stop mode */
			using RE 	= reg_t<rw_t, 0X40004400, 2, 1>;	 /*!<Receiver enable */
			using TE 	= reg_t<rw_t, 0X40004400, 3, 1>;	 /*!<Transmitter enable */
			using IDLEIE 	= reg_t<rw_t, 0X40004400, 4, 1>;	 /*!<IDLE interrupt enable */
			using RXNEIE 	= reg_t<rw_t, 0X40004400, 5, 1>;	 /*!<RXNE interrupt enable */
			using TCIE 	= reg_t<rw_t, 0X40004400, 6, 1>;	 /*!<Transmission complete interrupt enable */
			using TXEIE 	= reg_t<rw_t, 0X40004400, 7, 1>;	 /*!<interrupt enable */
			using PEIE 	= reg_t<rw_t, 0X40004400, 8, 1>;	 /*!<PE interrupt enable */
			using PS 	= reg_t<rw_t, 0X40004400, 9, 1>;	 /*!<Parity selection */
			using PCE 	= reg_t<rw_t, 0X40004400, 10, 1>;	 /*!<Parity control enable */
			using WAKE 	= reg_t<rw_t, 0X40004400, 11, 1>;	 /*!<Receiver wakeup method */
			using M 	= reg_t<rw_t, 0X40004400, 12, 1>;	 /*!<Word length */
			using MME 	= reg_t<rw_t, 0X40004400, 13, 1>;	 /*!<Mute mode enable */
			using CMIE 	= reg_t<rw_t, 0X40004400, 14, 1>;	 /*!<Character match interrupt enable */
			using OVER8 	= reg_t<rw_t, 0X40004400, 15, 1>;	 /*!<Oversampling mode */
			using DEDT 	= reg_t<rw_t, 0X40004400, 16, 5>;	 /*!<Driver Enable deassertion time */
			using DEAT 	= reg_t<rw_t, 0X40004400, 21, 5>;	 /*!<Driver Enable assertion time */
			using RTOIE 	= reg_t<rw_t, 0X40004400, 26, 1>;	 /*!<Receiver timeout interrupt enable */
			using EOBIE 	= reg_t<rw_t, 0X40004400, 27, 1>;	 /*!<End of Block interrupt enable */
			using M1 	= reg_t<rw_t, 0X40004400, 28, 1>;	 /*!<Word length */
		}
		/*!
		Control register 2
		*/
		namespace CR2{
			using ADD4 	= reg_t<rw_t, 0X40004404, 28, 4>;	 /*!<Address of the USART node */
			using ADD0 	= reg_t<rw_t, 0X40004404, 24, 4>;	 /*!<Address of the USART node */
			using RTOEN 	= reg_t<rw_t, 0X40004404, 23, 1>;	 /*!<Receiver timeout enable */
			using ABRMOD 	= reg_t<rw_t, 0X40004404, 21, 2>;	 /*!<Auto baud rate mode */
			using ABREN 	= reg_t<rw_t, 0X40004404, 20, 1>;	 /*!<Auto baud rate enable */
			using MSBFIRST 	= reg_t<rw_t, 0X40004404, 19, 1>;	 /*!<Most significant bit first */
			using DATAINV 	= reg_t<rw_t, 0X40004404, 18, 1>;	 /*!<Binary data inversion */
			using TXINV 	= reg_t<rw_t, 0X40004404, 17, 1>;	 /*!<TX pin active level inversion */
			using RXINV 	= reg_t<rw_t, 0X40004404, 16, 1>;	 /*!<RX pin active level inversion */
			using SWAP 	= reg_t<rw_t, 0X40004404, 15, 1>;	 /*!<Swap TX/RX pins */
			using LINEN 	= reg_t<rw_t, 0X40004404, 14, 1>;	 /*!<LIN mode enable */
			using STOP 	= reg_t<rw_t, 0X40004404, 12, 2>;	 /*!<STOP bits */
			using CLKEN 	= reg_t<rw_t, 0X40004404, 11, 1>;	 /*!<Clock enable */
			using CPOL 	= reg_t<rw_t, 0X40004404, 10, 1>;	 /*!<Clock polarity */
			using CPHA 	= reg_t<rw_t, 0X40004404, 9, 1>;	 /*!<Clock phase */
			using LBCL 	= reg_t<rw_t, 0X40004404, 8, 1>;	 /*!<Last bit clock pulse */
			using LBDIE 	= reg_t<rw_t, 0X40004404, 6, 1>;	 /*!<LIN break detection interrupt enable */
			using LBDL 	= reg_t<rw_t, 0X40004404, 5, 1>;	 /*!<LIN break detection length */
			using ADDM7 	= reg_t<rw_t, 0X40004404, 4, 1>;	 /*!<7-bit Address Detection/4-bit Address Detection */
		}
		/*!
		Control register 3
		*/
		namespace CR3{
			using WUFIE 	= reg_t<rw_t, 0X40004408, 22, 1>;	 /*!<Wakeup from Stop mode interrupt enable */
			using WUS 	= reg_t<rw_t, 0X40004408, 20, 2>;	 /*!<Wakeup from Stop mode interrupt flag selection */
			using SCARCNT 	= reg_t<rw_t, 0X40004408, 17, 3>;	 /*!<Smartcard auto-retry count */
			using DEP 	= reg_t<rw_t, 0X40004408, 15, 1>;	 /*!<Driver enable polarity selection */
			using DEM 	= reg_t<rw_t, 0X40004408, 14, 1>;	 /*!<Driver enable mode */
			using DDRE 	= reg_t<rw_t, 0X40004408, 13, 1>;	 /*!<DMA Disable on Reception Error */
			using OVRDIS 	= reg_t<rw_t, 0X40004408, 12, 1>;	 /*!<Overrun Disable */
			using ONEBIT 	= reg_t<rw_t, 0X40004408, 11, 1>;	 /*!<One sample bit method enable */
			using CTSIE 	= reg_t<rw_t, 0X40004408, 10, 1>;	 /*!<CTS interrupt enable */
			using CTSE 	= reg_t<rw_t, 0X40004408, 9, 1>;	 /*!<CTS enable */
			using RTSE 	= reg_t<rw_t, 0X40004408, 8, 1>;	 /*!<RTS enable */
			using DMAT 	= reg_t<rw_t, 0X40004408, 7, 1>;	 /*!<DMA enable transmitter */
			using DMAR 	= reg_t<rw_t, 0X40004408, 6, 1>;	 /*!<DMA enable receiver */
			using SCEN 	= reg_t<rw_t, 0X40004408, 5, 1>;	 /*!<Smartcard mode enable */
			using NACK 	= reg_t<rw_t, 0X40004408, 4, 1>;	 /*!<Smartcard NACK enable */
			using HDSEL 	= reg_t<rw_t, 0X40004408, 3, 1>;	 /*!<Half-duplex selection */
			using IRLP 	= reg_t<rw_t, 0X40004408, 2, 1>;	 /*!<IrDA low-power */
			using IREN 	= reg_t<rw_t, 0X40004408, 1, 1>;	 /*!<IrDA mode enable */
			using EIE 	= reg_t<rw_t, 0X40004408, 0, 1>;	 /*!<Error interrupt enable */
		}
		/*!
		Baud rate register
		*/
		namespace BRR{
			using DIV_Mantissa 	= reg_t<rw_t, 0X4000440C, 4, 12>;	 /*!<mantissa of USARTDIV */
			using DIV_Fraction 	= reg_t<rw_t, 0X4000440C, 0, 4>;	 /*!<fraction of USARTDIV */
		}
		/*!
		Guard time and prescaler register
		*/
		namespace GTPR{
			using GT 	= reg_t<rw_t, 0X40004410, 8, 8>;	 /*!<Guard time value */
			using PSC 	= reg_t<rw_t, 0X40004410, 0, 8>;	 /*!<Prescaler value */
		}
		/*!
		Receiver timeout register
		*/
		namespace RTOR{
			using BLEN 	= reg_t<rw_t, 0X40004414, 24, 8>;	 /*!<Block Length */
			using RTO 	= reg_t<rw_t, 0X40004414, 0, 24>;	 /*!<Receiver timeout value */
		}
		/*!
		Request register
		*/
		namespace RQR{
			using TXFRQ 	= reg_t<rw_t, 0X40004418, 4, 1>;	 /*!<Transmit data flush request */
			using RXFRQ 	= reg_t<rw_t, 0X40004418, 3, 1>;	 /*!<Receive data flush request */
			using MMRQ 	= reg_t<rw_t, 0X40004418, 2, 1>;	 /*!<Mute mode request */
			using SBKRQ 	= reg_t<rw_t, 0X40004418, 1, 1>;	 /*!<Send break request */
			using ABRRQ 	= reg_t<rw_t, 0X40004418, 0, 1>;	 /*!<Auto baud rate request */
		}
		/*!
		Interrupt & status register
		*/
		namespace ISR{
			using REACK 	= reg_t<ro_t, 0X4000441C, 22, 1>;	 /*!<Receive enable acknowledge flag */
			using TEACK 	= reg_t<ro_t, 0X4000441C, 21, 1>;	 /*!<Transmit enable acknowledge flag */
			using WUF 	= reg_t<ro_t, 0X4000441C, 20, 1>;	 /*!<Wakeup from Stop mode flag */
			using RWU 	= reg_t<ro_t, 0X4000441C, 19, 1>;	 /*!<Receiver wakeup from Mute mode */
			using SBKF 	= reg_t<ro_t, 0X4000441C, 18, 1>;	 /*!<Send break flag */
			using CMF 	= reg_t<ro_t, 0X4000441C, 17, 1>;	 /*!<character match flag */
			using BUSY 	= reg_t<ro_t, 0X4000441C, 16, 1>;	 /*!<Busy flag */
			using ABRF 	= reg_t<ro_t, 0X4000441C, 15, 1>;	 /*!<Auto baud rate flag */
			using ABRE 	= reg_t<ro_t, 0X4000441C, 14, 1>;	 /*!<Auto baud rate error */
			using EOBF 	= reg_t<ro_t, 0X4000441C, 12, 1>;	 /*!<End of block flag */
			using RTOF 	= reg_t<ro_t, 0X4000441C, 11, 1>;	 /*!<Receiver timeout */
			using CTS 	= reg_t<ro_t, 0X4000441C, 10, 1>;	 /*!<CTS flag */
			using CTSIF 	= reg_t<ro_t, 0X4000441C, 9, 1>;	 /*!<CTS interrupt flag */
			using LBDF 	= reg_t<ro_t, 0X4000441C, 8, 1>;	 /*!<LIN break detection flag */
			using TXE 	= reg_t<ro_t, 0X4000441C, 7, 1>;	 /*!<Transmit data register empty */
			using TC 	= reg_t<ro_t, 0X4000441C, 6, 1>;	 /*!<Transmission complete */
			using RXNE 	= reg_t<ro_t, 0X4000441C, 5, 1>;	 /*!<Read data register not empty */
			using IDLE 	= reg_t<ro_t, 0X4000441C, 4, 1>;	 /*!<Idle line detected */
			using ORE 	= reg_t<ro_t, 0X4000441C, 3, 1>;	 /*!<Overrun error */
			using NF 	= reg_t<ro_t, 0X4000441C, 2, 1>;	 /*!<Noise detected flag */
			using FE 	= reg_t<ro_t, 0X4000441C, 1, 1>;	 /*!<Framing error */
			using PE 	= reg_t<ro_t, 0X4000441C, 0, 1>;	 /*!<Parity error */
		}
		/*!
		Interrupt flag clear register
		*/
		namespace ICR{
			using WUCF 	= reg_t<rw_t, 0X40004420, 20, 1>;	 /*!<Wakeup from Stop mode clear flag */
			using CMCF 	= reg_t<rw_t, 0X40004420, 17, 1>;	 /*!<Character match clear flag */
			using EOBCF 	= reg_t<rw_t, 0X40004420, 12, 1>;	 /*!<End of timeout clear flag */
			using RTOCF 	= reg_t<rw_t, 0X40004420, 11, 1>;	 /*!<Receiver timeout clear flag */
			using CTSCF 	= reg_t<rw_t, 0X40004420, 9, 1>;	 /*!<CTS clear flag */
			using LBDCF 	= reg_t<rw_t, 0X40004420, 8, 1>;	 /*!<LIN break detection clear flag */
			using TCCF 	= reg_t<rw_t, 0X40004420, 6, 1>;	 /*!<Transmission complete clear flag */
			using IDLECF 	= reg_t<rw_t, 0X40004420, 4, 1>;	 /*!<Idle line detected clear flag */
			using ORECF 	= reg_t<rw_t, 0X40004420, 3, 1>;	 /*!<Overrun error clear flag */
			using NCF 	= reg_t<rw_t, 0X40004420, 2, 1>;	 /*!<Noise detected clear flag */
			using FECF 	= reg_t<rw_t, 0X40004420, 1, 1>;	 /*!<Framing error clear flag */
			using PECF 	= reg_t<rw_t, 0X40004420, 0, 1>;	 /*!<Parity error clear flag */
		}
		/*!
		Receive data register
		*/
		namespace RDR{
			using RDR 	= reg_t<ro_t, 0X40004424, 0, 9>;	 /*!<Receive data value */
		}
		/*!
		Transmit data register
		*/
		namespace TDR{
			using TDR 	= reg_t<rw_t, 0X40004428, 0, 9>;	 /*!<Transmit data value */
		}
	}
	/*!
	Real-time clock
	*/
	namespace RTC{
		/*!
		time register
		*/
		namespace TR{
			using PM 	= reg_t<rw_t, 0X40002800, 22, 1>;	 /*!<AM/PM notation */
			using HT 	= reg_t<rw_t, 0X40002800, 20, 2>;	 /*!<Hour tens in BCD format */
			using HU 	= reg_t<rw_t, 0X40002800, 16, 4>;	 /*!<Hour units in BCD format */
			using MNT 	= reg_t<rw_t, 0X40002800, 12, 3>;	 /*!<Minute tens in BCD format */
			using MNU 	= reg_t<rw_t, 0X40002800, 8, 4>;	 /*!<Minute units in BCD format */
			using ST 	= reg_t<rw_t, 0X40002800, 4, 3>;	 /*!<Second tens in BCD format */
			using SU 	= reg_t<rw_t, 0X40002800, 0, 4>;	 /*!<Second units in BCD format */
		}
		/*!
		date register
		*/
		namespace DR{
			using YT 	= reg_t<rw_t, 0X40002804, 20, 4>;	 /*!<Year tens in BCD format */
			using YU 	= reg_t<rw_t, 0X40002804, 16, 4>;	 /*!<Year units in BCD format */
			using WDU 	= reg_t<rw_t, 0X40002804, 13, 3>;	 /*!<Week day units */
			using MT 	= reg_t<rw_t, 0X40002804, 12, 1>;	 /*!<Month tens in BCD format */
			using MU 	= reg_t<rw_t, 0X40002804, 8, 4>;	 /*!<Month units in BCD format */
			using DT 	= reg_t<rw_t, 0X40002804, 4, 2>;	 /*!<Date tens in BCD format */
			using DU 	= reg_t<rw_t, 0X40002804, 0, 4>;	 /*!<Date units in BCD format */
		}
		/*!
		control register
		*/
		namespace CR{
			using TSEDGE 	= reg_t<rw_t, 0X40002808, 3, 1>;	 /*!<Time-stamp event active edge */
			using REFCKON 	= reg_t<rw_t, 0X40002808, 4, 1>;	 /*!<RTC_REFIN reference clock detection enable (50 or 60 Hz) */
			using BYPSHAD 	= reg_t<rw_t, 0X40002808, 5, 1>;	 /*!<Bypass the shadow registers */
			using FMT 	= reg_t<rw_t, 0X40002808, 6, 1>;	 /*!<Hour format */
			using ALRAE 	= reg_t<rw_t, 0X40002808, 8, 1>;	 /*!<Alarm A enable */
			using TSE 	= reg_t<rw_t, 0X40002808, 11, 1>;	 /*!<timestamp enable */
			using ALRAIE 	= reg_t<rw_t, 0X40002808, 12, 1>;	 /*!<Alarm A interrupt enable */
			using TSIE 	= reg_t<rw_t, 0X40002808, 15, 1>;	 /*!<Time-stamp interrupt enable */
			using ADD1H 	= reg_t<wo_t, 0X40002808, 16, 1>;	 /*!<Add 1 hour (summer time change) */
			using SUB1H 	= reg_t<wo_t, 0X40002808, 17, 1>;	 /*!<Subtract 1 hour (winter time change) */
			using BKP 	= reg_t<rw_t, 0X40002808, 18, 1>;	 /*!<Backup */
			using COSEL 	= reg_t<rw_t, 0X40002808, 19, 1>;	 /*!<Calibration output selection */
			using POL 	= reg_t<rw_t, 0X40002808, 20, 1>;	 /*!<Output polarity */
			using OSEL 	= reg_t<rw_t, 0X40002808, 21, 2>;	 /*!<Output selection */
			using COE 	= reg_t<rw_t, 0X40002808, 23, 1>;	 /*!<Calibration output enable */
		}
		/*!
		initialization and status register
		*/
		namespace ISR{
			using ALRAWF 	= reg_t<ro_t, 0X4000280C, 0, 1>;	 /*!<Alarm A write flag */
			using SHPF 	= reg_t<rw_t, 0X4000280C, 3, 1>;	 /*!<Shift operation pending */
			using INITS 	= reg_t<ro_t, 0X4000280C, 4, 1>;	 /*!<Initialization status flag */
			using RSF 	= reg_t<rw_t, 0X4000280C, 5, 1>;	 /*!<Registers synchronization flag */
			using INITF 	= reg_t<ro_t, 0X4000280C, 6, 1>;	 /*!<Initialization flag */
			using INIT 	= reg_t<rw_t, 0X4000280C, 7, 1>;	 /*!<Initialization mode */
			using ALRAF 	= reg_t<rw_t, 0X4000280C, 8, 1>;	 /*!<Alarm A flag */
			using TSF 	= reg_t<rw_t, 0X4000280C, 11, 1>;	 /*!<Time-stamp flag */
			using TSOVF 	= reg_t<rw_t, 0X4000280C, 12, 1>;	 /*!<Time-stamp overflow flag */
			using TAMP1F 	= reg_t<rw_t, 0X4000280C, 13, 1>;	 /*!<RTC_TAMP1 detection flag */
			using TAMP2F 	= reg_t<rw_t, 0X4000280C, 14, 1>;	 /*!<RTC_TAMP2 detection flag */
			using RECALPF 	= reg_t<ro_t, 0X4000280C, 16, 1>;	 /*!<Recalibration pending Flag */
		}
		/*!
		prescaler register
		*/
		namespace PRER{
			using PREDIV_A 	= reg_t<rw_t, 0X40002810, 16, 7>;	 /*!<Asynchronous prescaler factor */
			using PREDIV_S 	= reg_t<rw_t, 0X40002810, 0, 15>;	 /*!<Synchronous prescaler factor */
		}
		/*!
		alarm A register
		*/
		namespace ALRMAR{
			using MSK4 	= reg_t<rw_t, 0X4000281C, 31, 1>;	 /*!<Alarm A date mask */
			using WDSEL 	= reg_t<rw_t, 0X4000281C, 30, 1>;	 /*!<Week day selection */
			using DT 	= reg_t<rw_t, 0X4000281C, 28, 2>;	 /*!<Date tens in BCD format. */
			using DU 	= reg_t<rw_t, 0X4000281C, 24, 4>;	 /*!<Date units or day in BCD format. */
			using MSK3 	= reg_t<rw_t, 0X4000281C, 23, 1>;	 /*!<Alarm A hours mask */
			using PM 	= reg_t<rw_t, 0X4000281C, 22, 1>;	 /*!<AM/PM notation */
			using HT 	= reg_t<rw_t, 0X4000281C, 20, 2>;	 /*!<Hour tens in BCD format. */
			using HU 	= reg_t<rw_t, 0X4000281C, 16, 4>;	 /*!<Hour units in BCD format. */
			using MSK2 	= reg_t<rw_t, 0X4000281C, 15, 1>;	 /*!<Alarm A minutes mask */
			using MNT 	= reg_t<rw_t, 0X4000281C, 12, 3>;	 /*!<Minute tens in BCD format. */
			using MNU 	= reg_t<rw_t, 0X4000281C, 8, 4>;	 /*!<Minute units in BCD format. */
			using MSK1 	= reg_t<rw_t, 0X4000281C, 7, 1>;	 /*!<Alarm A seconds mask */
			using ST 	= reg_t<rw_t, 0X4000281C, 4, 3>;	 /*!<Second tens in BCD format. */
			using SU 	= reg_t<rw_t, 0X4000281C, 0, 4>;	 /*!<Second units in BCD format. */
		}
		/*!
		write protection register
		*/
		namespace WPR{
			using KEY 	= reg_t<wo_t, 0X40002824, 0, 8>;	 /*!<Write protection key */
		}
		/*!
		sub second register
		*/
		namespace SSR{
			using SS 	= reg_t<ro_t, 0X40002828, 0, 16>;	 /*!<Sub second value */
		}
		/*!
		shift control register
		*/
		namespace SHIFTR{
			using ADD1S 	= reg_t<wo_t, 0X4000282C, 31, 1>;	 /*!<Reserved */
			using SUBFS 	= reg_t<wo_t, 0X4000282C, 0, 15>;	 /*!<Subtract a fraction of a second */
		}
		/*!
		timestamp time register
		*/
		namespace TSTR{
			using PM 	= reg_t<ro_t, 0X40002830, 22, 1>;	 /*!<AM/PM notation */
			using HT 	= reg_t<ro_t, 0X40002830, 20, 2>;	 /*!<Hour tens in BCD format. */
			using HU 	= reg_t<ro_t, 0X40002830, 16, 4>;	 /*!<Hour units in BCD format. */
			using MNT 	= reg_t<ro_t, 0X40002830, 12, 3>;	 /*!<Minute tens in BCD format. */
			using MNU 	= reg_t<ro_t, 0X40002830, 8, 4>;	 /*!<Minute units in BCD format. */
			using ST 	= reg_t<ro_t, 0X40002830, 4, 3>;	 /*!<Second tens in BCD format. */
			using SU 	= reg_t<ro_t, 0X40002830, 0, 4>;	 /*!<Second units in BCD format. */
		}
		/*!
		timestamp date register
		*/
		namespace TSDR{
			using WDU 	= reg_t<ro_t, 0X40002834, 13, 3>;	 /*!<Week day units */
			using MT 	= reg_t<ro_t, 0X40002834, 12, 1>;	 /*!<Month tens in BCD format */
			using MU 	= reg_t<ro_t, 0X40002834, 8, 4>;	 /*!<Month units in BCD format */
			using DT 	= reg_t<ro_t, 0X40002834, 4, 2>;	 /*!<Date tens in BCD format */
			using DU 	= reg_t<ro_t, 0X40002834, 0, 4>;	 /*!<Date units in BCD format */
		}
		/*!
		time-stamp sub second register
		*/
		namespace TSSSR{
			using SS 	= reg_t<ro_t, 0X40002838, 0, 16>;	 /*!<Sub second value */
		}
		/*!
		calibration register
		*/
		namespace CALR{
			using CALP 	= reg_t<rw_t, 0X4000283C, 15, 1>;	 /*!<Use an 8-second calibration cycle period */
			using CALW8 	= reg_t<rw_t, 0X4000283C, 14, 1>;	 /*!<Use a 16-second calibration cycle period */
			using CALW16 	= reg_t<rw_t, 0X4000283C, 13, 1>;	 /*!<Reserved */
			using CALM 	= reg_t<rw_t, 0X4000283C, 0, 9>;	 /*!<Calibration minus */
		}
		/*!
		tamper and alternate function configuration register
		*/
		namespace TAFCR{
			using PC15MODE 	= reg_t<rw_t, 0X40002840, 23, 1>;	 /*!<PC15 mode */
			using PC15VALUE 	= reg_t<rw_t, 0X40002840, 22, 1>;	 /*!<PC15 value */
			using PC14MODE 	= reg_t<rw_t, 0X40002840, 21, 1>;	 /*!<PC14 mode */
			using PC14VALUE 	= reg_t<rw_t, 0X40002840, 20, 1>;	 /*!<PC14 value */
			using PC13MODE 	= reg_t<rw_t, 0X40002840, 19, 1>;	 /*!<PC13 mode */
			using PC13VALUE 	= reg_t<rw_t, 0X40002840, 18, 1>;	 /*!<RTC_ALARM output type/PC13 value */
			using TAMP_PUDIS 	= reg_t<rw_t, 0X40002840, 15, 1>;	 /*!<RTC_TAMPx pull-up disable */
			using TAMP_PRCH 	= reg_t<rw_t, 0X40002840, 13, 2>;	 /*!<RTC_TAMPx precharge duration */
			using TAMPFLT 	= reg_t<rw_t, 0X40002840, 11, 2>;	 /*!<RTC_TAMPx filter count */
			using TAMPFREQ 	= reg_t<rw_t, 0X40002840, 8, 3>;	 /*!<Tamper sampling frequency */
			using TAMPTS 	= reg_t<rw_t, 0X40002840, 7, 1>;	 /*!<Activate timestamp on tamper detection event */
			using TAMP2_TRG 	= reg_t<rw_t, 0X40002840, 4, 1>;	 /*!<Active level for RTC_TAMP2 input */
			using TAMP2E 	= reg_t<rw_t, 0X40002840, 3, 1>;	 /*!<RTC_TAMP2 input detection enable */
			using TAMPIE 	= reg_t<rw_t, 0X40002840, 2, 1>;	 /*!<Tamper interrupt enable */
			using TAMP1TRG 	= reg_t<rw_t, 0X40002840, 1, 1>;	 /*!<Active level for RTC_TAMP1 input */
			using TAMP1E 	= reg_t<rw_t, 0X40002840, 0, 1>;	 /*!<RTC_TAMP1 input detection enable */
		}
		/*!
		alarm A sub second register
		*/
		namespace ALRMASSR{
			using MASKSS 	= reg_t<rw_t, 0X40002844, 24, 4>;	 /*!<Mask the most-significant bits starting at this bit */
			using SS 	= reg_t<rw_t, 0X40002844, 0, 15>;	 /*!<Sub seconds value */
		}
		/*!
		backup register
		*/
		namespace BKP0R{
			using BKP 	= reg_t<rw_t, 0X40002850, 0, 32>;	 /*!<BKP */
		}
		/*!
		backup register
		*/
		namespace BKP1R{
			using BKP 	= reg_t<rw_t, 0X40002854, 0, 32>;	 /*!<BKP */
		}
		/*!
		backup register
		*/
		namespace BKP2R{
			using BKP 	= reg_t<rw_t, 0X40002858, 0, 32>;	 /*!<BKP */
		}
		/*!
		backup register
		*/
		namespace BKP3R{
			using BKP 	= reg_t<rw_t, 0X4000285C, 0, 32>;	 /*!<BKP */
		}
		/*!
		backup register
		*/
		namespace BKP4R{
			using BKP 	= reg_t<rw_t, 0X40002860, 0, 32>;	 /*!<BKP */
		}
	}
	/*!
	General-purpose-timers
	*/
	namespace TIM15{
		/*!
		control register 1
		*/
		namespace CR1{
			using CKD 	= reg_t<rw_t, 0X40014000, 8, 2>;	 /*!<Clock division */
			using ARPE 	= reg_t<rw_t, 0X40014000, 7, 1>;	 /*!<Auto-reload preload enable */
			using OPM 	= reg_t<rw_t, 0X40014000, 3, 1>;	 /*!<One-pulse mode */
			using URS 	= reg_t<rw_t, 0X40014000, 2, 1>;	 /*!<Update request source */
			using UDIS 	= reg_t<rw_t, 0X40014000, 1, 1>;	 /*!<Update disable */
			using CEN 	= reg_t<rw_t, 0X40014000, 0, 1>;	 /*!<Counter enable */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using OIS2 	= reg_t<rw_t, 0X40014004, 10, 1>;	 /*!<Output Idle state 2 */
			using OIS1N 	= reg_t<rw_t, 0X40014004, 9, 1>;	 /*!<Output Idle state 1 */
			using OIS1 	= reg_t<rw_t, 0X40014004, 8, 1>;	 /*!<Output Idle state 1 */
			using MMS 	= reg_t<rw_t, 0X40014004, 4, 3>;	 /*!<Master mode selection */
			using CCDS 	= reg_t<rw_t, 0X40014004, 3, 1>;	 /*!<Capture/compare DMA selection */
			using CCUS 	= reg_t<rw_t, 0X40014004, 2, 1>;	 /*!<Capture/compare control update selection */
			using CCPC 	= reg_t<rw_t, 0X40014004, 0, 1>;	 /*!<Capture/compare preloaded control */
		}
		/*!
		slave mode control register
		*/
		namespace SMCR{
			using MSM 	= reg_t<rw_t, 0X40014008, 7, 1>;	 /*!<Master/Slave mode */
			using TS 	= reg_t<rw_t, 0X40014008, 4, 3>;	 /*!<Trigger selection */
			using SMS 	= reg_t<rw_t, 0X40014008, 0, 3>;	 /*!<Slave mode selection */
		}
		/*!
		DMA/Interrupt enable register
		*/
		namespace DIER{
			using TDE 	= reg_t<rw_t, 0X4001400C, 14, 1>;	 /*!<Trigger DMA request enable */
			using CC2DE 	= reg_t<rw_t, 0X4001400C, 10, 1>;	 /*!<Capture/Compare 2 DMA request enable */
			using CC1DE 	= reg_t<rw_t, 0X4001400C, 9, 1>;	 /*!<Capture/Compare 1 DMA request enable */
			using UDE 	= reg_t<rw_t, 0X4001400C, 8, 1>;	 /*!<Update DMA request enable */
			using BIE 	= reg_t<rw_t, 0X4001400C, 7, 1>;	 /*!<Break interrupt enable */
			using TIE 	= reg_t<rw_t, 0X4001400C, 6, 1>;	 /*!<Trigger interrupt enable */
			using COMIE 	= reg_t<rw_t, 0X4001400C, 5, 1>;	 /*!<COM interrupt enable */
			using CC2IE 	= reg_t<rw_t, 0X4001400C, 2, 1>;	 /*!<Capture/Compare 2 interrupt enable */
			using CC1IE 	= reg_t<rw_t, 0X4001400C, 1, 1>;	 /*!<Capture/Compare 1 interrupt enable */
			using UIE 	= reg_t<rw_t, 0X4001400C, 0, 1>;	 /*!<Update interrupt enable */
		}
		/*!
		status register
		*/
		namespace SR{
			using CC2OF 	= reg_t<rw_t, 0X40014010, 10, 1>;	 /*!<Capture/compare 2 overcapture flag */
			using CC1OF 	= reg_t<rw_t, 0X40014010, 9, 1>;	 /*!<Capture/Compare 1 overcapture flag */
			using BIF 	= reg_t<rw_t, 0X40014010, 7, 1>;	 /*!<Break interrupt flag */
			using TIF 	= reg_t<rw_t, 0X40014010, 6, 1>;	 /*!<Trigger interrupt flag */
			using COMIF 	= reg_t<rw_t, 0X40014010, 5, 1>;	 /*!<COM interrupt flag */
			using CC2IF 	= reg_t<rw_t, 0X40014010, 2, 1>;	 /*!<Capture/Compare 2 interrupt flag */
			using CC1IF 	= reg_t<rw_t, 0X40014010, 1, 1>;	 /*!<Capture/compare 1 interrupt flag */
			using UIF 	= reg_t<rw_t, 0X40014010, 0, 1>;	 /*!<Update interrupt flag */
		}
		/*!
		event generation register
		*/
		namespace EGR{
			using BG 	= reg_t<wo_t, 0X40014014, 7, 1>;	 /*!<Break generation */
			using TG 	= reg_t<wo_t, 0X40014014, 6, 1>;	 /*!<Trigger generation */
			using COMG 	= reg_t<wo_t, 0X40014014, 5, 1>;	 /*!<Capture/Compare control update generation */
			using CC2G 	= reg_t<wo_t, 0X40014014, 2, 1>;	 /*!<Capture/compare 2 generation */
			using CC1G 	= reg_t<wo_t, 0X40014014, 1, 1>;	 /*!<Capture/compare 1 generation */
			using UG 	= reg_t<wo_t, 0X40014014, 0, 1>;	 /*!<Update generation */
		}
		/*!
		capture/compare mode register (output mode)
		*/
		namespace CCMR1_Output{
			using OC2M 	= reg_t<rw_t, 0X40014018, 12, 3>;	 /*!<Output Compare 2 mode */
			using OC2PE 	= reg_t<rw_t, 0X40014018, 11, 1>;	 /*!<Output Compare 2 preload enable */
			using OC2FE 	= reg_t<rw_t, 0X40014018, 10, 1>;	 /*!<Output Compare 2 fast enable */
			using CC2S 	= reg_t<rw_t, 0X40014018, 8, 2>;	 /*!<Capture/Compare 2 selection */
			using OC1M 	= reg_t<rw_t, 0X40014018, 4, 3>;	 /*!<Output Compare 1 mode */
			using OC1PE 	= reg_t<rw_t, 0X40014018, 3, 1>;	 /*!<Output Compare 1 preload enable */
			using OC1FE 	= reg_t<rw_t, 0X40014018, 2, 1>;	 /*!<Output Compare 1 fast enable */
			using CC1S 	= reg_t<rw_t, 0X40014018, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare mode register 1 (input mode)
		*/
		namespace CCMR1_Input{
			using IC2F 	= reg_t<rw_t, 0X40014018, 12, 4>;	 /*!<Input capture 2 filter */
			using IC2PSC 	= reg_t<rw_t, 0X40014018, 10, 2>;	 /*!<Input capture 2 prescaler */
			using CC2S 	= reg_t<rw_t, 0X40014018, 8, 2>;	 /*!<Capture/Compare 2 selection */
			using IC1F 	= reg_t<rw_t, 0X40014018, 4, 4>;	 /*!<Input capture 1 filter */
			using IC1PSC 	= reg_t<rw_t, 0X40014018, 2, 2>;	 /*!<Input capture 1 prescaler */
			using CC1S 	= reg_t<rw_t, 0X40014018, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare enable register
		*/
		namespace CCER{
			using CC2NP 	= reg_t<rw_t, 0X40014020, 7, 1>;	 /*!<Capture/Compare 2 output Polarity */
			using CC2P 	= reg_t<rw_t, 0X40014020, 5, 1>;	 /*!<Capture/Compare 2 output Polarity */
			using CC2E 	= reg_t<rw_t, 0X40014020, 4, 1>;	 /*!<Capture/Compare 2 output enable */
			using CC1NP 	= reg_t<rw_t, 0X40014020, 3, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1NE 	= reg_t<rw_t, 0X40014020, 2, 1>;	 /*!<Capture/Compare 1 complementary output enable */
			using CC1P 	= reg_t<rw_t, 0X40014020, 1, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1E 	= reg_t<rw_t, 0X40014020, 0, 1>;	 /*!<Capture/Compare 1 output enable */
		}
		/*!
		counter
		*/
		namespace CNT{
			using CNT 	= reg_t<rw_t, 0X40014024, 0, 16>;	 /*!<counter value */
		}
		/*!
		prescaler
		*/
		namespace PSC{
			using PSC 	= reg_t<rw_t, 0X40014028, 0, 16>;	 /*!<Prescaler value */
		}
		/*!
		auto-reload register
		*/
		namespace ARR{
			using ARR 	= reg_t<rw_t, 0X4001402C, 0, 16>;	 /*!<Auto-reload value */
		}
		/*!
		repetition counter register
		*/
		namespace RCR{
			using REP 	= reg_t<rw_t, 0X40014030, 0, 8>;	 /*!<Repetition counter value */
		}
		/*!
		capture/compare register 1
		*/
		namespace CCR1{
			using CCR1 	= reg_t<rw_t, 0X40014034, 0, 16>;	 /*!<Capture/Compare 1 value */
		}
		/*!
		capture/compare register 2
		*/
		namespace CCR2{
			using CCR2 	= reg_t<rw_t, 0X40014038, 0, 16>;	 /*!<Capture/Compare 2 value */
		}
		/*!
		break and dead-time register
		*/
		namespace BDTR{
			using MOE 	= reg_t<rw_t, 0X40014044, 15, 1>;	 /*!<Main output enable */
			using AOE 	= reg_t<rw_t, 0X40014044, 14, 1>;	 /*!<Automatic output enable */
			using BKP 	= reg_t<rw_t, 0X40014044, 13, 1>;	 /*!<Break polarity */
			using BKE 	= reg_t<rw_t, 0X40014044, 12, 1>;	 /*!<Break enable */
			using OSSR 	= reg_t<rw_t, 0X40014044, 11, 1>;	 /*!<Off-state selection for Run mode */
			using OSSI 	= reg_t<rw_t, 0X40014044, 10, 1>;	 /*!<Off-state selection for Idle mode */
			using LOCK 	= reg_t<rw_t, 0X40014044, 8, 2>;	 /*!<Lock configuration */
			using DTG 	= reg_t<rw_t, 0X40014044, 0, 8>;	 /*!<Dead-time generator setup */
		}
		/*!
		DMA control register
		*/
		namespace DCR{
			using DBL 	= reg_t<rw_t, 0X40014048, 8, 5>;	 /*!<DMA burst length */
			using DBA 	= reg_t<rw_t, 0X40014048, 0, 5>;	 /*!<DMA base address */
		}
		/*!
		DMA address for full transfer
		*/
		namespace DMAR{
			using DMAB 	= reg_t<rw_t, 0X4001404C, 0, 16>;	 /*!<DMA register for burst accesses */
		}
	}
	/*!
	General-purpose-timers
	*/
	namespace TIM16{
		/*!
		control register 1
		*/
		namespace CR1{
			using CKD 	= reg_t<rw_t, 0X40014400, 8, 2>;	 /*!<Clock division */
			using ARPE 	= reg_t<rw_t, 0X40014400, 7, 1>;	 /*!<Auto-reload preload enable */
			using OPM 	= reg_t<rw_t, 0X40014400, 3, 1>;	 /*!<One-pulse mode */
			using URS 	= reg_t<rw_t, 0X40014400, 2, 1>;	 /*!<Update request source */
			using UDIS 	= reg_t<rw_t, 0X40014400, 1, 1>;	 /*!<Update disable */
			using CEN 	= reg_t<rw_t, 0X40014400, 0, 1>;	 /*!<Counter enable */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using OIS1N 	= reg_t<rw_t, 0X40014404, 9, 1>;	 /*!<Output Idle state 1 */
			using OIS1 	= reg_t<rw_t, 0X40014404, 8, 1>;	 /*!<Output Idle state 1 */
			using CCDS 	= reg_t<rw_t, 0X40014404, 3, 1>;	 /*!<Capture/compare DMA selection */
			using CCUS 	= reg_t<rw_t, 0X40014404, 2, 1>;	 /*!<Capture/compare control update selection */
			using CCPC 	= reg_t<rw_t, 0X40014404, 0, 1>;	 /*!<Capture/compare preloaded control */
		}
		/*!
		DMA/Interrupt enable register
		*/
		namespace DIER{
			using TDE 	= reg_t<rw_t, 0X4001440C, 14, 1>;	 /*!<Trigger DMA request enable */
			using CC1DE 	= reg_t<rw_t, 0X4001440C, 9, 1>;	 /*!<Capture/Compare 1 DMA request enable */
			using UDE 	= reg_t<rw_t, 0X4001440C, 8, 1>;	 /*!<Update DMA request enable */
			using BIE 	= reg_t<rw_t, 0X4001440C, 7, 1>;	 /*!<Break interrupt enable */
			using TIE 	= reg_t<rw_t, 0X4001440C, 6, 1>;	 /*!<Trigger interrupt enable */
			using COMIE 	= reg_t<rw_t, 0X4001440C, 5, 1>;	 /*!<COM interrupt enable */
			using CC1IE 	= reg_t<rw_t, 0X4001440C, 1, 1>;	 /*!<Capture/Compare 1 interrupt enable */
			using UIE 	= reg_t<rw_t, 0X4001440C, 0, 1>;	 /*!<Update interrupt enable */
		}
		/*!
		status register
		*/
		namespace SR{
			using CC1OF 	= reg_t<rw_t, 0X40014410, 9, 1>;	 /*!<Capture/Compare 1 overcapture flag */
			using BIF 	= reg_t<rw_t, 0X40014410, 7, 1>;	 /*!<Break interrupt flag */
			using TIF 	= reg_t<rw_t, 0X40014410, 6, 1>;	 /*!<Trigger interrupt flag */
			using COMIF 	= reg_t<rw_t, 0X40014410, 5, 1>;	 /*!<COM interrupt flag */
			using CC1IF 	= reg_t<rw_t, 0X40014410, 1, 1>;	 /*!<Capture/compare 1 interrupt flag */
			using UIF 	= reg_t<rw_t, 0X40014410, 0, 1>;	 /*!<Update interrupt flag */
		}
		/*!
		event generation register
		*/
		namespace EGR{
			using BG 	= reg_t<wo_t, 0X40014414, 7, 1>;	 /*!<Break generation */
			using TG 	= reg_t<wo_t, 0X40014414, 6, 1>;	 /*!<Trigger generation */
			using COMG 	= reg_t<wo_t, 0X40014414, 5, 1>;	 /*!<Capture/Compare control update generation */
			using CC1G 	= reg_t<wo_t, 0X40014414, 1, 1>;	 /*!<Capture/compare 1 generation */
			using UG 	= reg_t<wo_t, 0X40014414, 0, 1>;	 /*!<Update generation */
		}
		/*!
		capture/compare mode register (output mode)
		*/
		namespace CCMR1_Output{
			using OC1M 	= reg_t<rw_t, 0X40014418, 4, 3>;	 /*!<Output Compare 1 mode */
			using OC1PE 	= reg_t<rw_t, 0X40014418, 3, 1>;	 /*!<Output Compare 1 preload enable */
			using OC1FE 	= reg_t<rw_t, 0X40014418, 2, 1>;	 /*!<Output Compare 1 fast enable */
			using CC1S 	= reg_t<rw_t, 0X40014418, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare mode register 1 (input mode)
		*/
		namespace CCMR1_Input{
			using IC1F 	= reg_t<rw_t, 0X40014418, 4, 4>;	 /*!<Input capture 1 filter */
			using IC1PSC 	= reg_t<rw_t, 0X40014418, 2, 2>;	 /*!<Input capture 1 prescaler */
			using CC1S 	= reg_t<rw_t, 0X40014418, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare enable register
		*/
		namespace CCER{
			using CC1NP 	= reg_t<rw_t, 0X40014420, 3, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1NE 	= reg_t<rw_t, 0X40014420, 2, 1>;	 /*!<Capture/Compare 1 complementary output enable */
			using CC1P 	= reg_t<rw_t, 0X40014420, 1, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1E 	= reg_t<rw_t, 0X40014420, 0, 1>;	 /*!<Capture/Compare 1 output enable */
		}
		/*!
		counter
		*/
		namespace CNT{
			using CNT 	= reg_t<rw_t, 0X40014424, 0, 16>;	 /*!<counter value */
		}
		/*!
		prescaler
		*/
		namespace PSC{
			using PSC 	= reg_t<rw_t, 0X40014428, 0, 16>;	 /*!<Prescaler value */
		}
		/*!
		auto-reload register
		*/
		namespace ARR{
			using ARR 	= reg_t<rw_t, 0X4001442C, 0, 16>;	 /*!<Auto-reload value */
		}
		/*!
		repetition counter register
		*/
		namespace RCR{
			using REP 	= reg_t<rw_t, 0X40014430, 0, 8>;	 /*!<Repetition counter value */
		}
		/*!
		capture/compare register 1
		*/
		namespace CCR1{
			using CCR1 	= reg_t<rw_t, 0X40014434, 0, 16>;	 /*!<Capture/Compare 1 value */
		}
		/*!
		break and dead-time register
		*/
		namespace BDTR{
			using MOE 	= reg_t<rw_t, 0X40014444, 15, 1>;	 /*!<Main output enable */
			using AOE 	= reg_t<rw_t, 0X40014444, 14, 1>;	 /*!<Automatic output enable */
			using BKP 	= reg_t<rw_t, 0X40014444, 13, 1>;	 /*!<Break polarity */
			using BKE 	= reg_t<rw_t, 0X40014444, 12, 1>;	 /*!<Break enable */
			using OSSR 	= reg_t<rw_t, 0X40014444, 11, 1>;	 /*!<Off-state selection for Run mode */
			using OSSI 	= reg_t<rw_t, 0X40014444, 10, 1>;	 /*!<Off-state selection for Idle mode */
			using LOCK 	= reg_t<rw_t, 0X40014444, 8, 2>;	 /*!<Lock configuration */
			using DTG 	= reg_t<rw_t, 0X40014444, 0, 8>;	 /*!<Dead-time generator setup */
		}
		/*!
		DMA control register
		*/
		namespace DCR{
			using DBL 	= reg_t<rw_t, 0X40014448, 8, 5>;	 /*!<DMA burst length */
			using DBA 	= reg_t<rw_t, 0X40014448, 0, 5>;	 /*!<DMA base address */
		}
		/*!
		DMA address for full transfer
		*/
		namespace DMAR{
			using DMAB 	= reg_t<rw_t, 0X4001444C, 0, 16>;	 /*!<DMA register for burst accesses */
		}
	}
	/*!
	General-purpose-timers
	BasedOn:TIM16
	*/
	namespace TIM17{
		/*!
		control register 1
		*/
		namespace CR1{
			using CKD 	= reg_t<rw_t, 0X40014800, 8, 2>;	 /*!<Clock division */
			using ARPE 	= reg_t<rw_t, 0X40014800, 7, 1>;	 /*!<Auto-reload preload enable */
			using OPM 	= reg_t<rw_t, 0X40014800, 3, 1>;	 /*!<One-pulse mode */
			using URS 	= reg_t<rw_t, 0X40014800, 2, 1>;	 /*!<Update request source */
			using UDIS 	= reg_t<rw_t, 0X40014800, 1, 1>;	 /*!<Update disable */
			using CEN 	= reg_t<rw_t, 0X40014800, 0, 1>;	 /*!<Counter enable */
		}
		/*!
		control register 2
		*/
		namespace CR2{
			using OIS1N 	= reg_t<rw_t, 0X40014804, 9, 1>;	 /*!<Output Idle state 1 */
			using OIS1 	= reg_t<rw_t, 0X40014804, 8, 1>;	 /*!<Output Idle state 1 */
			using CCDS 	= reg_t<rw_t, 0X40014804, 3, 1>;	 /*!<Capture/compare DMA selection */
			using CCUS 	= reg_t<rw_t, 0X40014804, 2, 1>;	 /*!<Capture/compare control update selection */
			using CCPC 	= reg_t<rw_t, 0X40014804, 0, 1>;	 /*!<Capture/compare preloaded control */
		}
		/*!
		DMA/Interrupt enable register
		*/
		namespace DIER{
			using TDE 	= reg_t<rw_t, 0X4001480C, 14, 1>;	 /*!<Trigger DMA request enable */
			using CC1DE 	= reg_t<rw_t, 0X4001480C, 9, 1>;	 /*!<Capture/Compare 1 DMA request enable */
			using UDE 	= reg_t<rw_t, 0X4001480C, 8, 1>;	 /*!<Update DMA request enable */
			using BIE 	= reg_t<rw_t, 0X4001480C, 7, 1>;	 /*!<Break interrupt enable */
			using TIE 	= reg_t<rw_t, 0X4001480C, 6, 1>;	 /*!<Trigger interrupt enable */
			using COMIE 	= reg_t<rw_t, 0X4001480C, 5, 1>;	 /*!<COM interrupt enable */
			using CC1IE 	= reg_t<rw_t, 0X4001480C, 1, 1>;	 /*!<Capture/Compare 1 interrupt enable */
			using UIE 	= reg_t<rw_t, 0X4001480C, 0, 1>;	 /*!<Update interrupt enable */
		}
		/*!
		status register
		*/
		namespace SR{
			using CC1OF 	= reg_t<rw_t, 0X40014810, 9, 1>;	 /*!<Capture/Compare 1 overcapture flag */
			using BIF 	= reg_t<rw_t, 0X40014810, 7, 1>;	 /*!<Break interrupt flag */
			using TIF 	= reg_t<rw_t, 0X40014810, 6, 1>;	 /*!<Trigger interrupt flag */
			using COMIF 	= reg_t<rw_t, 0X40014810, 5, 1>;	 /*!<COM interrupt flag */
			using CC1IF 	= reg_t<rw_t, 0X40014810, 1, 1>;	 /*!<Capture/compare 1 interrupt flag */
			using UIF 	= reg_t<rw_t, 0X40014810, 0, 1>;	 /*!<Update interrupt flag */
		}
		/*!
		event generation register
		*/
		namespace EGR{
			using BG 	= reg_t<wo_t, 0X40014814, 7, 1>;	 /*!<Break generation */
			using TG 	= reg_t<wo_t, 0X40014814, 6, 1>;	 /*!<Trigger generation */
			using COMG 	= reg_t<wo_t, 0X40014814, 5, 1>;	 /*!<Capture/Compare control update generation */
			using CC1G 	= reg_t<wo_t, 0X40014814, 1, 1>;	 /*!<Capture/compare 1 generation */
			using UG 	= reg_t<wo_t, 0X40014814, 0, 1>;	 /*!<Update generation */
		}
		/*!
		capture/compare mode register (output mode)
		*/
		namespace CCMR1_Output{
			using OC1M 	= reg_t<rw_t, 0X40014818, 4, 3>;	 /*!<Output Compare 1 mode */
			using OC1PE 	= reg_t<rw_t, 0X40014818, 3, 1>;	 /*!<Output Compare 1 preload enable */
			using OC1FE 	= reg_t<rw_t, 0X40014818, 2, 1>;	 /*!<Output Compare 1 fast enable */
			using CC1S 	= reg_t<rw_t, 0X40014818, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare mode register 1 (input mode)
		*/
		namespace CCMR1_Input{
			using IC1F 	= reg_t<rw_t, 0X40014818, 4, 4>;	 /*!<Input capture 1 filter */
			using IC1PSC 	= reg_t<rw_t, 0X40014818, 2, 2>;	 /*!<Input capture 1 prescaler */
			using CC1S 	= reg_t<rw_t, 0X40014818, 0, 2>;	 /*!<Capture/Compare 1 selection */
		}
		/*!
		capture/compare enable register
		*/
		namespace CCER{
			using CC1NP 	= reg_t<rw_t, 0X40014820, 3, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1NE 	= reg_t<rw_t, 0X40014820, 2, 1>;	 /*!<Capture/Compare 1 complementary output enable */
			using CC1P 	= reg_t<rw_t, 0X40014820, 1, 1>;	 /*!<Capture/Compare 1 output Polarity */
			using CC1E 	= reg_t<rw_t, 0X40014820, 0, 1>;	 /*!<Capture/Compare 1 output enable */
		}
		/*!
		counter
		*/
		namespace CNT{
			using CNT 	= reg_t<rw_t, 0X40014824, 0, 16>;	 /*!<counter value */
		}
		/*!
		prescaler
		*/
		namespace PSC{
			using PSC 	= reg_t<rw_t, 0X40014828, 0, 16>;	 /*!<Prescaler value */
		}
		/*!
		auto-reload register
		*/
		namespace ARR{
			using ARR 	= reg_t<rw_t, 0X4001482C, 0, 16>;	 /*!<Auto-reload value */
		}
		/*!
		repetition counter register
		*/
		namespace RCR{
			using REP 	= reg_t<rw_t, 0X40014830, 0, 8>;	 /*!<Repetition counter value */
		}
		/*!
		capture/compare register 1
		*/
		namespace CCR1{
			using CCR1 	= reg_t<rw_t, 0X40014834, 0, 16>;	 /*!<Capture/Compare 1 value */
		}
		/*!
		break and dead-time register
		*/
		namespace BDTR{
			using MOE 	= reg_t<rw_t, 0X40014844, 15, 1>;	 /*!<Main output enable */
			using AOE 	= reg_t<rw_t, 0X40014844, 14, 1>;	 /*!<Automatic output enable */
			using BKP 	= reg_t<rw_t, 0X40014844, 13, 1>;	 /*!<Break polarity */
			using BKE 	= reg_t<rw_t, 0X40014844, 12, 1>;	 /*!<Break enable */
			using OSSR 	= reg_t<rw_t, 0X40014844, 11, 1>;	 /*!<Off-state selection for Run mode */
			using OSSI 	= reg_t<rw_t, 0X40014844, 10, 1>;	 /*!<Off-state selection for Idle mode */
			using LOCK 	= reg_t<rw_t, 0X40014844, 8, 2>;	 /*!<Lock configuration */
			using DTG 	= reg_t<rw_t, 0X40014844, 0, 8>;	 /*!<Dead-time generator setup */
		}
		/*!
		DMA control register
		*/
		namespace DCR{
			using DBL 	= reg_t<rw_t, 0X40014848, 8, 5>;	 /*!<DMA burst length */
			using DBA 	= reg_t<rw_t, 0X40014848, 0, 5>;	 /*!<DMA base address */
		}
		/*!
		DMA address for full transfer
		*/
		namespace DMAR{
			using DMAB 	= reg_t<rw_t, 0X4001484C, 0, 16>;	 /*!<DMA register for burst accesses */
		}
	}
	/*!
	Flash
	*/
	namespace Flash{
		/*!
		Flash access control register
		*/
		namespace ACR{
			using LATENCY 	= reg_t<rw_t, 0X40022000, 0, 3>;	 /*!<LATENCY */
			using PRFTBE 	= reg_t<rw_t, 0X40022000, 4, 1>;	 /*!<PRFTBE */
			using PRFTBS 	= reg_t<ro_t, 0X40022000, 5, 1>;	 /*!<PRFTBS */
		}
		/*!
		Flash key register
		*/
		namespace KEYR{
			using FKEYR 	= reg_t<wo_t, 0X40022004, 0, 32>;	 /*!<Flash Key */
		}
		/*!
		Flash option key register
		*/
		namespace OPTKEYR{
			using OPTKEYR 	= reg_t<wo_t, 0X40022008, 0, 32>;	 /*!<Option byte key */
		}
		/*!
		Flash status register
		*/
		namespace SR{
			using EOP 	= reg_t<rw_t, 0X4002200C, 5, 1>;	 /*!<End of operation */
			using WRPRT 	= reg_t<rw_t, 0X4002200C, 4, 1>;	 /*!<Write protection error */
			using PGERR 	= reg_t<rw_t, 0X4002200C, 2, 1>;	 /*!<Programming error */
			using BSY 	= reg_t<ro_t, 0X4002200C, 0, 1>;	 /*!<Busy */
		}
		/*!
		Flash control register
		*/
		namespace CR{
			using FORCE_OPTLOAD 	= reg_t<rw_t, 0X40022010, 13, 1>;	 /*!<Force option byte loading */
			using EOPIE 	= reg_t<rw_t, 0X40022010, 12, 1>;	 /*!<End of operation interrupt enable */
			using ERRIE 	= reg_t<rw_t, 0X40022010, 10, 1>;	 /*!<Error interrupt enable */
			using OPTWRE 	= reg_t<rw_t, 0X40022010, 9, 1>;	 /*!<Option bytes write enable */
			using LOCK 	= reg_t<rw_t, 0X40022010, 7, 1>;	 /*!<Lock */
			using STRT 	= reg_t<rw_t, 0X40022010, 6, 1>;	 /*!<Start */
			using OPTER 	= reg_t<rw_t, 0X40022010, 5, 1>;	 /*!<Option byte erase */
			using OPTPG 	= reg_t<rw_t, 0X40022010, 4, 1>;	 /*!<Option byte programming */
			using MER 	= reg_t<rw_t, 0X40022010, 2, 1>;	 /*!<Mass erase */
			using PER 	= reg_t<rw_t, 0X40022010, 1, 1>;	 /*!<Page erase */
			using PG 	= reg_t<rw_t, 0X40022010, 0, 1>;	 /*!<Programming */
		}
		/*!
		Flash address register
		*/
		namespace AR{
			using FAR 	= reg_t<wo_t, 0X40022014, 0, 32>;	 /*!<Flash address */
		}
		/*!
		Option byte register
		*/
		namespace OBR{
			using Data1 	= reg_t<ro_t, 0X4002201C, 24, 8>;	 /*!<Data1 */
			using Data0 	= reg_t<ro_t, 0X4002201C, 16, 8>;	 /*!<Data0 */
			using VDDA_MONITOR 	= reg_t<ro_t, 0X4002201C, 13, 1>;	 /*!<VDDA_MONITOR */
			using BOOT1 	= reg_t<ro_t, 0X4002201C, 12, 1>;	 /*!<BOOT1 */
			using nRST_STDBY 	= reg_t<ro_t, 0X4002201C, 10, 1>;	 /*!<nRST_STDBY */
			using nRST_STOP 	= reg_t<ro_t, 0X4002201C, 9, 1>;	 /*!<nRST_STOP */
			using WDG_SW 	= reg_t<ro_t, 0X4002201C, 8, 1>;	 /*!<WDG_SW */
			using LEVEL2_PROT 	= reg_t<ro_t, 0X4002201C, 2, 1>;	 /*!<Level 2 protection status */
			using LEVEL1_PROT 	= reg_t<ro_t, 0X4002201C, 1, 1>;	 /*!<Level 1 protection status */
			using OPTERR 	= reg_t<ro_t, 0X4002201C, 0, 1>;	 /*!<Option byte error */
		}
		/*!
		Write protection register
		*/
		namespace WRPR{
			using WRP 	= reg_t<ro_t, 0X40022020, 0, 32>;	 /*!<Write protect */
		}
	}
	/*!
	Debug support
	*/
	namespace DBGMCU{
		/*!
		MCU Device ID Code Register
		*/
		namespace IDCODE{
			using DEV_ID 	= reg_t<ro_t, 0X40015800, 0, 12>;	 /*!<Device Identifier */
			using DIV_ID 	= reg_t<ro_t, 0X40015800, 12, 4>;	 /*!<Division Identifier */
			using REV_ID 	= reg_t<ro_t, 0X40015800, 16, 16>;	 /*!<Revision Identifier */
		}
		/*!
		Debug MCU Configuration Register
		*/
		namespace CR{
			using DBG_STOP 	= reg_t<rw_t, 0X40015804, 1, 1>;	 /*!<Debug Stop Mode */
			using DBG_STANDBY 	= reg_t<rw_t, 0X40015804, 2, 1>;	 /*!<Debug Standby Mode */
		}
		/*!
		APB Low Freeze Register
		*/
		namespace APBLFZ{
			using DBG_TIMER2_STOP 	= reg_t<rw_t, 0X40015808, 0, 1>;	 /*!<Debug Timer 2 stopped when Core is halted */
			using DBG_TIMER3_STOP 	= reg_t<rw_t, 0X40015808, 1, 1>;	 /*!<Debug Timer 3 stopped when Core is halted */
			using DBG_TIMER6_STOP 	= reg_t<rw_t, 0X40015808, 4, 1>;	 /*!<Debug Timer 6 stopped when Core is halted */
			using DBG_TIMER14_STOP 	= reg_t<rw_t, 0X40015808, 8, 1>;	 /*!<Debug Timer 14 stopped when Core is halted */
			using DBG_RTC_STOP 	= reg_t<rw_t, 0X40015808, 10, 1>;	 /*!<Debug RTC stopped when Core is halted */
			using DBG_WWDG_STOP 	= reg_t<rw_t, 0X40015808, 11, 1>;	 /*!<Debug Window Wachdog stopped when Core is halted */
			using DBG_IWDG_STOP 	= reg_t<rw_t, 0X40015808, 12, 1>;	 /*!<Debug Independent Wachdog stopped when Core is halted */
			using I2C1_SMBUS_TIMEOUT 	= reg_t<rw_t, 0X40015808, 21, 1>;	 /*!<SMBUS timeout mode stopped when Core is halted */
		}
		/*!
		APB High Freeze Register
		*/
		namespace APBHFZ{
			using DBG_TIMER1_STOP 	= reg_t<rw_t, 0X4001580C, 11, 1>;	 /*!<Debug Timer 1 stopped when Core is halted */
			using DBG_TIMER15_STO 	= reg_t<rw_t, 0X4001580C, 16, 1>;	 /*!<Debug Timer 15 stopped when Core is halted */
			using DBG_TIMER16_STO 	= reg_t<rw_t, 0X4001580C, 17, 1>;	 /*!<Debug Timer 16 stopped when Core is halted */
			using DBG_TIMER17_STO 	= reg_t<rw_t, 0X4001580C, 18, 1>;	 /*!<Debug Timer 17 stopped when Core is halted */
		}
	}
}
