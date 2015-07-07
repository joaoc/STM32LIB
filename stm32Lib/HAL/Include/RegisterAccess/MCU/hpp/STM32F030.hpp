/*! \file STM32F030.hpp 
    \brief Register declaration for access.
    \details   Based on the work of:<br>
               https://github.com/kensmith/cortex-from-scratch <br>
               https://yogiken.files.wordpress.com/2010/02/c-register-access.pdf
*/
// AUTHOR: JC
#include "reg_t.hpp"
#include "rw_t.hpp"
#include "ro_t.hpp"
#include "wo_t.hpp"


namespace STM32LIB{
	/*!
	 namespace for storing the register declaration
	*/
	 namespace REG{


		/*!
		\brief cyclic redundancy check calculation unit
		*/
		struct CRC{

			/*!
			\brief Data register
			*/
				 static reg_t<rw_t, 0X40023000, 0, 32> DR 	;	 /*!< \brief Data register bits */

			/*!
			\brief Independent data register
			*/
				 static reg_t<rw_t, 0X40023004, 0, 8> IDR 	;	 /*!< \brief General-purpose 8-bit data register bits */

			/*!
			\brief Control register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40023008, 0, 1> RESET 	;	 /*!< \brief reset bit */
				 static reg_t<rw_t, 0X40023008, 5, 2> REV_IN 	;	 /*!< \brief Reverse input data */
				 static reg_t<rw_t, 0X40023008, 7, 1> REV_OUT 	;	 /*!< \brief Reverse output data */
			};
			 static reg_t<rw_t,0X40023008, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief Initial CRC value
			*/
				 static reg_t<rw_t, 0X4002300C, 0, 32> INIT 	;	 /*!< \brief Programmable initial CRC value */
		};

		/*!
		\brief General-purpose I/Os
		*/
		struct GPIOF{

			/*!
			\brief GPIO port mode register
			*/
			struct MODER{
				 static reg_t<rw_t, 0X48001400, 30, 2> MODER15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 28, 2> MODER14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 26, 2> MODER13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 24, 2> MODER12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 22, 2> MODER11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 20, 2> MODER10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 18, 2> MODER9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 16, 2> MODER8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 14, 2> MODER7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 12, 2> MODER6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 10, 2> MODER5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 8, 2> MODER4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 6, 2> MODER3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 4, 2> MODER2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 2, 2> MODER1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001400, 0, 2> MODER0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48001400, 0, 32> MODER_D;	 /*!< \brief MODER register direct access */

			/*!
			\brief GPIO port output type register
			*/
			struct OTYPER{
				 static reg_t<rw_t, 0X48001404, 15, 1> OT15 	;	 /*!< \brief Port x configuration bit 15 */
				 static reg_t<rw_t, 0X48001404, 14, 1> OT14 	;	 /*!< \brief Port x configuration bit 14 */
				 static reg_t<rw_t, 0X48001404, 13, 1> OT13 	;	 /*!< \brief Port x configuration bit 13 */
				 static reg_t<rw_t, 0X48001404, 12, 1> OT12 	;	 /*!< \brief Port x configuration bit 12 */
				 static reg_t<rw_t, 0X48001404, 11, 1> OT11 	;	 /*!< \brief Port x configuration bit 11 */
				 static reg_t<rw_t, 0X48001404, 10, 1> OT10 	;	 /*!< \brief Port x configuration bit 10 */
				 static reg_t<rw_t, 0X48001404, 9, 1> OT9 	;	 /*!< \brief Port x configuration bit 9 */
				 static reg_t<rw_t, 0X48001404, 8, 1> OT8 	;	 /*!< \brief Port x configuration bit 8 */
				 static reg_t<rw_t, 0X48001404, 7, 1> OT7 	;	 /*!< \brief Port x configuration bit 7 */
				 static reg_t<rw_t, 0X48001404, 6, 1> OT6 	;	 /*!< \brief Port x configuration bit 6 */
				 static reg_t<rw_t, 0X48001404, 5, 1> OT5 	;	 /*!< \brief Port x configuration bit 5 */
				 static reg_t<rw_t, 0X48001404, 4, 1> OT4 	;	 /*!< \brief Port x configuration bit 4 */
				 static reg_t<rw_t, 0X48001404, 3, 1> OT3 	;	 /*!< \brief Port x configuration bit 3 */
				 static reg_t<rw_t, 0X48001404, 2, 1> OT2 	;	 /*!< \brief Port x configuration bit 2 */
				 static reg_t<rw_t, 0X48001404, 1, 1> OT1 	;	 /*!< \brief Port x configuration bit 1 */
				 static reg_t<rw_t, 0X48001404, 0, 1> OT0 	;	 /*!< \brief Port x configuration bit 0 */
			};
			 static reg_t<rw_t,0X48001404, 0, 32> OTYPER_D;	 /*!< \brief OTYPER register direct access */

			/*!
			\brief GPIO port output speed register
			*/
			struct OSPEEDR{
				 static reg_t<rw_t, 0X48001408, 30, 2> OSPEEDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 28, 2> OSPEEDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 26, 2> OSPEEDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 24, 2> OSPEEDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 22, 2> OSPEEDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 20, 2> OSPEEDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 18, 2> OSPEEDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 16, 2> OSPEEDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 14, 2> OSPEEDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 12, 2> OSPEEDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 10, 2> OSPEEDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 8, 2> OSPEEDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 6, 2> OSPEEDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 4, 2> OSPEEDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 2, 2> OSPEEDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48001408, 0, 2> OSPEEDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48001408, 0, 32> OSPEEDR_D;	 /*!< \brief OSPEEDR register direct access */

			/*!
			\brief GPIO port pull-up/pull-down register
			*/
			struct PUPDR{
				 static reg_t<rw_t, 0X4800140C, 30, 2> PUPDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 28, 2> PUPDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 26, 2> PUPDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 24, 2> PUPDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 22, 2> PUPDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 20, 2> PUPDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 18, 2> PUPDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 16, 2> PUPDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 14, 2> PUPDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 12, 2> PUPDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 10, 2> PUPDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 8, 2> PUPDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 6, 2> PUPDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 4, 2> PUPDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 2, 2> PUPDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800140C, 0, 2> PUPDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X4800140C, 0, 32> PUPDR_D;	 /*!< \brief PUPDR register direct access */

			/*!
			\brief GPIO port input data register
			*/
			struct IDR{
				 static reg_t<ro_t, 0X48001410, 15, 1> IDR15 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 14, 1> IDR14 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 13, 1> IDR13 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 12, 1> IDR12 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 11, 1> IDR11 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 10, 1> IDR10 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 9, 1> IDR9 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 8, 1> IDR8 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 7, 1> IDR7 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 6, 1> IDR6 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 5, 1> IDR5 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 4, 1> IDR4 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 3, 1> IDR3 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 2, 1> IDR2 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 1, 1> IDR1 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48001410, 0, 1> IDR0 	;	 /*!< \brief Port input data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48001410, 0, 32> IDR_D;	 /*!< \brief IDR register direct access */

			/*!
			\brief GPIO port output data register
			*/
			struct ODR{
				 static reg_t<rw_t, 0X48001414, 15, 1> ODR15 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 14, 1> ODR14 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 13, 1> ODR13 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 12, 1> ODR12 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 11, 1> ODR11 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 10, 1> ODR10 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 9, 1> ODR9 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 8, 1> ODR8 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 7, 1> ODR7 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 6, 1> ODR6 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 5, 1> ODR5 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 4, 1> ODR4 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 3, 1> ODR3 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 2, 1> ODR2 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 1, 1> ODR1 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48001414, 0, 1> ODR0 	;	 /*!< \brief Port output data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48001414, 0, 32> ODR_D;	 /*!< \brief ODR register direct access */

			/*!
			\brief GPIO port bit set/reset register
			*/
			struct BSRR{
				 static reg_t<wo_t, 0X48001418, 31, 1> BR15 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 30, 1> BR14 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 29, 1> BR13 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 28, 1> BR12 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 27, 1> BR11 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 26, 1> BR10 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 25, 1> BR9 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 24, 1> BR8 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 23, 1> BR7 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 22, 1> BR6 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 21, 1> BR5 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 20, 1> BR4 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 19, 1> BR3 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 18, 1> BR2 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 17, 1> BR1 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48001418, 16, 1> BR0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 15, 1> BS15 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 14, 1> BS14 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 13, 1> BS13 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 12, 1> BS12 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 11, 1> BS11 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 10, 1> BS10 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 9, 1> BS9 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 8, 1> BS8 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 7, 1> BS7 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 6, 1> BS6 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 5, 1> BS5 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 4, 1> BS4 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 3, 1> BS3 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 2, 1> BS2 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 1, 1> BS1 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48001418, 0, 1> BS0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X48001418, 0, 32> BSRR_D;	 /*!< \brief BSRR register direct access */

			/*!
			\brief GPIO port configuration lock register
			*/
			struct LCKR{
				 static reg_t<rw_t, 0X4800141C, 16, 1> LCKK 	;	 /*!< \brief Port x lock bit y */
				 static reg_t<rw_t, 0X4800141C, 15, 1> LCK15 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 14, 1> LCK14 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 13, 1> LCK13 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 12, 1> LCK12 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 11, 1> LCK11 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 10, 1> LCK10 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 9, 1> LCK9 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 8, 1> LCK8 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 7, 1> LCK7 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 6, 1> LCK6 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 5, 1> LCK5 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 4, 1> LCK4 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 3, 1> LCK3 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 2, 1> LCK2 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 1, 1> LCK1 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800141C, 0, 1> LCK0 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X4800141C, 0, 32> LCKR_D;	 /*!< \brief LCKR register direct access */

			/*!
			\brief GPIO alternate function low register
			*/
			struct AFRL{
				 static reg_t<rw_t, 0X48001420, 28, 4> AFRL7 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48001420, 24, 4> AFRL6 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48001420, 20, 4> AFRL5 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48001420, 16, 4> AFRL4 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48001420, 12, 4> AFRL3 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48001420, 8, 4> AFRL2 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48001420, 4, 4> AFRL1 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48001420, 0, 4> AFRL0 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
			};
			 static reg_t<rw_t,0X48001420, 0, 32> AFRL_D;	 /*!< \brief AFRL register direct access */

			/*!
			\brief GPIO alternate function high register
			*/
			struct AFRH{
				 static reg_t<rw_t, 0X48001424, 28, 4> AFRH15 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48001424, 24, 4> AFRH14 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48001424, 20, 4> AFRH13 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48001424, 16, 4> AFRH12 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48001424, 12, 4> AFRH11 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48001424, 8, 4> AFRH10 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48001424, 4, 4> AFRH9 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48001424, 0, 4> AFRH8 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
			};
			 static reg_t<rw_t,0X48001424, 0, 32> AFRH_D;	 /*!< \brief AFRH register direct access */

			/*!
			\brief Port bit reset register
			*/
			struct BRR{
				 static reg_t<wo_t, 0X48001428, 0, 1> BR0 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 1, 1> BR1 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 2, 1> BR2 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 3, 1> BR3 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 4, 1> BR4 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 5, 1> BR5 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 6, 1> BR6 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 7, 1> BR7 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 8, 1> BR8 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 9, 1> BR9 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 10, 1> BR10 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 11, 1> BR11 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 12, 1> BR12 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 13, 1> BR13 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 14, 1> BR14 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48001428, 15, 1> BR15 	;	 /*!< \brief Port x Reset bit y */
			};
			 static reg_t<rw_t,0X48001428, 0, 32> BRR_D;	 /*!< \brief BRR register direct access */
		};

		/*!
		\brief General-purpose I/Os
	BasedOn:GPIOF
		*/
		struct GPIOD{

			/*!
			\brief GPIO port mode register
			*/
			struct MODER{
				 static reg_t<rw_t, 0X48000C00, 30, 2> MODER15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 28, 2> MODER14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 26, 2> MODER13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 24, 2> MODER12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 22, 2> MODER11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 20, 2> MODER10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 18, 2> MODER9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 16, 2> MODER8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 14, 2> MODER7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 12, 2> MODER6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 10, 2> MODER5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 8, 2> MODER4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 6, 2> MODER3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 4, 2> MODER2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 2, 2> MODER1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C00, 0, 2> MODER0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000C00, 0, 32> MODER_D;	 /*!< \brief MODER register direct access */

			/*!
			\brief GPIO port output type register
			*/
			struct OTYPER{
				 static reg_t<rw_t, 0X48000C04, 15, 1> OT15 	;	 /*!< \brief Port x configuration bit 15 */
				 static reg_t<rw_t, 0X48000C04, 14, 1> OT14 	;	 /*!< \brief Port x configuration bit 14 */
				 static reg_t<rw_t, 0X48000C04, 13, 1> OT13 	;	 /*!< \brief Port x configuration bit 13 */
				 static reg_t<rw_t, 0X48000C04, 12, 1> OT12 	;	 /*!< \brief Port x configuration bit 12 */
				 static reg_t<rw_t, 0X48000C04, 11, 1> OT11 	;	 /*!< \brief Port x configuration bit 11 */
				 static reg_t<rw_t, 0X48000C04, 10, 1> OT10 	;	 /*!< \brief Port x configuration bit 10 */
				 static reg_t<rw_t, 0X48000C04, 9, 1> OT9 	;	 /*!< \brief Port x configuration bit 9 */
				 static reg_t<rw_t, 0X48000C04, 8, 1> OT8 	;	 /*!< \brief Port x configuration bit 8 */
				 static reg_t<rw_t, 0X48000C04, 7, 1> OT7 	;	 /*!< \brief Port x configuration bit 7 */
				 static reg_t<rw_t, 0X48000C04, 6, 1> OT6 	;	 /*!< \brief Port x configuration bit 6 */
				 static reg_t<rw_t, 0X48000C04, 5, 1> OT5 	;	 /*!< \brief Port x configuration bit 5 */
				 static reg_t<rw_t, 0X48000C04, 4, 1> OT4 	;	 /*!< \brief Port x configuration bit 4 */
				 static reg_t<rw_t, 0X48000C04, 3, 1> OT3 	;	 /*!< \brief Port x configuration bit 3 */
				 static reg_t<rw_t, 0X48000C04, 2, 1> OT2 	;	 /*!< \brief Port x configuration bit 2 */
				 static reg_t<rw_t, 0X48000C04, 1, 1> OT1 	;	 /*!< \brief Port x configuration bit 1 */
				 static reg_t<rw_t, 0X48000C04, 0, 1> OT0 	;	 /*!< \brief Port x configuration bit 0 */
			};
			 static reg_t<rw_t,0X48000C04, 0, 32> OTYPER_D;	 /*!< \brief OTYPER register direct access */

			/*!
			\brief GPIO port output speed register
			*/
			struct OSPEEDR{
				 static reg_t<rw_t, 0X48000C08, 30, 2> OSPEEDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 28, 2> OSPEEDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 26, 2> OSPEEDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 24, 2> OSPEEDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 22, 2> OSPEEDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 20, 2> OSPEEDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 18, 2> OSPEEDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 16, 2> OSPEEDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 14, 2> OSPEEDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 12, 2> OSPEEDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 10, 2> OSPEEDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 8, 2> OSPEEDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 6, 2> OSPEEDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 4, 2> OSPEEDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 2, 2> OSPEEDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C08, 0, 2> OSPEEDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000C08, 0, 32> OSPEEDR_D;	 /*!< \brief OSPEEDR register direct access */

			/*!
			\brief GPIO port pull-up/pull-down register
			*/
			struct PUPDR{
				 static reg_t<rw_t, 0X48000C0C, 30, 2> PUPDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 28, 2> PUPDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 26, 2> PUPDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 24, 2> PUPDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 22, 2> PUPDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 20, 2> PUPDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 18, 2> PUPDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 16, 2> PUPDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 14, 2> PUPDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 12, 2> PUPDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 10, 2> PUPDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 8, 2> PUPDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 6, 2> PUPDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 4, 2> PUPDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 2, 2> PUPDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000C0C, 0, 2> PUPDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000C0C, 0, 32> PUPDR_D;	 /*!< \brief PUPDR register direct access */

			/*!
			\brief GPIO port input data register
			*/
			struct IDR{
				 static reg_t<ro_t, 0X48000C10, 15, 1> IDR15 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 14, 1> IDR14 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 13, 1> IDR13 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 12, 1> IDR12 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 11, 1> IDR11 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 10, 1> IDR10 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 9, 1> IDR9 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 8, 1> IDR8 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 7, 1> IDR7 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 6, 1> IDR6 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 5, 1> IDR5 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 4, 1> IDR4 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 3, 1> IDR3 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 2, 1> IDR2 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 1, 1> IDR1 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000C10, 0, 1> IDR0 	;	 /*!< \brief Port input data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000C10, 0, 32> IDR_D;	 /*!< \brief IDR register direct access */

			/*!
			\brief GPIO port output data register
			*/
			struct ODR{
				 static reg_t<rw_t, 0X48000C14, 15, 1> ODR15 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 14, 1> ODR14 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 13, 1> ODR13 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 12, 1> ODR12 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 11, 1> ODR11 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 10, 1> ODR10 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 9, 1> ODR9 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 8, 1> ODR8 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 7, 1> ODR7 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 6, 1> ODR6 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 5, 1> ODR5 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 4, 1> ODR4 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 3, 1> ODR3 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 2, 1> ODR2 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 1, 1> ODR1 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000C14, 0, 1> ODR0 	;	 /*!< \brief Port output data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000C14, 0, 32> ODR_D;	 /*!< \brief ODR register direct access */

			/*!
			\brief GPIO port bit set/reset register
			*/
			struct BSRR{
				 static reg_t<wo_t, 0X48000C18, 31, 1> BR15 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 30, 1> BR14 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 29, 1> BR13 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 28, 1> BR12 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 27, 1> BR11 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 26, 1> BR10 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 25, 1> BR9 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 24, 1> BR8 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 23, 1> BR7 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 22, 1> BR6 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 21, 1> BR5 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 20, 1> BR4 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 19, 1> BR3 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 18, 1> BR2 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 17, 1> BR1 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000C18, 16, 1> BR0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 15, 1> BS15 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 14, 1> BS14 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 13, 1> BS13 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 12, 1> BS12 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 11, 1> BS11 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 10, 1> BS10 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 9, 1> BS9 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 8, 1> BS8 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 7, 1> BS7 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 6, 1> BS6 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 5, 1> BS5 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 4, 1> BS4 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 3, 1> BS3 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 2, 1> BS2 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 1, 1> BS1 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000C18, 0, 1> BS0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X48000C18, 0, 32> BSRR_D;	 /*!< \brief BSRR register direct access */

			/*!
			\brief GPIO port configuration lock register
			*/
			struct LCKR{
				 static reg_t<rw_t, 0X48000C1C, 16, 1> LCKK 	;	 /*!< \brief Port x lock bit y */
				 static reg_t<rw_t, 0X48000C1C, 15, 1> LCK15 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 14, 1> LCK14 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 13, 1> LCK13 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 12, 1> LCK12 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 11, 1> LCK11 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 10, 1> LCK10 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 9, 1> LCK9 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 8, 1> LCK8 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 7, 1> LCK7 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 6, 1> LCK6 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 5, 1> LCK5 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 4, 1> LCK4 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 3, 1> LCK3 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 2, 1> LCK2 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 1, 1> LCK1 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X48000C1C, 0, 1> LCK0 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X48000C1C, 0, 32> LCKR_D;	 /*!< \brief LCKR register direct access */

			/*!
			\brief GPIO alternate function low register
			*/
			struct AFRL{
				 static reg_t<rw_t, 0X48000C20, 28, 4> AFRL7 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000C20, 24, 4> AFRL6 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000C20, 20, 4> AFRL5 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000C20, 16, 4> AFRL4 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000C20, 12, 4> AFRL3 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000C20, 8, 4> AFRL2 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000C20, 4, 4> AFRL1 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000C20, 0, 4> AFRL0 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
			};
			 static reg_t<rw_t,0X48000C20, 0, 32> AFRL_D;	 /*!< \brief AFRL register direct access */

			/*!
			\brief GPIO alternate function high register
			*/
			struct AFRH{
				 static reg_t<rw_t, 0X48000C24, 28, 4> AFRH15 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000C24, 24, 4> AFRH14 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000C24, 20, 4> AFRH13 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000C24, 16, 4> AFRH12 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000C24, 12, 4> AFRH11 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000C24, 8, 4> AFRH10 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000C24, 4, 4> AFRH9 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000C24, 0, 4> AFRH8 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
			};
			 static reg_t<rw_t,0X48000C24, 0, 32> AFRH_D;	 /*!< \brief AFRH register direct access */

			/*!
			\brief Port bit reset register
			*/
			struct BRR{
				 static reg_t<wo_t, 0X48000C28, 0, 1> BR0 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 1, 1> BR1 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 2, 1> BR2 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 3, 1> BR3 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 4, 1> BR4 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 5, 1> BR5 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 6, 1> BR6 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 7, 1> BR7 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 8, 1> BR8 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 9, 1> BR9 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 10, 1> BR10 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 11, 1> BR11 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 12, 1> BR12 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 13, 1> BR13 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 14, 1> BR14 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000C28, 15, 1> BR15 	;	 /*!< \brief Port x Reset bit y */
			};
			 static reg_t<rw_t,0X48000C28, 0, 32> BRR_D;	 /*!< \brief BRR register direct access */
		};

		/*!
		\brief General-purpose I/Os
	BasedOn:GPIOF
		*/
		struct GPIOC{

			/*!
			\brief GPIO port mode register
			*/
			struct MODER{
				 static reg_t<rw_t, 0X48000800, 30, 2> MODER15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 28, 2> MODER14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 26, 2> MODER13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 24, 2> MODER12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 22, 2> MODER11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 20, 2> MODER10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 18, 2> MODER9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 16, 2> MODER8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 14, 2> MODER7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 12, 2> MODER6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 10, 2> MODER5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 8, 2> MODER4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 6, 2> MODER3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 4, 2> MODER2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 2, 2> MODER1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000800, 0, 2> MODER0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000800, 0, 32> MODER_D;	 /*!< \brief MODER register direct access */

			/*!
			\brief GPIO port output type register
			*/
			struct OTYPER{
				 static reg_t<rw_t, 0X48000804, 15, 1> OT15 	;	 /*!< \brief Port x configuration bit 15 */
				 static reg_t<rw_t, 0X48000804, 14, 1> OT14 	;	 /*!< \brief Port x configuration bit 14 */
				 static reg_t<rw_t, 0X48000804, 13, 1> OT13 	;	 /*!< \brief Port x configuration bit 13 */
				 static reg_t<rw_t, 0X48000804, 12, 1> OT12 	;	 /*!< \brief Port x configuration bit 12 */
				 static reg_t<rw_t, 0X48000804, 11, 1> OT11 	;	 /*!< \brief Port x configuration bit 11 */
				 static reg_t<rw_t, 0X48000804, 10, 1> OT10 	;	 /*!< \brief Port x configuration bit 10 */
				 static reg_t<rw_t, 0X48000804, 9, 1> OT9 	;	 /*!< \brief Port x configuration bit 9 */
				 static reg_t<rw_t, 0X48000804, 8, 1> OT8 	;	 /*!< \brief Port x configuration bit 8 */
				 static reg_t<rw_t, 0X48000804, 7, 1> OT7 	;	 /*!< \brief Port x configuration bit 7 */
				 static reg_t<rw_t, 0X48000804, 6, 1> OT6 	;	 /*!< \brief Port x configuration bit 6 */
				 static reg_t<rw_t, 0X48000804, 5, 1> OT5 	;	 /*!< \brief Port x configuration bit 5 */
				 static reg_t<rw_t, 0X48000804, 4, 1> OT4 	;	 /*!< \brief Port x configuration bit 4 */
				 static reg_t<rw_t, 0X48000804, 3, 1> OT3 	;	 /*!< \brief Port x configuration bit 3 */
				 static reg_t<rw_t, 0X48000804, 2, 1> OT2 	;	 /*!< \brief Port x configuration bit 2 */
				 static reg_t<rw_t, 0X48000804, 1, 1> OT1 	;	 /*!< \brief Port x configuration bit 1 */
				 static reg_t<rw_t, 0X48000804, 0, 1> OT0 	;	 /*!< \brief Port x configuration bit 0 */
			};
			 static reg_t<rw_t,0X48000804, 0, 32> OTYPER_D;	 /*!< \brief OTYPER register direct access */

			/*!
			\brief GPIO port output speed register
			*/
			struct OSPEEDR{
				 static reg_t<rw_t, 0X48000808, 30, 2> OSPEEDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 28, 2> OSPEEDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 26, 2> OSPEEDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 24, 2> OSPEEDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 22, 2> OSPEEDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 20, 2> OSPEEDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 18, 2> OSPEEDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 16, 2> OSPEEDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 14, 2> OSPEEDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 12, 2> OSPEEDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 10, 2> OSPEEDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 8, 2> OSPEEDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 6, 2> OSPEEDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 4, 2> OSPEEDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 2, 2> OSPEEDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000808, 0, 2> OSPEEDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000808, 0, 32> OSPEEDR_D;	 /*!< \brief OSPEEDR register direct access */

			/*!
			\brief GPIO port pull-up/pull-down register
			*/
			struct PUPDR{
				 static reg_t<rw_t, 0X4800080C, 30, 2> PUPDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 28, 2> PUPDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 26, 2> PUPDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 24, 2> PUPDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 22, 2> PUPDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 20, 2> PUPDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 18, 2> PUPDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 16, 2> PUPDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 14, 2> PUPDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 12, 2> PUPDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 10, 2> PUPDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 8, 2> PUPDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 6, 2> PUPDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 4, 2> PUPDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 2, 2> PUPDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800080C, 0, 2> PUPDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X4800080C, 0, 32> PUPDR_D;	 /*!< \brief PUPDR register direct access */

			/*!
			\brief GPIO port input data register
			*/
			struct IDR{
				 static reg_t<ro_t, 0X48000810, 15, 1> IDR15 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 14, 1> IDR14 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 13, 1> IDR13 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 12, 1> IDR12 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 11, 1> IDR11 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 10, 1> IDR10 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 9, 1> IDR9 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 8, 1> IDR8 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 7, 1> IDR7 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 6, 1> IDR6 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 5, 1> IDR5 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 4, 1> IDR4 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 3, 1> IDR3 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 2, 1> IDR2 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 1, 1> IDR1 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000810, 0, 1> IDR0 	;	 /*!< \brief Port input data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000810, 0, 32> IDR_D;	 /*!< \brief IDR register direct access */

			/*!
			\brief GPIO port output data register
			*/
			struct ODR{
				 static reg_t<rw_t, 0X48000814, 15, 1> ODR15 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 14, 1> ODR14 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 13, 1> ODR13 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 12, 1> ODR12 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 11, 1> ODR11 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 10, 1> ODR10 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 9, 1> ODR9 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 8, 1> ODR8 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 7, 1> ODR7 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 6, 1> ODR6 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 5, 1> ODR5 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 4, 1> ODR4 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 3, 1> ODR3 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 2, 1> ODR2 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 1, 1> ODR1 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000814, 0, 1> ODR0 	;	 /*!< \brief Port output data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000814, 0, 32> ODR_D;	 /*!< \brief ODR register direct access */

			/*!
			\brief GPIO port bit set/reset register
			*/
			struct BSRR{
				 static reg_t<wo_t, 0X48000818, 31, 1> BR15 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 30, 1> BR14 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 29, 1> BR13 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 28, 1> BR12 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 27, 1> BR11 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 26, 1> BR10 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 25, 1> BR9 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 24, 1> BR8 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 23, 1> BR7 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 22, 1> BR6 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 21, 1> BR5 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 20, 1> BR4 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 19, 1> BR3 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 18, 1> BR2 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 17, 1> BR1 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000818, 16, 1> BR0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 15, 1> BS15 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 14, 1> BS14 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 13, 1> BS13 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 12, 1> BS12 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 11, 1> BS11 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 10, 1> BS10 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 9, 1> BS9 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 8, 1> BS8 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 7, 1> BS7 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 6, 1> BS6 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 5, 1> BS5 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 4, 1> BS4 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 3, 1> BS3 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 2, 1> BS2 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 1, 1> BS1 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000818, 0, 1> BS0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X48000818, 0, 32> BSRR_D;	 /*!< \brief BSRR register direct access */

			/*!
			\brief GPIO port configuration lock register
			*/
			struct LCKR{
				 static reg_t<rw_t, 0X4800081C, 16, 1> LCKK 	;	 /*!< \brief Port x lock bit y */
				 static reg_t<rw_t, 0X4800081C, 15, 1> LCK15 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 14, 1> LCK14 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 13, 1> LCK13 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 12, 1> LCK12 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 11, 1> LCK11 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 10, 1> LCK10 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 9, 1> LCK9 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 8, 1> LCK8 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 7, 1> LCK7 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 6, 1> LCK6 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 5, 1> LCK5 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 4, 1> LCK4 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 3, 1> LCK3 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 2, 1> LCK2 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 1, 1> LCK1 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800081C, 0, 1> LCK0 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X4800081C, 0, 32> LCKR_D;	 /*!< \brief LCKR register direct access */

			/*!
			\brief GPIO alternate function low register
			*/
			struct AFRL{
				 static reg_t<rw_t, 0X48000820, 28, 4> AFRL7 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000820, 24, 4> AFRL6 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000820, 20, 4> AFRL5 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000820, 16, 4> AFRL4 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000820, 12, 4> AFRL3 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000820, 8, 4> AFRL2 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000820, 4, 4> AFRL1 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000820, 0, 4> AFRL0 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
			};
			 static reg_t<rw_t,0X48000820, 0, 32> AFRL_D;	 /*!< \brief AFRL register direct access */

			/*!
			\brief GPIO alternate function high register
			*/
			struct AFRH{
				 static reg_t<rw_t, 0X48000824, 28, 4> AFRH15 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000824, 24, 4> AFRH14 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000824, 20, 4> AFRH13 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000824, 16, 4> AFRH12 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000824, 12, 4> AFRH11 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000824, 8, 4> AFRH10 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000824, 4, 4> AFRH9 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000824, 0, 4> AFRH8 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
			};
			 static reg_t<rw_t,0X48000824, 0, 32> AFRH_D;	 /*!< \brief AFRH register direct access */

			/*!
			\brief Port bit reset register
			*/
			struct BRR{
				 static reg_t<wo_t, 0X48000828, 0, 1> BR0 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 1, 1> BR1 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 2, 1> BR2 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 3, 1> BR3 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 4, 1> BR4 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 5, 1> BR5 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 6, 1> BR6 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 7, 1> BR7 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 8, 1> BR8 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 9, 1> BR9 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 10, 1> BR10 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 11, 1> BR11 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 12, 1> BR12 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 13, 1> BR13 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 14, 1> BR14 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000828, 15, 1> BR15 	;	 /*!< \brief Port x Reset bit y */
			};
			 static reg_t<rw_t,0X48000828, 0, 32> BRR_D;	 /*!< \brief BRR register direct access */
		};

		/*!
		\brief General-purpose I/Os
	BasedOn:GPIOF
		*/
		struct GPIOB{

			/*!
			\brief GPIO port mode register
			*/
			struct MODER{
				 static reg_t<rw_t, 0X48000400, 30, 2> MODER15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 28, 2> MODER14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 26, 2> MODER13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 24, 2> MODER12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 22, 2> MODER11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 20, 2> MODER10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 18, 2> MODER9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 16, 2> MODER8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 14, 2> MODER7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 12, 2> MODER6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 10, 2> MODER5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 8, 2> MODER4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 6, 2> MODER3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 4, 2> MODER2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 2, 2> MODER1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000400, 0, 2> MODER0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000400, 0, 32> MODER_D;	 /*!< \brief MODER register direct access */

			/*!
			\brief GPIO port output type register
			*/
			struct OTYPER{
				 static reg_t<rw_t, 0X48000404, 15, 1> OT15 	;	 /*!< \brief Port x configuration bit 15 */
				 static reg_t<rw_t, 0X48000404, 14, 1> OT14 	;	 /*!< \brief Port x configuration bit 14 */
				 static reg_t<rw_t, 0X48000404, 13, 1> OT13 	;	 /*!< \brief Port x configuration bit 13 */
				 static reg_t<rw_t, 0X48000404, 12, 1> OT12 	;	 /*!< \brief Port x configuration bit 12 */
				 static reg_t<rw_t, 0X48000404, 11, 1> OT11 	;	 /*!< \brief Port x configuration bit 11 */
				 static reg_t<rw_t, 0X48000404, 10, 1> OT10 	;	 /*!< \brief Port x configuration bit 10 */
				 static reg_t<rw_t, 0X48000404, 9, 1> OT9 	;	 /*!< \brief Port x configuration bit 9 */
				 static reg_t<rw_t, 0X48000404, 8, 1> OT8 	;	 /*!< \brief Port x configuration bit 8 */
				 static reg_t<rw_t, 0X48000404, 7, 1> OT7 	;	 /*!< \brief Port x configuration bit 7 */
				 static reg_t<rw_t, 0X48000404, 6, 1> OT6 	;	 /*!< \brief Port x configuration bit 6 */
				 static reg_t<rw_t, 0X48000404, 5, 1> OT5 	;	 /*!< \brief Port x configuration bit 5 */
				 static reg_t<rw_t, 0X48000404, 4, 1> OT4 	;	 /*!< \brief Port x configuration bit 4 */
				 static reg_t<rw_t, 0X48000404, 3, 1> OT3 	;	 /*!< \brief Port x configuration bit 3 */
				 static reg_t<rw_t, 0X48000404, 2, 1> OT2 	;	 /*!< \brief Port x configuration bit 2 */
				 static reg_t<rw_t, 0X48000404, 1, 1> OT1 	;	 /*!< \brief Port x configuration bit 1 */
				 static reg_t<rw_t, 0X48000404, 0, 1> OT0 	;	 /*!< \brief Port x configuration bit 0 */
			};
			 static reg_t<rw_t,0X48000404, 0, 32> OTYPER_D;	 /*!< \brief OTYPER register direct access */

			/*!
			\brief GPIO port output speed register
			*/
			struct OSPEEDR{
				 static reg_t<rw_t, 0X48000408, 30, 2> OSPEEDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 28, 2> OSPEEDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 26, 2> OSPEEDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 24, 2> OSPEEDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 22, 2> OSPEEDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 20, 2> OSPEEDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 18, 2> OSPEEDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 16, 2> OSPEEDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 14, 2> OSPEEDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 12, 2> OSPEEDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 10, 2> OSPEEDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 8, 2> OSPEEDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 6, 2> OSPEEDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 4, 2> OSPEEDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 2, 2> OSPEEDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000408, 0, 2> OSPEEDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000408, 0, 32> OSPEEDR_D;	 /*!< \brief OSPEEDR register direct access */

			/*!
			\brief GPIO port pull-up/pull-down register
			*/
			struct PUPDR{
				 static reg_t<rw_t, 0X4800040C, 30, 2> PUPDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 28, 2> PUPDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 26, 2> PUPDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 24, 2> PUPDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 22, 2> PUPDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 20, 2> PUPDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 18, 2> PUPDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 16, 2> PUPDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 14, 2> PUPDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 12, 2> PUPDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 10, 2> PUPDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 8, 2> PUPDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 6, 2> PUPDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 4, 2> PUPDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 2, 2> PUPDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800040C, 0, 2> PUPDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X4800040C, 0, 32> PUPDR_D;	 /*!< \brief PUPDR register direct access */

			/*!
			\brief GPIO port input data register
			*/
			struct IDR{
				 static reg_t<ro_t, 0X48000410, 15, 1> IDR15 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 14, 1> IDR14 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 13, 1> IDR13 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 12, 1> IDR12 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 11, 1> IDR11 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 10, 1> IDR10 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 9, 1> IDR9 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 8, 1> IDR8 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 7, 1> IDR7 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 6, 1> IDR6 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 5, 1> IDR5 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 4, 1> IDR4 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 3, 1> IDR3 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 2, 1> IDR2 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 1, 1> IDR1 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000410, 0, 1> IDR0 	;	 /*!< \brief Port input data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000410, 0, 32> IDR_D;	 /*!< \brief IDR register direct access */

			/*!
			\brief GPIO port output data register
			*/
			struct ODR{
				 static reg_t<rw_t, 0X48000414, 15, 1> ODR15 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 14, 1> ODR14 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 13, 1> ODR13 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 12, 1> ODR12 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 11, 1> ODR11 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 10, 1> ODR10 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 9, 1> ODR9 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 8, 1> ODR8 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 7, 1> ODR7 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 6, 1> ODR6 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 5, 1> ODR5 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 4, 1> ODR4 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 3, 1> ODR3 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 2, 1> ODR2 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 1, 1> ODR1 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000414, 0, 1> ODR0 	;	 /*!< \brief Port output data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000414, 0, 32> ODR_D;	 /*!< \brief ODR register direct access */

			/*!
			\brief GPIO port bit set/reset register
			*/
			struct BSRR{
				 static reg_t<wo_t, 0X48000418, 31, 1> BR15 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 30, 1> BR14 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 29, 1> BR13 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 28, 1> BR12 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 27, 1> BR11 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 26, 1> BR10 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 25, 1> BR9 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 24, 1> BR8 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 23, 1> BR7 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 22, 1> BR6 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 21, 1> BR5 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 20, 1> BR4 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 19, 1> BR3 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 18, 1> BR2 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 17, 1> BR1 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000418, 16, 1> BR0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 15, 1> BS15 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 14, 1> BS14 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 13, 1> BS13 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 12, 1> BS12 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 11, 1> BS11 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 10, 1> BS10 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 9, 1> BS9 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 8, 1> BS8 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 7, 1> BS7 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 6, 1> BS6 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 5, 1> BS5 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 4, 1> BS4 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 3, 1> BS3 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 2, 1> BS2 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 1, 1> BS1 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000418, 0, 1> BS0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X48000418, 0, 32> BSRR_D;	 /*!< \brief BSRR register direct access */

			/*!
			\brief GPIO port configuration lock register
			*/
			struct LCKR{
				 static reg_t<rw_t, 0X4800041C, 16, 1> LCKK 	;	 /*!< \brief Port x lock bit y */
				 static reg_t<rw_t, 0X4800041C, 15, 1> LCK15 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 14, 1> LCK14 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 13, 1> LCK13 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 12, 1> LCK12 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 11, 1> LCK11 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 10, 1> LCK10 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 9, 1> LCK9 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 8, 1> LCK8 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 7, 1> LCK7 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 6, 1> LCK6 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 5, 1> LCK5 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 4, 1> LCK4 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 3, 1> LCK3 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 2, 1> LCK2 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 1, 1> LCK1 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800041C, 0, 1> LCK0 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X4800041C, 0, 32> LCKR_D;	 /*!< \brief LCKR register direct access */

			/*!
			\brief GPIO alternate function low register
			*/
			struct AFRL{
				 static reg_t<rw_t, 0X48000420, 28, 4> AFRL7 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000420, 24, 4> AFRL6 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000420, 20, 4> AFRL5 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000420, 16, 4> AFRL4 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000420, 12, 4> AFRL3 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000420, 8, 4> AFRL2 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000420, 4, 4> AFRL1 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000420, 0, 4> AFRL0 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
			};
			 static reg_t<rw_t,0X48000420, 0, 32> AFRL_D;	 /*!< \brief AFRL register direct access */

			/*!
			\brief GPIO alternate function high register
			*/
			struct AFRH{
				 static reg_t<rw_t, 0X48000424, 28, 4> AFRH15 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000424, 24, 4> AFRH14 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000424, 20, 4> AFRH13 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000424, 16, 4> AFRH12 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000424, 12, 4> AFRH11 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000424, 8, 4> AFRH10 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000424, 4, 4> AFRH9 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000424, 0, 4> AFRH8 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
			};
			 static reg_t<rw_t,0X48000424, 0, 32> AFRH_D;	 /*!< \brief AFRH register direct access */

			/*!
			\brief Port bit reset register
			*/
			struct BRR{
				 static reg_t<wo_t, 0X48000428, 0, 1> BR0 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 1, 1> BR1 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 2, 1> BR2 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 3, 1> BR3 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 4, 1> BR4 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 5, 1> BR5 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 6, 1> BR6 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 7, 1> BR7 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 8, 1> BR8 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 9, 1> BR9 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 10, 1> BR10 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 11, 1> BR11 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 12, 1> BR12 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 13, 1> BR13 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 14, 1> BR14 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000428, 15, 1> BR15 	;	 /*!< \brief Port x Reset bit y */
			};
			 static reg_t<rw_t,0X48000428, 0, 32> BRR_D;	 /*!< \brief BRR register direct access */
		};

		/*!
		\brief General-purpose I/Os
		*/
		struct GPIOA{

			/*!
			\brief GPIO port mode register
			*/
			struct MODER{
				 static reg_t<rw_t, 0X48000000, 30, 2> MODER15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 28, 2> MODER14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 26, 2> MODER13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 24, 2> MODER12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 22, 2> MODER11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 20, 2> MODER10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 18, 2> MODER9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 16, 2> MODER8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 14, 2> MODER7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 12, 2> MODER6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 10, 2> MODER5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 8, 2> MODER4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 6, 2> MODER3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 4, 2> MODER2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 2, 2> MODER1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000000, 0, 2> MODER0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000000, 0, 32> MODER_D;	 /*!< \brief MODER register direct access */

			/*!
			\brief GPIO port output type register
			*/
			struct OTYPER{
				 static reg_t<rw_t, 0X48000004, 15, 1> OT15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 14, 1> OT14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 13, 1> OT13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 12, 1> OT12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 11, 1> OT11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 10, 1> OT10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 9, 1> OT9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 8, 1> OT8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 7, 1> OT7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 6, 1> OT6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 5, 1> OT5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 4, 1> OT4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 3, 1> OT3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 2, 1> OT2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 1, 1> OT1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000004, 0, 1> OT0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000004, 0, 32> OTYPER_D;	 /*!< \brief OTYPER register direct access */

			/*!
			\brief GPIO port output speed register
			*/
			struct OSPEEDR{
				 static reg_t<rw_t, 0X48000008, 30, 2> OSPEEDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 28, 2> OSPEEDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 26, 2> OSPEEDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 24, 2> OSPEEDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 22, 2> OSPEEDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 20, 2> OSPEEDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 18, 2> OSPEEDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 16, 2> OSPEEDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 14, 2> OSPEEDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 12, 2> OSPEEDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 10, 2> OSPEEDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 8, 2> OSPEEDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 6, 2> OSPEEDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 4, 2> OSPEEDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 2, 2> OSPEEDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X48000008, 0, 2> OSPEEDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000008, 0, 32> OSPEEDR_D;	 /*!< \brief OSPEEDR register direct access */

			/*!
			\brief GPIO port pull-up/pull-down register
			*/
			struct PUPDR{
				 static reg_t<rw_t, 0X4800000C, 30, 2> PUPDR15 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 28, 2> PUPDR14 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 26, 2> PUPDR13 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 24, 2> PUPDR12 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 22, 2> PUPDR11 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 20, 2> PUPDR10 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 18, 2> PUPDR9 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 16, 2> PUPDR8 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 14, 2> PUPDR7 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 12, 2> PUPDR6 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 10, 2> PUPDR5 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 8, 2> PUPDR4 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 6, 2> PUPDR3 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 4, 2> PUPDR2 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 2, 2> PUPDR1 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
				 static reg_t<rw_t, 0X4800000C, 0, 2> PUPDR0 	;	 /*!< \brief Port x configuration bits (y = 0..15) */
			};
			 static reg_t<rw_t,0X4800000C, 0, 32> PUPDR_D;	 /*!< \brief PUPDR register direct access */

			/*!
			\brief GPIO port input data register
			*/
			struct IDR{
				 static reg_t<ro_t, 0X48000010, 15, 1> IDR15 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 14, 1> IDR14 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 13, 1> IDR13 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 12, 1> IDR12 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 11, 1> IDR11 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 10, 1> IDR10 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 9, 1> IDR9 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 8, 1> IDR8 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 7, 1> IDR7 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 6, 1> IDR6 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 5, 1> IDR5 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 4, 1> IDR4 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 3, 1> IDR3 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 2, 1> IDR2 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 1, 1> IDR1 	;	 /*!< \brief Port input data (y = 0..15) */
				 static reg_t<ro_t, 0X48000010, 0, 1> IDR0 	;	 /*!< \brief Port input data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000010, 0, 32> IDR_D;	 /*!< \brief IDR register direct access */

			/*!
			\brief GPIO port output data register
			*/
			struct ODR{
				 static reg_t<rw_t, 0X48000014, 15, 1> ODR15 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 14, 1> ODR14 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 13, 1> ODR13 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 12, 1> ODR12 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 11, 1> ODR11 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 10, 1> ODR10 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 9, 1> ODR9 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 8, 1> ODR8 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 7, 1> ODR7 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 6, 1> ODR6 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 5, 1> ODR5 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 4, 1> ODR4 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 3, 1> ODR3 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 2, 1> ODR2 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 1, 1> ODR1 	;	 /*!< \brief Port output data (y = 0..15) */
				 static reg_t<rw_t, 0X48000014, 0, 1> ODR0 	;	 /*!< \brief Port output data (y = 0..15) */
			};
			 static reg_t<rw_t,0X48000014, 0, 32> ODR_D;	 /*!< \brief ODR register direct access */

			/*!
			\brief GPIO port bit set/reset register
			*/
			struct BSRR{
				 static reg_t<wo_t, 0X48000018, 31, 1> BR15 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 30, 1> BR14 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 29, 1> BR13 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 28, 1> BR12 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 27, 1> BR11 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 26, 1> BR10 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 25, 1> BR9 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 24, 1> BR8 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 23, 1> BR7 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 22, 1> BR6 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 21, 1> BR5 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 20, 1> BR4 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 19, 1> BR3 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 18, 1> BR2 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 17, 1> BR1 	;	 /*!< \brief Port x reset bit y (y = 0..15) */
				 static reg_t<wo_t, 0X48000018, 16, 1> BR0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 15, 1> BS15 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 14, 1> BS14 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 13, 1> BS13 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 12, 1> BS12 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 11, 1> BS11 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 10, 1> BS10 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 9, 1> BS9 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 8, 1> BS8 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 7, 1> BS7 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 6, 1> BS6 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 5, 1> BS5 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 4, 1> BS4 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 3, 1> BS3 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 2, 1> BS2 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 1, 1> BS1 	;	 /*!< \brief Port x set bit y (y= 0..15) */
				 static reg_t<wo_t, 0X48000018, 0, 1> BS0 	;	 /*!< \brief Port x set bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X48000018, 0, 32> BSRR_D;	 /*!< \brief BSRR register direct access */

			/*!
			\brief GPIO port configuration lock register
			*/
			struct LCKR{
				 static reg_t<rw_t, 0X4800001C, 16, 1> LCKK 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 15, 1> LCK15 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 14, 1> LCK14 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 13, 1> LCK13 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 12, 1> LCK12 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 11, 1> LCK11 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 10, 1> LCK10 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 9, 1> LCK9 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 8, 1> LCK8 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 7, 1> LCK7 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 6, 1> LCK6 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 5, 1> LCK5 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 4, 1> LCK4 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 3, 1> LCK3 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 2, 1> LCK2 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 1, 1> LCK1 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
				 static reg_t<rw_t, 0X4800001C, 0, 1> LCK0 	;	 /*!< \brief Port x lock bit y (y= 0..15) */
			};
			 static reg_t<rw_t,0X4800001C, 0, 32> LCKR_D;	 /*!< \brief LCKR register direct access */

			/*!
			\brief GPIO alternate function low register
			*/
			struct AFRL{
				 static reg_t<rw_t, 0X48000020, 28, 4> AFRL7 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000020, 24, 4> AFRL6 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000020, 20, 4> AFRL5 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000020, 16, 4> AFRL4 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000020, 12, 4> AFRL3 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000020, 8, 4> AFRL2 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000020, 4, 4> AFRL1 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
				 static reg_t<rw_t, 0X48000020, 0, 4> AFRL0 	;	 /*!< \brief Alternate function selection for port x bit y (y = 0..7) */
			};
			 static reg_t<rw_t,0X48000020, 0, 32> AFRL_D;	 /*!< \brief AFRL register direct access */

			/*!
			\brief GPIO alternate function high register
			*/
			struct AFRH{
				 static reg_t<rw_t, 0X48000024, 28, 4> AFRH15 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000024, 24, 4> AFRH14 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000024, 20, 4> AFRH13 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000024, 16, 4> AFRH12 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000024, 12, 4> AFRH11 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000024, 8, 4> AFRH10 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000024, 4, 4> AFRH9 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
				 static reg_t<rw_t, 0X48000024, 0, 4> AFRH8 	;	 /*!< \brief Alternate function selection for port x bit y (y = 8..15) */
			};
			 static reg_t<rw_t,0X48000024, 0, 32> AFRH_D;	 /*!< \brief AFRH register direct access */

			/*!
			\brief Port bit reset register
			*/
			struct BRR{
				 static reg_t<wo_t, 0X48000028, 0, 1> BR0 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 1, 1> BR1 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 2, 1> BR2 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 3, 1> BR3 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 4, 1> BR4 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 5, 1> BR5 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 6, 1> BR6 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 7, 1> BR7 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 8, 1> BR8 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 9, 1> BR9 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 10, 1> BR10 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 11, 1> BR11 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 12, 1> BR12 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 13, 1> BR13 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 14, 1> BR14 	;	 /*!< \brief Port x Reset bit y */
				 static reg_t<wo_t, 0X48000028, 15, 1> BR15 	;	 /*!< \brief Port x Reset bit y */
			};
			 static reg_t<rw_t,0X48000028, 0, 32> BRR_D;	 /*!< \brief BRR register direct access */
		};

		/*!
		\brief Serial peripheral interface
		*/
		struct SPI1{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40013000, 15, 1> BIDIMODE 	;	 /*!< \brief Bidirectional data mode enable */
				 static reg_t<rw_t, 0X40013000, 14, 1> BIDIOE 	;	 /*!< \brief Output enable in bidirectional mode */
				 static reg_t<rw_t, 0X40013000, 13, 1> CRCEN 	;	 /*!< \brief Hardware CRC calculation enable */
				 static reg_t<rw_t, 0X40013000, 12, 1> CRCNEXT 	;	 /*!< \brief CRC transfer next */
				 static reg_t<rw_t, 0X40013000, 11, 1> DFF 	;	 /*!< \brief Data frame format */
				 static reg_t<rw_t, 0X40013000, 10, 1> RXONLY 	;	 /*!< \brief Receive only */
				 static reg_t<rw_t, 0X40013000, 9, 1> SSM 	;	 /*!< \brief Software slave management */
				 static reg_t<rw_t, 0X40013000, 8, 1> SSI 	;	 /*!< \brief Internal slave select */
				 static reg_t<rw_t, 0X40013000, 7, 1> LSBFIRST 	;	 /*!< \brief Frame format */
				 static reg_t<rw_t, 0X40013000, 6, 1> SPE 	;	 /*!< \brief SPI enable */
				 static reg_t<rw_t, 0X40013000, 3, 3> BR 	;	 /*!< \brief Baud rate control */
				 static reg_t<rw_t, 0X40013000, 2, 1> MSTR 	;	 /*!< \brief Master selection */
				 static reg_t<rw_t, 0X40013000, 1, 1> CPOL 	;	 /*!< \brief Clock polarity */
				 static reg_t<rw_t, 0X40013000, 0, 1> CPHA 	;	 /*!< \brief Clock phase */
			};
			 static reg_t<rw_t,0X40013000, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40013004, 0, 1> RXDMAEN 	;	 /*!< \brief Rx buffer DMA enable */
				 static reg_t<rw_t, 0X40013004, 1, 1> TXDMAEN 	;	 /*!< \brief Tx buffer DMA enable */
				 static reg_t<rw_t, 0X40013004, 2, 1> SSOE 	;	 /*!< \brief SS output enable */
				 static reg_t<rw_t, 0X40013004, 3, 1> NSSP 	;	 /*!< \brief NSS pulse management */
				 static reg_t<rw_t, 0X40013004, 4, 1> FRF 	;	 /*!< \brief Frame format */
				 static reg_t<rw_t, 0X40013004, 5, 1> ERRIE 	;	 /*!< \brief Error interrupt enable */
				 static reg_t<rw_t, 0X40013004, 6, 1> RXNEIE 	;	 /*!< \brief RX buffer not empty interrupt enable */
				 static reg_t<rw_t, 0X40013004, 7, 1> TXEIE 	;	 /*!< \brief Tx buffer empty interrupt enable */
				 static reg_t<rw_t, 0X40013004, 8, 4> DS 	;	 /*!< \brief Data size */
				 static reg_t<rw_t, 0X40013004, 12, 1> FRXTH 	;	 /*!< \brief FIFO reception threshold */
				 static reg_t<rw_t, 0X40013004, 13, 1> LDMA_RX 	;	 /*!< \brief Last DMA transfer for reception */
				 static reg_t<rw_t, 0X40013004, 14, 1> LDMA_TX 	;	 /*!< \brief Last DMA transfer for transmission */
			};
			 static reg_t<rw_t,0X40013004, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<ro_t, 0X40013008, 0, 1> RXNE 	;	 /*!< \brief Receive buffer not empty */
				 static reg_t<ro_t, 0X40013008, 1, 1> TXE 	;	 /*!< \brief Transmit buffer empty */
				 static reg_t<ro_t, 0X40013008, 2, 1> CHSIDE 	;	 /*!< \brief Channel side */
				 static reg_t<ro_t, 0X40013008, 3, 1> UDR 	;	 /*!< \brief Underrun flag */
				 static reg_t<rw_t, 0X40013008, 4, 1> CRCERR 	;	 /*!< \brief CRC error flag */
				 static reg_t<ro_t, 0X40013008, 5, 1> MODF 	;	 /*!< \brief Mode fault */
				 static reg_t<ro_t, 0X40013008, 6, 1> OVR 	;	 /*!< \brief Overrun flag */
				 static reg_t<ro_t, 0X40013008, 7, 1> BSY 	;	 /*!< \brief Busy flag */
				 static reg_t<ro_t, 0X40013008, 8, 1> TIFRFE 	;	 /*!< \brief TI frame format error */
				 static reg_t<ro_t, 0X40013008, 9, 2> FRLVL 	;	 /*!< \brief FIFO reception level */
				 static reg_t<ro_t, 0X40013008, 11, 2> FTLVL 	;	 /*!< \brief FIFO transmission level */
			};
			 static reg_t<rw_t,0X40013008, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief data register
			*/
				 static reg_t<rw_t, 0X4001300C, 0, 16> DR 	;	 /*!< \brief Data register */

			/*!
			\brief CRC polynomial register
			*/
			struct CRCPR{
				 static reg_t<rw_t, 0X40013010, 0, 16> CRCPOLY 	;	 /*!< \brief CRC polynomial register */
			};

			/*!
			\brief RX CRC register
			*/
			struct RXCRCR{
				 static reg_t<ro_t, 0X40013014, 0, 16> RxCRC 	;	 /*!< \brief Rx CRC register */
			};

			/*!
			\brief TX CRC register
			*/
			struct TXCRCR{
				 static reg_t<ro_t, 0X40013018, 0, 16> TxCRC 	;	 /*!< \brief Tx CRC register */
			};

			/*!
			\brief I2S configuration register
			*/
			struct I2SCFGR{
				 static reg_t<rw_t, 0X4001301C, 11, 1> I2SMOD 	;	 /*!< \brief I2S mode selection */
				 static reg_t<rw_t, 0X4001301C, 10, 1> I2SE 	;	 /*!< \brief I2S Enable */
				 static reg_t<rw_t, 0X4001301C, 8, 2> I2SCFG 	;	 /*!< \brief I2S configuration mode */
				 static reg_t<rw_t, 0X4001301C, 7, 1> PCMSYNC 	;	 /*!< \brief PCM frame synchronization */
				 static reg_t<rw_t, 0X4001301C, 4, 2> I2SSTD 	;	 /*!< \brief I2S standard selection */
				 static reg_t<rw_t, 0X4001301C, 3, 1> CKPOL 	;	 /*!< \brief Steady state clock polarity */
				 static reg_t<rw_t, 0X4001301C, 1, 2> DATLEN 	;	 /*!< \brief Data length to be transferred */
				 static reg_t<rw_t, 0X4001301C, 0, 1> CHLEN 	;	 /*!< \brief Channel length (number of bits per audio channel) */
			};
			 static reg_t<rw_t,0X4001301C, 0, 32> I2SCFGR_D;	 /*!< \brief I2SCFGR register direct access */

			/*!
			\brief I2S prescaler register
			*/
			struct I2SPR{
				 static reg_t<rw_t, 0X40013020, 9, 1> MCKOE 	;	 /*!< \brief Master clock output enable */
				 static reg_t<rw_t, 0X40013020, 8, 1> ODD 	;	 /*!< \brief Odd factor for the prescaler */
				 static reg_t<rw_t, 0X40013020, 0, 8> I2SDIV 	;	 /*!< \brief I2S Linear prescaler */
			};
			 static reg_t<rw_t,0X40013020, 0, 32> I2SPR_D;	 /*!< \brief I2SPR register direct access */
		};

		/*!
		\brief Serial peripheral interface
	BasedOn:SPI1
		*/
		struct SPI2{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40003800, 15, 1> BIDIMODE 	;	 /*!< \brief Bidirectional data mode enable */
				 static reg_t<rw_t, 0X40003800, 14, 1> BIDIOE 	;	 /*!< \brief Output enable in bidirectional mode */
				 static reg_t<rw_t, 0X40003800, 13, 1> CRCEN 	;	 /*!< \brief Hardware CRC calculation enable */
				 static reg_t<rw_t, 0X40003800, 12, 1> CRCNEXT 	;	 /*!< \brief CRC transfer next */
				 static reg_t<rw_t, 0X40003800, 11, 1> DFF 	;	 /*!< \brief Data frame format */
				 static reg_t<rw_t, 0X40003800, 10, 1> RXONLY 	;	 /*!< \brief Receive only */
				 static reg_t<rw_t, 0X40003800, 9, 1> SSM 	;	 /*!< \brief Software slave management */
				 static reg_t<rw_t, 0X40003800, 8, 1> SSI 	;	 /*!< \brief Internal slave select */
				 static reg_t<rw_t, 0X40003800, 7, 1> LSBFIRST 	;	 /*!< \brief Frame format */
				 static reg_t<rw_t, 0X40003800, 6, 1> SPE 	;	 /*!< \brief SPI enable */
				 static reg_t<rw_t, 0X40003800, 3, 3> BR 	;	 /*!< \brief Baud rate control */
				 static reg_t<rw_t, 0X40003800, 2, 1> MSTR 	;	 /*!< \brief Master selection */
				 static reg_t<rw_t, 0X40003800, 1, 1> CPOL 	;	 /*!< \brief Clock polarity */
				 static reg_t<rw_t, 0X40003800, 0, 1> CPHA 	;	 /*!< \brief Clock phase */
			};
			 static reg_t<rw_t,0X40003800, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40003804, 0, 1> RXDMAEN 	;	 /*!< \brief Rx buffer DMA enable */
				 static reg_t<rw_t, 0X40003804, 1, 1> TXDMAEN 	;	 /*!< \brief Tx buffer DMA enable */
				 static reg_t<rw_t, 0X40003804, 2, 1> SSOE 	;	 /*!< \brief SS output enable */
				 static reg_t<rw_t, 0X40003804, 3, 1> NSSP 	;	 /*!< \brief NSS pulse management */
				 static reg_t<rw_t, 0X40003804, 4, 1> FRF 	;	 /*!< \brief Frame format */
				 static reg_t<rw_t, 0X40003804, 5, 1> ERRIE 	;	 /*!< \brief Error interrupt enable */
				 static reg_t<rw_t, 0X40003804, 6, 1> RXNEIE 	;	 /*!< \brief RX buffer not empty interrupt enable */
				 static reg_t<rw_t, 0X40003804, 7, 1> TXEIE 	;	 /*!< \brief Tx buffer empty interrupt enable */
				 static reg_t<rw_t, 0X40003804, 8, 4> DS 	;	 /*!< \brief Data size */
				 static reg_t<rw_t, 0X40003804, 12, 1> FRXTH 	;	 /*!< \brief FIFO reception threshold */
				 static reg_t<rw_t, 0X40003804, 13, 1> LDMA_RX 	;	 /*!< \brief Last DMA transfer for reception */
				 static reg_t<rw_t, 0X40003804, 14, 1> LDMA_TX 	;	 /*!< \brief Last DMA transfer for transmission */
			};
			 static reg_t<rw_t,0X40003804, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<ro_t, 0X40003808, 0, 1> RXNE 	;	 /*!< \brief Receive buffer not empty */
				 static reg_t<ro_t, 0X40003808, 1, 1> TXE 	;	 /*!< \brief Transmit buffer empty */
				 static reg_t<ro_t, 0X40003808, 2, 1> CHSIDE 	;	 /*!< \brief Channel side */
				 static reg_t<ro_t, 0X40003808, 3, 1> UDR 	;	 /*!< \brief Underrun flag */
				 static reg_t<rw_t, 0X40003808, 4, 1> CRCERR 	;	 /*!< \brief CRC error flag */
				 static reg_t<ro_t, 0X40003808, 5, 1> MODF 	;	 /*!< \brief Mode fault */
				 static reg_t<ro_t, 0X40003808, 6, 1> OVR 	;	 /*!< \brief Overrun flag */
				 static reg_t<ro_t, 0X40003808, 7, 1> BSY 	;	 /*!< \brief Busy flag */
				 static reg_t<ro_t, 0X40003808, 8, 1> TIFRFE 	;	 /*!< \brief TI frame format error */
				 static reg_t<ro_t, 0X40003808, 9, 2> FRLVL 	;	 /*!< \brief FIFO reception level */
				 static reg_t<ro_t, 0X40003808, 11, 2> FTLVL 	;	 /*!< \brief FIFO transmission level */
			};
			 static reg_t<rw_t,0X40003808, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief data register
			*/
				 static reg_t<rw_t, 0X4000380C, 0, 16> DR 	;	 /*!< \brief Data register */

			/*!
			\brief CRC polynomial register
			*/
			struct CRCPR{
				 static reg_t<rw_t, 0X40003810, 0, 16> CRCPOLY 	;	 /*!< \brief CRC polynomial register */
			};

			/*!
			\brief RX CRC register
			*/
			struct RXCRCR{
				 static reg_t<ro_t, 0X40003814, 0, 16> RxCRC 	;	 /*!< \brief Rx CRC register */
			};

			/*!
			\brief TX CRC register
			*/
			struct TXCRCR{
				 static reg_t<ro_t, 0X40003818, 0, 16> TxCRC 	;	 /*!< \brief Tx CRC register */
			};

			/*!
			\brief I2S configuration register
			*/
			struct I2SCFGR{
				 static reg_t<rw_t, 0X4000381C, 11, 1> I2SMOD 	;	 /*!< \brief I2S mode selection */
				 static reg_t<rw_t, 0X4000381C, 10, 1> I2SE 	;	 /*!< \brief I2S Enable */
				 static reg_t<rw_t, 0X4000381C, 8, 2> I2SCFG 	;	 /*!< \brief I2S configuration mode */
				 static reg_t<rw_t, 0X4000381C, 7, 1> PCMSYNC 	;	 /*!< \brief PCM frame synchronization */
				 static reg_t<rw_t, 0X4000381C, 4, 2> I2SSTD 	;	 /*!< \brief I2S standard selection */
				 static reg_t<rw_t, 0X4000381C, 3, 1> CKPOL 	;	 /*!< \brief Steady state clock polarity */
				 static reg_t<rw_t, 0X4000381C, 1, 2> DATLEN 	;	 /*!< \brief Data length to be transferred */
				 static reg_t<rw_t, 0X4000381C, 0, 1> CHLEN 	;	 /*!< \brief Channel length (number of bits per audio channel) */
			};
			 static reg_t<rw_t,0X4000381C, 0, 32> I2SCFGR_D;	 /*!< \brief I2SCFGR register direct access */

			/*!
			\brief I2S prescaler register
			*/
			struct I2SPR{
				 static reg_t<rw_t, 0X40003820, 9, 1> MCKOE 	;	 /*!< \brief Master clock output enable */
				 static reg_t<rw_t, 0X40003820, 8, 1> ODD 	;	 /*!< \brief Odd factor for the prescaler */
				 static reg_t<rw_t, 0X40003820, 0, 8> I2SDIV 	;	 /*!< \brief I2S Linear prescaler */
			};
			 static reg_t<rw_t,0X40003820, 0, 32> I2SPR_D;	 /*!< \brief I2SPR register direct access */
		};

		/*!
		\brief Power control
		*/
		struct PWR{

			/*!
			\brief power control register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40007000, 9, 1> FPDS 	;	 /*!< \brief Flash power down in Stop mode */
				 static reg_t<rw_t, 0X40007000, 8, 1> DBP 	;	 /*!< \brief Disable backup domain write protection */
				 static reg_t<rw_t, 0X40007000, 5, 3> PLS 	;	 /*!< \brief PVD level selection */
				 static reg_t<rw_t, 0X40007000, 4, 1> PVDE 	;	 /*!< \brief Power voltage detector enable */
				 static reg_t<rw_t, 0X40007000, 3, 1> CSBF 	;	 /*!< \brief Clear standby flag */
				 static reg_t<rw_t, 0X40007000, 2, 1> CWUF 	;	 /*!< \brief Clear wakeup flag */
				 static reg_t<rw_t, 0X40007000, 1, 1> PDDS 	;	 /*!< \brief Power down deepsleep */
				 static reg_t<rw_t, 0X40007000, 0, 1> LPDS 	;	 /*!< \brief Low-power deep sleep */
			};
			 static reg_t<rw_t,0X40007000, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief power control/status register
			*/
			struct CSR{
				 static reg_t<rw_t, 0X40007004, 9, 1> BRE 	;	 /*!< \brief Backup regulator enable */
				 static reg_t<rw_t, 0X40007004, 8, 1> EWUP 	;	 /*!< \brief Enable WKUP pin */
				 static reg_t<ro_t, 0X40007004, 3, 1> BRR 	;	 /*!< \brief Backup regulator ready */
				 static reg_t<ro_t, 0X40007004, 2, 1> PVDO 	;	 /*!< \brief PVD output */
				 static reg_t<ro_t, 0X40007004, 1, 1> SBF 	;	 /*!< \brief Standby flag */
				 static reg_t<ro_t, 0X40007004, 0, 1> WUF 	;	 /*!< \brief Wakeup flag */
			};
			 static reg_t<rw_t,0X40007004, 0, 32> CSR_D;	 /*!< \brief CSR register direct access */
		};

		/*!
		\brief Inter-integrated circuit
		*/
		struct I2C1{

			/*!
			\brief Control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40005400, 0, 1> PE 	;	 /*!< \brief Peripheral enable */
				 static reg_t<rw_t, 0X40005400, 1, 1> TXIE 	;	 /*!< \brief TX Interrupt enable */
				 static reg_t<rw_t, 0X40005400, 2, 1> RXIE 	;	 /*!< \brief RX Interrupt enable */
				 static reg_t<rw_t, 0X40005400, 3, 1> ADDRIE 	;	 /*!< \brief Address match interrupt enable (slave only) */
				 static reg_t<rw_t, 0X40005400, 4, 1> NACKIE 	;	 /*!< \brief Not acknowledge received interrupt enable */
				 static reg_t<rw_t, 0X40005400, 5, 1> STOPIE 	;	 /*!< \brief STOP detection Interrupt enable */
				 static reg_t<rw_t, 0X40005400, 6, 1> TCIE 	;	 /*!< \brief Transfer Complete interrupt enable */
				 static reg_t<rw_t, 0X40005400, 7, 1> ERRIE 	;	 /*!< \brief Error interrupts enable */
				 static reg_t<rw_t, 0X40005400, 8, 4> DNF 	;	 /*!< \brief Digital noise filter */
				 static reg_t<rw_t, 0X40005400, 12, 1> ANFOFF 	;	 /*!< \brief Analog noise filter OFF */
				 static reg_t<wo_t, 0X40005400, 13, 1> SWRST 	;	 /*!< \brief Software reset */
				 static reg_t<rw_t, 0X40005400, 14, 1> TXDMAEN 	;	 /*!< \brief DMA transmission requests enable */
				 static reg_t<rw_t, 0X40005400, 15, 1> RXDMAEN 	;	 /*!< \brief DMA reception requests enable */
				 static reg_t<rw_t, 0X40005400, 16, 1> SBC 	;	 /*!< \brief Slave byte control */
				 static reg_t<rw_t, 0X40005400, 17, 1> NOSTRETCH 	;	 /*!< \brief Clock stretching disable */
				 static reg_t<rw_t, 0X40005400, 18, 1> WUPEN 	;	 /*!< \brief Wakeup from STOP enable */
				 static reg_t<rw_t, 0X40005400, 19, 1> GCEN 	;	 /*!< \brief General call enable */
				 static reg_t<rw_t, 0X40005400, 20, 1> SMBHEN 	;	 /*!< \brief SMBus Host address enable */
				 static reg_t<rw_t, 0X40005400, 21, 1> SMBDEN 	;	 /*!< \brief SMBus Device Default address enable */
				 static reg_t<rw_t, 0X40005400, 22, 1> ALERTEN 	;	 /*!< \brief SMBUS alert enable */
				 static reg_t<rw_t, 0X40005400, 23, 1> PECEN 	;	 /*!< \brief PEC enable */
			};
			 static reg_t<rw_t,0X40005400, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief Control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40005404, 26, 1> PECBYTE 	;	 /*!< \brief Packet error checking byte */
				 static reg_t<rw_t, 0X40005404, 25, 1> AUTOEND 	;	 /*!< \brief Automatic end mode (master mode) */
				 static reg_t<rw_t, 0X40005404, 24, 1> RELOAD 	;	 /*!< \brief NBYTES reload mode */
				 static reg_t<rw_t, 0X40005404, 16, 8> NBYTES 	;	 /*!< \brief Number of bytes */
				 static reg_t<rw_t, 0X40005404, 15, 1> NACK 	;	 /*!< \brief NACK generation (slave mode) */
				 static reg_t<rw_t, 0X40005404, 14, 1> STOP 	;	 /*!< \brief Stop generation (master mode) */
				 static reg_t<rw_t, 0X40005404, 13, 1> START 	;	 /*!< \brief Start generation */
				 static reg_t<rw_t, 0X40005404, 12, 1> HEAD10R 	;	 /*!< \brief 10-bit address header only read direction (master receiver mode) */
				 static reg_t<rw_t, 0X40005404, 11, 1> ADD10 	;	 /*!< \brief 10-bit addressing mode (master mode) */
				 static reg_t<rw_t, 0X40005404, 10, 1> RD_WRN 	;	 /*!< \brief Transfer direction (master mode) */
				 static reg_t<rw_t, 0X40005404, 8, 2> SADD8 	;	 /*!< \brief Slave address bit 9:8 (master mode) */
				 static reg_t<rw_t, 0X40005404, 1, 7> SADD1 	;	 /*!< \brief Slave address bit 7:1 (master mode) */
				 static reg_t<rw_t, 0X40005404, 0, 1> SADD0 	;	 /*!< \brief Slave address bit 0 (master mode) */
			};
			 static reg_t<rw_t,0X40005404, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief Own address register 1
			*/
			struct OAR1{
				 static reg_t<rw_t, 0X40005408, 0, 1> OA1_0 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X40005408, 1, 7> OA1_1 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X40005408, 8, 2> OA1_8 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X40005408, 10, 1> OA1MODE 	;	 /*!< \brief Own Address 1 10-bit mode */
				 static reg_t<rw_t, 0X40005408, 15, 1> OA1EN 	;	 /*!< \brief Own Address 1 enable */
			};
			 static reg_t<rw_t,0X40005408, 0, 32> OAR1_D;	 /*!< \brief OAR1 register direct access */

			/*!
			\brief Own address register 2
			*/
			struct OAR2{
				 static reg_t<rw_t, 0X4000540C, 1, 7> OA2 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X4000540C, 8, 3> OA2MSK 	;	 /*!< \brief Own Address 2 masks */
				 static reg_t<rw_t, 0X4000540C, 15, 1> OA2EN 	;	 /*!< \brief Own Address 2 enable */
			};
			 static reg_t<rw_t,0X4000540C, 0, 32> OAR2_D;	 /*!< \brief OAR2 register direct access */

			/*!
			\brief Timing register
			*/
			struct TIMINGR{
				 static reg_t<rw_t, 0X40005410, 0, 8> SCLL 	;	 /*!< \brief SCL low period (master mode) */
				 static reg_t<rw_t, 0X40005410, 8, 8> SCLH 	;	 /*!< \brief SCL high period (master mode) */
				 static reg_t<rw_t, 0X40005410, 16, 4> SDADEL 	;	 /*!< \brief Data hold time */
				 static reg_t<rw_t, 0X40005410, 20, 4> SCLDEL 	;	 /*!< \brief Data setup time */
				 static reg_t<rw_t, 0X40005410, 28, 4> PRESC 	;	 /*!< \brief Timing prescaler */
			};
			 static reg_t<rw_t,0X40005410, 0, 32> TIMINGR_D;	 /*!< \brief TIMINGR register direct access */

			/*!
			\brief Status register 1
			*/
			struct TIMEOUTR{
				 static reg_t<rw_t, 0X40005414, 0, 12> TIMEOUTA 	;	 /*!< \brief Bus timeout A */
				 static reg_t<rw_t, 0X40005414, 12, 1> TIDLE 	;	 /*!< \brief Idle clock timeout detection */
				 static reg_t<rw_t, 0X40005414, 15, 1> TIMOUTEN 	;	 /*!< \brief Clock timeout enable */
				 static reg_t<rw_t, 0X40005414, 16, 12> TIMEOUTB 	;	 /*!< \brief Bus timeout B */
				 static reg_t<rw_t, 0X40005414, 31, 1> TEXTEN 	;	 /*!< \brief Extended clock timeout enable */
			};
			 static reg_t<rw_t,0X40005414, 0, 32> TIMEOUTR_D;	 /*!< \brief TIMEOUTR register direct access */

			/*!
			\brief Interrupt and Status register
			*/
			struct ISR{
				 static reg_t<ro_t, 0X40005418, 17, 7> ADDCODE 	;	 /*!< \brief Address match code (Slave mode) */
				 static reg_t<ro_t, 0X40005418, 16, 1> DIR 	;	 /*!< \brief Transfer direction (Slave mode) */
				 static reg_t<ro_t, 0X40005418, 15, 1> BUSY 	;	 /*!< \brief Bus busy */
				 static reg_t<ro_t, 0X40005418, 13, 1> ALERT 	;	 /*!< \brief SMBus alert */
				 static reg_t<ro_t, 0X40005418, 12, 1> TIMEOUT 	;	 /*!< \brief Timeout or t_low detection flag */
				 static reg_t<ro_t, 0X40005418, 11, 1> PECERR 	;	 /*!< \brief PEC Error in reception */
				 static reg_t<ro_t, 0X40005418, 10, 1> OVR 	;	 /*!< \brief Overrun/Underrun (slave mode) */
				 static reg_t<ro_t, 0X40005418, 9, 1> ARLO 	;	 /*!< \brief Arbitration lost */
				 static reg_t<ro_t, 0X40005418, 8, 1> BERR 	;	 /*!< \brief Bus error */
				 static reg_t<ro_t, 0X40005418, 7, 1> TCR 	;	 /*!< \brief Transfer Complete Reload */
				 static reg_t<ro_t, 0X40005418, 6, 1> TC 	;	 /*!< \brief Transfer Complete (master mode) */
				 static reg_t<ro_t, 0X40005418, 5, 1> STOPF 	;	 /*!< \brief Stop detection flag */
				 static reg_t<ro_t, 0X40005418, 4, 1> NACKF 	;	 /*!< \brief Not acknowledge received flag */
				 static reg_t<ro_t, 0X40005418, 3, 1> ADDR 	;	 /*!< \brief Address matched (slave mode) */
				 static reg_t<ro_t, 0X40005418, 2, 1> RXNE 	;	 /*!< \brief Receive data register not empty (receivers) */
				 static reg_t<rw_t, 0X40005418, 1, 1> TXIS 	;	 /*!< \brief Transmit interrupt status (transmitters) */
				 static reg_t<rw_t, 0X40005418, 0, 1> TXE 	;	 /*!< \brief Transmit data register empty (transmitters) */
			};
			 static reg_t<rw_t,0X40005418, 0, 32> ISR_D;	 /*!< \brief ISR register direct access */

			/*!
			\brief Interrupt clear register
			*/
			struct ICR{
				 static reg_t<wo_t, 0X4000541C, 13, 1> ALERTCF 	;	 /*!< \brief Alert flag clear */
				 static reg_t<wo_t, 0X4000541C, 12, 1> TIMOUTCF 	;	 /*!< \brief Timeout detection flag clear */
				 static reg_t<wo_t, 0X4000541C, 11, 1> PECCF 	;	 /*!< \brief PEC Error flag clear */
				 static reg_t<wo_t, 0X4000541C, 10, 1> OVRCF 	;	 /*!< \brief Overrun/Underrun flag clear */
				 static reg_t<wo_t, 0X4000541C, 9, 1> ARLOCF 	;	 /*!< \brief Arbitration lost flag clear */
				 static reg_t<wo_t, 0X4000541C, 8, 1> BERRCF 	;	 /*!< \brief Bus error flag clear */
				 static reg_t<wo_t, 0X4000541C, 5, 1> STOPCF 	;	 /*!< \brief Stop detection flag clear */
				 static reg_t<wo_t, 0X4000541C, 4, 1> NACKCF 	;	 /*!< \brief Not Acknowledge flag clear */
				 static reg_t<wo_t, 0X4000541C, 3, 1> ADDRCF 	;	 /*!< \brief Address Matched flag clear */
			};
			 static reg_t<rw_t,0X4000541C, 0, 32> ICR_D;	 /*!< \brief ICR register direct access */

			/*!
			\brief PEC register
			*/
			struct PECR{
				 static reg_t<ro_t, 0X40005420, 0, 8> PEC 	;	 /*!< \brief Packet error checking register */
			};

			/*!
			\brief Receive data register
			*/
			struct RXDR{
				 static reg_t<ro_t, 0X40005424, 0, 8> RXDATA 	;	 /*!< \brief 8-bit receive data */
			};

			/*!
			\brief Transmit data register
			*/
			struct TXDR{
				 static reg_t<rw_t, 0X40005428, 0, 8> TXDATA 	;	 /*!< \brief 8-bit transmit data */
			};
		};

		/*!
		\brief Inter-integrated circuit
	BasedOn:I2C1
		*/
		struct I2C2{

			/*!
			\brief Control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40005800, 0, 1> PE 	;	 /*!< \brief Peripheral enable */
				 static reg_t<rw_t, 0X40005800, 1, 1> TXIE 	;	 /*!< \brief TX Interrupt enable */
				 static reg_t<rw_t, 0X40005800, 2, 1> RXIE 	;	 /*!< \brief RX Interrupt enable */
				 static reg_t<rw_t, 0X40005800, 3, 1> ADDRIE 	;	 /*!< \brief Address match interrupt enable (slave only) */
				 static reg_t<rw_t, 0X40005800, 4, 1> NACKIE 	;	 /*!< \brief Not acknowledge received interrupt enable */
				 static reg_t<rw_t, 0X40005800, 5, 1> STOPIE 	;	 /*!< \brief STOP detection Interrupt enable */
				 static reg_t<rw_t, 0X40005800, 6, 1> TCIE 	;	 /*!< \brief Transfer Complete interrupt enable */
				 static reg_t<rw_t, 0X40005800, 7, 1> ERRIE 	;	 /*!< \brief Error interrupts enable */
				 static reg_t<rw_t, 0X40005800, 8, 4> DNF 	;	 /*!< \brief Digital noise filter */
				 static reg_t<rw_t, 0X40005800, 12, 1> ANFOFF 	;	 /*!< \brief Analog noise filter OFF */
				 static reg_t<wo_t, 0X40005800, 13, 1> SWRST 	;	 /*!< \brief Software reset */
				 static reg_t<rw_t, 0X40005800, 14, 1> TXDMAEN 	;	 /*!< \brief DMA transmission requests enable */
				 static reg_t<rw_t, 0X40005800, 15, 1> RXDMAEN 	;	 /*!< \brief DMA reception requests enable */
				 static reg_t<rw_t, 0X40005800, 16, 1> SBC 	;	 /*!< \brief Slave byte control */
				 static reg_t<rw_t, 0X40005800, 17, 1> NOSTRETCH 	;	 /*!< \brief Clock stretching disable */
				 static reg_t<rw_t, 0X40005800, 18, 1> WUPEN 	;	 /*!< \brief Wakeup from STOP enable */
				 static reg_t<rw_t, 0X40005800, 19, 1> GCEN 	;	 /*!< \brief General call enable */
				 static reg_t<rw_t, 0X40005800, 20, 1> SMBHEN 	;	 /*!< \brief SMBus Host address enable */
				 static reg_t<rw_t, 0X40005800, 21, 1> SMBDEN 	;	 /*!< \brief SMBus Device Default address enable */
				 static reg_t<rw_t, 0X40005800, 22, 1> ALERTEN 	;	 /*!< \brief SMBUS alert enable */
				 static reg_t<rw_t, 0X40005800, 23, 1> PECEN 	;	 /*!< \brief PEC enable */
			};
			 static reg_t<rw_t,0X40005800, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief Control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40005804, 26, 1> PECBYTE 	;	 /*!< \brief Packet error checking byte */
				 static reg_t<rw_t, 0X40005804, 25, 1> AUTOEND 	;	 /*!< \brief Automatic end mode (master mode) */
				 static reg_t<rw_t, 0X40005804, 24, 1> RELOAD 	;	 /*!< \brief NBYTES reload mode */
				 static reg_t<rw_t, 0X40005804, 16, 8> NBYTES 	;	 /*!< \brief Number of bytes */
				 static reg_t<rw_t, 0X40005804, 15, 1> NACK 	;	 /*!< \brief NACK generation (slave mode) */
				 static reg_t<rw_t, 0X40005804, 14, 1> STOP 	;	 /*!< \brief Stop generation (master mode) */
				 static reg_t<rw_t, 0X40005804, 13, 1> START 	;	 /*!< \brief Start generation */
				 static reg_t<rw_t, 0X40005804, 12, 1> HEAD10R 	;	 /*!< \brief 10-bit address header only read direction (master receiver mode) */
				 static reg_t<rw_t, 0X40005804, 11, 1> ADD10 	;	 /*!< \brief 10-bit addressing mode (master mode) */
				 static reg_t<rw_t, 0X40005804, 10, 1> RD_WRN 	;	 /*!< \brief Transfer direction (master mode) */
				 static reg_t<rw_t, 0X40005804, 8, 2> SADD8 	;	 /*!< \brief Slave address bit 9:8 (master mode) */
				 static reg_t<rw_t, 0X40005804, 1, 7> SADD1 	;	 /*!< \brief Slave address bit 7:1 (master mode) */
				 static reg_t<rw_t, 0X40005804, 0, 1> SADD0 	;	 /*!< \brief Slave address bit 0 (master mode) */
			};
			 static reg_t<rw_t,0X40005804, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief Own address register 1
			*/
			struct OAR1{
				 static reg_t<rw_t, 0X40005808, 0, 1> OA1_0 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X40005808, 1, 7> OA1_1 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X40005808, 8, 2> OA1_8 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X40005808, 10, 1> OA1MODE 	;	 /*!< \brief Own Address 1 10-bit mode */
				 static reg_t<rw_t, 0X40005808, 15, 1> OA1EN 	;	 /*!< \brief Own Address 1 enable */
			};
			 static reg_t<rw_t,0X40005808, 0, 32> OAR1_D;	 /*!< \brief OAR1 register direct access */

			/*!
			\brief Own address register 2
			*/
			struct OAR2{
				 static reg_t<rw_t, 0X4000580C, 1, 7> OA2 	;	 /*!< \brief Interface address */
				 static reg_t<rw_t, 0X4000580C, 8, 3> OA2MSK 	;	 /*!< \brief Own Address 2 masks */
				 static reg_t<rw_t, 0X4000580C, 15, 1> OA2EN 	;	 /*!< \brief Own Address 2 enable */
			};
			 static reg_t<rw_t,0X4000580C, 0, 32> OAR2_D;	 /*!< \brief OAR2 register direct access */

			/*!
			\brief Timing register
			*/
			struct TIMINGR{
				 static reg_t<rw_t, 0X40005810, 0, 8> SCLL 	;	 /*!< \brief SCL low period (master mode) */
				 static reg_t<rw_t, 0X40005810, 8, 8> SCLH 	;	 /*!< \brief SCL high period (master mode) */
				 static reg_t<rw_t, 0X40005810, 16, 4> SDADEL 	;	 /*!< \brief Data hold time */
				 static reg_t<rw_t, 0X40005810, 20, 4> SCLDEL 	;	 /*!< \brief Data setup time */
				 static reg_t<rw_t, 0X40005810, 28, 4> PRESC 	;	 /*!< \brief Timing prescaler */
			};
			 static reg_t<rw_t,0X40005810, 0, 32> TIMINGR_D;	 /*!< \brief TIMINGR register direct access */

			/*!
			\brief Status register 1
			*/
			struct TIMEOUTR{
				 static reg_t<rw_t, 0X40005814, 0, 12> TIMEOUTA 	;	 /*!< \brief Bus timeout A */
				 static reg_t<rw_t, 0X40005814, 12, 1> TIDLE 	;	 /*!< \brief Idle clock timeout detection */
				 static reg_t<rw_t, 0X40005814, 15, 1> TIMOUTEN 	;	 /*!< \brief Clock timeout enable */
				 static reg_t<rw_t, 0X40005814, 16, 12> TIMEOUTB 	;	 /*!< \brief Bus timeout B */
				 static reg_t<rw_t, 0X40005814, 31, 1> TEXTEN 	;	 /*!< \brief Extended clock timeout enable */
			};
			 static reg_t<rw_t,0X40005814, 0, 32> TIMEOUTR_D;	 /*!< \brief TIMEOUTR register direct access */

			/*!
			\brief Interrupt and Status register
			*/
			struct ISR{
				 static reg_t<ro_t, 0X40005818, 17, 7> ADDCODE 	;	 /*!< \brief Address match code (Slave mode) */
				 static reg_t<ro_t, 0X40005818, 16, 1> DIR 	;	 /*!< \brief Transfer direction (Slave mode) */
				 static reg_t<ro_t, 0X40005818, 15, 1> BUSY 	;	 /*!< \brief Bus busy */
				 static reg_t<ro_t, 0X40005818, 13, 1> ALERT 	;	 /*!< \brief SMBus alert */
				 static reg_t<ro_t, 0X40005818, 12, 1> TIMEOUT 	;	 /*!< \brief Timeout or t_low detection flag */
				 static reg_t<ro_t, 0X40005818, 11, 1> PECERR 	;	 /*!< \brief PEC Error in reception */
				 static reg_t<ro_t, 0X40005818, 10, 1> OVR 	;	 /*!< \brief Overrun/Underrun (slave mode) */
				 static reg_t<ro_t, 0X40005818, 9, 1> ARLO 	;	 /*!< \brief Arbitration lost */
				 static reg_t<ro_t, 0X40005818, 8, 1> BERR 	;	 /*!< \brief Bus error */
				 static reg_t<ro_t, 0X40005818, 7, 1> TCR 	;	 /*!< \brief Transfer Complete Reload */
				 static reg_t<ro_t, 0X40005818, 6, 1> TC 	;	 /*!< \brief Transfer Complete (master mode) */
				 static reg_t<ro_t, 0X40005818, 5, 1> STOPF 	;	 /*!< \brief Stop detection flag */
				 static reg_t<ro_t, 0X40005818, 4, 1> NACKF 	;	 /*!< \brief Not acknowledge received flag */
				 static reg_t<ro_t, 0X40005818, 3, 1> ADDR 	;	 /*!< \brief Address matched (slave mode) */
				 static reg_t<ro_t, 0X40005818, 2, 1> RXNE 	;	 /*!< \brief Receive data register not empty (receivers) */
				 static reg_t<rw_t, 0X40005818, 1, 1> TXIS 	;	 /*!< \brief Transmit interrupt status (transmitters) */
				 static reg_t<rw_t, 0X40005818, 0, 1> TXE 	;	 /*!< \brief Transmit data register empty (transmitters) */
			};
			 static reg_t<rw_t,0X40005818, 0, 32> ISR_D;	 /*!< \brief ISR register direct access */

			/*!
			\brief Interrupt clear register
			*/
			struct ICR{
				 static reg_t<wo_t, 0X4000581C, 13, 1> ALERTCF 	;	 /*!< \brief Alert flag clear */
				 static reg_t<wo_t, 0X4000581C, 12, 1> TIMOUTCF 	;	 /*!< \brief Timeout detection flag clear */
				 static reg_t<wo_t, 0X4000581C, 11, 1> PECCF 	;	 /*!< \brief PEC Error flag clear */
				 static reg_t<wo_t, 0X4000581C, 10, 1> OVRCF 	;	 /*!< \brief Overrun/Underrun flag clear */
				 static reg_t<wo_t, 0X4000581C, 9, 1> ARLOCF 	;	 /*!< \brief Arbitration lost flag clear */
				 static reg_t<wo_t, 0X4000581C, 8, 1> BERRCF 	;	 /*!< \brief Bus error flag clear */
				 static reg_t<wo_t, 0X4000581C, 5, 1> STOPCF 	;	 /*!< \brief Stop detection flag clear */
				 static reg_t<wo_t, 0X4000581C, 4, 1> NACKCF 	;	 /*!< \brief Not Acknowledge flag clear */
				 static reg_t<wo_t, 0X4000581C, 3, 1> ADDRCF 	;	 /*!< \brief Address Matched flag clear */
			};
			 static reg_t<rw_t,0X4000581C, 0, 32> ICR_D;	 /*!< \brief ICR register direct access */

			/*!
			\brief PEC register
			*/
			struct PECR{
				 static reg_t<ro_t, 0X40005820, 0, 8> PEC 	;	 /*!< \brief Packet error checking register */
			};

			/*!
			\brief Receive data register
			*/
			struct RXDR{
				 static reg_t<ro_t, 0X40005824, 0, 8> RXDATA 	;	 /*!< \brief 8-bit receive data */
			};

			/*!
			\brief Transmit data register
			*/
			struct TXDR{
				 static reg_t<rw_t, 0X40005828, 0, 8> TXDATA 	;	 /*!< \brief 8-bit transmit data */
			};
		};

		/*!
		\brief Independent watchdog
		*/
		struct IWDG{

			/*!
			\brief Key register
			*/
			struct KR{
				 static reg_t<wo_t, 0X40003000, 0, 16> KEY 	;	 /*!< \brief Key value */
			};

			/*!
			\brief Prescaler register
			*/
				 static reg_t<rw_t, 0X40003004, 0, 3> PR 	;	 /*!< \brief Prescaler divider */

			/*!
			\brief Reload register
			*/
			struct RLR{
				 static reg_t<rw_t, 0X40003008, 0, 12> RL 	;	 /*!< \brief Watchdog counter reload value */
			};

			/*!
			\brief Status register
			*/
			struct SR{
				 static reg_t<ro_t, 0X4000300C, 0, 1> PVU 	;	 /*!< \brief Watchdog prescaler value update */
				 static reg_t<ro_t, 0X4000300C, 1, 1> RVU 	;	 /*!< \brief Watchdog counter reload value update */
				 static reg_t<ro_t, 0X4000300C, 2, 1> WVU 	;	 /*!< \brief Watchdog counter window value update */
			};
			 static reg_t<rw_t,0X4000300C, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief Window register
			*/
			struct WINR{
				 static reg_t<rw_t, 0X40003010, 0, 12> WIN 	;	 /*!< \brief Watchdog counter window value */
			};
		};

		/*!
		\brief Window watchdog
		*/
		struct WWDG{

			/*!
			\brief Control register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40002C00, 7, 1> WDGA 	;	 /*!< \brief Activation bit */
				 static reg_t<rw_t, 0X40002C00, 0, 7> T 	;	 /*!< \brief 7-bit counter */
			};
			 static reg_t<rw_t,0X40002C00, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief Configuration register
			*/
			struct CFR{
				 static reg_t<rw_t, 0X40002C04, 9, 1> EWI 	;	 /*!< \brief Early wakeup interrupt */
				 static reg_t<rw_t, 0X40002C04, 7, 2> WDGTB 	;	 /*!< \brief Timer base */
				 static reg_t<rw_t, 0X40002C04, 0, 7> W 	;	 /*!< \brief 7-bit window value */
			};
			 static reg_t<rw_t,0X40002C04, 0, 32> CFR_D;	 /*!< \brief CFR register direct access */

			/*!
			\brief Status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40002C08, 0, 1> EWIF 	;	 /*!< \brief Early wakeup interrupt flag */
			};
		};

		/*!
		\brief Advanced-timers
		*/
		struct TIM1{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40012C00, 8, 2> CKD 	;	 /*!< \brief Clock division */
				 static reg_t<rw_t, 0X40012C00, 7, 1> ARPE 	;	 /*!< \brief Auto-reload preload enable */
				 static reg_t<rw_t, 0X40012C00, 5, 2> CMS 	;	 /*!< \brief Center-aligned mode selection */
				 static reg_t<rw_t, 0X40012C00, 4, 1> DIR 	;	 /*!< \brief Direction */
				 static reg_t<rw_t, 0X40012C00, 3, 1> OPM 	;	 /*!< \brief One-pulse mode */
				 static reg_t<rw_t, 0X40012C00, 2, 1> URS 	;	 /*!< \brief Update request source */
				 static reg_t<rw_t, 0X40012C00, 1, 1> UDIS 	;	 /*!< \brief Update disable */
				 static reg_t<rw_t, 0X40012C00, 0, 1> CEN 	;	 /*!< \brief Counter enable */
			};
			 static reg_t<rw_t,0X40012C00, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40012C04, 14, 1> OIS4 	;	 /*!< \brief Output Idle state 4 */
				 static reg_t<rw_t, 0X40012C04, 13, 1> OIS3N 	;	 /*!< \brief Output Idle state 3 */
				 static reg_t<rw_t, 0X40012C04, 12, 1> OIS3 	;	 /*!< \brief Output Idle state 3 */
				 static reg_t<rw_t, 0X40012C04, 11, 1> OIS2N 	;	 /*!< \brief Output Idle state 2 */
				 static reg_t<rw_t, 0X40012C04, 10, 1> OIS2 	;	 /*!< \brief Output Idle state 2 */
				 static reg_t<rw_t, 0X40012C04, 9, 1> OIS1N 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40012C04, 8, 1> OIS1 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40012C04, 7, 1> TI1S 	;	 /*!< \brief TI1 selection */
				 static reg_t<rw_t, 0X40012C04, 4, 3> MMS 	;	 /*!< \brief Master mode selection */
				 static reg_t<rw_t, 0X40012C04, 3, 1> CCDS 	;	 /*!< \brief Capture/compare DMA selection */
				 static reg_t<rw_t, 0X40012C04, 2, 1> CCUS 	;	 /*!< \brief Capture/compare control update selection */
				 static reg_t<rw_t, 0X40012C04, 0, 1> CCPC 	;	 /*!< \brief Capture/compare preloaded control */
			};
			 static reg_t<rw_t,0X40012C04, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief slave mode control register
			*/
			struct SMCR{
				 static reg_t<rw_t, 0X40012C08, 15, 1> ETP 	;	 /*!< \brief External trigger polarity */
				 static reg_t<rw_t, 0X40012C08, 14, 1> ECE 	;	 /*!< \brief External clock enable */
				 static reg_t<rw_t, 0X40012C08, 12, 2> ETPS 	;	 /*!< \brief External trigger prescaler */
				 static reg_t<rw_t, 0X40012C08, 8, 4> ETF 	;	 /*!< \brief External trigger filter */
				 static reg_t<rw_t, 0X40012C08, 7, 1> MSM 	;	 /*!< \brief Master/Slave mode */
				 static reg_t<rw_t, 0X40012C08, 4, 3> TS 	;	 /*!< \brief Trigger selection */
				 static reg_t<rw_t, 0X40012C08, 0, 3> SMS 	;	 /*!< \brief Slave mode selection */
			};
			 static reg_t<rw_t,0X40012C08, 0, 32> SMCR_D;	 /*!< \brief SMCR register direct access */

			/*!
			\brief DMA/Interrupt enable register
			*/
			struct DIER{
				 static reg_t<rw_t, 0X40012C0C, 14, 1> TDE 	;	 /*!< \brief Trigger DMA request enable */
				 static reg_t<rw_t, 0X40012C0C, 13, 1> COMDE 	;	 /*!< \brief Reserved */
				 static reg_t<rw_t, 0X40012C0C, 12, 1> CC4DE 	;	 /*!< \brief Capture/Compare 4 DMA request enable */
				 static reg_t<rw_t, 0X40012C0C, 11, 1> CC3DE 	;	 /*!< \brief Capture/Compare 3 DMA request enable */
				 static reg_t<rw_t, 0X40012C0C, 10, 1> CC2DE 	;	 /*!< \brief Capture/Compare 2 DMA request enable */
				 static reg_t<rw_t, 0X40012C0C, 9, 1> CC1DE 	;	 /*!< \brief Capture/Compare 1 DMA request enable */
				 static reg_t<rw_t, 0X40012C0C, 8, 1> UDE 	;	 /*!< \brief Update DMA request enable */
				 static reg_t<rw_t, 0X40012C0C, 7, 1> BIE 	;	 /*!< \brief Break interrupt enable */
				 static reg_t<rw_t, 0X40012C0C, 6, 1> TIE 	;	 /*!< \brief Trigger interrupt enable */
				 static reg_t<rw_t, 0X40012C0C, 5, 1> COMIE 	;	 /*!< \brief COM interrupt enable */
				 static reg_t<rw_t, 0X40012C0C, 4, 1> CC4IE 	;	 /*!< \brief Capture/Compare 4 interrupt enable */
				 static reg_t<rw_t, 0X40012C0C, 3, 1> CC3IE 	;	 /*!< \brief Capture/Compare 3 interrupt enable */
				 static reg_t<rw_t, 0X40012C0C, 2, 1> CC2IE 	;	 /*!< \brief Capture/Compare 2 interrupt enable */
				 static reg_t<rw_t, 0X40012C0C, 1, 1> CC1IE 	;	 /*!< \brief Capture/Compare 1 interrupt enable */
				 static reg_t<rw_t, 0X40012C0C, 0, 1> UIE 	;	 /*!< \brief Update interrupt enable */
			};
			 static reg_t<rw_t,0X40012C0C, 0, 32> DIER_D;	 /*!< \brief DIER register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40012C10, 12, 1> CC4OF 	;	 /*!< \brief Capture/Compare 4 overcapture flag */
				 static reg_t<rw_t, 0X40012C10, 11, 1> CC3OF 	;	 /*!< \brief Capture/Compare 3 overcapture flag */
				 static reg_t<rw_t, 0X40012C10, 10, 1> CC2OF 	;	 /*!< \brief Capture/compare 2 overcapture flag */
				 static reg_t<rw_t, 0X40012C10, 9, 1> CC1OF 	;	 /*!< \brief Capture/Compare 1 overcapture flag */
				 static reg_t<rw_t, 0X40012C10, 7, 1> BIF 	;	 /*!< \brief Break interrupt flag */
				 static reg_t<rw_t, 0X40012C10, 6, 1> TIF 	;	 /*!< \brief Trigger interrupt flag */
				 static reg_t<rw_t, 0X40012C10, 5, 1> COMIF 	;	 /*!< \brief COM interrupt flag */
				 static reg_t<rw_t, 0X40012C10, 4, 1> CC4IF 	;	 /*!< \brief Capture/Compare 4 interrupt flag */
				 static reg_t<rw_t, 0X40012C10, 3, 1> CC3IF 	;	 /*!< \brief Capture/Compare 3 interrupt flag */
				 static reg_t<rw_t, 0X40012C10, 2, 1> CC2IF 	;	 /*!< \brief Capture/Compare 2 interrupt flag */
				 static reg_t<rw_t, 0X40012C10, 1, 1> CC1IF 	;	 /*!< \brief Capture/compare 1 interrupt flag */
				 static reg_t<rw_t, 0X40012C10, 0, 1> UIF 	;	 /*!< \brief Update interrupt flag */
			};
			 static reg_t<rw_t,0X40012C10, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief event generation register
			*/
			struct EGR{
				 static reg_t<wo_t, 0X40012C14, 7, 1> BG 	;	 /*!< \brief Break generation */
				 static reg_t<wo_t, 0X40012C14, 6, 1> TG 	;	 /*!< \brief Trigger generation */
				 static reg_t<wo_t, 0X40012C14, 5, 1> COMG 	;	 /*!< \brief Capture/Compare control update generation */
				 static reg_t<wo_t, 0X40012C14, 4, 1> CC4G 	;	 /*!< \brief Capture/compare 4 generation */
				 static reg_t<wo_t, 0X40012C14, 3, 1> CC3G 	;	 /*!< \brief Capture/compare 3 generation */
				 static reg_t<wo_t, 0X40012C14, 2, 1> CC2G 	;	 /*!< \brief Capture/compare 2 generation */
				 static reg_t<wo_t, 0X40012C14, 1, 1> CC1G 	;	 /*!< \brief Capture/compare 1 generation */
				 static reg_t<wo_t, 0X40012C14, 0, 1> UG 	;	 /*!< \brief Update generation */
			};
			 static reg_t<rw_t,0X40012C14, 0, 32> EGR_D;	 /*!< \brief EGR register direct access */

			/*!
			\brief capture/compare mode register (output mode)
			*/
			struct CCMR1_Output{
				 static reg_t<rw_t, 0X40012C18, 15, 1> OC2CE 	;	 /*!< \brief Output Compare 2 clear enable */
				 static reg_t<rw_t, 0X40012C18, 12, 3> OC2M 	;	 /*!< \brief Output Compare 2 mode */
				 static reg_t<rw_t, 0X40012C18, 11, 1> OC2PE 	;	 /*!< \brief Output Compare 2 preload enable */
				 static reg_t<rw_t, 0X40012C18, 10, 1> OC2FE 	;	 /*!< \brief Output Compare 2 fast enable */
				 static reg_t<rw_t, 0X40012C18, 8, 2> CC2S 	;	 /*!< \brief Capture/Compare 2 selection */
				 static reg_t<rw_t, 0X40012C18, 7, 1> OC1CE 	;	 /*!< \brief Output Compare 1 clear enable */
				 static reg_t<rw_t, 0X40012C18, 4, 3> OC1M 	;	 /*!< \brief Output Compare 1 mode */
				 static reg_t<rw_t, 0X40012C18, 3, 1> OC1PE 	;	 /*!< \brief Output Compare 1 preload enable */
				 static reg_t<rw_t, 0X40012C18, 2, 1> OC1FE 	;	 /*!< \brief Output Compare 1 fast enable */
				 static reg_t<rw_t, 0X40012C18, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40012C18, 0, 32> CCMR1_Output_D;	 /*!< \brief CCMR1_Output register direct access */

			/*!
			\brief capture/compare mode register 1 (input mode)
			*/
			struct CCMR1_Input{
				 static reg_t<rw_t, 0X40012C18, 12, 4> IC2F 	;	 /*!< \brief Input capture 2 filter */
				 static reg_t<rw_t, 0X40012C18, 10, 2> IC2PCS 	;	 /*!< \brief Input capture 2 prescaler */
				 static reg_t<rw_t, 0X40012C18, 8, 2> CC2S 	;	 /*!< \brief Capture/Compare 2 selection */
				 static reg_t<rw_t, 0X40012C18, 4, 4> IC1F 	;	 /*!< \brief Input capture 1 filter */
				 static reg_t<rw_t, 0X40012C18, 2, 2> IC1PCS 	;	 /*!< \brief Input capture 1 prescaler */
				 static reg_t<rw_t, 0X40012C18, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40012C18, 0, 32> CCMR1_Input_D;	 /*!< \brief CCMR1_Input register direct access */

			/*!
			\brief capture/compare mode register (output mode)
			*/
			struct CCMR2_Output{
				 static reg_t<rw_t, 0X40012C1C, 15, 1> OC4CE 	;	 /*!< \brief Output compare 4 clear enable */
				 static reg_t<rw_t, 0X40012C1C, 12, 3> OC4M 	;	 /*!< \brief Output compare 4 mode */
				 static reg_t<rw_t, 0X40012C1C, 11, 1> OC4PE 	;	 /*!< \brief Output compare 4 preload enable */
				 static reg_t<rw_t, 0X40012C1C, 10, 1> OC4FE 	;	 /*!< \brief Output compare 4 fast enable */
				 static reg_t<rw_t, 0X40012C1C, 8, 2> CC4S 	;	 /*!< \brief Capture/Compare 4 selection */
				 static reg_t<rw_t, 0X40012C1C, 7, 1> OC3CE 	;	 /*!< \brief Output compare 3 clear enable */
				 static reg_t<rw_t, 0X40012C1C, 4, 3> OC3M 	;	 /*!< \brief Output compare 3 mode */
				 static reg_t<rw_t, 0X40012C1C, 3, 1> OC3PE 	;	 /*!< \brief Output compare 3 preload enable */
				 static reg_t<rw_t, 0X40012C1C, 2, 1> OC3FE 	;	 /*!< \brief Output compare 3 fast enable */
				 static reg_t<rw_t, 0X40012C1C, 0, 2> CC3S 	;	 /*!< \brief Capture/Compare 3 selection */
			};
			 static reg_t<rw_t,0X40012C1C, 0, 32> CCMR2_Output_D;	 /*!< \brief CCMR2_Output register direct access */

			/*!
			\brief capture/compare mode register 2 (input mode)
			*/
			struct CCMR2_Input{
				 static reg_t<rw_t, 0X40012C1C, 12, 4> IC4F 	;	 /*!< \brief Input capture 4 filter */
				 static reg_t<rw_t, 0X40012C1C, 10, 2> IC4PSC 	;	 /*!< \brief Input capture 4 prescaler */
				 static reg_t<rw_t, 0X40012C1C, 8, 2> CC4S 	;	 /*!< \brief Capture/Compare 4 selection */
				 static reg_t<rw_t, 0X40012C1C, 4, 4> IC3F 	;	 /*!< \brief Input capture 3 filter */
				 static reg_t<rw_t, 0X40012C1C, 2, 2> IC3PSC 	;	 /*!< \brief Input capture 3 prescaler */
				 static reg_t<rw_t, 0X40012C1C, 0, 2> CC3S 	;	 /*!< \brief Capture/compare 3 selection */
			};
			 static reg_t<rw_t,0X40012C1C, 0, 32> CCMR2_Input_D;	 /*!< \brief CCMR2_Input register direct access */

			/*!
			\brief capture/compare enable register
			*/
			struct CCER{
				 static reg_t<rw_t, 0X40012C20, 13, 1> CC4P 	;	 /*!< \brief Capture/Compare 3 output Polarity */
				 static reg_t<rw_t, 0X40012C20, 12, 1> CC4E 	;	 /*!< \brief Capture/Compare 4 output enable */
				 static reg_t<rw_t, 0X40012C20, 11, 1> CC3NP 	;	 /*!< \brief Capture/Compare 3 output Polarity */
				 static reg_t<rw_t, 0X40012C20, 10, 1> CC3NE 	;	 /*!< \brief Capture/Compare 3 complementary output enable */
				 static reg_t<rw_t, 0X40012C20, 9, 1> CC3P 	;	 /*!< \brief Capture/Compare 3 output Polarity */
				 static reg_t<rw_t, 0X40012C20, 8, 1> CC3E 	;	 /*!< \brief Capture/Compare 3 output enable */
				 static reg_t<rw_t, 0X40012C20, 7, 1> CC2NP 	;	 /*!< \brief Capture/Compare 2 output Polarity */
				 static reg_t<rw_t, 0X40012C20, 6, 1> CC2NE 	;	 /*!< \brief Capture/Compare 2 complementary output enable */
				 static reg_t<rw_t, 0X40012C20, 5, 1> CC2P 	;	 /*!< \brief Capture/Compare 2 output Polarity */
				 static reg_t<rw_t, 0X40012C20, 4, 1> CC2E 	;	 /*!< \brief Capture/Compare 2 output enable */
				 static reg_t<rw_t, 0X40012C20, 3, 1> CC1NP 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40012C20, 2, 1> CC1NE 	;	 /*!< \brief Capture/Compare 1 complementary output enable */
				 static reg_t<rw_t, 0X40012C20, 1, 1> CC1P 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40012C20, 0, 1> CC1E 	;	 /*!< \brief Capture/Compare 1 output enable */
			};
			 static reg_t<rw_t,0X40012C20, 0, 32> CCER_D;	 /*!< \brief CCER register direct access */

			/*!
			\brief counter
			*/
				 static reg_t<rw_t, 0X40012C24, 0, 16> CNT 	;	 /*!< \brief counter value */

			/*!
			\brief prescaler
			*/
				 static reg_t<rw_t, 0X40012C28, 0, 16> PSC 	;	 /*!< \brief Prescaler value */

			/*!
			\brief auto-reload register
			*/
				 static reg_t<rw_t, 0X40012C2C, 0, 16> ARR 	;	 /*!< \brief Auto-reload value */

			/*!
			\brief repetition counter register
			*/
			struct RCR{
				 static reg_t<rw_t, 0X40012C30, 0, 8> REP 	;	 /*!< \brief Repetition counter value */
			};

			/*!
			\brief capture/compare register 1
			*/
				 static reg_t<rw_t, 0X40012C34, 0, 16> CCR1 	;	 /*!< \brief Capture/Compare 1 value */

			/*!
			\brief capture/compare register 2
			*/
				 static reg_t<rw_t, 0X40012C38, 0, 16> CCR2 	;	 /*!< \brief Capture/Compare 2 value */

			/*!
			\brief capture/compare register 3
			*/
				 static reg_t<rw_t, 0X40012C3C, 0, 16> CCR3 	;	 /*!< \brief Capture/Compare 3 value */

			/*!
			\brief capture/compare register 4
			*/
				 static reg_t<rw_t, 0X40012C40, 0, 16> CCR4 	;	 /*!< \brief Capture/Compare 3 value */

			/*!
			\brief break and dead-time register
			*/
			struct BDTR{
				 static reg_t<rw_t, 0X40012C44, 15, 1> MOE 	;	 /*!< \brief Main output enable */
				 static reg_t<rw_t, 0X40012C44, 14, 1> AOE 	;	 /*!< \brief Automatic output enable */
				 static reg_t<rw_t, 0X40012C44, 13, 1> BKP 	;	 /*!< \brief Break polarity */
				 static reg_t<rw_t, 0X40012C44, 12, 1> BKE 	;	 /*!< \brief Break enable */
				 static reg_t<rw_t, 0X40012C44, 11, 1> OSSR 	;	 /*!< \brief Off-state selection for Run mode */
				 static reg_t<rw_t, 0X40012C44, 10, 1> OSSI 	;	 /*!< \brief Off-state selection for Idle mode */
				 static reg_t<rw_t, 0X40012C44, 8, 2> LOCK 	;	 /*!< \brief Lock configuration */
				 static reg_t<rw_t, 0X40012C44, 0, 8> DTG 	;	 /*!< \brief Dead-time generator setup */
			};
			 static reg_t<rw_t,0X40012C44, 0, 32> BDTR_D;	 /*!< \brief BDTR register direct access */

			/*!
			\brief DMA control register
			*/
			struct DCR{
				 static reg_t<rw_t, 0X40012C48, 8, 5> DBL 	;	 /*!< \brief DMA burst length */
				 static reg_t<rw_t, 0X40012C48, 0, 5> DBA 	;	 /*!< \brief DMA base address */
			};
			 static reg_t<rw_t,0X40012C48, 0, 32> DCR_D;	 /*!< \brief DCR register direct access */

			/*!
			\brief DMA address for full transfer
			*/
			struct DMAR{
				 static reg_t<rw_t, 0X40012C4C, 0, 16> DMAB 	;	 /*!< \brief DMA register for burst accesses */
			};
		};

		/*!
		\brief General-purpose-timers
		*/
		struct TIM3{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40000400, 8, 2> CKD 	;	 /*!< \brief Clock division */
				 static reg_t<rw_t, 0X40000400, 7, 1> ARPE 	;	 /*!< \brief Auto-reload preload enable */
				 static reg_t<rw_t, 0X40000400, 5, 2> CMS 	;	 /*!< \brief Center-aligned mode selection */
				 static reg_t<rw_t, 0X40000400, 4, 1> DIR 	;	 /*!< \brief Direction */
				 static reg_t<rw_t, 0X40000400, 3, 1> OPM 	;	 /*!< \brief One-pulse mode */
				 static reg_t<rw_t, 0X40000400, 2, 1> URS 	;	 /*!< \brief Update request source */
				 static reg_t<rw_t, 0X40000400, 1, 1> UDIS 	;	 /*!< \brief Update disable */
				 static reg_t<rw_t, 0X40000400, 0, 1> CEN 	;	 /*!< \brief Counter enable */
			};
			 static reg_t<rw_t,0X40000400, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40000404, 7, 1> TI1S 	;	 /*!< \brief TI1 selection */
				 static reg_t<rw_t, 0X40000404, 4, 3> MMS 	;	 /*!< \brief Master mode selection */
				 static reg_t<rw_t, 0X40000404, 3, 1> CCDS 	;	 /*!< \brief Capture/compare DMA selection */
			};
			 static reg_t<rw_t,0X40000404, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief slave mode control register
			*/
			struct SMCR{
				 static reg_t<rw_t, 0X40000408, 15, 1> ETP 	;	 /*!< \brief External trigger polarity */
				 static reg_t<rw_t, 0X40000408, 14, 1> ECE 	;	 /*!< \brief External clock enable */
				 static reg_t<rw_t, 0X40000408, 12, 2> ETPS 	;	 /*!< \brief External trigger prescaler */
				 static reg_t<rw_t, 0X40000408, 8, 4> ETF 	;	 /*!< \brief External trigger filter */
				 static reg_t<rw_t, 0X40000408, 7, 1> MSM 	;	 /*!< \brief Master/Slave mode */
				 static reg_t<rw_t, 0X40000408, 4, 3> TS 	;	 /*!< \brief Trigger selection */
				 static reg_t<rw_t, 0X40000408, 0, 3> SMS 	;	 /*!< \brief Slave mode selection */
			};
			 static reg_t<rw_t,0X40000408, 0, 32> SMCR_D;	 /*!< \brief SMCR register direct access */

			/*!
			\brief DMA/Interrupt enable register
			*/
			struct DIER{
				 static reg_t<rw_t, 0X4000040C, 14, 1> TDE 	;	 /*!< \brief Trigger DMA request enable */
				 static reg_t<rw_t, 0X4000040C, 13, 1> COMDE 	;	 /*!< \brief Reserved */
				 static reg_t<rw_t, 0X4000040C, 12, 1> CC4DE 	;	 /*!< \brief Capture/Compare 4 DMA request enable */
				 static reg_t<rw_t, 0X4000040C, 11, 1> CC3DE 	;	 /*!< \brief Capture/Compare 3 DMA request enable */
				 static reg_t<rw_t, 0X4000040C, 10, 1> CC2DE 	;	 /*!< \brief Capture/Compare 2 DMA request enable */
				 static reg_t<rw_t, 0X4000040C, 9, 1> CC1DE 	;	 /*!< \brief Capture/Compare 1 DMA request enable */
				 static reg_t<rw_t, 0X4000040C, 8, 1> UDE 	;	 /*!< \brief Update DMA request enable */
				 static reg_t<rw_t, 0X4000040C, 6, 1> TIE 	;	 /*!< \brief Trigger interrupt enable */
				 static reg_t<rw_t, 0X4000040C, 4, 1> CC4IE 	;	 /*!< \brief Capture/Compare 4 interrupt enable */
				 static reg_t<rw_t, 0X4000040C, 3, 1> CC3IE 	;	 /*!< \brief Capture/Compare 3 interrupt enable */
				 static reg_t<rw_t, 0X4000040C, 2, 1> CC2IE 	;	 /*!< \brief Capture/Compare 2 interrupt enable */
				 static reg_t<rw_t, 0X4000040C, 1, 1> CC1IE 	;	 /*!< \brief Capture/Compare 1 interrupt enable */
				 static reg_t<rw_t, 0X4000040C, 0, 1> UIE 	;	 /*!< \brief Update interrupt enable */
			};
			 static reg_t<rw_t,0X4000040C, 0, 32> DIER_D;	 /*!< \brief DIER register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40000410, 12, 1> CC4OF 	;	 /*!< \brief Capture/Compare 4 overcapture flag */
				 static reg_t<rw_t, 0X40000410, 11, 1> CC3OF 	;	 /*!< \brief Capture/Compare 3 overcapture flag */
				 static reg_t<rw_t, 0X40000410, 10, 1> CC2OF 	;	 /*!< \brief Capture/compare 2 overcapture flag */
				 static reg_t<rw_t, 0X40000410, 9, 1> CC1OF 	;	 /*!< \brief Capture/Compare 1 overcapture flag */
				 static reg_t<rw_t, 0X40000410, 6, 1> TIF 	;	 /*!< \brief Trigger interrupt flag */
				 static reg_t<rw_t, 0X40000410, 4, 1> CC4IF 	;	 /*!< \brief Capture/Compare 4 interrupt flag */
				 static reg_t<rw_t, 0X40000410, 3, 1> CC3IF 	;	 /*!< \brief Capture/Compare 3 interrupt flag */
				 static reg_t<rw_t, 0X40000410, 2, 1> CC2IF 	;	 /*!< \brief Capture/Compare 2 interrupt flag */
				 static reg_t<rw_t, 0X40000410, 1, 1> CC1IF 	;	 /*!< \brief Capture/compare 1 interrupt flag */
				 static reg_t<rw_t, 0X40000410, 0, 1> UIF 	;	 /*!< \brief Update interrupt flag */
			};
			 static reg_t<rw_t,0X40000410, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief event generation register
			*/
			struct EGR{
				 static reg_t<wo_t, 0X40000414, 6, 1> TG 	;	 /*!< \brief Trigger generation */
				 static reg_t<wo_t, 0X40000414, 4, 1> CC4G 	;	 /*!< \brief Capture/compare 4 generation */
				 static reg_t<wo_t, 0X40000414, 3, 1> CC3G 	;	 /*!< \brief Capture/compare 3 generation */
				 static reg_t<wo_t, 0X40000414, 2, 1> CC2G 	;	 /*!< \brief Capture/compare 2 generation */
				 static reg_t<wo_t, 0X40000414, 1, 1> CC1G 	;	 /*!< \brief Capture/compare 1 generation */
				 static reg_t<wo_t, 0X40000414, 0, 1> UG 	;	 /*!< \brief Update generation */
			};
			 static reg_t<rw_t,0X40000414, 0, 32> EGR_D;	 /*!< \brief EGR register direct access */

			/*!
			\brief capture/compare mode register 1 (output mode)
			*/
			struct CCMR1_Output{
				 static reg_t<rw_t, 0X40000418, 15, 1> OC2CE 	;	 /*!< \brief Output compare 2 clear enable */
				 static reg_t<rw_t, 0X40000418, 12, 3> OC2M 	;	 /*!< \brief Output compare 2 mode */
				 static reg_t<rw_t, 0X40000418, 11, 1> OC2PE 	;	 /*!< \brief Output compare 2 preload enable */
				 static reg_t<rw_t, 0X40000418, 10, 1> OC2FE 	;	 /*!< \brief Output compare 2 fast enable */
				 static reg_t<rw_t, 0X40000418, 8, 2> CC2S 	;	 /*!< \brief Capture/Compare 2 selection */
				 static reg_t<rw_t, 0X40000418, 7, 1> OC1CE 	;	 /*!< \brief Output compare 1 clear enable */
				 static reg_t<rw_t, 0X40000418, 4, 3> OC1M 	;	 /*!< \brief Output compare 1 mode */
				 static reg_t<rw_t, 0X40000418, 3, 1> OC1PE 	;	 /*!< \brief Output compare 1 preload enable */
				 static reg_t<rw_t, 0X40000418, 2, 1> OC1FE 	;	 /*!< \brief Output compare 1 fast enable */
				 static reg_t<rw_t, 0X40000418, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40000418, 0, 32> CCMR1_Output_D;	 /*!< \brief CCMR1_Output register direct access */

			/*!
			\brief capture/compare mode register 1 (input mode)
			*/
			struct CCMR1_Input{
				 static reg_t<rw_t, 0X40000418, 12, 4> IC2F 	;	 /*!< \brief Input capture 2 filter */
				 static reg_t<rw_t, 0X40000418, 10, 2> IC2PSC 	;	 /*!< \brief Input capture 2 prescaler */
				 static reg_t<rw_t, 0X40000418, 8, 2> CC2S 	;	 /*!< \brief Capture/compare 2 selection */
				 static reg_t<rw_t, 0X40000418, 4, 4> IC1F 	;	 /*!< \brief Input capture 1 filter */
				 static reg_t<rw_t, 0X40000418, 2, 2> IC1PSC 	;	 /*!< \brief Input capture 1 prescaler */
				 static reg_t<rw_t, 0X40000418, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40000418, 0, 32> CCMR1_Input_D;	 /*!< \brief CCMR1_Input register direct access */

			/*!
			\brief capture/compare mode register 2 (output mode)
			*/
			struct CCMR2_Output{
				 static reg_t<rw_t, 0X4000041C, 15, 1> OC4CE 	;	 /*!< \brief Output compare 4 clear enable */
				 static reg_t<rw_t, 0X4000041C, 12, 3> OC4M 	;	 /*!< \brief Output compare 4 mode */
				 static reg_t<rw_t, 0X4000041C, 11, 1> OC4PE 	;	 /*!< \brief Output compare 4 preload enable */
				 static reg_t<rw_t, 0X4000041C, 10, 1> OC4FE 	;	 /*!< \brief Output compare 4 fast enable */
				 static reg_t<rw_t, 0X4000041C, 8, 2> CC4S 	;	 /*!< \brief Capture/Compare 4 selection */
				 static reg_t<rw_t, 0X4000041C, 7, 1> OC3CE 	;	 /*!< \brief Output compare 3 clear enable */
				 static reg_t<rw_t, 0X4000041C, 4, 3> OC3M 	;	 /*!< \brief Output compare 3 mode */
				 static reg_t<rw_t, 0X4000041C, 3, 1> OC3PE 	;	 /*!< \brief Output compare 3 preload enable */
				 static reg_t<rw_t, 0X4000041C, 2, 1> OC3FE 	;	 /*!< \brief Output compare 3 fast enable */
				 static reg_t<rw_t, 0X4000041C, 0, 2> CC3S 	;	 /*!< \brief Capture/Compare 3 selection */
			};
			 static reg_t<rw_t,0X4000041C, 0, 32> CCMR2_Output_D;	 /*!< \brief CCMR2_Output register direct access */

			/*!
			\brief capture/compare mode register 2 (input mode)
			*/
			struct CCMR2_Input{
				 static reg_t<rw_t, 0X4000041C, 12, 4> IC4F 	;	 /*!< \brief Input capture 4 filter */
				 static reg_t<rw_t, 0X4000041C, 10, 2> IC4PSC 	;	 /*!< \brief Input capture 4 prescaler */
				 static reg_t<rw_t, 0X4000041C, 8, 2> CC4S 	;	 /*!< \brief Capture/Compare 4 selection */
				 static reg_t<rw_t, 0X4000041C, 4, 4> IC3F 	;	 /*!< \brief Input capture 3 filter */
				 static reg_t<rw_t, 0X4000041C, 2, 2> IC3PSC 	;	 /*!< \brief Input capture 3 prescaler */
				 static reg_t<rw_t, 0X4000041C, 0, 2> CC3S 	;	 /*!< \brief Capture/Compare 3 selection */
			};
			 static reg_t<rw_t,0X4000041C, 0, 32> CCMR2_Input_D;	 /*!< \brief CCMR2_Input register direct access */

			/*!
			\brief capture/compare enable register
			*/
			struct CCER{
				 static reg_t<rw_t, 0X40000420, 15, 1> CC4NP 	;	 /*!< \brief Capture/Compare 4 output Polarity */
				 static reg_t<rw_t, 0X40000420, 13, 1> CC4P 	;	 /*!< \brief Capture/Compare 3 output Polarity */
				 static reg_t<rw_t, 0X40000420, 12, 1> CC4E 	;	 /*!< \brief Capture/Compare 4 output enable */
				 static reg_t<rw_t, 0X40000420, 11, 1> CC3NP 	;	 /*!< \brief Capture/Compare 3 output Polarity */
				 static reg_t<rw_t, 0X40000420, 9, 1> CC3P 	;	 /*!< \brief Capture/Compare 3 output Polarity */
				 static reg_t<rw_t, 0X40000420, 8, 1> CC3E 	;	 /*!< \brief Capture/Compare 3 output enable */
				 static reg_t<rw_t, 0X40000420, 7, 1> CC2NP 	;	 /*!< \brief Capture/Compare 2 output Polarity */
				 static reg_t<rw_t, 0X40000420, 5, 1> CC2P 	;	 /*!< \brief Capture/Compare 2 output Polarity */
				 static reg_t<rw_t, 0X40000420, 4, 1> CC2E 	;	 /*!< \brief Capture/Compare 2 output enable */
				 static reg_t<rw_t, 0X40000420, 3, 1> CC1NP 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40000420, 1, 1> CC1P 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40000420, 0, 1> CC1E 	;	 /*!< \brief Capture/Compare 1 output enable */
			};
			 static reg_t<rw_t,0X40000420, 0, 32> CCER_D;	 /*!< \brief CCER register direct access */

			/*!
			\brief counter
			*/
			struct CNT{
				 static reg_t<rw_t, 0X40000424, 16, 16> CNT_H 	;	 /*!< \brief High counter value (TIM2 only) */
				 static reg_t<rw_t, 0X40000424, 0, 16> CNT_L 	;	 /*!< \brief Low counter value */
			};
			 static reg_t<rw_t,0X40000424, 0, 32> CNT_D;	 /*!< \brief CNT register direct access */

			/*!
			\brief prescaler
			*/
				 static reg_t<rw_t, 0X40000428, 0, 16> PSC 	;	 /*!< \brief Prescaler value */

			/*!
			\brief auto-reload register
			*/
			struct ARR{
				 static reg_t<rw_t, 0X4000042C, 16, 16> ARR_H 	;	 /*!< \brief High Auto-reload value (TIM2 only) */
				 static reg_t<rw_t, 0X4000042C, 0, 16> ARR_L 	;	 /*!< \brief Low Auto-reload value */
			};
			 static reg_t<rw_t,0X4000042C, 0, 32> ARR_D;	 /*!< \brief ARR register direct access */

			/*!
			\brief capture/compare register 1
			*/
			struct CCR1{
				 static reg_t<rw_t, 0X40000434, 16, 16> CCR1_H 	;	 /*!< \brief High Capture/Compare 1 value (TIM2 only) */
				 static reg_t<rw_t, 0X40000434, 0, 16> CCR1_L 	;	 /*!< \brief Low Capture/Compare 1 value */
			};
			 static reg_t<rw_t,0X40000434, 0, 32> CCR1_D;	 /*!< \brief CCR1 register direct access */

			/*!
			\brief capture/compare register 2
			*/
			struct CCR2{
				 static reg_t<rw_t, 0X40000438, 16, 16> CCR2_H 	;	 /*!< \brief High Capture/Compare 2 value (TIM2 only) */
				 static reg_t<rw_t, 0X40000438, 0, 16> CCR2_L 	;	 /*!< \brief Low Capture/Compare 2 value */
			};
			 static reg_t<rw_t,0X40000438, 0, 32> CCR2_D;	 /*!< \brief CCR2 register direct access */

			/*!
			\brief capture/compare register 3
			*/
			struct CCR3{
				 static reg_t<rw_t, 0X4000043C, 16, 16> CCR3_H 	;	 /*!< \brief High Capture/Compare value (TIM2 only) */
				 static reg_t<rw_t, 0X4000043C, 0, 16> CCR3_L 	;	 /*!< \brief Low Capture/Compare value */
			};
			 static reg_t<rw_t,0X4000043C, 0, 32> CCR3_D;	 /*!< \brief CCR3 register direct access */

			/*!
			\brief capture/compare register 4
			*/
			struct CCR4{
				 static reg_t<rw_t, 0X40000440, 16, 16> CCR4_H 	;	 /*!< \brief High Capture/Compare value (TIM2 only) */
				 static reg_t<rw_t, 0X40000440, 0, 16> CCR4_L 	;	 /*!< \brief Low Capture/Compare value */
			};
			 static reg_t<rw_t,0X40000440, 0, 32> CCR4_D;	 /*!< \brief CCR4 register direct access */

			/*!
			\brief DMA control register
			*/
			struct DCR{
				 static reg_t<rw_t, 0X40000448, 8, 5> DBL 	;	 /*!< \brief DMA burst length */
				 static reg_t<rw_t, 0X40000448, 0, 5> DBA 	;	 /*!< \brief DMA base address */
			};
			 static reg_t<rw_t,0X40000448, 0, 32> DCR_D;	 /*!< \brief DCR register direct access */

			/*!
			\brief DMA address for full transfer
			*/
				 static reg_t<rw_t, 0X4000044C, 0, 16> DMAR 	;	 /*!< \brief DMA register for burst accesses */
		};

		/*!
		\brief General-purpose-timers
		*/
		struct TIM14{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40002000, 8, 2> CKD 	;	 /*!< \brief Clock division */
				 static reg_t<rw_t, 0X40002000, 7, 1> ARPE 	;	 /*!< \brief Auto-reload preload enable */
				 static reg_t<rw_t, 0X40002000, 2, 1> URS 	;	 /*!< \brief Update request source */
				 static reg_t<rw_t, 0X40002000, 1, 1> UDIS 	;	 /*!< \brief Update disable */
				 static reg_t<rw_t, 0X40002000, 0, 1> CEN 	;	 /*!< \brief Counter enable */
			};
			 static reg_t<rw_t,0X40002000, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief DMA/Interrupt enable register
			*/
			struct DIER{
				 static reg_t<rw_t, 0X4000200C, 1, 1> CC1IE 	;	 /*!< \brief Capture/Compare 1 interrupt enable */
				 static reg_t<rw_t, 0X4000200C, 0, 1> UIE 	;	 /*!< \brief Update interrupt enable */
			};
			 static reg_t<rw_t,0X4000200C, 0, 32> DIER_D;	 /*!< \brief DIER register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40002010, 9, 1> CC1OF 	;	 /*!< \brief Capture/Compare 1 overcapture flag */
				 static reg_t<rw_t, 0X40002010, 1, 1> CC1IF 	;	 /*!< \brief Capture/compare 1 interrupt flag */
				 static reg_t<rw_t, 0X40002010, 0, 1> UIF 	;	 /*!< \brief Update interrupt flag */
			};
			 static reg_t<rw_t,0X40002010, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief event generation register
			*/
			struct EGR{
				 static reg_t<wo_t, 0X40002014, 1, 1> CC1G 	;	 /*!< \brief Capture/compare 1 generation */
				 static reg_t<wo_t, 0X40002014, 0, 1> UG 	;	 /*!< \brief Update generation */
			};
			 static reg_t<rw_t,0X40002014, 0, 32> EGR_D;	 /*!< \brief EGR register direct access */

			/*!
			\brief capture/compare mode register (output mode)
			*/
			struct CCMR1_Output{
				 static reg_t<rw_t, 0X40002018, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
				 static reg_t<rw_t, 0X40002018, 2, 1> OC1FE 	;	 /*!< \brief Output compare 1 fast enable */
				 static reg_t<rw_t, 0X40002018, 3, 1> OC1PE 	;	 /*!< \brief Output Compare 1 preload enable */
				 static reg_t<rw_t, 0X40002018, 4, 3> OC1M 	;	 /*!< \brief Output Compare 1 mode */
			};
			 static reg_t<rw_t,0X40002018, 0, 32> CCMR1_Output_D;	 /*!< \brief CCMR1_Output register direct access */

			/*!
			\brief capture/compare mode register (input mode)
			*/
			struct CCMR1_Input{
				 static reg_t<rw_t, 0X40002018, 4, 4> IC1F 	;	 /*!< \brief Input capture 1 filter */
				 static reg_t<rw_t, 0X40002018, 2, 2> IC1PSC 	;	 /*!< \brief Input capture 1 prescaler */
				 static reg_t<rw_t, 0X40002018, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40002018, 0, 32> CCMR1_Input_D;	 /*!< \brief CCMR1_Input register direct access */

			/*!
			\brief capture/compare enable register
			*/
			struct CCER{
				 static reg_t<rw_t, 0X40002020, 3, 1> CC1NP 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40002020, 1, 1> CC1P 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40002020, 0, 1> CC1E 	;	 /*!< \brief Capture/Compare 1 output enable */
			};
			 static reg_t<rw_t,0X40002020, 0, 32> CCER_D;	 /*!< \brief CCER register direct access */

			/*!
			\brief counter
			*/
				 static reg_t<rw_t, 0X40002024, 0, 16> CNT 	;	 /*!< \brief counter value */

			/*!
			\brief prescaler
			*/
				 static reg_t<rw_t, 0X40002028, 0, 16> PSC 	;	 /*!< \brief Prescaler value */

			/*!
			\brief auto-reload register
			*/
				 static reg_t<rw_t, 0X4000202C, 0, 16> ARR 	;	 /*!< \brief Auto-reload value */

			/*!
			\brief capture/compare register 1
			*/
				 static reg_t<rw_t, 0X40002034, 0, 16> CCR1 	;	 /*!< \brief Capture/Compare 1 value */

			/*!
			\brief option register
			*/
			struct OR{
				 static reg_t<rw_t, 0X40002050, 0, 2> RMP 	;	 /*!< \brief Timer input 1 remap */
			};
		};

		/*!
		\brief Basic-timers
		*/
		struct TIM6{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40001000, 7, 1> ARPE 	;	 /*!< \brief Auto-reload preload enable */
				 static reg_t<rw_t, 0X40001000, 3, 1> OPM 	;	 /*!< \brief One-pulse mode */
				 static reg_t<rw_t, 0X40001000, 2, 1> URS 	;	 /*!< \brief Update request source */
				 static reg_t<rw_t, 0X40001000, 1, 1> UDIS 	;	 /*!< \brief Update disable */
				 static reg_t<rw_t, 0X40001000, 0, 1> CEN 	;	 /*!< \brief Counter enable */
			};
			 static reg_t<rw_t,0X40001000, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40001004, 4, 3> MMS 	;	 /*!< \brief Master mode selection */
			};

			/*!
			\brief DMA/Interrupt enable register
			*/
			struct DIER{
				 static reg_t<rw_t, 0X4000100C, 8, 1> UDE 	;	 /*!< \brief Update DMA request enable */
				 static reg_t<rw_t, 0X4000100C, 0, 1> UIE 	;	 /*!< \brief Update interrupt enable */
			};
			 static reg_t<rw_t,0X4000100C, 0, 32> DIER_D;	 /*!< \brief DIER register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40001010, 0, 1> UIF 	;	 /*!< \brief Update interrupt flag */
			};

			/*!
			\brief event generation register
			*/
			struct EGR{
				 static reg_t<wo_t, 0X40001014, 0, 1> UG 	;	 /*!< \brief Update generation */
			};

			/*!
			\brief counter
			*/
				 static reg_t<rw_t, 0X40001024, 0, 16> CNT 	;	 /*!< \brief Low counter value */

			/*!
			\brief prescaler
			*/
				 static reg_t<rw_t, 0X40001028, 0, 16> PSC 	;	 /*!< \brief Prescaler value */

			/*!
			\brief auto-reload register
			*/
				 static reg_t<rw_t, 0X4000102C, 0, 16> ARR 	;	 /*!< \brief Low Auto-reload value */
		};

		/*!
		\brief External interrupt/event controller
		*/
		struct EXTI{

			/*!
			\brief Interrupt mask register (EXTI_IMR)
			*/
			struct IMR{
				 static reg_t<rw_t, 0X40010400, 0, 1> MR0 	;	 /*!< \brief Interrupt Mask on line 0 */
				 static reg_t<rw_t, 0X40010400, 1, 1> MR1 	;	 /*!< \brief Interrupt Mask on line 1 */
				 static reg_t<rw_t, 0X40010400, 2, 1> MR2 	;	 /*!< \brief Interrupt Mask on line 2 */
				 static reg_t<rw_t, 0X40010400, 3, 1> MR3 	;	 /*!< \brief Interrupt Mask on line 3 */
				 static reg_t<rw_t, 0X40010400, 4, 1> MR4 	;	 /*!< \brief Interrupt Mask on line 4 */
				 static reg_t<rw_t, 0X40010400, 5, 1> MR5 	;	 /*!< \brief Interrupt Mask on line 5 */
				 static reg_t<rw_t, 0X40010400, 6, 1> MR6 	;	 /*!< \brief Interrupt Mask on line 6 */
				 static reg_t<rw_t, 0X40010400, 7, 1> MR7 	;	 /*!< \brief Interrupt Mask on line 7 */
				 static reg_t<rw_t, 0X40010400, 8, 1> MR8 	;	 /*!< \brief Interrupt Mask on line 8 */
				 static reg_t<rw_t, 0X40010400, 9, 1> MR9 	;	 /*!< \brief Interrupt Mask on line 9 */
				 static reg_t<rw_t, 0X40010400, 10, 1> MR10 	;	 /*!< \brief Interrupt Mask on line 10 */
				 static reg_t<rw_t, 0X40010400, 11, 1> MR11 	;	 /*!< \brief Interrupt Mask on line 11 */
				 static reg_t<rw_t, 0X40010400, 12, 1> MR12 	;	 /*!< \brief Interrupt Mask on line 12 */
				 static reg_t<rw_t, 0X40010400, 13, 1> MR13 	;	 /*!< \brief Interrupt Mask on line 13 */
				 static reg_t<rw_t, 0X40010400, 14, 1> MR14 	;	 /*!< \brief Interrupt Mask on line 14 */
				 static reg_t<rw_t, 0X40010400, 15, 1> MR15 	;	 /*!< \brief Interrupt Mask on line 15 */
				 static reg_t<rw_t, 0X40010400, 16, 1> MR16 	;	 /*!< \brief Interrupt Mask on line 16 */
				 static reg_t<rw_t, 0X40010400, 17, 1> MR17 	;	 /*!< \brief Interrupt Mask on line 17 */
				 static reg_t<rw_t, 0X40010400, 18, 1> MR18 	;	 /*!< \brief Interrupt Mask on line 18 */
				 static reg_t<rw_t, 0X40010400, 19, 1> MR19 	;	 /*!< \brief Interrupt Mask on line 19 */
				 static reg_t<rw_t, 0X40010400, 20, 1> MR20 	;	 /*!< \brief Interrupt Mask on line 20 */
				 static reg_t<rw_t, 0X40010400, 21, 1> MR21 	;	 /*!< \brief Interrupt Mask on line 21 */
				 static reg_t<rw_t, 0X40010400, 22, 1> MR22 	;	 /*!< \brief Interrupt Mask on line 22 */
				 static reg_t<rw_t, 0X40010400, 23, 1> MR23 	;	 /*!< \brief Interrupt Mask on line 23 */
				 static reg_t<rw_t, 0X40010400, 24, 1> MR24 	;	 /*!< \brief Interrupt Mask on line 24 */
				 static reg_t<rw_t, 0X40010400, 25, 1> MR25 	;	 /*!< \brief Interrupt Mask on line 25 */
				 static reg_t<rw_t, 0X40010400, 26, 1> MR26 	;	 /*!< \brief Interrupt Mask on line 26 */
				 static reg_t<rw_t, 0X40010400, 27, 1> MR27 	;	 /*!< \brief Interrupt Mask on line 27 */
			};
			 static reg_t<rw_t,0X40010400, 0, 32> IMR_D;	 /*!< \brief IMR register direct access */

			/*!
			\brief Event mask register (EXTI_EMR)
			*/
			struct EMR{
				 static reg_t<rw_t, 0X40010404, 0, 1> MR0 	;	 /*!< \brief Event Mask on line 0 */
				 static reg_t<rw_t, 0X40010404, 1, 1> MR1 	;	 /*!< \brief Event Mask on line 1 */
				 static reg_t<rw_t, 0X40010404, 2, 1> MR2 	;	 /*!< \brief Event Mask on line 2 */
				 static reg_t<rw_t, 0X40010404, 3, 1> MR3 	;	 /*!< \brief Event Mask on line 3 */
				 static reg_t<rw_t, 0X40010404, 4, 1> MR4 	;	 /*!< \brief Event Mask on line 4 */
				 static reg_t<rw_t, 0X40010404, 5, 1> MR5 	;	 /*!< \brief Event Mask on line 5 */
				 static reg_t<rw_t, 0X40010404, 6, 1> MR6 	;	 /*!< \brief Event Mask on line 6 */
				 static reg_t<rw_t, 0X40010404, 7, 1> MR7 	;	 /*!< \brief Event Mask on line 7 */
				 static reg_t<rw_t, 0X40010404, 8, 1> MR8 	;	 /*!< \brief Event Mask on line 8 */
				 static reg_t<rw_t, 0X40010404, 9, 1> MR9 	;	 /*!< \brief Event Mask on line 9 */
				 static reg_t<rw_t, 0X40010404, 10, 1> MR10 	;	 /*!< \brief Event Mask on line 10 */
				 static reg_t<rw_t, 0X40010404, 11, 1> MR11 	;	 /*!< \brief Event Mask on line 11 */
				 static reg_t<rw_t, 0X40010404, 12, 1> MR12 	;	 /*!< \brief Event Mask on line 12 */
				 static reg_t<rw_t, 0X40010404, 13, 1> MR13 	;	 /*!< \brief Event Mask on line 13 */
				 static reg_t<rw_t, 0X40010404, 14, 1> MR14 	;	 /*!< \brief Event Mask on line 14 */
				 static reg_t<rw_t, 0X40010404, 15, 1> MR15 	;	 /*!< \brief Event Mask on line 15 */
				 static reg_t<rw_t, 0X40010404, 16, 1> MR16 	;	 /*!< \brief Event Mask on line 16 */
				 static reg_t<rw_t, 0X40010404, 17, 1> MR17 	;	 /*!< \brief Event Mask on line 17 */
				 static reg_t<rw_t, 0X40010404, 18, 1> MR18 	;	 /*!< \brief Event Mask on line 18 */
				 static reg_t<rw_t, 0X40010404, 19, 1> MR19 	;	 /*!< \brief Event Mask on line 19 */
				 static reg_t<rw_t, 0X40010404, 20, 1> MR20 	;	 /*!< \brief Event Mask on line 20 */
				 static reg_t<rw_t, 0X40010404, 21, 1> MR21 	;	 /*!< \brief Event Mask on line 21 */
				 static reg_t<rw_t, 0X40010404, 22, 1> MR22 	;	 /*!< \brief Event Mask on line 22 */
				 static reg_t<rw_t, 0X40010404, 23, 1> MR23 	;	 /*!< \brief Event Mask on line 23 */
				 static reg_t<rw_t, 0X40010404, 24, 1> MR24 	;	 /*!< \brief Event Mask on line 24 */
				 static reg_t<rw_t, 0X40010404, 25, 1> MR25 	;	 /*!< \brief Event Mask on line 25 */
				 static reg_t<rw_t, 0X40010404, 26, 1> MR26 	;	 /*!< \brief Event Mask on line 26 */
				 static reg_t<rw_t, 0X40010404, 27, 1> MR27 	;	 /*!< \brief Event Mask on line 27 */
			};
			 static reg_t<rw_t,0X40010404, 0, 32> EMR_D;	 /*!< \brief EMR register direct access */

			/*!
			\brief Rising Trigger selection register (EXTI_RTSR)
			*/
			struct RTSR{
				 static reg_t<rw_t, 0X40010408, 0, 1> TR0 	;	 /*!< \brief Rising trigger event configuration of line 0 */
				 static reg_t<rw_t, 0X40010408, 1, 1> TR1 	;	 /*!< \brief Rising trigger event configuration of line 1 */
				 static reg_t<rw_t, 0X40010408, 2, 1> TR2 	;	 /*!< \brief Rising trigger event configuration of line 2 */
				 static reg_t<rw_t, 0X40010408, 3, 1> TR3 	;	 /*!< \brief Rising trigger event configuration of line 3 */
				 static reg_t<rw_t, 0X40010408, 4, 1> TR4 	;	 /*!< \brief Rising trigger event configuration of line 4 */
				 static reg_t<rw_t, 0X40010408, 5, 1> TR5 	;	 /*!< \brief Rising trigger event configuration of line 5 */
				 static reg_t<rw_t, 0X40010408, 6, 1> TR6 	;	 /*!< \brief Rising trigger event configuration of line 6 */
				 static reg_t<rw_t, 0X40010408, 7, 1> TR7 	;	 /*!< \brief Rising trigger event configuration of line 7 */
				 static reg_t<rw_t, 0X40010408, 8, 1> TR8 	;	 /*!< \brief Rising trigger event configuration of line 8 */
				 static reg_t<rw_t, 0X40010408, 9, 1> TR9 	;	 /*!< \brief Rising trigger event configuration of line 9 */
				 static reg_t<rw_t, 0X40010408, 10, 1> TR10 	;	 /*!< \brief Rising trigger event configuration of line 10 */
				 static reg_t<rw_t, 0X40010408, 11, 1> TR11 	;	 /*!< \brief Rising trigger event configuration of line 11 */
				 static reg_t<rw_t, 0X40010408, 12, 1> TR12 	;	 /*!< \brief Rising trigger event configuration of line 12 */
				 static reg_t<rw_t, 0X40010408, 13, 1> TR13 	;	 /*!< \brief Rising trigger event configuration of line 13 */
				 static reg_t<rw_t, 0X40010408, 14, 1> TR14 	;	 /*!< \brief Rising trigger event configuration of line 14 */
				 static reg_t<rw_t, 0X40010408, 15, 1> TR15 	;	 /*!< \brief Rising trigger event configuration of line 15 */
				 static reg_t<rw_t, 0X40010408, 16, 1> TR16 	;	 /*!< \brief Rising trigger event configuration of line 16 */
				 static reg_t<rw_t, 0X40010408, 17, 1> TR17 	;	 /*!< \brief Rising trigger event configuration of line 17 */
				 static reg_t<rw_t, 0X40010408, 19, 1> TR19 	;	 /*!< \brief Rising trigger event configuration of line 19 */
			};
			 static reg_t<rw_t,0X40010408, 0, 32> RTSR_D;	 /*!< \brief RTSR register direct access */

			/*!
			\brief Falling Trigger selection register (EXTI_FTSR)
			*/
			struct FTSR{
				 static reg_t<rw_t, 0X4001040C, 0, 1> TR0 	;	 /*!< \brief Falling trigger event configuration of line 0 */
				 static reg_t<rw_t, 0X4001040C, 1, 1> TR1 	;	 /*!< \brief Falling trigger event configuration of line 1 */
				 static reg_t<rw_t, 0X4001040C, 2, 1> TR2 	;	 /*!< \brief Falling trigger event configuration of line 2 */
				 static reg_t<rw_t, 0X4001040C, 3, 1> TR3 	;	 /*!< \brief Falling trigger event configuration of line 3 */
				 static reg_t<rw_t, 0X4001040C, 4, 1> TR4 	;	 /*!< \brief Falling trigger event configuration of line 4 */
				 static reg_t<rw_t, 0X4001040C, 5, 1> TR5 	;	 /*!< \brief Falling trigger event configuration of line 5 */
				 static reg_t<rw_t, 0X4001040C, 6, 1> TR6 	;	 /*!< \brief Falling trigger event configuration of line 6 */
				 static reg_t<rw_t, 0X4001040C, 7, 1> TR7 	;	 /*!< \brief Falling trigger event configuration of line 7 */
				 static reg_t<rw_t, 0X4001040C, 8, 1> TR8 	;	 /*!< \brief Falling trigger event configuration of line 8 */
				 static reg_t<rw_t, 0X4001040C, 9, 1> TR9 	;	 /*!< \brief Falling trigger event configuration of line 9 */
				 static reg_t<rw_t, 0X4001040C, 10, 1> TR10 	;	 /*!< \brief Falling trigger event configuration of line 10 */
				 static reg_t<rw_t, 0X4001040C, 11, 1> TR11 	;	 /*!< \brief Falling trigger event configuration of line 11 */
				 static reg_t<rw_t, 0X4001040C, 12, 1> TR12 	;	 /*!< \brief Falling trigger event configuration of line 12 */
				 static reg_t<rw_t, 0X4001040C, 13, 1> TR13 	;	 /*!< \brief Falling trigger event configuration of line 13 */
				 static reg_t<rw_t, 0X4001040C, 14, 1> TR14 	;	 /*!< \brief Falling trigger event configuration of line 14 */
				 static reg_t<rw_t, 0X4001040C, 15, 1> TR15 	;	 /*!< \brief Falling trigger event configuration of line 15 */
				 static reg_t<rw_t, 0X4001040C, 16, 1> TR16 	;	 /*!< \brief Falling trigger event configuration of line 16 */
				 static reg_t<rw_t, 0X4001040C, 17, 1> TR17 	;	 /*!< \brief Falling trigger event configuration of line 17 */
				 static reg_t<rw_t, 0X4001040C, 19, 1> TR19 	;	 /*!< \brief Falling trigger event configuration of line 19 */
			};
			 static reg_t<rw_t,0X4001040C, 0, 32> FTSR_D;	 /*!< \brief FTSR register direct access */

			/*!
			\brief Software interrupt event register (EXTI_SWIER)
			*/
			struct SWIER{
				 static reg_t<rw_t, 0X40010410, 0, 1> SWIER0 	;	 /*!< \brief Software Interrupt on line 0 */
				 static reg_t<rw_t, 0X40010410, 1, 1> SWIER1 	;	 /*!< \brief Software Interrupt on line 1 */
				 static reg_t<rw_t, 0X40010410, 2, 1> SWIER2 	;	 /*!< \brief Software Interrupt on line 2 */
				 static reg_t<rw_t, 0X40010410, 3, 1> SWIER3 	;	 /*!< \brief Software Interrupt on line 3 */
				 static reg_t<rw_t, 0X40010410, 4, 1> SWIER4 	;	 /*!< \brief Software Interrupt on line 4 */
				 static reg_t<rw_t, 0X40010410, 5, 1> SWIER5 	;	 /*!< \brief Software Interrupt on line 5 */
				 static reg_t<rw_t, 0X40010410, 6, 1> SWIER6 	;	 /*!< \brief Software Interrupt on line 6 */
				 static reg_t<rw_t, 0X40010410, 7, 1> SWIER7 	;	 /*!< \brief Software Interrupt on line 7 */
				 static reg_t<rw_t, 0X40010410, 8, 1> SWIER8 	;	 /*!< \brief Software Interrupt on line 8 */
				 static reg_t<rw_t, 0X40010410, 9, 1> SWIER9 	;	 /*!< \brief Software Interrupt on line 9 */
				 static reg_t<rw_t, 0X40010410, 10, 1> SWIER10 	;	 /*!< \brief Software Interrupt on line 10 */
				 static reg_t<rw_t, 0X40010410, 11, 1> SWIER11 	;	 /*!< \brief Software Interrupt on line 11 */
				 static reg_t<rw_t, 0X40010410, 12, 1> SWIER12 	;	 /*!< \brief Software Interrupt on line 12 */
				 static reg_t<rw_t, 0X40010410, 13, 1> SWIER13 	;	 /*!< \brief Software Interrupt on line 13 */
				 static reg_t<rw_t, 0X40010410, 14, 1> SWIER14 	;	 /*!< \brief Software Interrupt on line 14 */
				 static reg_t<rw_t, 0X40010410, 15, 1> SWIER15 	;	 /*!< \brief Software Interrupt on line 15 */
				 static reg_t<rw_t, 0X40010410, 16, 1> SWIER16 	;	 /*!< \brief Software Interrupt on line 16 */
				 static reg_t<rw_t, 0X40010410, 17, 1> SWIER17 	;	 /*!< \brief Software Interrupt on line 17 */
				 static reg_t<rw_t, 0X40010410, 19, 1> SWIER19 	;	 /*!< \brief Software Interrupt on line 19 */
			};
			 static reg_t<rw_t,0X40010410, 0, 32> SWIER_D;	 /*!< \brief SWIER register direct access */

			/*!
			\brief Pending register (EXTI_PR)
			*/
			struct PR{
				 static reg_t<rw_t, 0X40010414, 0, 1> PR0 	;	 /*!< \brief Pending bit 0 */
				 static reg_t<rw_t, 0X40010414, 1, 1> PR1 	;	 /*!< \brief Pending bit 1 */
				 static reg_t<rw_t, 0X40010414, 2, 1> PR2 	;	 /*!< \brief Pending bit 2 */
				 static reg_t<rw_t, 0X40010414, 3, 1> PR3 	;	 /*!< \brief Pending bit 3 */
				 static reg_t<rw_t, 0X40010414, 4, 1> PR4 	;	 /*!< \brief Pending bit 4 */
				 static reg_t<rw_t, 0X40010414, 5, 1> PR5 	;	 /*!< \brief Pending bit 5 */
				 static reg_t<rw_t, 0X40010414, 6, 1> PR6 	;	 /*!< \brief Pending bit 6 */
				 static reg_t<rw_t, 0X40010414, 7, 1> PR7 	;	 /*!< \brief Pending bit 7 */
				 static reg_t<rw_t, 0X40010414, 8, 1> PR8 	;	 /*!< \brief Pending bit 8 */
				 static reg_t<rw_t, 0X40010414, 9, 1> PR9 	;	 /*!< \brief Pending bit 9 */
				 static reg_t<rw_t, 0X40010414, 10, 1> PR10 	;	 /*!< \brief Pending bit 10 */
				 static reg_t<rw_t, 0X40010414, 11, 1> PR11 	;	 /*!< \brief Pending bit 11 */
				 static reg_t<rw_t, 0X40010414, 12, 1> PR12 	;	 /*!< \brief Pending bit 12 */
				 static reg_t<rw_t, 0X40010414, 13, 1> PR13 	;	 /*!< \brief Pending bit 13 */
				 static reg_t<rw_t, 0X40010414, 14, 1> PR14 	;	 /*!< \brief Pending bit 14 */
				 static reg_t<rw_t, 0X40010414, 15, 1> PR15 	;	 /*!< \brief Pending bit 15 */
				 static reg_t<rw_t, 0X40010414, 16, 1> PR16 	;	 /*!< \brief Pending bit 16 */
				 static reg_t<rw_t, 0X40010414, 17, 1> PR17 	;	 /*!< \brief Pending bit 17 */
				 static reg_t<rw_t, 0X40010414, 19, 1> PR19 	;	 /*!< \brief Pending bit 19 */
			};
			 static reg_t<rw_t,0X40010414, 0, 32> PR_D;	 /*!< \brief PR register direct access */
		};

		/*!
		\brief Nested Vectored Interrupt Controller
		*/
		struct NVIC{

			/*!
			\brief Interrupt Set Enable Register
			*/
			struct ISER{
				 static reg_t<rw_t, 0XE000E100, 0, 32> SETENA 	;	 /*!< \brief SETENA */
			};

			/*!
			\brief Interrupt Clear Enable Register
			*/
			struct ICER{
				 static reg_t<rw_t, 0XE000E180, 0, 32> CLRENA 	;	 /*!< \brief CLRENA */
			};

			/*!
			\brief Interrupt Set-Pending Register
			*/
			struct ISPR{
				 static reg_t<rw_t, 0XE000E200, 0, 32> SETPEND 	;	 /*!< \brief SETPEND */
			};

			/*!
			\brief Interrupt Clear-Pending Register
			*/
			struct ICPR{
				 static reg_t<rw_t, 0XE000E280, 0, 32> CLRPEND 	;	 /*!< \brief CLRPEND */
			};

			/*!
			\brief Interrupt Priority Register 0
			*/
			struct IPR0{
				 static reg_t<rw_t, 0XE000E400, 6, 2> PRI_00 	;	 /*!< \brief PRI_00 */
				 static reg_t<rw_t, 0XE000E400, 14, 2> PRI_01 	;	 /*!< \brief PRI_01 */
				 static reg_t<rw_t, 0XE000E400, 22, 2> PRI_02 	;	 /*!< \brief PRI_02 */
				 static reg_t<rw_t, 0XE000E400, 30, 2> PRI_03 	;	 /*!< \brief PRI_03 */
			};
			 static reg_t<rw_t,0XE000E400, 0, 32> IPR0_D;	 /*!< \brief IPR0 register direct access */

			/*!
			\brief Interrupt Priority Register 1
			*/
			struct IPR1{
				 static reg_t<rw_t, 0XE000E404, 6, 2> PRI_40 	;	 /*!< \brief PRI_40 */
				 static reg_t<rw_t, 0XE000E404, 14, 2> PRI_41 	;	 /*!< \brief PRI_41 */
				 static reg_t<rw_t, 0XE000E404, 22, 2> PRI_42 	;	 /*!< \brief PRI_42 */
				 static reg_t<rw_t, 0XE000E404, 30, 2> PRI_43 	;	 /*!< \brief PRI_43 */
			};
			 static reg_t<rw_t,0XE000E404, 0, 32> IPR1_D;	 /*!< \brief IPR1 register direct access */

			/*!
			\brief Interrupt Priority Register 2
			*/
			struct IPR2{
				 static reg_t<rw_t, 0XE000E408, 6, 2> PRI_80 	;	 /*!< \brief PRI_80 */
				 static reg_t<rw_t, 0XE000E408, 14, 2> PRI_81 	;	 /*!< \brief PRI_81 */
				 static reg_t<rw_t, 0XE000E408, 22, 2> PRI_82 	;	 /*!< \brief PRI_82 */
				 static reg_t<rw_t, 0XE000E408, 30, 2> PRI_83 	;	 /*!< \brief PRI_83 */
			};
			 static reg_t<rw_t,0XE000E408, 0, 32> IPR2_D;	 /*!< \brief IPR2 register direct access */

			/*!
			\brief Interrupt Priority Register 3
			*/
			struct IPR3{
				 static reg_t<rw_t, 0XE000E40C, 6, 2> PRI_120 	;	 /*!< \brief PRI_120 */
				 static reg_t<rw_t, 0XE000E40C, 14, 2> PRI_121 	;	 /*!< \brief PRI_121 */
				 static reg_t<rw_t, 0XE000E40C, 22, 2> PRI_122 	;	 /*!< \brief PRI_122 */
				 static reg_t<rw_t, 0XE000E40C, 30, 2> PRI_123 	;	 /*!< \brief PRI_123 */
			};
			 static reg_t<rw_t,0XE000E40C, 0, 32> IPR3_D;	 /*!< \brief IPR3 register direct access */

			/*!
			\brief Interrupt Priority Register 4
			*/
			struct IPR4{
				 static reg_t<rw_t, 0XE000E410, 6, 2> PRI_160 	;	 /*!< \brief PRI_160 */
				 static reg_t<rw_t, 0XE000E410, 14, 2> PRI_161 	;	 /*!< \brief PRI_161 */
				 static reg_t<rw_t, 0XE000E410, 22, 2> PRI_162 	;	 /*!< \brief PRI_162 */
				 static reg_t<rw_t, 0XE000E410, 30, 2> PRI_163 	;	 /*!< \brief PRI_163 */
			};
			 static reg_t<rw_t,0XE000E410, 0, 32> IPR4_D;	 /*!< \brief IPR4 register direct access */

			/*!
			\brief Interrupt Priority Register 5
			*/
			struct IPR5{
				 static reg_t<rw_t, 0XE000E414, 6, 2> PRI_200 	;	 /*!< \brief PRI_200 */
				 static reg_t<rw_t, 0XE000E414, 14, 2> PRI_201 	;	 /*!< \brief PRI_201 */
				 static reg_t<rw_t, 0XE000E414, 22, 2> PRI_202 	;	 /*!< \brief PRI_202 */
				 static reg_t<rw_t, 0XE000E414, 30, 2> PRI_203 	;	 /*!< \brief PRI_203 */
			};
			 static reg_t<rw_t,0XE000E414, 0, 32> IPR5_D;	 /*!< \brief IPR5 register direct access */

			/*!
			\brief Interrupt Priority Register 6
			*/
			struct IPR6{
				 static reg_t<rw_t, 0XE000E418, 6, 2> PRI_240 	;	 /*!< \brief PRI_240 */
				 static reg_t<rw_t, 0XE000E418, 14, 2> PRI_241 	;	 /*!< \brief PRI_241 */
				 static reg_t<rw_t, 0XE000E418, 22, 2> PRI_242 	;	 /*!< \brief PRI_242 */
				 static reg_t<rw_t, 0XE000E418, 30, 2> PRI_243 	;	 /*!< \brief PRI_243 */
			};
			 static reg_t<rw_t,0XE000E418, 0, 32> IPR6_D;	 /*!< \brief IPR6 register direct access */

			/*!
			\brief Interrupt Priority Register 7
			*/
			struct IPR7{
				 static reg_t<rw_t, 0XE000E41C, 6, 2> PRI_280 	;	 /*!< \brief PRI_280 */
				 static reg_t<rw_t, 0XE000E41C, 14, 2> PRI_281 	;	 /*!< \brief PRI_281 */
				 static reg_t<rw_t, 0XE000E41C, 22, 2> PRI_282 	;	 /*!< \brief PRI_282 */
				 static reg_t<rw_t, 0XE000E41C, 30, 2> PRI_283 	;	 /*!< \brief PRI_283 */
			};
			 static reg_t<rw_t,0XE000E41C, 0, 32> IPR7_D;	 /*!< \brief IPR7 register direct access */
		};

		/*!
		\brief DMA controller
		*/
		struct DMA{

			/*!
			\brief DMA interrupt status register (DMA_ISR)
			*/
			struct ISR{
				 static reg_t<ro_t, 0X40020000, 0, 1> GIF1 	;	 /*!< \brief Channel 1 Global interrupt flag */
				 static reg_t<ro_t, 0X40020000, 1, 1> TCIF1 	;	 /*!< \brief Channel 1 Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 2, 1> HTIF1 	;	 /*!< \brief Channel 1 Half Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 3, 1> TEIF1 	;	 /*!< \brief Channel 1 Transfer Error flag */
				 static reg_t<ro_t, 0X40020000, 4, 1> GIF2 	;	 /*!< \brief Channel 2 Global interrupt flag */
				 static reg_t<ro_t, 0X40020000, 5, 1> TCIF2 	;	 /*!< \brief Channel 2 Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 6, 1> HTIF2 	;	 /*!< \brief Channel 2 Half Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 7, 1> TEIF2 	;	 /*!< \brief Channel 2 Transfer Error flag */
				 static reg_t<ro_t, 0X40020000, 8, 1> GIF3 	;	 /*!< \brief Channel 3 Global interrupt flag */
				 static reg_t<ro_t, 0X40020000, 9, 1> TCIF3 	;	 /*!< \brief Channel 3 Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 10, 1> HTIF3 	;	 /*!< \brief Channel 3 Half Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 11, 1> TEIF3 	;	 /*!< \brief Channel 3 Transfer Error flag */
				 static reg_t<ro_t, 0X40020000, 12, 1> GIF4 	;	 /*!< \brief Channel 4 Global interrupt flag */
				 static reg_t<ro_t, 0X40020000, 13, 1> TCIF4 	;	 /*!< \brief Channel 4 Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 14, 1> HTIF4 	;	 /*!< \brief Channel 4 Half Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 15, 1> TEIF4 	;	 /*!< \brief Channel 4 Transfer Error flag */
				 static reg_t<ro_t, 0X40020000, 16, 1> GIF5 	;	 /*!< \brief Channel 5 Global interrupt flag */
				 static reg_t<ro_t, 0X40020000, 17, 1> TCIF5 	;	 /*!< \brief Channel 5 Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 18, 1> HTIF5 	;	 /*!< \brief Channel 5 Half Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 19, 1> TEIF5 	;	 /*!< \brief Channel 5 Transfer Error flag */
				 static reg_t<ro_t, 0X40020000, 20, 1> GIF6 	;	 /*!< \brief Channel 6 Global interrupt flag */
				 static reg_t<ro_t, 0X40020000, 21, 1> TCIF6 	;	 /*!< \brief Channel 6 Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 22, 1> HTIF6 	;	 /*!< \brief Channel 6 Half Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 23, 1> TEIF6 	;	 /*!< \brief Channel 6 Transfer Error flag */
				 static reg_t<ro_t, 0X40020000, 24, 1> GIF7 	;	 /*!< \brief Channel 7 Global interrupt flag */
				 static reg_t<ro_t, 0X40020000, 25, 1> TCIF7 	;	 /*!< \brief Channel 7 Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 26, 1> HTIF7 	;	 /*!< \brief Channel 7 Half Transfer Complete flag */
				 static reg_t<ro_t, 0X40020000, 27, 1> TEIF7 	;	 /*!< \brief Channel 7 Transfer Error flag */
			};
			 static reg_t<rw_t,0X40020000, 0, 32> ISR_D;	 /*!< \brief ISR register direct access */

			/*!
			\brief DMA interrupt flag clear register (DMA_IFCR)
			*/
			struct IFCR{
				 static reg_t<wo_t, 0X40020004, 0, 1> CGIF1 	;	 /*!< \brief Channel 1 Global interrupt clear */
				 static reg_t<wo_t, 0X40020004, 1, 1> CTCIF1 	;	 /*!< \brief Channel 1 Transfer Complete clear */
				 static reg_t<wo_t, 0X40020004, 2, 1> CHTIF1 	;	 /*!< \brief Channel 1 Half Transfer clear */
				 static reg_t<wo_t, 0X40020004, 3, 1> CTEIF1 	;	 /*!< \brief Channel 1 Transfer Error clear */
				 static reg_t<wo_t, 0X40020004, 4, 1> CGIF2 	;	 /*!< \brief Channel 2 Global interrupt clear */
				 static reg_t<wo_t, 0X40020004, 5, 1> CTCIF2 	;	 /*!< \brief Channel 2 Transfer Complete clear */
				 static reg_t<wo_t, 0X40020004, 6, 1> CHTIF2 	;	 /*!< \brief Channel 2 Half Transfer clear */
				 static reg_t<wo_t, 0X40020004, 7, 1> CTEIF2 	;	 /*!< \brief Channel 2 Transfer Error clear */
				 static reg_t<wo_t, 0X40020004, 8, 1> CGIF3 	;	 /*!< \brief Channel 3 Global interrupt clear */
				 static reg_t<wo_t, 0X40020004, 9, 1> CTCIF3 	;	 /*!< \brief Channel 3 Transfer Complete clear */
				 static reg_t<wo_t, 0X40020004, 10, 1> CHTIF3 	;	 /*!< \brief Channel 3 Half Transfer clear */
				 static reg_t<wo_t, 0X40020004, 11, 1> CTEIF3 	;	 /*!< \brief Channel 3 Transfer Error clear */
				 static reg_t<wo_t, 0X40020004, 12, 1> CGIF4 	;	 /*!< \brief Channel 4 Global interrupt clear */
				 static reg_t<wo_t, 0X40020004, 13, 1> CTCIF4 	;	 /*!< \brief Channel 4 Transfer Complete clear */
				 static reg_t<wo_t, 0X40020004, 14, 1> CHTIF4 	;	 /*!< \brief Channel 4 Half Transfer clear */
				 static reg_t<wo_t, 0X40020004, 15, 1> CTEIF4 	;	 /*!< \brief Channel 4 Transfer Error clear */
				 static reg_t<wo_t, 0X40020004, 16, 1> CGIF5 	;	 /*!< \brief Channel 5 Global interrupt clear */
				 static reg_t<wo_t, 0X40020004, 17, 1> CTCIF5 	;	 /*!< \brief Channel 5 Transfer Complete clear */
				 static reg_t<wo_t, 0X40020004, 18, 1> CHTIF5 	;	 /*!< \brief Channel 5 Half Transfer clear */
				 static reg_t<wo_t, 0X40020004, 19, 1> CTEIF5 	;	 /*!< \brief Channel 5 Transfer Error clear */
				 static reg_t<wo_t, 0X40020004, 20, 1> CGIF6 	;	 /*!< \brief Channel 6 Global interrupt clear */
				 static reg_t<wo_t, 0X40020004, 21, 1> CTCIF6 	;	 /*!< \brief Channel 6 Transfer Complete clear */
				 static reg_t<wo_t, 0X40020004, 22, 1> CHTIF6 	;	 /*!< \brief Channel 6 Half Transfer clear */
				 static reg_t<wo_t, 0X40020004, 23, 1> CTEIF6 	;	 /*!< \brief Channel 6 Transfer Error clear */
				 static reg_t<wo_t, 0X40020004, 24, 1> CGIF7 	;	 /*!< \brief Channel 7 Global interrupt clear */
				 static reg_t<wo_t, 0X40020004, 25, 1> CTCIF7 	;	 /*!< \brief Channel 7 Transfer Complete clear */
				 static reg_t<wo_t, 0X40020004, 26, 1> CHTIF7 	;	 /*!< \brief Channel 7 Half Transfer clear */
				 static reg_t<wo_t, 0X40020004, 27, 1> CTEIF7 	;	 /*!< \brief Channel 7 Transfer Error clear */
			};
			 static reg_t<rw_t,0X40020004, 0, 32> IFCR_D;	 /*!< \brief IFCR register direct access */

			/*!
			\brief DMA channel configuration register (DMA_CCR)
			*/
			struct CCR1{
				 static reg_t<rw_t, 0X40020008, 0, 1> EN 	;	 /*!< \brief Channel enable */
				 static reg_t<rw_t, 0X40020008, 1, 1> TCIE 	;	 /*!< \brief Transfer complete interrupt enable */
				 static reg_t<rw_t, 0X40020008, 2, 1> HTIE 	;	 /*!< \brief Half Transfer interrupt enable */
				 static reg_t<rw_t, 0X40020008, 3, 1> TEIE 	;	 /*!< \brief Transfer error interrupt enable */
				 static reg_t<rw_t, 0X40020008, 4, 1> DIR 	;	 /*!< \brief Data transfer direction */
				 static reg_t<rw_t, 0X40020008, 5, 1> CIRC 	;	 /*!< \brief Circular mode */
				 static reg_t<rw_t, 0X40020008, 6, 1> PINC 	;	 /*!< \brief Peripheral increment mode */
				 static reg_t<rw_t, 0X40020008, 7, 1> MINC 	;	 /*!< \brief Memory increment mode */
				 static reg_t<rw_t, 0X40020008, 8, 2> PSIZE 	;	 /*!< \brief Peripheral size */
				 static reg_t<rw_t, 0X40020008, 10, 2> MSIZE 	;	 /*!< \brief Memory size */
				 static reg_t<rw_t, 0X40020008, 12, 2> PL 	;	 /*!< \brief Channel Priority level */
				 static reg_t<rw_t, 0X40020008, 14, 1> MEM2MEM 	;	 /*!< \brief Memory to memory mode */
			};
			 static reg_t<rw_t,0X40020008, 0, 32> CCR1_D;	 /*!< \brief CCR1 register direct access */

			/*!
			\brief DMA channel 1 number of data register
			*/
			struct CNDTR1{
				 static reg_t<rw_t, 0X4002000C, 0, 16> NDT 	;	 /*!< \brief Number of data to transfer */
			};

			/*!
			\brief DMA channel 1 peripheral address register
			*/
			struct CPAR1{
				 static reg_t<rw_t, 0X40020010, 0, 32> PA 	;	 /*!< \brief Peripheral address */
			};

			/*!
			\brief DMA channel 1 memory address register
			*/
			struct CMAR1{
				 static reg_t<rw_t, 0X40020014, 0, 32> MA 	;	 /*!< \brief Memory address */
			};

			/*!
			\brief DMA channel configuration register (DMA_CCR)
			*/
			struct CCR2{
				 static reg_t<rw_t, 0X4002001C, 0, 1> EN 	;	 /*!< \brief Channel enable */
				 static reg_t<rw_t, 0X4002001C, 1, 1> TCIE 	;	 /*!< \brief Transfer complete interrupt enable */
				 static reg_t<rw_t, 0X4002001C, 2, 1> HTIE 	;	 /*!< \brief Half Transfer interrupt enable */
				 static reg_t<rw_t, 0X4002001C, 3, 1> TEIE 	;	 /*!< \brief Transfer error interrupt enable */
				 static reg_t<rw_t, 0X4002001C, 4, 1> DIR 	;	 /*!< \brief Data transfer direction */
				 static reg_t<rw_t, 0X4002001C, 5, 1> CIRC 	;	 /*!< \brief Circular mode */
				 static reg_t<rw_t, 0X4002001C, 6, 1> PINC 	;	 /*!< \brief Peripheral increment mode */
				 static reg_t<rw_t, 0X4002001C, 7, 1> MINC 	;	 /*!< \brief Memory increment mode */
				 static reg_t<rw_t, 0X4002001C, 8, 2> PSIZE 	;	 /*!< \brief Peripheral size */
				 static reg_t<rw_t, 0X4002001C, 10, 2> MSIZE 	;	 /*!< \brief Memory size */
				 static reg_t<rw_t, 0X4002001C, 12, 2> PL 	;	 /*!< \brief Channel Priority level */
				 static reg_t<rw_t, 0X4002001C, 14, 1> MEM2MEM 	;	 /*!< \brief Memory to memory mode */
			};
			 static reg_t<rw_t,0X4002001C, 0, 32> CCR2_D;	 /*!< \brief CCR2 register direct access */

			/*!
			\brief DMA channel 2 number of data register
			*/
			struct CNDTR2{
				 static reg_t<rw_t, 0X40020020, 0, 16> NDT 	;	 /*!< \brief Number of data to transfer */
			};

			/*!
			\brief DMA channel 2 peripheral address register
			*/
			struct CPAR2{
				 static reg_t<rw_t, 0X40020024, 0, 32> PA 	;	 /*!< \brief Peripheral address */
			};

			/*!
			\brief DMA channel 2 memory address register
			*/
			struct CMAR2{
				 static reg_t<rw_t, 0X40020028, 0, 32> MA 	;	 /*!< \brief Memory address */
			};

			/*!
			\brief DMA channel configuration register (DMA_CCR)
			*/
			struct CCR3{
				 static reg_t<rw_t, 0X40020030, 0, 1> EN 	;	 /*!< \brief Channel enable */
				 static reg_t<rw_t, 0X40020030, 1, 1> TCIE 	;	 /*!< \brief Transfer complete interrupt enable */
				 static reg_t<rw_t, 0X40020030, 2, 1> HTIE 	;	 /*!< \brief Half Transfer interrupt enable */
				 static reg_t<rw_t, 0X40020030, 3, 1> TEIE 	;	 /*!< \brief Transfer error interrupt enable */
				 static reg_t<rw_t, 0X40020030, 4, 1> DIR 	;	 /*!< \brief Data transfer direction */
				 static reg_t<rw_t, 0X40020030, 5, 1> CIRC 	;	 /*!< \brief Circular mode */
				 static reg_t<rw_t, 0X40020030, 6, 1> PINC 	;	 /*!< \brief Peripheral increment mode */
				 static reg_t<rw_t, 0X40020030, 7, 1> MINC 	;	 /*!< \brief Memory increment mode */
				 static reg_t<rw_t, 0X40020030, 8, 2> PSIZE 	;	 /*!< \brief Peripheral size */
				 static reg_t<rw_t, 0X40020030, 10, 2> MSIZE 	;	 /*!< \brief Memory size */
				 static reg_t<rw_t, 0X40020030, 12, 2> PL 	;	 /*!< \brief Channel Priority level */
				 static reg_t<rw_t, 0X40020030, 14, 1> MEM2MEM 	;	 /*!< \brief Memory to memory mode */
			};
			 static reg_t<rw_t,0X40020030, 0, 32> CCR3_D;	 /*!< \brief CCR3 register direct access */

			/*!
			\brief DMA channel 3 number of data register
			*/
			struct CNDTR3{
				 static reg_t<rw_t, 0X40020034, 0, 16> NDT 	;	 /*!< \brief Number of data to transfer */
			};

			/*!
			\brief DMA channel 3 peripheral address register
			*/
			struct CPAR3{
				 static reg_t<rw_t, 0X40020038, 0, 32> PA 	;	 /*!< \brief Peripheral address */
			};

			/*!
			\brief DMA channel 3 memory address register
			*/
			struct CMAR3{
				 static reg_t<rw_t, 0X4002003C, 0, 32> MA 	;	 /*!< \brief Memory address */
			};

			/*!
			\brief DMA channel configuration register (DMA_CCR)
			*/
			struct CCR4{
				 static reg_t<rw_t, 0X40020044, 0, 1> EN 	;	 /*!< \brief Channel enable */
				 static reg_t<rw_t, 0X40020044, 1, 1> TCIE 	;	 /*!< \brief Transfer complete interrupt enable */
				 static reg_t<rw_t, 0X40020044, 2, 1> HTIE 	;	 /*!< \brief Half Transfer interrupt enable */
				 static reg_t<rw_t, 0X40020044, 3, 1> TEIE 	;	 /*!< \brief Transfer error interrupt enable */
				 static reg_t<rw_t, 0X40020044, 4, 1> DIR 	;	 /*!< \brief Data transfer direction */
				 static reg_t<rw_t, 0X40020044, 5, 1> CIRC 	;	 /*!< \brief Circular mode */
				 static reg_t<rw_t, 0X40020044, 6, 1> PINC 	;	 /*!< \brief Peripheral increment mode */
				 static reg_t<rw_t, 0X40020044, 7, 1> MINC 	;	 /*!< \brief Memory increment mode */
				 static reg_t<rw_t, 0X40020044, 8, 2> PSIZE 	;	 /*!< \brief Peripheral size */
				 static reg_t<rw_t, 0X40020044, 10, 2> MSIZE 	;	 /*!< \brief Memory size */
				 static reg_t<rw_t, 0X40020044, 12, 2> PL 	;	 /*!< \brief Channel Priority level */
				 static reg_t<rw_t, 0X40020044, 14, 1> MEM2MEM 	;	 /*!< \brief Memory to memory mode */
			};
			 static reg_t<rw_t,0X40020044, 0, 32> CCR4_D;	 /*!< \brief CCR4 register direct access */

			/*!
			\brief DMA channel 4 number of data register
			*/
			struct CNDTR4{
				 static reg_t<rw_t, 0X40020048, 0, 16> NDT 	;	 /*!< \brief Number of data to transfer */
			};

			/*!
			\brief DMA channel 4 peripheral address register
			*/
			struct CPAR4{
				 static reg_t<rw_t, 0X4002004C, 0, 32> PA 	;	 /*!< \brief Peripheral address */
			};

			/*!
			\brief DMA channel 4 memory address register
			*/
			struct CMAR4{
				 static reg_t<rw_t, 0X40020050, 0, 32> MA 	;	 /*!< \brief Memory address */
			};

			/*!
			\brief DMA channel configuration register (DMA_CCR)
			*/
			struct CCR5{
				 static reg_t<rw_t, 0X40020058, 0, 1> EN 	;	 /*!< \brief Channel enable */
				 static reg_t<rw_t, 0X40020058, 1, 1> TCIE 	;	 /*!< \brief Transfer complete interrupt enable */
				 static reg_t<rw_t, 0X40020058, 2, 1> HTIE 	;	 /*!< \brief Half Transfer interrupt enable */
				 static reg_t<rw_t, 0X40020058, 3, 1> TEIE 	;	 /*!< \brief Transfer error interrupt enable */
				 static reg_t<rw_t, 0X40020058, 4, 1> DIR 	;	 /*!< \brief Data transfer direction */
				 static reg_t<rw_t, 0X40020058, 5, 1> CIRC 	;	 /*!< \brief Circular mode */
				 static reg_t<rw_t, 0X40020058, 6, 1> PINC 	;	 /*!< \brief Peripheral increment mode */
				 static reg_t<rw_t, 0X40020058, 7, 1> MINC 	;	 /*!< \brief Memory increment mode */
				 static reg_t<rw_t, 0X40020058, 8, 2> PSIZE 	;	 /*!< \brief Peripheral size */
				 static reg_t<rw_t, 0X40020058, 10, 2> MSIZE 	;	 /*!< \brief Memory size */
				 static reg_t<rw_t, 0X40020058, 12, 2> PL 	;	 /*!< \brief Channel Priority level */
				 static reg_t<rw_t, 0X40020058, 14, 1> MEM2MEM 	;	 /*!< \brief Memory to memory mode */
			};
			 static reg_t<rw_t,0X40020058, 0, 32> CCR5_D;	 /*!< \brief CCR5 register direct access */

			/*!
			\brief DMA channel 5 number of data register
			*/
			struct CNDTR5{
				 static reg_t<rw_t, 0X4002005C, 0, 16> NDT 	;	 /*!< \brief Number of data to transfer */
			};

			/*!
			\brief DMA channel 5 peripheral address register
			*/
			struct CPAR5{
				 static reg_t<rw_t, 0X40020060, 0, 32> PA 	;	 /*!< \brief Peripheral address */
			};

			/*!
			\brief DMA channel 5 memory address register
			*/
			struct CMAR5{
				 static reg_t<rw_t, 0X40020064, 0, 32> MA 	;	 /*!< \brief Memory address */
			};

			/*!
			\brief DMA channel configuration register (DMA_CCR)
			*/
			struct CCR6{
				 static reg_t<rw_t, 0X4002006C, 0, 1> EN 	;	 /*!< \brief Channel enable */
				 static reg_t<rw_t, 0X4002006C, 1, 1> TCIE 	;	 /*!< \brief Transfer complete interrupt enable */
				 static reg_t<rw_t, 0X4002006C, 2, 1> HTIE 	;	 /*!< \brief Half Transfer interrupt enable */
				 static reg_t<rw_t, 0X4002006C, 3, 1> TEIE 	;	 /*!< \brief Transfer error interrupt enable */
				 static reg_t<rw_t, 0X4002006C, 4, 1> DIR 	;	 /*!< \brief Data transfer direction */
				 static reg_t<rw_t, 0X4002006C, 5, 1> CIRC 	;	 /*!< \brief Circular mode */
				 static reg_t<rw_t, 0X4002006C, 6, 1> PINC 	;	 /*!< \brief Peripheral increment mode */
				 static reg_t<rw_t, 0X4002006C, 7, 1> MINC 	;	 /*!< \brief Memory increment mode */
				 static reg_t<rw_t, 0X4002006C, 8, 2> PSIZE 	;	 /*!< \brief Peripheral size */
				 static reg_t<rw_t, 0X4002006C, 10, 2> MSIZE 	;	 /*!< \brief Memory size */
				 static reg_t<rw_t, 0X4002006C, 12, 2> PL 	;	 /*!< \brief Channel Priority level */
				 static reg_t<rw_t, 0X4002006C, 14, 1> MEM2MEM 	;	 /*!< \brief Memory to memory mode */
			};
			 static reg_t<rw_t,0X4002006C, 0, 32> CCR6_D;	 /*!< \brief CCR6 register direct access */

			/*!
			\brief DMA channel 6 number of data register
			*/
			struct CNDTR6{
				 static reg_t<rw_t, 0X40020070, 0, 16> NDT 	;	 /*!< \brief Number of data to transfer */
			};

			/*!
			\brief DMA channel 6 peripheral address register
			*/
			struct CPAR6{
				 static reg_t<rw_t, 0X40020074, 0, 32> PA 	;	 /*!< \brief Peripheral address */
			};

			/*!
			\brief DMA channel 6 memory address register
			*/
			struct CMAR6{
				 static reg_t<rw_t, 0X40020078, 0, 32> MA 	;	 /*!< \brief Memory address */
			};

			/*!
			\brief DMA channel configuration register (DMA_CCR)
			*/
			struct CCR7{
				 static reg_t<rw_t, 0X40020080, 0, 1> EN 	;	 /*!< \brief Channel enable */
				 static reg_t<rw_t, 0X40020080, 1, 1> TCIE 	;	 /*!< \brief Transfer complete interrupt enable */
				 static reg_t<rw_t, 0X40020080, 2, 1> HTIE 	;	 /*!< \brief Half Transfer interrupt enable */
				 static reg_t<rw_t, 0X40020080, 3, 1> TEIE 	;	 /*!< \brief Transfer error interrupt enable */
				 static reg_t<rw_t, 0X40020080, 4, 1> DIR 	;	 /*!< \brief Data transfer direction */
				 static reg_t<rw_t, 0X40020080, 5, 1> CIRC 	;	 /*!< \brief Circular mode */
				 static reg_t<rw_t, 0X40020080, 6, 1> PINC 	;	 /*!< \brief Peripheral increment mode */
				 static reg_t<rw_t, 0X40020080, 7, 1> MINC 	;	 /*!< \brief Memory increment mode */
				 static reg_t<rw_t, 0X40020080, 8, 2> PSIZE 	;	 /*!< \brief Peripheral size */
				 static reg_t<rw_t, 0X40020080, 10, 2> MSIZE 	;	 /*!< \brief Memory size */
				 static reg_t<rw_t, 0X40020080, 12, 2> PL 	;	 /*!< \brief Channel Priority level */
				 static reg_t<rw_t, 0X40020080, 14, 1> MEM2MEM 	;	 /*!< \brief Memory to memory mode */
			};
			 static reg_t<rw_t,0X40020080, 0, 32> CCR7_D;	 /*!< \brief CCR7 register direct access */

			/*!
			\brief DMA channel 7 number of data register
			*/
			struct CNDTR7{
				 static reg_t<rw_t, 0X40020084, 0, 16> NDT 	;	 /*!< \brief Number of data to transfer */
			};

			/*!
			\brief DMA channel 7 peripheral address register
			*/
			struct CPAR7{
				 static reg_t<rw_t, 0X40020088, 0, 32> PA 	;	 /*!< \brief Peripheral address */
			};

			/*!
			\brief DMA channel 7 memory address register
			*/
			struct CMAR7{
				 static reg_t<rw_t, 0X4002008C, 0, 32> MA 	;	 /*!< \brief Memory address */
			};
		};

		/*!
		\brief Reset and clock control
		*/
		struct RCC{

			/*!
			\brief Clock control register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40021000, 0, 1> HSION 	;	 /*!< \brief Internal High Speed clock enable */
				 static reg_t<ro_t, 0X40021000, 1, 1> HSIRDY 	;	 /*!< \brief Internal High Speed clock ready flag */
				 static reg_t<rw_t, 0X40021000, 3, 5> HSITRIM 	;	 /*!< \brief Internal High Speed clock trimming */
				 static reg_t<ro_t, 0X40021000, 8, 8> HSICAL 	;	 /*!< \brief Internal High Speed clock Calibration */
				 static reg_t<rw_t, 0X40021000, 16, 1> HSEON 	;	 /*!< \brief External High Speed clock enable */
				 static reg_t<ro_t, 0X40021000, 17, 1> HSERDY 	;	 /*!< \brief External High Speed clock ready flag */
				 static reg_t<rw_t, 0X40021000, 18, 1> HSEBYP 	;	 /*!< \brief External High Speed clock Bypass */
				 static reg_t<rw_t, 0X40021000, 19, 1> CSSON 	;	 /*!< \brief Clock Security System enable */
				 static reg_t<rw_t, 0X40021000, 24, 1> PLLON 	;	 /*!< \brief PLL enable */
				 static reg_t<ro_t, 0X40021000, 25, 1> PLLRDY 	;	 /*!< \brief PLL clock ready flag */
			};
			 static reg_t<rw_t,0X40021000, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief Clock configuration register (RCC_CFGR)
			*/
			struct CFGR{
				 static reg_t<rw_t, 0X40021004, 0, 2> SW 	;	 /*!< \brief System clock Switch */
				 static reg_t<ro_t, 0X40021004, 2, 2> SWS 	;	 /*!< \brief System Clock Switch Status */
				 static reg_t<rw_t, 0X40021004, 4, 4> HPRE 	;	 /*!< \brief AHB prescaler */
				 static reg_t<rw_t, 0X40021004, 8, 3> PPRE 	;	 /*!< \brief APB Low speed prescaler (APB1) */
				 static reg_t<rw_t, 0X40021004, 14, 1> ADCPRE 	;	 /*!< \brief ADC prescaler */
				 static reg_t<rw_t, 0X40021004, 15, 2> PLLSRC 	;	 /*!< \brief PLL input clock source */
				 static reg_t<rw_t, 0X40021004, 17, 1> PLLXTPRE 	;	 /*!< \brief HSE divider for PLL entry */
				 static reg_t<rw_t, 0X40021004, 18, 4> PLLMUL 	;	 /*!< \brief PLL Multiplication Factor */
				 static reg_t<rw_t, 0X40021004, 24, 3> MCO 	;	 /*!< \brief Microcontroller clock output */
				 static reg_t<rw_t, 0X40021004, 28, 3> MCOPRE 	;	 /*!< \brief Microcontroller Clock Output Prescaler */
				 static reg_t<rw_t, 0X40021004, 31, 1> PLLNODIV 	;	 /*!< \brief PLL clock not divided for MCO */
			};
			 static reg_t<rw_t,0X40021004, 0, 32> CFGR_D;	 /*!< \brief CFGR register direct access */

			/*!
			\brief Clock interrupt register (RCC_CIR)
			*/
			struct CIR{
				 static reg_t<ro_t, 0X40021008, 0, 1> LSIRDYF 	;	 /*!< \brief LSI Ready Interrupt flag */
				 static reg_t<ro_t, 0X40021008, 1, 1> LSERDYF 	;	 /*!< \brief LSE Ready Interrupt flag */
				 static reg_t<ro_t, 0X40021008, 2, 1> HSIRDYF 	;	 /*!< \brief HSI Ready Interrupt flag */
				 static reg_t<ro_t, 0X40021008, 3, 1> HSERDYF 	;	 /*!< \brief HSE Ready Interrupt flag */
				 static reg_t<ro_t, 0X40021008, 4, 1> PLLRDYF 	;	 /*!< \brief PLL Ready Interrupt flag */
				 static reg_t<ro_t, 0X40021008, 5, 1> HSI14RDYF 	;	 /*!< \brief HSI14 ready interrupt flag */
				 static reg_t<ro_t, 0X40021008, 6, 1> HSI48RDYF 	;	 /*!< \brief HSI48 ready interrupt flag */
				 static reg_t<ro_t, 0X40021008, 7, 1> CSSF 	;	 /*!< \brief Clock Security System Interrupt flag */
				 static reg_t<rw_t, 0X40021008, 8, 1> LSIRDYIE 	;	 /*!< \brief LSI Ready Interrupt Enable */
				 static reg_t<rw_t, 0X40021008, 9, 1> LSERDYIE 	;	 /*!< \brief LSE Ready Interrupt Enable */
				 static reg_t<rw_t, 0X40021008, 10, 1> HSIRDYIE 	;	 /*!< \brief HSI Ready Interrupt Enable */
				 static reg_t<rw_t, 0X40021008, 11, 1> HSERDYIE 	;	 /*!< \brief HSE Ready Interrupt Enable */
				 static reg_t<rw_t, 0X40021008, 12, 1> PLLRDYIE 	;	 /*!< \brief PLL Ready Interrupt Enable */
				 static reg_t<rw_t, 0X40021008, 13, 1> HSI14RDYE 	;	 /*!< \brief HSI14 ready interrupt enable */
				 static reg_t<rw_t, 0X40021008, 14, 1> HSI48RDYIE 	;	 /*!< \brief HSI48 ready interrupt enable */
				 static reg_t<wo_t, 0X40021008, 16, 1> LSIRDYC 	;	 /*!< \brief LSI Ready Interrupt Clear */
				 static reg_t<wo_t, 0X40021008, 17, 1> LSERDYC 	;	 /*!< \brief LSE Ready Interrupt Clear */
				 static reg_t<wo_t, 0X40021008, 18, 1> HSIRDYC 	;	 /*!< \brief HSI Ready Interrupt Clear */
				 static reg_t<wo_t, 0X40021008, 19, 1> HSERDYC 	;	 /*!< \brief HSE Ready Interrupt Clear */
				 static reg_t<wo_t, 0X40021008, 20, 1> PLLRDYC 	;	 /*!< \brief PLL Ready Interrupt Clear */
				 static reg_t<wo_t, 0X40021008, 21, 1> HSI14RDYC 	;	 /*!< \brief HSI 14 MHz Ready Interrupt Clear */
				 static reg_t<wo_t, 0X40021008, 22, 1> HSI48RDYC 	;	 /*!< \brief HSI48 Ready Interrupt Clear */
				 static reg_t<wo_t, 0X40021008, 23, 1> CSSC 	;	 /*!< \brief Clock security system interrupt clear */
			};
			 static reg_t<rw_t,0X40021008, 0, 32> CIR_D;	 /*!< \brief CIR register direct access */

			/*!
			\brief APB2 peripheral reset register (RCC_APB2RSTR)
			*/
			struct APB2RSTR{
				 static reg_t<rw_t, 0X4002100C, 0, 1> SYSCFGRST 	;	 /*!< \brief SYSCFG and COMP reset */
				 static reg_t<rw_t, 0X4002100C, 9, 1> ADCRST 	;	 /*!< \brief ADC interface reset */
				 static reg_t<rw_t, 0X4002100C, 11, 1> TIM1RST 	;	 /*!< \brief TIM1 timer reset */
				 static reg_t<rw_t, 0X4002100C, 12, 1> SPI1RST 	;	 /*!< \brief SPI 1 reset */
				 static reg_t<rw_t, 0X4002100C, 14, 1> USART1RST 	;	 /*!< \brief USART1 reset */
				 static reg_t<rw_t, 0X4002100C, 16, 1> TIM15RST 	;	 /*!< \brief TIM15 timer reset */
				 static reg_t<rw_t, 0X4002100C, 17, 1> TIM16RST 	;	 /*!< \brief TIM16 timer reset */
				 static reg_t<rw_t, 0X4002100C, 18, 1> TIM17RST 	;	 /*!< \brief TIM17 timer reset */
				 static reg_t<rw_t, 0X4002100C, 22, 1> DBGMCURST 	;	 /*!< \brief Debug MCU reset */
			};
			 static reg_t<rw_t,0X4002100C, 0, 32> APB2RSTR_D;	 /*!< \brief APB2RSTR register direct access */

			/*!
			\brief APB1 peripheral reset register (RCC_APB1RSTR)
			*/
			struct APB1RSTR{
				 static reg_t<rw_t, 0X40021010, 1, 1> TIM3RST 	;	 /*!< \brief Timer 3 reset */
				 static reg_t<rw_t, 0X40021010, 4, 1> TIM6RST 	;	 /*!< \brief Timer 6 reset */
				 static reg_t<rw_t, 0X40021010, 8, 1> TIM14RST 	;	 /*!< \brief Timer 14 reset */
				 static reg_t<rw_t, 0X40021010, 11, 1> WWDGRST 	;	 /*!< \brief Window watchdog reset */
				 static reg_t<rw_t, 0X40021010, 14, 1> SPI2RST 	;	 /*!< \brief SPI2 reset */
				 static reg_t<rw_t, 0X40021010, 17, 1> USART2RST 	;	 /*!< \brief USART 2 reset */
				 static reg_t<rw_t, 0X40021010, 21, 1> I2C1RST 	;	 /*!< \brief I2C1 reset */
				 static reg_t<rw_t, 0X40021010, 22, 1> I2C2RST 	;	 /*!< \brief I2C2 reset */
				 static reg_t<rw_t, 0X40021010, 28, 1> PWRRST 	;	 /*!< \brief Power interface reset */
			};
			 static reg_t<rw_t,0X40021010, 0, 32> APB1RSTR_D;	 /*!< \brief APB1RSTR register direct access */

			/*!
			\brief AHB Peripheral Clock enable register (RCC_AHBENR)
			*/
			struct AHBENR{
				 static reg_t<rw_t, 0X40021014, 0, 1> DMAEN 	;	 /*!< \brief DMA1 clock enable */
				 static reg_t<rw_t, 0X40021014, 2, 1> SRAMEN 	;	 /*!< \brief SRAM interface clock enable */
				 static reg_t<rw_t, 0X40021014, 4, 1> FLITFEN 	;	 /*!< \brief FLITF clock enable */
				 static reg_t<rw_t, 0X40021014, 6, 1> CRCEN 	;	 /*!< \brief CRC clock enable */
				 static reg_t<rw_t, 0X40021014, 17, 1> IOPAEN 	;	 /*!< \brief I/O port A clock enable */
				 static reg_t<rw_t, 0X40021014, 18, 1> IOPBEN 	;	 /*!< \brief I/O port B clock enable */
				 static reg_t<rw_t, 0X40021014, 19, 1> IOPCEN 	;	 /*!< \brief I/O port C clock enable */
				 static reg_t<rw_t, 0X40021014, 20, 1> IOPDEN 	;	 /*!< \brief I/O port D clock enable */
				 static reg_t<rw_t, 0X40021014, 22, 1> IOPFEN 	;	 /*!< \brief I/O port F clock enable */
			};
			 static reg_t<rw_t,0X40021014, 0, 32> AHBENR_D;	 /*!< \brief AHBENR register direct access */

			/*!
			\brief APB2 peripheral clock enable register (RCC_APB2ENR)
			*/
			struct APB2ENR{
				 static reg_t<rw_t, 0X40021018, 0, 1> SYSCFGEN 	;	 /*!< \brief SYSCFG clock enable */
				 static reg_t<rw_t, 0X40021018, 9, 1> ADCEN 	;	 /*!< \brief ADC 1 interface clock enable */
				 static reg_t<rw_t, 0X40021018, 11, 1> TIM1EN 	;	 /*!< \brief TIM1 Timer clock enable */
				 static reg_t<rw_t, 0X40021018, 12, 1> SPI1EN 	;	 /*!< \brief SPI 1 clock enable */
				 static reg_t<rw_t, 0X40021018, 14, 1> USART1EN 	;	 /*!< \brief USART1 clock enable */
				 static reg_t<rw_t, 0X40021018, 16, 1> TIM15EN 	;	 /*!< \brief TIM15 timer clock enable */
				 static reg_t<rw_t, 0X40021018, 17, 1> TIM16EN 	;	 /*!< \brief TIM16 timer clock enable */
				 static reg_t<rw_t, 0X40021018, 18, 1> TIM17EN 	;	 /*!< \brief TIM17 timer clock enable */
				 static reg_t<rw_t, 0X40021018, 22, 1> DBGMCUEN 	;	 /*!< \brief MCU debug module clock enable */
			};
			 static reg_t<rw_t,0X40021018, 0, 32> APB2ENR_D;	 /*!< \brief APB2ENR register direct access */

			/*!
			\brief APB1 peripheral clock enable register (RCC_APB1ENR)
			*/
			struct APB1ENR{
				 static reg_t<rw_t, 0X4002101C, 1, 1> TIM3EN 	;	 /*!< \brief Timer 3 clock enable */
				 static reg_t<rw_t, 0X4002101C, 4, 1> TIM6EN 	;	 /*!< \brief Timer 6 clock enable */
				 static reg_t<rw_t, 0X4002101C, 8, 1> TIM14EN 	;	 /*!< \brief Timer 14 clock enable */
				 static reg_t<rw_t, 0X4002101C, 11, 1> WWDGEN 	;	 /*!< \brief Window watchdog clock enable */
				 static reg_t<rw_t, 0X4002101C, 14, 1> SPI2EN 	;	 /*!< \brief SPI 2 clock enable */
				 static reg_t<rw_t, 0X4002101C, 17, 1> USART2EN 	;	 /*!< \brief USART 2 clock enable */
				 static reg_t<rw_t, 0X4002101C, 21, 1> I2C1EN 	;	 /*!< \brief I2C 1 clock enable */
				 static reg_t<rw_t, 0X4002101C, 22, 1> I2C2EN 	;	 /*!< \brief I2C 2 clock enable */
				 static reg_t<rw_t, 0X4002101C, 28, 1> PWREN 	;	 /*!< \brief Power interface clock enable */
			};
			 static reg_t<rw_t,0X4002101C, 0, 32> APB1ENR_D;	 /*!< \brief APB1ENR register direct access */

			/*!
			\brief Backup domain control register (RCC_BDCR)
			*/
			struct BDCR{
				 static reg_t<rw_t, 0X40021020, 0, 1> LSEON 	;	 /*!< \brief External Low Speed oscillator enable */
				 static reg_t<ro_t, 0X40021020, 1, 1> LSERDY 	;	 /*!< \brief External Low Speed oscillator ready */
				 static reg_t<rw_t, 0X40021020, 2, 1> LSEBYP 	;	 /*!< \brief External Low Speed oscillator bypass */
				 static reg_t<rw_t, 0X40021020, 3, 2> LSEDRV 	;	 /*!< \brief LSE oscillator drive capability */
				 static reg_t<rw_t, 0X40021020, 8, 2> RTCSEL 	;	 /*!< \brief RTC clock source selection */
				 static reg_t<rw_t, 0X40021020, 15, 1> RTCEN 	;	 /*!< \brief RTC clock enable */
				 static reg_t<rw_t, 0X40021020, 16, 1> BDRST 	;	 /*!< \brief Backup domain software reset */
			};
			 static reg_t<rw_t,0X40021020, 0, 32> BDCR_D;	 /*!< \brief BDCR register direct access */

			/*!
			\brief Control/status register (RCC_CSR)
			*/
			struct CSR{
				 static reg_t<rw_t, 0X40021024, 0, 1> LSION 	;	 /*!< \brief Internal low speed oscillator enable */
				 static reg_t<ro_t, 0X40021024, 1, 1> LSIRDY 	;	 /*!< \brief Internal low speed oscillator ready */
				 static reg_t<rw_t, 0X40021024, 24, 1> RMVF 	;	 /*!< \brief Remove reset flag */
				 static reg_t<rw_t, 0X40021024, 25, 1> OBLRSTF 	;	 /*!< \brief Option byte loader reset flag */
				 static reg_t<rw_t, 0X40021024, 26, 1> PINRSTF 	;	 /*!< \brief PIN reset flag */
				 static reg_t<rw_t, 0X40021024, 27, 1> PORRSTF 	;	 /*!< \brief POR/PDR reset flag */
				 static reg_t<rw_t, 0X40021024, 28, 1> SFTRSTF 	;	 /*!< \brief Software reset flag */
				 static reg_t<rw_t, 0X40021024, 29, 1> IWDGRSTF 	;	 /*!< \brief Independent watchdog reset flag */
				 static reg_t<rw_t, 0X40021024, 30, 1> WWDGRSTF 	;	 /*!< \brief Window watchdog reset flag */
				 static reg_t<rw_t, 0X40021024, 31, 1> LPWRRSTF 	;	 /*!< \brief Low-power reset flag */
			};
			 static reg_t<rw_t,0X40021024, 0, 32> CSR_D;	 /*!< \brief CSR register direct access */

			/*!
			\brief AHB peripheral reset register
			*/
			struct AHBRSTR{
				 static reg_t<rw_t, 0X40021028, 17, 1> IOPARST 	;	 /*!< \brief I/O port A reset */
				 static reg_t<rw_t, 0X40021028, 18, 1> IOPBRST 	;	 /*!< \brief I/O port B reset */
				 static reg_t<rw_t, 0X40021028, 19, 1> IOPCRST 	;	 /*!< \brief I/O port C reset */
				 static reg_t<rw_t, 0X40021028, 20, 1> IOPDRST 	;	 /*!< \brief I/O port D reset */
				 static reg_t<rw_t, 0X40021028, 22, 1> IOPFRST 	;	 /*!< \brief I/O port F reset */
			};
			 static reg_t<rw_t,0X40021028, 0, 32> AHBRSTR_D;	 /*!< \brief AHBRSTR register direct access */

			/*!
			\brief Clock configuration register 2
			*/
			struct CFGR2{
				 static reg_t<rw_t, 0X4002102C, 0, 4> PREDIV 	;	 /*!< \brief PREDIV division factor */
			};

			/*!
			\brief Clock configuration register 3
			*/
			struct CFGR3{
				 static reg_t<rw_t, 0X40021030, 0, 2> USART1SW 	;	 /*!< \brief USART1 clock source selection */
				 static reg_t<rw_t, 0X40021030, 4, 1> I2C1SW 	;	 /*!< \brief I2C1 clock source selection */
				 static reg_t<rw_t, 0X40021030, 8, 1> ADCSW 	;	 /*!< \brief ADC clock source selection */
				 static reg_t<rw_t, 0X40021030, 16, 2> USART2SW 	;	 /*!< \brief USART2 clock source selection */
			};
			 static reg_t<rw_t,0X40021030, 0, 32> CFGR3_D;	 /*!< \brief CFGR3 register direct access */

			/*!
			\brief Clock control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40021034, 0, 1> HSI14ON 	;	 /*!< \brief HSI14 clock enable */
				 static reg_t<ro_t, 0X40021034, 1, 1> HSI14RDY 	;	 /*!< \brief HR14 clock ready flag */
				 static reg_t<rw_t, 0X40021034, 2, 1> HSI14DIS 	;	 /*!< \brief HSI14 clock request from ADC disable */
				 static reg_t<rw_t, 0X40021034, 3, 5> HSI14TRIM 	;	 /*!< \brief HSI14 clock trimming */
				 static reg_t<ro_t, 0X40021034, 8, 8> HSI14CAL 	;	 /*!< \brief HSI14 clock calibration */
				 static reg_t<rw_t, 0X40021034, 16, 1> HSI48ON 	;	 /*!< \brief HSI48 clock enable */
				 static reg_t<ro_t, 0X40021034, 17, 1> HSI48RDY 	;	 /*!< \brief HSI48 clock ready flag */
				 static reg_t<ro_t, 0X40021034, 24, 1> HSI48CAL 	;	 /*!< \brief HSI48 factory clock calibration */
			};
			 static reg_t<rw_t,0X40021034, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */
		};

		/*!
		\brief System configuration controller
		*/
		struct SYSCFG{

			/*!
			\brief configuration register 1
			*/
			struct CFGR1{
				 static reg_t<rw_t, 0X40010000, 0, 2> MEM_MODE 	;	 /*!< \brief Memory mapping selection bits */
				 static reg_t<rw_t, 0X40010000, 8, 1> ADC_DMA_RMP 	;	 /*!< \brief ADC DMA remapping bit */
				 static reg_t<rw_t, 0X40010000, 9, 1> USART1_TX_DMA_RMP 	;	 /*!< \brief USART1_TX DMA remapping bit */
				 static reg_t<rw_t, 0X40010000, 10, 1> USART1_RX_DMA_RMP 	;	 /*!< \brief USART1_RX DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 11, 1> TIM16_DMA_RMP 	;	 /*!< \brief TIM16 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 12, 1> TIM17_DMA_RMP 	;	 /*!< \brief TIM17 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 16, 1> I2C_PB6_FM 	;	 /*!< \brief Fast Mode Plus (FM plus) driving capability activation bits. */
				 static reg_t<rw_t, 0X40010000, 17, 1> I2C_PB7_FM 	;	 /*!< \brief Fast Mode Plus (FM+) driving capability activation bits. */
				 static reg_t<rw_t, 0X40010000, 18, 1> I2C_PB8_FM 	;	 /*!< \brief Fast Mode Plus (FM+) driving capability activation bits. */
				 static reg_t<rw_t, 0X40010000, 19, 1> I2C_PB9_FM 	;	 /*!< \brief Fast Mode Plus (FM+) driving capability activation bits. */
				 static reg_t<rw_t, 0X40010000, 20, 1> I2C1_FM_plus 	;	 /*!< \brief FM+ driving capability activation for I2C1 */
				 static reg_t<rw_t, 0X40010000, 21, 1> I2C2_FM_plus 	;	 /*!< \brief FM+ driving capability activation for I2C2 */
				 static reg_t<rw_t, 0X40010000, 24, 1> SPI2_DMA_RMP 	;	 /*!< \brief SPI2 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 25, 1> USART2_DMA_RMP 	;	 /*!< \brief USART2 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 26, 1> USART3_DMA_RMP 	;	 /*!< \brief USART3 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 27, 1> I2C1_DMA_RMP 	;	 /*!< \brief I2C1 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 28, 1> TIM1_DMA_RMP 	;	 /*!< \brief TIM1 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 29, 1> TIM2_DMA_RMP 	;	 /*!< \brief TIM2 DMA request remapping bit */
				 static reg_t<rw_t, 0X40010000, 30, 1> TIM3_DMA_RMP 	;	 /*!< \brief TIM3 DMA request remapping bit */
			};
			 static reg_t<rw_t,0X40010000, 0, 32> CFGR1_D;	 /*!< \brief CFGR1 register direct access */

			/*!
			\brief external interrupt configuration register 1
			*/
			struct EXTICR1{
				 static reg_t<rw_t, 0X40010008, 12, 4> EXTI3 	;	 /*!< \brief EXTI 3 configuration bits */
				 static reg_t<rw_t, 0X40010008, 8, 4> EXTI2 	;	 /*!< \brief EXTI 2 configuration bits */
				 static reg_t<rw_t, 0X40010008, 4, 4> EXTI1 	;	 /*!< \brief EXTI 1 configuration bits */
				 static reg_t<rw_t, 0X40010008, 0, 4> EXTI0 	;	 /*!< \brief EXTI 0 configuration bits */
			};
			 static reg_t<rw_t,0X40010008, 0, 32> EXTICR1_D;	 /*!< \brief EXTICR1 register direct access */

			/*!
			\brief external interrupt configuration register 2
			*/
			struct EXTICR2{
				 static reg_t<rw_t, 0X4001000C, 12, 4> EXTI7 	;	 /*!< \brief EXTI 7 configuration bits */
				 static reg_t<rw_t, 0X4001000C, 8, 4> EXTI6 	;	 /*!< \brief EXTI 6 configuration bits */
				 static reg_t<rw_t, 0X4001000C, 4, 4> EXTI5 	;	 /*!< \brief EXTI 5 configuration bits */
				 static reg_t<rw_t, 0X4001000C, 0, 4> EXTI4 	;	 /*!< \brief EXTI 4 configuration bits */
			};
			 static reg_t<rw_t,0X4001000C, 0, 32> EXTICR2_D;	 /*!< \brief EXTICR2 register direct access */

			/*!
			\brief external interrupt configuration register 3
			*/
			struct EXTICR3{
				 static reg_t<rw_t, 0X40010010, 12, 4> EXTI11 	;	 /*!< \brief EXTI 11 configuration bits */
				 static reg_t<rw_t, 0X40010010, 8, 4> EXTI10 	;	 /*!< \brief EXTI 10 configuration bits */
				 static reg_t<rw_t, 0X40010010, 4, 4> EXTI9 	;	 /*!< \brief EXTI 9 configuration bits */
				 static reg_t<rw_t, 0X40010010, 0, 4> EXTI8 	;	 /*!< \brief EXTI 8 configuration bits */
			};
			 static reg_t<rw_t,0X40010010, 0, 32> EXTICR3_D;	 /*!< \brief EXTICR3 register direct access */

			/*!
			\brief external interrupt configuration register 4
			*/
			struct EXTICR4{
				 static reg_t<rw_t, 0X40010014, 12, 4> EXTI15 	;	 /*!< \brief EXTI 15 configuration bits */
				 static reg_t<rw_t, 0X40010014, 8, 4> EXTI14 	;	 /*!< \brief EXTI 14 configuration bits */
				 static reg_t<rw_t, 0X40010014, 4, 4> EXTI13 	;	 /*!< \brief EXTI 13 configuration bits */
				 static reg_t<rw_t, 0X40010014, 0, 4> EXTI12 	;	 /*!< \brief EXTI 12 configuration bits */
			};
			 static reg_t<rw_t,0X40010014, 0, 32> EXTICR4_D;	 /*!< \brief EXTICR4 register direct access */

			/*!
			\brief configuration register 2
			*/
			struct CFGR2{
				 static reg_t<rw_t, 0X40010018, 8, 1> SRAM_PEF 	;	 /*!< \brief SRAM parity flag */
				 static reg_t<rw_t, 0X40010018, 2, 1> PVD_LOCK 	;	 /*!< \brief PVD lock enable bit */
				 static reg_t<rw_t, 0X40010018, 1, 1> SRAM_PARITY_LOCK 	;	 /*!< \brief SRAM parity lock bit */
				 static reg_t<rw_t, 0X40010018, 0, 1> LOCUP_LOCK 	;	 /*!< \brief Cortex-M0 LOCKUP bit enable bit */
			};
			 static reg_t<rw_t,0X40010018, 0, 32> CFGR2_D;	 /*!< \brief CFGR2 register direct access */
		};

		/*!
		\brief Analog-to-digital converter
		*/
		struct ADC{

			/*!
			\brief interrupt and status register
			*/
			struct ISR{
				 static reg_t<rw_t, 0X40012400, 7, 1> AWD 	;	 /*!< \brief Analog watchdog flag */
				 static reg_t<rw_t, 0X40012400, 4, 1> OVR 	;	 /*!< \brief ADC overrun */
				 static reg_t<rw_t, 0X40012400, 3, 1> EOS 	;	 /*!< \brief End of sequence flag */
				 static reg_t<rw_t, 0X40012400, 2, 1> EOC 	;	 /*!< \brief End of conversion flag */
				 static reg_t<rw_t, 0X40012400, 1, 1> EOSMP 	;	 /*!< \brief End of sampling flag */
				 static reg_t<rw_t, 0X40012400, 0, 1> ADRDY 	;	 /*!< \brief ADC ready */
			};
			 static reg_t<rw_t,0X40012400, 0, 32> ISR_D;	 /*!< \brief ISR register direct access */

			/*!
			\brief interrupt enable register
			*/
			struct IER{
				 static reg_t<rw_t, 0X40012404, 7, 1> AWDIE 	;	 /*!< \brief Analog watchdog interrupt enable */
				 static reg_t<rw_t, 0X40012404, 4, 1> OVRIE 	;	 /*!< \brief Overrun interrupt enable */
				 static reg_t<rw_t, 0X40012404, 3, 1> EOSIE 	;	 /*!< \brief End of conversion sequence interrupt enable */
				 static reg_t<rw_t, 0X40012404, 2, 1> EOCIE 	;	 /*!< \brief End of conversion interrupt enable */
				 static reg_t<rw_t, 0X40012404, 1, 1> EOSMPIE 	;	 /*!< \brief End of sampling flag interrupt enable */
				 static reg_t<rw_t, 0X40012404, 0, 1> ADRDYIE 	;	 /*!< \brief ADC ready interrupt enable */
			};
			 static reg_t<rw_t,0X40012404, 0, 32> IER_D;	 /*!< \brief IER register direct access */

			/*!
			\brief control register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40012408, 31, 1> ADCAL 	;	 /*!< \brief ADC calibration */
				 static reg_t<rw_t, 0X40012408, 4, 1> ADSTP 	;	 /*!< \brief ADC stop conversion command */
				 static reg_t<rw_t, 0X40012408, 2, 1> ADSTART 	;	 /*!< \brief ADC start conversion command */
				 static reg_t<rw_t, 0X40012408, 1, 1> ADDIS 	;	 /*!< \brief ADC disable command */
				 static reg_t<rw_t, 0X40012408, 0, 1> ADEN 	;	 /*!< \brief ADC enable command */
			};
			 static reg_t<rw_t,0X40012408, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief configuration register 1
			*/
			struct CFGR1{
				 static reg_t<rw_t, 0X4001240C, 26, 5> AWDCH 	;	 /*!< \brief Analog watchdog channel selection */
				 static reg_t<rw_t, 0X4001240C, 23, 1> AWDEN 	;	 /*!< \brief Analog watchdog enable */
				 static reg_t<rw_t, 0X4001240C, 22, 1> AWDSGL 	;	 /*!< \brief Enable the watchdog on a single channel or on all channels */
				 static reg_t<rw_t, 0X4001240C, 16, 1> DISCEN 	;	 /*!< \brief Discontinuous mode */
				 static reg_t<rw_t, 0X4001240C, 15, 1> AUTOFF 	;	 /*!< \brief Auto-off mode */
				 static reg_t<rw_t, 0X4001240C, 14, 1> AUTDLY 	;	 /*!< \brief Auto-delayed conversion mode */
				 static reg_t<rw_t, 0X4001240C, 13, 1> CONT 	;	 /*!< \brief Single / continuous conversion mode */
				 static reg_t<rw_t, 0X4001240C, 12, 1> OVRMOD 	;	 /*!< \brief Overrun management mode */
				 static reg_t<rw_t, 0X4001240C, 10, 2> EXTEN 	;	 /*!< \brief External trigger enable and polarity selection */
				 static reg_t<rw_t, 0X4001240C, 6, 3> EXTSEL 	;	 /*!< \brief External trigger selection */
				 static reg_t<rw_t, 0X4001240C, 5, 1> ALIGN 	;	 /*!< \brief Data alignment */
				 static reg_t<rw_t, 0X4001240C, 3, 2> RES 	;	 /*!< \brief Data resolution */
				 static reg_t<rw_t, 0X4001240C, 2, 1> SCANDIR 	;	 /*!< \brief Scan sequence direction */
				 static reg_t<rw_t, 0X4001240C, 1, 1> DMACFG 	;	 /*!< \brief Direct memery access configuration */
				 static reg_t<rw_t, 0X4001240C, 0, 1> DMAEN 	;	 /*!< \brief Direct memory access enable */
			};
			 static reg_t<rw_t,0X4001240C, 0, 32> CFGR1_D;	 /*!< \brief CFGR1 register direct access */

			/*!
			\brief configuration register 2
			*/
			struct CFGR2{
				 static reg_t<rw_t, 0X40012410, 31, 1> JITOFF_D4 	;	 /*!< \brief JITOFF_D4 */
				 static reg_t<rw_t, 0X40012410, 30, 1> JITOFF_D2 	;	 /*!< \brief JITOFF_D2 */
			};
			 static reg_t<rw_t,0X40012410, 0, 32> CFGR2_D;	 /*!< \brief CFGR2 register direct access */

			/*!
			\brief sampling time register
			*/
				 static reg_t<rw_t, 0X40012414, 0, 3> SMPR 	;	 /*!< \brief Sampling time selection */

			/*!
			\brief watchdog threshold register
			*/
			struct TR{
				 static reg_t<rw_t, 0X40012420, 16, 12> HT 	;	 /*!< \brief Analog watchdog higher threshold */
				 static reg_t<rw_t, 0X40012420, 0, 12> LT 	;	 /*!< \brief Analog watchdog lower threshold */
			};
			 static reg_t<rw_t,0X40012420, 0, 32> TR_D;	 /*!< \brief TR register direct access */

			/*!
			\brief channel selection register
			*/
			struct CHSELR{
				 static reg_t<rw_t, 0X40012428, 18, 1> CHSEL18 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 17, 1> CHSEL17 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 16, 1> CHSEL16 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 15, 1> CHSEL15 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 14, 1> CHSEL14 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 13, 1> CHSEL13 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 12, 1> CHSEL12 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 11, 1> CHSEL11 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 10, 1> CHSEL10 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 9, 1> CHSEL9 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 8, 1> CHSEL8 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 7, 1> CHSEL7 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 6, 1> CHSEL6 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 5, 1> CHSEL5 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 4, 1> CHSEL4 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 3, 1> CHSEL3 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 2, 1> CHSEL2 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 1, 1> CHSEL1 	;	 /*!< \brief Channel-x selection */
				 static reg_t<rw_t, 0X40012428, 0, 1> CHSEL0 	;	 /*!< \brief Channel-x selection */
			};
			 static reg_t<rw_t,0X40012428, 0, 32> CHSELR_D;	 /*!< \brief CHSELR register direct access */

			/*!
			\brief data register
			*/
			struct DR{
				 static reg_t<ro_t, 0X40012440, 0, 16> DATA 	;	 /*!< \brief Converted data */
			};

			/*!
			\brief common configuration register
			*/
			struct CCR{
				 static reg_t<rw_t, 0X40012708, 24, 1> VBATEN 	;	 /*!< \brief VBAT enable */
				 static reg_t<rw_t, 0X40012708, 23, 1> TSEN 	;	 /*!< \brief Temperature sensor enable */
				 static reg_t<rw_t, 0X40012708, 22, 1> VREFEN 	;	 /*!< \brief Temperature sensor and VREFINT enable */
			};
			 static reg_t<rw_t,0X40012708, 0, 32> CCR_D;	 /*!< \brief CCR register direct access */
		};

		/*!
		\brief Universal synchronous asynchronous receiver transmitter
		*/
		struct USART1{

			/*!
			\brief Control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40013800, 0, 1> UE 	;	 /*!< \brief USART enable */
				 static reg_t<rw_t, 0X40013800, 1, 1> UESM 	;	 /*!< \brief USART enable in Stop mode */
				 static reg_t<rw_t, 0X40013800, 2, 1> RE 	;	 /*!< \brief Receiver enable */
				 static reg_t<rw_t, 0X40013800, 3, 1> TE 	;	 /*!< \brief Transmitter enable */
				 static reg_t<rw_t, 0X40013800, 4, 1> IDLEIE 	;	 /*!< \brief IDLE interrupt enable */
				 static reg_t<rw_t, 0X40013800, 5, 1> RXNEIE 	;	 /*!< \brief RXNE interrupt enable */
				 static reg_t<rw_t, 0X40013800, 6, 1> TCIE 	;	 /*!< \brief Transmission complete interrupt enable */
				 static reg_t<rw_t, 0X40013800, 7, 1> TXEIE 	;	 /*!< \brief interrupt enable */
				 static reg_t<rw_t, 0X40013800, 8, 1> PEIE 	;	 /*!< \brief PE interrupt enable */
				 static reg_t<rw_t, 0X40013800, 9, 1> PS 	;	 /*!< \brief Parity selection */
				 static reg_t<rw_t, 0X40013800, 10, 1> PCE 	;	 /*!< \brief Parity control enable */
				 static reg_t<rw_t, 0X40013800, 11, 1> WAKE 	;	 /*!< \brief Receiver wakeup method */
				 static reg_t<rw_t, 0X40013800, 12, 1> M 	;	 /*!< \brief Word length */
				 static reg_t<rw_t, 0X40013800, 13, 1> MME 	;	 /*!< \brief Mute mode enable */
				 static reg_t<rw_t, 0X40013800, 14, 1> CMIE 	;	 /*!< \brief Character match interrupt enable */
				 static reg_t<rw_t, 0X40013800, 15, 1> OVER8 	;	 /*!< \brief Oversampling mode */
				 static reg_t<rw_t, 0X40013800, 16, 5> DEDT 	;	 /*!< \brief Driver Enable deassertion time */
				 static reg_t<rw_t, 0X40013800, 21, 5> DEAT 	;	 /*!< \brief Driver Enable assertion time */
				 static reg_t<rw_t, 0X40013800, 26, 1> RTOIE 	;	 /*!< \brief Receiver timeout interrupt enable */
				 static reg_t<rw_t, 0X40013800, 27, 1> EOBIE 	;	 /*!< \brief End of Block interrupt enable */
				 static reg_t<rw_t, 0X40013800, 28, 1> M1 	;	 /*!< \brief Word length */
			};
			 static reg_t<rw_t,0X40013800, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief Control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40013804, 28, 4> ADD4 	;	 /*!< \brief Address of the USART node */
				 static reg_t<rw_t, 0X40013804, 24, 4> ADD0 	;	 /*!< \brief Address of the USART node */
				 static reg_t<rw_t, 0X40013804, 23, 1> RTOEN 	;	 /*!< \brief Receiver timeout enable */
				 static reg_t<rw_t, 0X40013804, 21, 2> ABRMOD 	;	 /*!< \brief Auto baud rate mode */
				 static reg_t<rw_t, 0X40013804, 20, 1> ABREN 	;	 /*!< \brief Auto baud rate enable */
				 static reg_t<rw_t, 0X40013804, 19, 1> MSBFIRST 	;	 /*!< \brief Most significant bit first */
				 static reg_t<rw_t, 0X40013804, 18, 1> DATAINV 	;	 /*!< \brief Binary data inversion */
				 static reg_t<rw_t, 0X40013804, 17, 1> TXINV 	;	 /*!< \brief TX pin active level inversion */
				 static reg_t<rw_t, 0X40013804, 16, 1> RXINV 	;	 /*!< \brief RX pin active level inversion */
				 static reg_t<rw_t, 0X40013804, 15, 1> SWAP 	;	 /*!< \brief Swap TX/RX pins */
				 static reg_t<rw_t, 0X40013804, 14, 1> LINEN 	;	 /*!< \brief LIN mode enable */
				 static reg_t<rw_t, 0X40013804, 12, 2> STOP 	;	 /*!< \brief STOP bits */
				 static reg_t<rw_t, 0X40013804, 11, 1> CLKEN 	;	 /*!< \brief Clock enable */
				 static reg_t<rw_t, 0X40013804, 10, 1> CPOL 	;	 /*!< \brief Clock polarity */
				 static reg_t<rw_t, 0X40013804, 9, 1> CPHA 	;	 /*!< \brief Clock phase */
				 static reg_t<rw_t, 0X40013804, 8, 1> LBCL 	;	 /*!< \brief Last bit clock pulse */
				 static reg_t<rw_t, 0X40013804, 6, 1> LBDIE 	;	 /*!< \brief LIN break detection interrupt enable */
				 static reg_t<rw_t, 0X40013804, 5, 1> LBDL 	;	 /*!< \brief LIN break detection length */
				 static reg_t<rw_t, 0X40013804, 4, 1> ADDM7 	;	 /*!< \brief 7-bit Address Detection/4-bit Address Detection */
			};
			 static reg_t<rw_t,0X40013804, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief Control register 3
			*/
			struct CR3{
				 static reg_t<rw_t, 0X40013808, 22, 1> WUFIE 	;	 /*!< \brief Wakeup from Stop mode interrupt enable */
				 static reg_t<rw_t, 0X40013808, 20, 2> WUS 	;	 /*!< \brief Wakeup from Stop mode interrupt flag selection */
				 static reg_t<rw_t, 0X40013808, 17, 3> SCARCNT 	;	 /*!< \brief Smartcard auto-retry count */
				 static reg_t<rw_t, 0X40013808, 15, 1> DEP 	;	 /*!< \brief Driver enable polarity selection */
				 static reg_t<rw_t, 0X40013808, 14, 1> DEM 	;	 /*!< \brief Driver enable mode */
				 static reg_t<rw_t, 0X40013808, 13, 1> DDRE 	;	 /*!< \brief DMA Disable on Reception Error */
				 static reg_t<rw_t, 0X40013808, 12, 1> OVRDIS 	;	 /*!< \brief Overrun Disable */
				 static reg_t<rw_t, 0X40013808, 11, 1> ONEBIT 	;	 /*!< \brief One sample bit method enable */
				 static reg_t<rw_t, 0X40013808, 10, 1> CTSIE 	;	 /*!< \brief CTS interrupt enable */
				 static reg_t<rw_t, 0X40013808, 9, 1> CTSE 	;	 /*!< \brief CTS enable */
				 static reg_t<rw_t, 0X40013808, 8, 1> RTSE 	;	 /*!< \brief RTS enable */
				 static reg_t<rw_t, 0X40013808, 7, 1> DMAT 	;	 /*!< \brief DMA enable transmitter */
				 static reg_t<rw_t, 0X40013808, 6, 1> DMAR 	;	 /*!< \brief DMA enable receiver */
				 static reg_t<rw_t, 0X40013808, 5, 1> SCEN 	;	 /*!< \brief Smartcard mode enable */
				 static reg_t<rw_t, 0X40013808, 4, 1> NACK 	;	 /*!< \brief Smartcard NACK enable */
				 static reg_t<rw_t, 0X40013808, 3, 1> HDSEL 	;	 /*!< \brief Half-duplex selection */
				 static reg_t<rw_t, 0X40013808, 2, 1> IRLP 	;	 /*!< \brief IrDA low-power */
				 static reg_t<rw_t, 0X40013808, 1, 1> IREN 	;	 /*!< \brief IrDA mode enable */
				 static reg_t<rw_t, 0X40013808, 0, 1> EIE 	;	 /*!< \brief Error interrupt enable */
			};
			 static reg_t<rw_t,0X40013808, 0, 32> CR3_D;	 /*!< \brief CR3 register direct access */

			/*!
			\brief Baud rate register
			*/
			struct BRR{
				 static reg_t<rw_t, 0X4001380C, 4, 12> DIV_Mantissa 	;	 /*!< \brief mantissa of USARTDIV */
				 static reg_t<rw_t, 0X4001380C, 0, 4> DIV_Fraction 	;	 /*!< \brief fraction of USARTDIV */
			};
			 static reg_t<rw_t,0X4001380C, 0, 32> BRR_D;	 /*!< \brief BRR register direct access */

			/*!
			\brief Guard time and prescaler register
			*/
			struct GTPR{
				 static reg_t<rw_t, 0X40013810, 8, 8> GT 	;	 /*!< \brief Guard time value */
				 static reg_t<rw_t, 0X40013810, 0, 8> PSC 	;	 /*!< \brief Prescaler value */
			};
			 static reg_t<rw_t,0X40013810, 0, 32> GTPR_D;	 /*!< \brief GTPR register direct access */

			/*!
			\brief Receiver timeout register
			*/
			struct RTOR{
				 static reg_t<rw_t, 0X40013814, 24, 8> BLEN 	;	 /*!< \brief Block Length */
				 static reg_t<rw_t, 0X40013814, 0, 24> RTO 	;	 /*!< \brief Receiver timeout value */
			};
			 static reg_t<rw_t,0X40013814, 0, 32> RTOR_D;	 /*!< \brief RTOR register direct access */

			/*!
			\brief Request register
			*/
			struct RQR{
				 static reg_t<rw_t, 0X40013818, 4, 1> TXFRQ 	;	 /*!< \brief Transmit data flush request */
				 static reg_t<rw_t, 0X40013818, 3, 1> RXFRQ 	;	 /*!< \brief Receive data flush request */
				 static reg_t<rw_t, 0X40013818, 2, 1> MMRQ 	;	 /*!< \brief Mute mode request */
				 static reg_t<rw_t, 0X40013818, 1, 1> SBKRQ 	;	 /*!< \brief Send break request */
				 static reg_t<rw_t, 0X40013818, 0, 1> ABRRQ 	;	 /*!< \brief Auto baud rate request */
			};
			 static reg_t<rw_t,0X40013818, 0, 32> RQR_D;	 /*!< \brief RQR register direct access */

			/*!
			\brief Interrupt & status register
			*/
			struct ISR{
				 static reg_t<ro_t, 0X4001381C, 22, 1> REACK 	;	 /*!< \brief Receive enable acknowledge flag */
				 static reg_t<ro_t, 0X4001381C, 21, 1> TEACK 	;	 /*!< \brief Transmit enable acknowledge flag */
				 static reg_t<ro_t, 0X4001381C, 20, 1> WUF 	;	 /*!< \brief Wakeup from Stop mode flag */
				 static reg_t<ro_t, 0X4001381C, 19, 1> RWU 	;	 /*!< \brief Receiver wakeup from Mute mode */
				 static reg_t<ro_t, 0X4001381C, 18, 1> SBKF 	;	 /*!< \brief Send break flag */
				 static reg_t<ro_t, 0X4001381C, 17, 1> CMF 	;	 /*!< \brief character match flag */
				 static reg_t<ro_t, 0X4001381C, 16, 1> BUSY 	;	 /*!< \brief Busy flag */
				 static reg_t<ro_t, 0X4001381C, 15, 1> ABRF 	;	 /*!< \brief Auto baud rate flag */
				 static reg_t<ro_t, 0X4001381C, 14, 1> ABRE 	;	 /*!< \brief Auto baud rate error */
				 static reg_t<ro_t, 0X4001381C, 12, 1> EOBF 	;	 /*!< \brief End of block flag */
				 static reg_t<ro_t, 0X4001381C, 11, 1> RTOF 	;	 /*!< \brief Receiver timeout */
				 static reg_t<ro_t, 0X4001381C, 10, 1> CTS 	;	 /*!< \brief CTS flag */
				 static reg_t<ro_t, 0X4001381C, 9, 1> CTSIF 	;	 /*!< \brief CTS interrupt flag */
				 static reg_t<ro_t, 0X4001381C, 8, 1> LBDF 	;	 /*!< \brief LIN break detection flag */
				 static reg_t<ro_t, 0X4001381C, 7, 1> TXE 	;	 /*!< \brief Transmit data register empty */
				 static reg_t<ro_t, 0X4001381C, 6, 1> TC 	;	 /*!< \brief Transmission complete */
				 static reg_t<ro_t, 0X4001381C, 5, 1> RXNE 	;	 /*!< \brief Read data register not empty */
				 static reg_t<ro_t, 0X4001381C, 4, 1> IDLE 	;	 /*!< \brief Idle line detected */
				 static reg_t<ro_t, 0X4001381C, 3, 1> ORE 	;	 /*!< \brief Overrun error */
				 static reg_t<ro_t, 0X4001381C, 2, 1> NF 	;	 /*!< \brief Noise detected flag */
				 static reg_t<ro_t, 0X4001381C, 1, 1> FE 	;	 /*!< \brief Framing error */
				 static reg_t<ro_t, 0X4001381C, 0, 1> PE 	;	 /*!< \brief Parity error */
			};
			 static reg_t<rw_t,0X4001381C, 0, 32> ISR_D;	 /*!< \brief ISR register direct access */

			/*!
			\brief Interrupt flag clear register
			*/
			struct ICR{
				 static reg_t<rw_t, 0X40013820, 20, 1> WUCF 	;	 /*!< \brief Wakeup from Stop mode clear flag */
				 static reg_t<rw_t, 0X40013820, 17, 1> CMCF 	;	 /*!< \brief Character match clear flag */
				 static reg_t<rw_t, 0X40013820, 12, 1> EOBCF 	;	 /*!< \brief End of timeout clear flag */
				 static reg_t<rw_t, 0X40013820, 11, 1> RTOCF 	;	 /*!< \brief Receiver timeout clear flag */
				 static reg_t<rw_t, 0X40013820, 9, 1> CTSCF 	;	 /*!< \brief CTS clear flag */
				 static reg_t<rw_t, 0X40013820, 8, 1> LBDCF 	;	 /*!< \brief LIN break detection clear flag */
				 static reg_t<rw_t, 0X40013820, 6, 1> TCCF 	;	 /*!< \brief Transmission complete clear flag */
				 static reg_t<rw_t, 0X40013820, 4, 1> IDLECF 	;	 /*!< \brief Idle line detected clear flag */
				 static reg_t<rw_t, 0X40013820, 3, 1> ORECF 	;	 /*!< \brief Overrun error clear flag */
				 static reg_t<rw_t, 0X40013820, 2, 1> NCF 	;	 /*!< \brief Noise detected clear flag */
				 static reg_t<rw_t, 0X40013820, 1, 1> FECF 	;	 /*!< \brief Framing error clear flag */
				 static reg_t<rw_t, 0X40013820, 0, 1> PECF 	;	 /*!< \brief Parity error clear flag */
			};
			 static reg_t<rw_t,0X40013820, 0, 32> ICR_D;	 /*!< \brief ICR register direct access */

			/*!
			\brief Receive data register
			*/
				 static reg_t<ro_t, 0X40013824, 0, 9> RDR 	;	 /*!< \brief Receive data value */

			/*!
			\brief Transmit data register
			*/
				 static reg_t<rw_t, 0X40013828, 0, 9> TDR 	;	 /*!< \brief Transmit data value */
		};

		/*!
		\brief Universal synchronous asynchronous receiver transmitter
	BasedOn:USART1
		*/
		struct USART2{

			/*!
			\brief Control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40004400, 0, 1> UE 	;	 /*!< \brief USART enable */
				 static reg_t<rw_t, 0X40004400, 1, 1> UESM 	;	 /*!< \brief USART enable in Stop mode */
				 static reg_t<rw_t, 0X40004400, 2, 1> RE 	;	 /*!< \brief Receiver enable */
				 static reg_t<rw_t, 0X40004400, 3, 1> TE 	;	 /*!< \brief Transmitter enable */
				 static reg_t<rw_t, 0X40004400, 4, 1> IDLEIE 	;	 /*!< \brief IDLE interrupt enable */
				 static reg_t<rw_t, 0X40004400, 5, 1> RXNEIE 	;	 /*!< \brief RXNE interrupt enable */
				 static reg_t<rw_t, 0X40004400, 6, 1> TCIE 	;	 /*!< \brief Transmission complete interrupt enable */
				 static reg_t<rw_t, 0X40004400, 7, 1> TXEIE 	;	 /*!< \brief interrupt enable */
				 static reg_t<rw_t, 0X40004400, 8, 1> PEIE 	;	 /*!< \brief PE interrupt enable */
				 static reg_t<rw_t, 0X40004400, 9, 1> PS 	;	 /*!< \brief Parity selection */
				 static reg_t<rw_t, 0X40004400, 10, 1> PCE 	;	 /*!< \brief Parity control enable */
				 static reg_t<rw_t, 0X40004400, 11, 1> WAKE 	;	 /*!< \brief Receiver wakeup method */
				 static reg_t<rw_t, 0X40004400, 12, 1> M 	;	 /*!< \brief Word length */
				 static reg_t<rw_t, 0X40004400, 13, 1> MME 	;	 /*!< \brief Mute mode enable */
				 static reg_t<rw_t, 0X40004400, 14, 1> CMIE 	;	 /*!< \brief Character match interrupt enable */
				 static reg_t<rw_t, 0X40004400, 15, 1> OVER8 	;	 /*!< \brief Oversampling mode */
				 static reg_t<rw_t, 0X40004400, 16, 5> DEDT 	;	 /*!< \brief Driver Enable deassertion time */
				 static reg_t<rw_t, 0X40004400, 21, 5> DEAT 	;	 /*!< \brief Driver Enable assertion time */
				 static reg_t<rw_t, 0X40004400, 26, 1> RTOIE 	;	 /*!< \brief Receiver timeout interrupt enable */
				 static reg_t<rw_t, 0X40004400, 27, 1> EOBIE 	;	 /*!< \brief End of Block interrupt enable */
				 static reg_t<rw_t, 0X40004400, 28, 1> M1 	;	 /*!< \brief Word length */
			};
			 static reg_t<rw_t,0X40004400, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief Control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40004404, 28, 4> ADD4 	;	 /*!< \brief Address of the USART node */
				 static reg_t<rw_t, 0X40004404, 24, 4> ADD0 	;	 /*!< \brief Address of the USART node */
				 static reg_t<rw_t, 0X40004404, 23, 1> RTOEN 	;	 /*!< \brief Receiver timeout enable */
				 static reg_t<rw_t, 0X40004404, 21, 2> ABRMOD 	;	 /*!< \brief Auto baud rate mode */
				 static reg_t<rw_t, 0X40004404, 20, 1> ABREN 	;	 /*!< \brief Auto baud rate enable */
				 static reg_t<rw_t, 0X40004404, 19, 1> MSBFIRST 	;	 /*!< \brief Most significant bit first */
				 static reg_t<rw_t, 0X40004404, 18, 1> DATAINV 	;	 /*!< \brief Binary data inversion */
				 static reg_t<rw_t, 0X40004404, 17, 1> TXINV 	;	 /*!< \brief TX pin active level inversion */
				 static reg_t<rw_t, 0X40004404, 16, 1> RXINV 	;	 /*!< \brief RX pin active level inversion */
				 static reg_t<rw_t, 0X40004404, 15, 1> SWAP 	;	 /*!< \brief Swap TX/RX pins */
				 static reg_t<rw_t, 0X40004404, 14, 1> LINEN 	;	 /*!< \brief LIN mode enable */
				 static reg_t<rw_t, 0X40004404, 12, 2> STOP 	;	 /*!< \brief STOP bits */
				 static reg_t<rw_t, 0X40004404, 11, 1> CLKEN 	;	 /*!< \brief Clock enable */
				 static reg_t<rw_t, 0X40004404, 10, 1> CPOL 	;	 /*!< \brief Clock polarity */
				 static reg_t<rw_t, 0X40004404, 9, 1> CPHA 	;	 /*!< \brief Clock phase */
				 static reg_t<rw_t, 0X40004404, 8, 1> LBCL 	;	 /*!< \brief Last bit clock pulse */
				 static reg_t<rw_t, 0X40004404, 6, 1> LBDIE 	;	 /*!< \brief LIN break detection interrupt enable */
				 static reg_t<rw_t, 0X40004404, 5, 1> LBDL 	;	 /*!< \brief LIN break detection length */
				 static reg_t<rw_t, 0X40004404, 4, 1> ADDM7 	;	 /*!< \brief 7-bit Address Detection/4-bit Address Detection */
			};
			 static reg_t<rw_t,0X40004404, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief Control register 3
			*/
			struct CR3{
				 static reg_t<rw_t, 0X40004408, 22, 1> WUFIE 	;	 /*!< \brief Wakeup from Stop mode interrupt enable */
				 static reg_t<rw_t, 0X40004408, 20, 2> WUS 	;	 /*!< \brief Wakeup from Stop mode interrupt flag selection */
				 static reg_t<rw_t, 0X40004408, 17, 3> SCARCNT 	;	 /*!< \brief Smartcard auto-retry count */
				 static reg_t<rw_t, 0X40004408, 15, 1> DEP 	;	 /*!< \brief Driver enable polarity selection */
				 static reg_t<rw_t, 0X40004408, 14, 1> DEM 	;	 /*!< \brief Driver enable mode */
				 static reg_t<rw_t, 0X40004408, 13, 1> DDRE 	;	 /*!< \brief DMA Disable on Reception Error */
				 static reg_t<rw_t, 0X40004408, 12, 1> OVRDIS 	;	 /*!< \brief Overrun Disable */
				 static reg_t<rw_t, 0X40004408, 11, 1> ONEBIT 	;	 /*!< \brief One sample bit method enable */
				 static reg_t<rw_t, 0X40004408, 10, 1> CTSIE 	;	 /*!< \brief CTS interrupt enable */
				 static reg_t<rw_t, 0X40004408, 9, 1> CTSE 	;	 /*!< \brief CTS enable */
				 static reg_t<rw_t, 0X40004408, 8, 1> RTSE 	;	 /*!< \brief RTS enable */
				 static reg_t<rw_t, 0X40004408, 7, 1> DMAT 	;	 /*!< \brief DMA enable transmitter */
				 static reg_t<rw_t, 0X40004408, 6, 1> DMAR 	;	 /*!< \brief DMA enable receiver */
				 static reg_t<rw_t, 0X40004408, 5, 1> SCEN 	;	 /*!< \brief Smartcard mode enable */
				 static reg_t<rw_t, 0X40004408, 4, 1> NACK 	;	 /*!< \brief Smartcard NACK enable */
				 static reg_t<rw_t, 0X40004408, 3, 1> HDSEL 	;	 /*!< \brief Half-duplex selection */
				 static reg_t<rw_t, 0X40004408, 2, 1> IRLP 	;	 /*!< \brief IrDA low-power */
				 static reg_t<rw_t, 0X40004408, 1, 1> IREN 	;	 /*!< \brief IrDA mode enable */
				 static reg_t<rw_t, 0X40004408, 0, 1> EIE 	;	 /*!< \brief Error interrupt enable */
			};
			 static reg_t<rw_t,0X40004408, 0, 32> CR3_D;	 /*!< \brief CR3 register direct access */

			/*!
			\brief Baud rate register
			*/
			struct BRR{
				 static reg_t<rw_t, 0X4000440C, 4, 12> DIV_Mantissa 	;	 /*!< \brief mantissa of USARTDIV */
				 static reg_t<rw_t, 0X4000440C, 0, 4> DIV_Fraction 	;	 /*!< \brief fraction of USARTDIV */
			};
			 static reg_t<rw_t,0X4000440C, 0, 32> BRR_D;	 /*!< \brief BRR register direct access */

			/*!
			\brief Guard time and prescaler register
			*/
			struct GTPR{
				 static reg_t<rw_t, 0X40004410, 8, 8> GT 	;	 /*!< \brief Guard time value */
				 static reg_t<rw_t, 0X40004410, 0, 8> PSC 	;	 /*!< \brief Prescaler value */
			};
			 static reg_t<rw_t,0X40004410, 0, 32> GTPR_D;	 /*!< \brief GTPR register direct access */

			/*!
			\brief Receiver timeout register
			*/
			struct RTOR{
				 static reg_t<rw_t, 0X40004414, 24, 8> BLEN 	;	 /*!< \brief Block Length */
				 static reg_t<rw_t, 0X40004414, 0, 24> RTO 	;	 /*!< \brief Receiver timeout value */
			};
			 static reg_t<rw_t,0X40004414, 0, 32> RTOR_D;	 /*!< \brief RTOR register direct access */

			/*!
			\brief Request register
			*/
			struct RQR{
				 static reg_t<rw_t, 0X40004418, 4, 1> TXFRQ 	;	 /*!< \brief Transmit data flush request */
				 static reg_t<rw_t, 0X40004418, 3, 1> RXFRQ 	;	 /*!< \brief Receive data flush request */
				 static reg_t<rw_t, 0X40004418, 2, 1> MMRQ 	;	 /*!< \brief Mute mode request */
				 static reg_t<rw_t, 0X40004418, 1, 1> SBKRQ 	;	 /*!< \brief Send break request */
				 static reg_t<rw_t, 0X40004418, 0, 1> ABRRQ 	;	 /*!< \brief Auto baud rate request */
			};
			 static reg_t<rw_t,0X40004418, 0, 32> RQR_D;	 /*!< \brief RQR register direct access */

			/*!
			\brief Interrupt & status register
			*/
			struct ISR{
				 static reg_t<ro_t, 0X4000441C, 22, 1> REACK 	;	 /*!< \brief Receive enable acknowledge flag */
				 static reg_t<ro_t, 0X4000441C, 21, 1> TEACK 	;	 /*!< \brief Transmit enable acknowledge flag */
				 static reg_t<ro_t, 0X4000441C, 20, 1> WUF 	;	 /*!< \brief Wakeup from Stop mode flag */
				 static reg_t<ro_t, 0X4000441C, 19, 1> RWU 	;	 /*!< \brief Receiver wakeup from Mute mode */
				 static reg_t<ro_t, 0X4000441C, 18, 1> SBKF 	;	 /*!< \brief Send break flag */
				 static reg_t<ro_t, 0X4000441C, 17, 1> CMF 	;	 /*!< \brief character match flag */
				 static reg_t<ro_t, 0X4000441C, 16, 1> BUSY 	;	 /*!< \brief Busy flag */
				 static reg_t<ro_t, 0X4000441C, 15, 1> ABRF 	;	 /*!< \brief Auto baud rate flag */
				 static reg_t<ro_t, 0X4000441C, 14, 1> ABRE 	;	 /*!< \brief Auto baud rate error */
				 static reg_t<ro_t, 0X4000441C, 12, 1> EOBF 	;	 /*!< \brief End of block flag */
				 static reg_t<ro_t, 0X4000441C, 11, 1> RTOF 	;	 /*!< \brief Receiver timeout */
				 static reg_t<ro_t, 0X4000441C, 10, 1> CTS 	;	 /*!< \brief CTS flag */
				 static reg_t<ro_t, 0X4000441C, 9, 1> CTSIF 	;	 /*!< \brief CTS interrupt flag */
				 static reg_t<ro_t, 0X4000441C, 8, 1> LBDF 	;	 /*!< \brief LIN break detection flag */
				 static reg_t<ro_t, 0X4000441C, 7, 1> TXE 	;	 /*!< \brief Transmit data register empty */
				 static reg_t<ro_t, 0X4000441C, 6, 1> TC 	;	 /*!< \brief Transmission complete */
				 static reg_t<ro_t, 0X4000441C, 5, 1> RXNE 	;	 /*!< \brief Read data register not empty */
				 static reg_t<ro_t, 0X4000441C, 4, 1> IDLE 	;	 /*!< \brief Idle line detected */
				 static reg_t<ro_t, 0X4000441C, 3, 1> ORE 	;	 /*!< \brief Overrun error */
				 static reg_t<ro_t, 0X4000441C, 2, 1> NF 	;	 /*!< \brief Noise detected flag */
				 static reg_t<ro_t, 0X4000441C, 1, 1> FE 	;	 /*!< \brief Framing error */
				 static reg_t<ro_t, 0X4000441C, 0, 1> PE 	;	 /*!< \brief Parity error */
			};
			 static reg_t<rw_t,0X4000441C, 0, 32> ISR_D;	 /*!< \brief ISR register direct access */

			/*!
			\brief Interrupt flag clear register
			*/
			struct ICR{
				 static reg_t<rw_t, 0X40004420, 20, 1> WUCF 	;	 /*!< \brief Wakeup from Stop mode clear flag */
				 static reg_t<rw_t, 0X40004420, 17, 1> CMCF 	;	 /*!< \brief Character match clear flag */
				 static reg_t<rw_t, 0X40004420, 12, 1> EOBCF 	;	 /*!< \brief End of timeout clear flag */
				 static reg_t<rw_t, 0X40004420, 11, 1> RTOCF 	;	 /*!< \brief Receiver timeout clear flag */
				 static reg_t<rw_t, 0X40004420, 9, 1> CTSCF 	;	 /*!< \brief CTS clear flag */
				 static reg_t<rw_t, 0X40004420, 8, 1> LBDCF 	;	 /*!< \brief LIN break detection clear flag */
				 static reg_t<rw_t, 0X40004420, 6, 1> TCCF 	;	 /*!< \brief Transmission complete clear flag */
				 static reg_t<rw_t, 0X40004420, 4, 1> IDLECF 	;	 /*!< \brief Idle line detected clear flag */
				 static reg_t<rw_t, 0X40004420, 3, 1> ORECF 	;	 /*!< \brief Overrun error clear flag */
				 static reg_t<rw_t, 0X40004420, 2, 1> NCF 	;	 /*!< \brief Noise detected clear flag */
				 static reg_t<rw_t, 0X40004420, 1, 1> FECF 	;	 /*!< \brief Framing error clear flag */
				 static reg_t<rw_t, 0X40004420, 0, 1> PECF 	;	 /*!< \brief Parity error clear flag */
			};
			 static reg_t<rw_t,0X40004420, 0, 32> ICR_D;	 /*!< \brief ICR register direct access */

			/*!
			\brief Receive data register
			*/
				 static reg_t<ro_t, 0X40004424, 0, 9> RDR 	;	 /*!< \brief Receive data value */

			/*!
			\brief Transmit data register
			*/
				 static reg_t<rw_t, 0X40004428, 0, 9> TDR 	;	 /*!< \brief Transmit data value */
		};

		/*!
		\brief Real-time clock
		*/
		struct RTC{

			/*!
			\brief time register
			*/
			struct TR{
				 static reg_t<rw_t, 0X40002800, 22, 1> PM 	;	 /*!< \brief AM/PM notation */
				 static reg_t<rw_t, 0X40002800, 20, 2> HT 	;	 /*!< \brief Hour tens in BCD format */
				 static reg_t<rw_t, 0X40002800, 16, 4> HU 	;	 /*!< \brief Hour units in BCD format */
				 static reg_t<rw_t, 0X40002800, 12, 3> MNT 	;	 /*!< \brief Minute tens in BCD format */
				 static reg_t<rw_t, 0X40002800, 8, 4> MNU 	;	 /*!< \brief Minute units in BCD format */
				 static reg_t<rw_t, 0X40002800, 4, 3> ST 	;	 /*!< \brief Second tens in BCD format */
				 static reg_t<rw_t, 0X40002800, 0, 4> SU 	;	 /*!< \brief Second units in BCD format */
			};
			 static reg_t<rw_t,0X40002800, 0, 32> TR_D;	 /*!< \brief TR register direct access */

			/*!
			\brief date register
			*/
			struct DR{
				 static reg_t<rw_t, 0X40002804, 20, 4> YT 	;	 /*!< \brief Year tens in BCD format */
				 static reg_t<rw_t, 0X40002804, 16, 4> YU 	;	 /*!< \brief Year units in BCD format */
				 static reg_t<rw_t, 0X40002804, 13, 3> WDU 	;	 /*!< \brief Week day units */
				 static reg_t<rw_t, 0X40002804, 12, 1> MT 	;	 /*!< \brief Month tens in BCD format */
				 static reg_t<rw_t, 0X40002804, 8, 4> MU 	;	 /*!< \brief Month units in BCD format */
				 static reg_t<rw_t, 0X40002804, 4, 2> DT 	;	 /*!< \brief Date tens in BCD format */
				 static reg_t<rw_t, 0X40002804, 0, 4> DU 	;	 /*!< \brief Date units in BCD format */
			};
			 static reg_t<rw_t,0X40002804, 0, 32> DR_D;	 /*!< \brief DR register direct access */

			/*!
			\brief control register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40002808, 3, 1> TSEDGE 	;	 /*!< \brief Time-stamp event active edge */
				 static reg_t<rw_t, 0X40002808, 4, 1> REFCKON 	;	 /*!< \brief RTC_REFIN reference clock detection enable (50 or 60 Hz) */
				 static reg_t<rw_t, 0X40002808, 5, 1> BYPSHAD 	;	 /*!< \brief Bypass the shadow registers */
				 static reg_t<rw_t, 0X40002808, 6, 1> FMT 	;	 /*!< \brief Hour format */
				 static reg_t<rw_t, 0X40002808, 8, 1> ALRAE 	;	 /*!< \brief Alarm A enable */
				 static reg_t<rw_t, 0X40002808, 11, 1> TSE 	;	 /*!< \brief timestamp enable */
				 static reg_t<rw_t, 0X40002808, 12, 1> ALRAIE 	;	 /*!< \brief Alarm A interrupt enable */
				 static reg_t<rw_t, 0X40002808, 15, 1> TSIE 	;	 /*!< \brief Time-stamp interrupt enable */
				 static reg_t<wo_t, 0X40002808, 16, 1> ADD1H 	;	 /*!< \brief Add 1 hour (summer time change) */
				 static reg_t<wo_t, 0X40002808, 17, 1> SUB1H 	;	 /*!< \brief Subtract 1 hour (winter time change) */
				 static reg_t<rw_t, 0X40002808, 18, 1> BKP 	;	 /*!< \brief Backup */
				 static reg_t<rw_t, 0X40002808, 19, 1> COSEL 	;	 /*!< \brief Calibration output selection */
				 static reg_t<rw_t, 0X40002808, 20, 1> POL 	;	 /*!< \brief Output polarity */
				 static reg_t<rw_t, 0X40002808, 21, 2> OSEL 	;	 /*!< \brief Output selection */
				 static reg_t<rw_t, 0X40002808, 23, 1> COE 	;	 /*!< \brief Calibration output enable */
			};
			 static reg_t<rw_t,0X40002808, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief initialization and status register
			*/
			struct ISR{
				 static reg_t<ro_t, 0X4000280C, 0, 1> ALRAWF 	;	 /*!< \brief Alarm A write flag */
				 static reg_t<rw_t, 0X4000280C, 3, 1> SHPF 	;	 /*!< \brief Shift operation pending */
				 static reg_t<ro_t, 0X4000280C, 4, 1> INITS 	;	 /*!< \brief Initialization status flag */
				 static reg_t<rw_t, 0X4000280C, 5, 1> RSF 	;	 /*!< \brief Registers synchronization flag */
				 static reg_t<ro_t, 0X4000280C, 6, 1> INITF 	;	 /*!< \brief Initialization flag */
				 static reg_t<rw_t, 0X4000280C, 7, 1> INIT 	;	 /*!< \brief Initialization mode */
				 static reg_t<rw_t, 0X4000280C, 8, 1> ALRAF 	;	 /*!< \brief Alarm A flag */
				 static reg_t<rw_t, 0X4000280C, 11, 1> TSF 	;	 /*!< \brief Time-stamp flag */
				 static reg_t<rw_t, 0X4000280C, 12, 1> TSOVF 	;	 /*!< \brief Time-stamp overflow flag */
				 static reg_t<rw_t, 0X4000280C, 13, 1> TAMP1F 	;	 /*!< \brief RTC_TAMP1 detection flag */
				 static reg_t<rw_t, 0X4000280C, 14, 1> TAMP2F 	;	 /*!< \brief RTC_TAMP2 detection flag */
				 static reg_t<ro_t, 0X4000280C, 16, 1> RECALPF 	;	 /*!< \brief Recalibration pending Flag */
			};
			 static reg_t<rw_t,0X4000280C, 0, 32> ISR_D;	 /*!< \brief ISR register direct access */

			/*!
			\brief prescaler register
			*/
			struct PRER{
				 static reg_t<rw_t, 0X40002810, 16, 7> PREDIV_A 	;	 /*!< \brief Asynchronous prescaler factor */
				 static reg_t<rw_t, 0X40002810, 0, 15> PREDIV_S 	;	 /*!< \brief Synchronous prescaler factor */
			};
			 static reg_t<rw_t,0X40002810, 0, 32> PRER_D;	 /*!< \brief PRER register direct access */

			/*!
			\brief alarm A register
			*/
			struct ALRMAR{
				 static reg_t<rw_t, 0X4000281C, 31, 1> MSK4 	;	 /*!< \brief Alarm A date mask */
				 static reg_t<rw_t, 0X4000281C, 30, 1> WDSEL 	;	 /*!< \brief Week day selection */
				 static reg_t<rw_t, 0X4000281C, 28, 2> DT 	;	 /*!< \brief Date tens in BCD format. */
				 static reg_t<rw_t, 0X4000281C, 24, 4> DU 	;	 /*!< \brief Date units or day in BCD format. */
				 static reg_t<rw_t, 0X4000281C, 23, 1> MSK3 	;	 /*!< \brief Alarm A hours mask */
				 static reg_t<rw_t, 0X4000281C, 22, 1> PM 	;	 /*!< \brief AM/PM notation */
				 static reg_t<rw_t, 0X4000281C, 20, 2> HT 	;	 /*!< \brief Hour tens in BCD format. */
				 static reg_t<rw_t, 0X4000281C, 16, 4> HU 	;	 /*!< \brief Hour units in BCD format. */
				 static reg_t<rw_t, 0X4000281C, 15, 1> MSK2 	;	 /*!< \brief Alarm A minutes mask */
				 static reg_t<rw_t, 0X4000281C, 12, 3> MNT 	;	 /*!< \brief Minute tens in BCD format. */
				 static reg_t<rw_t, 0X4000281C, 8, 4> MNU 	;	 /*!< \brief Minute units in BCD format. */
				 static reg_t<rw_t, 0X4000281C, 7, 1> MSK1 	;	 /*!< \brief Alarm A seconds mask */
				 static reg_t<rw_t, 0X4000281C, 4, 3> ST 	;	 /*!< \brief Second tens in BCD format. */
				 static reg_t<rw_t, 0X4000281C, 0, 4> SU 	;	 /*!< \brief Second units in BCD format. */
			};
			 static reg_t<rw_t,0X4000281C, 0, 32> ALRMAR_D;	 /*!< \brief ALRMAR register direct access */

			/*!
			\brief write protection register
			*/
			struct WPR{
				 static reg_t<wo_t, 0X40002824, 0, 8> KEY 	;	 /*!< \brief Write protection key */
			};

			/*!
			\brief sub second register
			*/
			struct SSR{
				 static reg_t<ro_t, 0X40002828, 0, 16> SS 	;	 /*!< \brief Sub second value */
			};

			/*!
			\brief shift control register
			*/
			struct SHIFTR{
				 static reg_t<wo_t, 0X4000282C, 31, 1> ADD1S 	;	 /*!< \brief Reserved */
				 static reg_t<wo_t, 0X4000282C, 0, 15> SUBFS 	;	 /*!< \brief Subtract a fraction of a second */
			};
			 static reg_t<rw_t,0X4000282C, 0, 32> SHIFTR_D;	 /*!< \brief SHIFTR register direct access */

			/*!
			\brief timestamp time register
			*/
			struct TSTR{
				 static reg_t<ro_t, 0X40002830, 22, 1> PM 	;	 /*!< \brief AM/PM notation */
				 static reg_t<ro_t, 0X40002830, 20, 2> HT 	;	 /*!< \brief Hour tens in BCD format. */
				 static reg_t<ro_t, 0X40002830, 16, 4> HU 	;	 /*!< \brief Hour units in BCD format. */
				 static reg_t<ro_t, 0X40002830, 12, 3> MNT 	;	 /*!< \brief Minute tens in BCD format. */
				 static reg_t<ro_t, 0X40002830, 8, 4> MNU 	;	 /*!< \brief Minute units in BCD format. */
				 static reg_t<ro_t, 0X40002830, 4, 3> ST 	;	 /*!< \brief Second tens in BCD format. */
				 static reg_t<ro_t, 0X40002830, 0, 4> SU 	;	 /*!< \brief Second units in BCD format. */
			};
			 static reg_t<rw_t,0X40002830, 0, 32> TSTR_D;	 /*!< \brief TSTR register direct access */

			/*!
			\brief timestamp date register
			*/
			struct TSDR{
				 static reg_t<ro_t, 0X40002834, 13, 3> WDU 	;	 /*!< \brief Week day units */
				 static reg_t<ro_t, 0X40002834, 12, 1> MT 	;	 /*!< \brief Month tens in BCD format */
				 static reg_t<ro_t, 0X40002834, 8, 4> MU 	;	 /*!< \brief Month units in BCD format */
				 static reg_t<ro_t, 0X40002834, 4, 2> DT 	;	 /*!< \brief Date tens in BCD format */
				 static reg_t<ro_t, 0X40002834, 0, 4> DU 	;	 /*!< \brief Date units in BCD format */
			};
			 static reg_t<rw_t,0X40002834, 0, 32> TSDR_D;	 /*!< \brief TSDR register direct access */

			/*!
			\brief time-stamp sub second register
			*/
			struct TSSSR{
				 static reg_t<ro_t, 0X40002838, 0, 16> SS 	;	 /*!< \brief Sub second value */
			};

			/*!
			\brief calibration register
			*/
			struct CALR{
				 static reg_t<rw_t, 0X4000283C, 15, 1> CALP 	;	 /*!< \brief Use an 8-second calibration cycle period */
				 static reg_t<rw_t, 0X4000283C, 14, 1> CALW8 	;	 /*!< \brief Use a 16-second calibration cycle period */
				 static reg_t<rw_t, 0X4000283C, 13, 1> CALW16 	;	 /*!< \brief Reserved */
				 static reg_t<rw_t, 0X4000283C, 0, 9> CALM 	;	 /*!< \brief Calibration minus */
			};
			 static reg_t<rw_t,0X4000283C, 0, 32> CALR_D;	 /*!< \brief CALR register direct access */

			/*!
			\brief tamper and alternate function configuration register
			*/
			struct TAFCR{
				 static reg_t<rw_t, 0X40002840, 23, 1> PC15MODE 	;	 /*!< \brief PC15 mode */
				 static reg_t<rw_t, 0X40002840, 22, 1> PC15VALUE 	;	 /*!< \brief PC15 value */
				 static reg_t<rw_t, 0X40002840, 21, 1> PC14MODE 	;	 /*!< \brief PC14 mode */
				 static reg_t<rw_t, 0X40002840, 20, 1> PC14VALUE 	;	 /*!< \brief PC14 value */
				 static reg_t<rw_t, 0X40002840, 19, 1> PC13MODE 	;	 /*!< \brief PC13 mode */
				 static reg_t<rw_t, 0X40002840, 18, 1> PC13VALUE 	;	 /*!< \brief RTC_ALARM output type/PC13 value */
				 static reg_t<rw_t, 0X40002840, 15, 1> TAMP_PUDIS 	;	 /*!< \brief RTC_TAMPx pull-up disable */
				 static reg_t<rw_t, 0X40002840, 13, 2> TAMP_PRCH 	;	 /*!< \brief RTC_TAMPx precharge duration */
				 static reg_t<rw_t, 0X40002840, 11, 2> TAMPFLT 	;	 /*!< \brief RTC_TAMPx filter count */
				 static reg_t<rw_t, 0X40002840, 8, 3> TAMPFREQ 	;	 /*!< \brief Tamper sampling frequency */
				 static reg_t<rw_t, 0X40002840, 7, 1> TAMPTS 	;	 /*!< \brief Activate timestamp on tamper detection event */
				 static reg_t<rw_t, 0X40002840, 4, 1> TAMP2_TRG 	;	 /*!< \brief Active level for RTC_TAMP2 input */
				 static reg_t<rw_t, 0X40002840, 3, 1> TAMP2E 	;	 /*!< \brief RTC_TAMP2 input detection enable */
				 static reg_t<rw_t, 0X40002840, 2, 1> TAMPIE 	;	 /*!< \brief Tamper interrupt enable */
				 static reg_t<rw_t, 0X40002840, 1, 1> TAMP1TRG 	;	 /*!< \brief Active level for RTC_TAMP1 input */
				 static reg_t<rw_t, 0X40002840, 0, 1> TAMP1E 	;	 /*!< \brief RTC_TAMP1 input detection enable */
			};
			 static reg_t<rw_t,0X40002840, 0, 32> TAFCR_D;	 /*!< \brief TAFCR register direct access */

			/*!
			\brief alarm A sub second register
			*/
			struct ALRMASSR{
				 static reg_t<rw_t, 0X40002844, 24, 4> MASKSS 	;	 /*!< \brief Mask the most-significant bits starting at this bit */
				 static reg_t<rw_t, 0X40002844, 0, 15> SS 	;	 /*!< \brief Sub seconds value */
			};
			 static reg_t<rw_t,0X40002844, 0, 32> ALRMASSR_D;	 /*!< \brief ALRMASSR register direct access */

			/*!
			\brief backup register
			*/
			struct BKP0R{
				 static reg_t<rw_t, 0X40002850, 0, 32> BKP 	;	 /*!< \brief BKP */
			};

			/*!
			\brief backup register
			*/
			struct BKP1R{
				 static reg_t<rw_t, 0X40002854, 0, 32> BKP 	;	 /*!< \brief BKP */
			};

			/*!
			\brief backup register
			*/
			struct BKP2R{
				 static reg_t<rw_t, 0X40002858, 0, 32> BKP 	;	 /*!< \brief BKP */
			};

			/*!
			\brief backup register
			*/
			struct BKP3R{
				 static reg_t<rw_t, 0X4000285C, 0, 32> BKP 	;	 /*!< \brief BKP */
			};

			/*!
			\brief backup register
			*/
			struct BKP4R{
				 static reg_t<rw_t, 0X40002860, 0, 32> BKP 	;	 /*!< \brief BKP */
			};
		};

		/*!
		\brief General-purpose-timers
		*/
		struct TIM15{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40014000, 8, 2> CKD 	;	 /*!< \brief Clock division */
				 static reg_t<rw_t, 0X40014000, 7, 1> ARPE 	;	 /*!< \brief Auto-reload preload enable */
				 static reg_t<rw_t, 0X40014000, 3, 1> OPM 	;	 /*!< \brief One-pulse mode */
				 static reg_t<rw_t, 0X40014000, 2, 1> URS 	;	 /*!< \brief Update request source */
				 static reg_t<rw_t, 0X40014000, 1, 1> UDIS 	;	 /*!< \brief Update disable */
				 static reg_t<rw_t, 0X40014000, 0, 1> CEN 	;	 /*!< \brief Counter enable */
			};
			 static reg_t<rw_t,0X40014000, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40014004, 10, 1> OIS2 	;	 /*!< \brief Output Idle state 2 */
				 static reg_t<rw_t, 0X40014004, 9, 1> OIS1N 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40014004, 8, 1> OIS1 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40014004, 4, 3> MMS 	;	 /*!< \brief Master mode selection */
				 static reg_t<rw_t, 0X40014004, 3, 1> CCDS 	;	 /*!< \brief Capture/compare DMA selection */
				 static reg_t<rw_t, 0X40014004, 2, 1> CCUS 	;	 /*!< \brief Capture/compare control update selection */
				 static reg_t<rw_t, 0X40014004, 0, 1> CCPC 	;	 /*!< \brief Capture/compare preloaded control */
			};
			 static reg_t<rw_t,0X40014004, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief slave mode control register
			*/
			struct SMCR{
				 static reg_t<rw_t, 0X40014008, 7, 1> MSM 	;	 /*!< \brief Master/Slave mode */
				 static reg_t<rw_t, 0X40014008, 4, 3> TS 	;	 /*!< \brief Trigger selection */
				 static reg_t<rw_t, 0X40014008, 0, 3> SMS 	;	 /*!< \brief Slave mode selection */
			};
			 static reg_t<rw_t,0X40014008, 0, 32> SMCR_D;	 /*!< \brief SMCR register direct access */

			/*!
			\brief DMA/Interrupt enable register
			*/
			struct DIER{
				 static reg_t<rw_t, 0X4001400C, 14, 1> TDE 	;	 /*!< \brief Trigger DMA request enable */
				 static reg_t<rw_t, 0X4001400C, 10, 1> CC2DE 	;	 /*!< \brief Capture/Compare 2 DMA request enable */
				 static reg_t<rw_t, 0X4001400C, 9, 1> CC1DE 	;	 /*!< \brief Capture/Compare 1 DMA request enable */
				 static reg_t<rw_t, 0X4001400C, 8, 1> UDE 	;	 /*!< \brief Update DMA request enable */
				 static reg_t<rw_t, 0X4001400C, 7, 1> BIE 	;	 /*!< \brief Break interrupt enable */
				 static reg_t<rw_t, 0X4001400C, 6, 1> TIE 	;	 /*!< \brief Trigger interrupt enable */
				 static reg_t<rw_t, 0X4001400C, 5, 1> COMIE 	;	 /*!< \brief COM interrupt enable */
				 static reg_t<rw_t, 0X4001400C, 2, 1> CC2IE 	;	 /*!< \brief Capture/Compare 2 interrupt enable */
				 static reg_t<rw_t, 0X4001400C, 1, 1> CC1IE 	;	 /*!< \brief Capture/Compare 1 interrupt enable */
				 static reg_t<rw_t, 0X4001400C, 0, 1> UIE 	;	 /*!< \brief Update interrupt enable */
			};
			 static reg_t<rw_t,0X4001400C, 0, 32> DIER_D;	 /*!< \brief DIER register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40014010, 10, 1> CC2OF 	;	 /*!< \brief Capture/compare 2 overcapture flag */
				 static reg_t<rw_t, 0X40014010, 9, 1> CC1OF 	;	 /*!< \brief Capture/Compare 1 overcapture flag */
				 static reg_t<rw_t, 0X40014010, 7, 1> BIF 	;	 /*!< \brief Break interrupt flag */
				 static reg_t<rw_t, 0X40014010, 6, 1> TIF 	;	 /*!< \brief Trigger interrupt flag */
				 static reg_t<rw_t, 0X40014010, 5, 1> COMIF 	;	 /*!< \brief COM interrupt flag */
				 static reg_t<rw_t, 0X40014010, 2, 1> CC2IF 	;	 /*!< \brief Capture/Compare 2 interrupt flag */
				 static reg_t<rw_t, 0X40014010, 1, 1> CC1IF 	;	 /*!< \brief Capture/compare 1 interrupt flag */
				 static reg_t<rw_t, 0X40014010, 0, 1> UIF 	;	 /*!< \brief Update interrupt flag */
			};
			 static reg_t<rw_t,0X40014010, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief event generation register
			*/
			struct EGR{
				 static reg_t<wo_t, 0X40014014, 7, 1> BG 	;	 /*!< \brief Break generation */
				 static reg_t<wo_t, 0X40014014, 6, 1> TG 	;	 /*!< \brief Trigger generation */
				 static reg_t<wo_t, 0X40014014, 5, 1> COMG 	;	 /*!< \brief Capture/Compare control update generation */
				 static reg_t<wo_t, 0X40014014, 2, 1> CC2G 	;	 /*!< \brief Capture/compare 2 generation */
				 static reg_t<wo_t, 0X40014014, 1, 1> CC1G 	;	 /*!< \brief Capture/compare 1 generation */
				 static reg_t<wo_t, 0X40014014, 0, 1> UG 	;	 /*!< \brief Update generation */
			};
			 static reg_t<rw_t,0X40014014, 0, 32> EGR_D;	 /*!< \brief EGR register direct access */

			/*!
			\brief capture/compare mode register (output mode)
			*/
			struct CCMR1_Output{
				 static reg_t<rw_t, 0X40014018, 12, 3> OC2M 	;	 /*!< \brief Output Compare 2 mode */
				 static reg_t<rw_t, 0X40014018, 11, 1> OC2PE 	;	 /*!< \brief Output Compare 2 preload enable */
				 static reg_t<rw_t, 0X40014018, 10, 1> OC2FE 	;	 /*!< \brief Output Compare 2 fast enable */
				 static reg_t<rw_t, 0X40014018, 8, 2> CC2S 	;	 /*!< \brief Capture/Compare 2 selection */
				 static reg_t<rw_t, 0X40014018, 4, 3> OC1M 	;	 /*!< \brief Output Compare 1 mode */
				 static reg_t<rw_t, 0X40014018, 3, 1> OC1PE 	;	 /*!< \brief Output Compare 1 preload enable */
				 static reg_t<rw_t, 0X40014018, 2, 1> OC1FE 	;	 /*!< \brief Output Compare 1 fast enable */
				 static reg_t<rw_t, 0X40014018, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40014018, 0, 32> CCMR1_Output_D;	 /*!< \brief CCMR1_Output register direct access */

			/*!
			\brief capture/compare mode register 1 (input mode)
			*/
			struct CCMR1_Input{
				 static reg_t<rw_t, 0X40014018, 12, 4> IC2F 	;	 /*!< \brief Input capture 2 filter */
				 static reg_t<rw_t, 0X40014018, 10, 2> IC2PSC 	;	 /*!< \brief Input capture 2 prescaler */
				 static reg_t<rw_t, 0X40014018, 8, 2> CC2S 	;	 /*!< \brief Capture/Compare 2 selection */
				 static reg_t<rw_t, 0X40014018, 4, 4> IC1F 	;	 /*!< \brief Input capture 1 filter */
				 static reg_t<rw_t, 0X40014018, 2, 2> IC1PSC 	;	 /*!< \brief Input capture 1 prescaler */
				 static reg_t<rw_t, 0X40014018, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40014018, 0, 32> CCMR1_Input_D;	 /*!< \brief CCMR1_Input register direct access */

			/*!
			\brief capture/compare enable register
			*/
			struct CCER{
				 static reg_t<rw_t, 0X40014020, 7, 1> CC2NP 	;	 /*!< \brief Capture/Compare 2 output Polarity */
				 static reg_t<rw_t, 0X40014020, 5, 1> CC2P 	;	 /*!< \brief Capture/Compare 2 output Polarity */
				 static reg_t<rw_t, 0X40014020, 4, 1> CC2E 	;	 /*!< \brief Capture/Compare 2 output enable */
				 static reg_t<rw_t, 0X40014020, 3, 1> CC1NP 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40014020, 2, 1> CC1NE 	;	 /*!< \brief Capture/Compare 1 complementary output enable */
				 static reg_t<rw_t, 0X40014020, 1, 1> CC1P 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40014020, 0, 1> CC1E 	;	 /*!< \brief Capture/Compare 1 output enable */
			};
			 static reg_t<rw_t,0X40014020, 0, 32> CCER_D;	 /*!< \brief CCER register direct access */

			/*!
			\brief counter
			*/
				 static reg_t<rw_t, 0X40014024, 0, 16> CNT 	;	 /*!< \brief counter value */

			/*!
			\brief prescaler
			*/
				 static reg_t<rw_t, 0X40014028, 0, 16> PSC 	;	 /*!< \brief Prescaler value */

			/*!
			\brief auto-reload register
			*/
				 static reg_t<rw_t, 0X4001402C, 0, 16> ARR 	;	 /*!< \brief Auto-reload value */

			/*!
			\brief repetition counter register
			*/
			struct RCR{
				 static reg_t<rw_t, 0X40014030, 0, 8> REP 	;	 /*!< \brief Repetition counter value */
			};

			/*!
			\brief capture/compare register 1
			*/
				 static reg_t<rw_t, 0X40014034, 0, 16> CCR1 	;	 /*!< \brief Capture/Compare 1 value */

			/*!
			\brief capture/compare register 2
			*/
				 static reg_t<rw_t, 0X40014038, 0, 16> CCR2 	;	 /*!< \brief Capture/Compare 2 value */

			/*!
			\brief break and dead-time register
			*/
			struct BDTR{
				 static reg_t<rw_t, 0X40014044, 15, 1> MOE 	;	 /*!< \brief Main output enable */
				 static reg_t<rw_t, 0X40014044, 14, 1> AOE 	;	 /*!< \brief Automatic output enable */
				 static reg_t<rw_t, 0X40014044, 13, 1> BKP 	;	 /*!< \brief Break polarity */
				 static reg_t<rw_t, 0X40014044, 12, 1> BKE 	;	 /*!< \brief Break enable */
				 static reg_t<rw_t, 0X40014044, 11, 1> OSSR 	;	 /*!< \brief Off-state selection for Run mode */
				 static reg_t<rw_t, 0X40014044, 10, 1> OSSI 	;	 /*!< \brief Off-state selection for Idle mode */
				 static reg_t<rw_t, 0X40014044, 8, 2> LOCK 	;	 /*!< \brief Lock configuration */
				 static reg_t<rw_t, 0X40014044, 0, 8> DTG 	;	 /*!< \brief Dead-time generator setup */
			};
			 static reg_t<rw_t,0X40014044, 0, 32> BDTR_D;	 /*!< \brief BDTR register direct access */

			/*!
			\brief DMA control register
			*/
			struct DCR{
				 static reg_t<rw_t, 0X40014048, 8, 5> DBL 	;	 /*!< \brief DMA burst length */
				 static reg_t<rw_t, 0X40014048, 0, 5> DBA 	;	 /*!< \brief DMA base address */
			};
			 static reg_t<rw_t,0X40014048, 0, 32> DCR_D;	 /*!< \brief DCR register direct access */

			/*!
			\brief DMA address for full transfer
			*/
			struct DMAR{
				 static reg_t<rw_t, 0X4001404C, 0, 16> DMAB 	;	 /*!< \brief DMA register for burst accesses */
			};
		};

		/*!
		\brief General-purpose-timers
		*/
		struct TIM16{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40014400, 8, 2> CKD 	;	 /*!< \brief Clock division */
				 static reg_t<rw_t, 0X40014400, 7, 1> ARPE 	;	 /*!< \brief Auto-reload preload enable */
				 static reg_t<rw_t, 0X40014400, 3, 1> OPM 	;	 /*!< \brief One-pulse mode */
				 static reg_t<rw_t, 0X40014400, 2, 1> URS 	;	 /*!< \brief Update request source */
				 static reg_t<rw_t, 0X40014400, 1, 1> UDIS 	;	 /*!< \brief Update disable */
				 static reg_t<rw_t, 0X40014400, 0, 1> CEN 	;	 /*!< \brief Counter enable */
			};
			 static reg_t<rw_t,0X40014400, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40014404, 9, 1> OIS1N 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40014404, 8, 1> OIS1 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40014404, 3, 1> CCDS 	;	 /*!< \brief Capture/compare DMA selection */
				 static reg_t<rw_t, 0X40014404, 2, 1> CCUS 	;	 /*!< \brief Capture/compare control update selection */
				 static reg_t<rw_t, 0X40014404, 0, 1> CCPC 	;	 /*!< \brief Capture/compare preloaded control */
			};
			 static reg_t<rw_t,0X40014404, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief DMA/Interrupt enable register
			*/
			struct DIER{
				 static reg_t<rw_t, 0X4001440C, 14, 1> TDE 	;	 /*!< \brief Trigger DMA request enable */
				 static reg_t<rw_t, 0X4001440C, 9, 1> CC1DE 	;	 /*!< \brief Capture/Compare 1 DMA request enable */
				 static reg_t<rw_t, 0X4001440C, 8, 1> UDE 	;	 /*!< \brief Update DMA request enable */
				 static reg_t<rw_t, 0X4001440C, 7, 1> BIE 	;	 /*!< \brief Break interrupt enable */
				 static reg_t<rw_t, 0X4001440C, 6, 1> TIE 	;	 /*!< \brief Trigger interrupt enable */
				 static reg_t<rw_t, 0X4001440C, 5, 1> COMIE 	;	 /*!< \brief COM interrupt enable */
				 static reg_t<rw_t, 0X4001440C, 1, 1> CC1IE 	;	 /*!< \brief Capture/Compare 1 interrupt enable */
				 static reg_t<rw_t, 0X4001440C, 0, 1> UIE 	;	 /*!< \brief Update interrupt enable */
			};
			 static reg_t<rw_t,0X4001440C, 0, 32> DIER_D;	 /*!< \brief DIER register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40014410, 9, 1> CC1OF 	;	 /*!< \brief Capture/Compare 1 overcapture flag */
				 static reg_t<rw_t, 0X40014410, 7, 1> BIF 	;	 /*!< \brief Break interrupt flag */
				 static reg_t<rw_t, 0X40014410, 6, 1> TIF 	;	 /*!< \brief Trigger interrupt flag */
				 static reg_t<rw_t, 0X40014410, 5, 1> COMIF 	;	 /*!< \brief COM interrupt flag */
				 static reg_t<rw_t, 0X40014410, 1, 1> CC1IF 	;	 /*!< \brief Capture/compare 1 interrupt flag */
				 static reg_t<rw_t, 0X40014410, 0, 1> UIF 	;	 /*!< \brief Update interrupt flag */
			};
			 static reg_t<rw_t,0X40014410, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief event generation register
			*/
			struct EGR{
				 static reg_t<wo_t, 0X40014414, 7, 1> BG 	;	 /*!< \brief Break generation */
				 static reg_t<wo_t, 0X40014414, 6, 1> TG 	;	 /*!< \brief Trigger generation */
				 static reg_t<wo_t, 0X40014414, 5, 1> COMG 	;	 /*!< \brief Capture/Compare control update generation */
				 static reg_t<wo_t, 0X40014414, 1, 1> CC1G 	;	 /*!< \brief Capture/compare 1 generation */
				 static reg_t<wo_t, 0X40014414, 0, 1> UG 	;	 /*!< \brief Update generation */
			};
			 static reg_t<rw_t,0X40014414, 0, 32> EGR_D;	 /*!< \brief EGR register direct access */

			/*!
			\brief capture/compare mode register (output mode)
			*/
			struct CCMR1_Output{
				 static reg_t<rw_t, 0X40014418, 4, 3> OC1M 	;	 /*!< \brief Output Compare 1 mode */
				 static reg_t<rw_t, 0X40014418, 3, 1> OC1PE 	;	 /*!< \brief Output Compare 1 preload enable */
				 static reg_t<rw_t, 0X40014418, 2, 1> OC1FE 	;	 /*!< \brief Output Compare 1 fast enable */
				 static reg_t<rw_t, 0X40014418, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40014418, 0, 32> CCMR1_Output_D;	 /*!< \brief CCMR1_Output register direct access */

			/*!
			\brief capture/compare mode register 1 (input mode)
			*/
			struct CCMR1_Input{
				 static reg_t<rw_t, 0X40014418, 4, 4> IC1F 	;	 /*!< \brief Input capture 1 filter */
				 static reg_t<rw_t, 0X40014418, 2, 2> IC1PSC 	;	 /*!< \brief Input capture 1 prescaler */
				 static reg_t<rw_t, 0X40014418, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40014418, 0, 32> CCMR1_Input_D;	 /*!< \brief CCMR1_Input register direct access */

			/*!
			\brief capture/compare enable register
			*/
			struct CCER{
				 static reg_t<rw_t, 0X40014420, 3, 1> CC1NP 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40014420, 2, 1> CC1NE 	;	 /*!< \brief Capture/Compare 1 complementary output enable */
				 static reg_t<rw_t, 0X40014420, 1, 1> CC1P 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40014420, 0, 1> CC1E 	;	 /*!< \brief Capture/Compare 1 output enable */
			};
			 static reg_t<rw_t,0X40014420, 0, 32> CCER_D;	 /*!< \brief CCER register direct access */

			/*!
			\brief counter
			*/
				 static reg_t<rw_t, 0X40014424, 0, 16> CNT 	;	 /*!< \brief counter value */

			/*!
			\brief prescaler
			*/
				 static reg_t<rw_t, 0X40014428, 0, 16> PSC 	;	 /*!< \brief Prescaler value */

			/*!
			\brief auto-reload register
			*/
				 static reg_t<rw_t, 0X4001442C, 0, 16> ARR 	;	 /*!< \brief Auto-reload value */

			/*!
			\brief repetition counter register
			*/
			struct RCR{
				 static reg_t<rw_t, 0X40014430, 0, 8> REP 	;	 /*!< \brief Repetition counter value */
			};

			/*!
			\brief capture/compare register 1
			*/
				 static reg_t<rw_t, 0X40014434, 0, 16> CCR1 	;	 /*!< \brief Capture/Compare 1 value */

			/*!
			\brief break and dead-time register
			*/
			struct BDTR{
				 static reg_t<rw_t, 0X40014444, 15, 1> MOE 	;	 /*!< \brief Main output enable */
				 static reg_t<rw_t, 0X40014444, 14, 1> AOE 	;	 /*!< \brief Automatic output enable */
				 static reg_t<rw_t, 0X40014444, 13, 1> BKP 	;	 /*!< \brief Break polarity */
				 static reg_t<rw_t, 0X40014444, 12, 1> BKE 	;	 /*!< \brief Break enable */
				 static reg_t<rw_t, 0X40014444, 11, 1> OSSR 	;	 /*!< \brief Off-state selection for Run mode */
				 static reg_t<rw_t, 0X40014444, 10, 1> OSSI 	;	 /*!< \brief Off-state selection for Idle mode */
				 static reg_t<rw_t, 0X40014444, 8, 2> LOCK 	;	 /*!< \brief Lock configuration */
				 static reg_t<rw_t, 0X40014444, 0, 8> DTG 	;	 /*!< \brief Dead-time generator setup */
			};
			 static reg_t<rw_t,0X40014444, 0, 32> BDTR_D;	 /*!< \brief BDTR register direct access */

			/*!
			\brief DMA control register
			*/
			struct DCR{
				 static reg_t<rw_t, 0X40014448, 8, 5> DBL 	;	 /*!< \brief DMA burst length */
				 static reg_t<rw_t, 0X40014448, 0, 5> DBA 	;	 /*!< \brief DMA base address */
			};
			 static reg_t<rw_t,0X40014448, 0, 32> DCR_D;	 /*!< \brief DCR register direct access */

			/*!
			\brief DMA address for full transfer
			*/
			struct DMAR{
				 static reg_t<rw_t, 0X4001444C, 0, 16> DMAB 	;	 /*!< \brief DMA register for burst accesses */
			};
		};

		/*!
		\brief General-purpose-timers
	BasedOn:TIM16
		*/
		struct TIM17{

			/*!
			\brief control register 1
			*/
			struct CR1{
				 static reg_t<rw_t, 0X40014800, 8, 2> CKD 	;	 /*!< \brief Clock division */
				 static reg_t<rw_t, 0X40014800, 7, 1> ARPE 	;	 /*!< \brief Auto-reload preload enable */
				 static reg_t<rw_t, 0X40014800, 3, 1> OPM 	;	 /*!< \brief One-pulse mode */
				 static reg_t<rw_t, 0X40014800, 2, 1> URS 	;	 /*!< \brief Update request source */
				 static reg_t<rw_t, 0X40014800, 1, 1> UDIS 	;	 /*!< \brief Update disable */
				 static reg_t<rw_t, 0X40014800, 0, 1> CEN 	;	 /*!< \brief Counter enable */
			};
			 static reg_t<rw_t,0X40014800, 0, 32> CR1_D;	 /*!< \brief CR1 register direct access */

			/*!
			\brief control register 2
			*/
			struct CR2{
				 static reg_t<rw_t, 0X40014804, 9, 1> OIS1N 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40014804, 8, 1> OIS1 	;	 /*!< \brief Output Idle state 1 */
				 static reg_t<rw_t, 0X40014804, 3, 1> CCDS 	;	 /*!< \brief Capture/compare DMA selection */
				 static reg_t<rw_t, 0X40014804, 2, 1> CCUS 	;	 /*!< \brief Capture/compare control update selection */
				 static reg_t<rw_t, 0X40014804, 0, 1> CCPC 	;	 /*!< \brief Capture/compare preloaded control */
			};
			 static reg_t<rw_t,0X40014804, 0, 32> CR2_D;	 /*!< \brief CR2 register direct access */

			/*!
			\brief DMA/Interrupt enable register
			*/
			struct DIER{
				 static reg_t<rw_t, 0X4001480C, 14, 1> TDE 	;	 /*!< \brief Trigger DMA request enable */
				 static reg_t<rw_t, 0X4001480C, 9, 1> CC1DE 	;	 /*!< \brief Capture/Compare 1 DMA request enable */
				 static reg_t<rw_t, 0X4001480C, 8, 1> UDE 	;	 /*!< \brief Update DMA request enable */
				 static reg_t<rw_t, 0X4001480C, 7, 1> BIE 	;	 /*!< \brief Break interrupt enable */
				 static reg_t<rw_t, 0X4001480C, 6, 1> TIE 	;	 /*!< \brief Trigger interrupt enable */
				 static reg_t<rw_t, 0X4001480C, 5, 1> COMIE 	;	 /*!< \brief COM interrupt enable */
				 static reg_t<rw_t, 0X4001480C, 1, 1> CC1IE 	;	 /*!< \brief Capture/Compare 1 interrupt enable */
				 static reg_t<rw_t, 0X4001480C, 0, 1> UIE 	;	 /*!< \brief Update interrupt enable */
			};
			 static reg_t<rw_t,0X4001480C, 0, 32> DIER_D;	 /*!< \brief DIER register direct access */

			/*!
			\brief status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X40014810, 9, 1> CC1OF 	;	 /*!< \brief Capture/Compare 1 overcapture flag */
				 static reg_t<rw_t, 0X40014810, 7, 1> BIF 	;	 /*!< \brief Break interrupt flag */
				 static reg_t<rw_t, 0X40014810, 6, 1> TIF 	;	 /*!< \brief Trigger interrupt flag */
				 static reg_t<rw_t, 0X40014810, 5, 1> COMIF 	;	 /*!< \brief COM interrupt flag */
				 static reg_t<rw_t, 0X40014810, 1, 1> CC1IF 	;	 /*!< \brief Capture/compare 1 interrupt flag */
				 static reg_t<rw_t, 0X40014810, 0, 1> UIF 	;	 /*!< \brief Update interrupt flag */
			};
			 static reg_t<rw_t,0X40014810, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief event generation register
			*/
			struct EGR{
				 static reg_t<wo_t, 0X40014814, 7, 1> BG 	;	 /*!< \brief Break generation */
				 static reg_t<wo_t, 0X40014814, 6, 1> TG 	;	 /*!< \brief Trigger generation */
				 static reg_t<wo_t, 0X40014814, 5, 1> COMG 	;	 /*!< \brief Capture/Compare control update generation */
				 static reg_t<wo_t, 0X40014814, 1, 1> CC1G 	;	 /*!< \brief Capture/compare 1 generation */
				 static reg_t<wo_t, 0X40014814, 0, 1> UG 	;	 /*!< \brief Update generation */
			};
			 static reg_t<rw_t,0X40014814, 0, 32> EGR_D;	 /*!< \brief EGR register direct access */

			/*!
			\brief capture/compare mode register (output mode)
			*/
			struct CCMR1_Output{
				 static reg_t<rw_t, 0X40014818, 4, 3> OC1M 	;	 /*!< \brief Output Compare 1 mode */
				 static reg_t<rw_t, 0X40014818, 3, 1> OC1PE 	;	 /*!< \brief Output Compare 1 preload enable */
				 static reg_t<rw_t, 0X40014818, 2, 1> OC1FE 	;	 /*!< \brief Output Compare 1 fast enable */
				 static reg_t<rw_t, 0X40014818, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40014818, 0, 32> CCMR1_Output_D;	 /*!< \brief CCMR1_Output register direct access */

			/*!
			\brief capture/compare mode register 1 (input mode)
			*/
			struct CCMR1_Input{
				 static reg_t<rw_t, 0X40014818, 4, 4> IC1F 	;	 /*!< \brief Input capture 1 filter */
				 static reg_t<rw_t, 0X40014818, 2, 2> IC1PSC 	;	 /*!< \brief Input capture 1 prescaler */
				 static reg_t<rw_t, 0X40014818, 0, 2> CC1S 	;	 /*!< \brief Capture/Compare 1 selection */
			};
			 static reg_t<rw_t,0X40014818, 0, 32> CCMR1_Input_D;	 /*!< \brief CCMR1_Input register direct access */

			/*!
			\brief capture/compare enable register
			*/
			struct CCER{
				 static reg_t<rw_t, 0X40014820, 3, 1> CC1NP 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40014820, 2, 1> CC1NE 	;	 /*!< \brief Capture/Compare 1 complementary output enable */
				 static reg_t<rw_t, 0X40014820, 1, 1> CC1P 	;	 /*!< \brief Capture/Compare 1 output Polarity */
				 static reg_t<rw_t, 0X40014820, 0, 1> CC1E 	;	 /*!< \brief Capture/Compare 1 output enable */
			};
			 static reg_t<rw_t,0X40014820, 0, 32> CCER_D;	 /*!< \brief CCER register direct access */

			/*!
			\brief counter
			*/
				 static reg_t<rw_t, 0X40014824, 0, 16> CNT 	;	 /*!< \brief counter value */

			/*!
			\brief prescaler
			*/
				 static reg_t<rw_t, 0X40014828, 0, 16> PSC 	;	 /*!< \brief Prescaler value */

			/*!
			\brief auto-reload register
			*/
				 static reg_t<rw_t, 0X4001482C, 0, 16> ARR 	;	 /*!< \brief Auto-reload value */

			/*!
			\brief repetition counter register
			*/
			struct RCR{
				 static reg_t<rw_t, 0X40014830, 0, 8> REP 	;	 /*!< \brief Repetition counter value */
			};

			/*!
			\brief capture/compare register 1
			*/
				 static reg_t<rw_t, 0X40014834, 0, 16> CCR1 	;	 /*!< \brief Capture/Compare 1 value */

			/*!
			\brief break and dead-time register
			*/
			struct BDTR{
				 static reg_t<rw_t, 0X40014844, 15, 1> MOE 	;	 /*!< \brief Main output enable */
				 static reg_t<rw_t, 0X40014844, 14, 1> AOE 	;	 /*!< \brief Automatic output enable */
				 static reg_t<rw_t, 0X40014844, 13, 1> BKP 	;	 /*!< \brief Break polarity */
				 static reg_t<rw_t, 0X40014844, 12, 1> BKE 	;	 /*!< \brief Break enable */
				 static reg_t<rw_t, 0X40014844, 11, 1> OSSR 	;	 /*!< \brief Off-state selection for Run mode */
				 static reg_t<rw_t, 0X40014844, 10, 1> OSSI 	;	 /*!< \brief Off-state selection for Idle mode */
				 static reg_t<rw_t, 0X40014844, 8, 2> LOCK 	;	 /*!< \brief Lock configuration */
				 static reg_t<rw_t, 0X40014844, 0, 8> DTG 	;	 /*!< \brief Dead-time generator setup */
			};
			 static reg_t<rw_t,0X40014844, 0, 32> BDTR_D;	 /*!< \brief BDTR register direct access */

			/*!
			\brief DMA control register
			*/
			struct DCR{
				 static reg_t<rw_t, 0X40014848, 8, 5> DBL 	;	 /*!< \brief DMA burst length */
				 static reg_t<rw_t, 0X40014848, 0, 5> DBA 	;	 /*!< \brief DMA base address */
			};
			 static reg_t<rw_t,0X40014848, 0, 32> DCR_D;	 /*!< \brief DCR register direct access */

			/*!
			\brief DMA address for full transfer
			*/
			struct DMAR{
				 static reg_t<rw_t, 0X4001484C, 0, 16> DMAB 	;	 /*!< \brief DMA register for burst accesses */
			};
		};

		/*!
		\brief Flash
		*/
		struct Flash{

			/*!
			\brief Flash access control register
			*/
			struct ACR{
				 static reg_t<rw_t, 0X40022000, 0, 3> LATENCY 	;	 /*!< \brief LATENCY */
				 static reg_t<rw_t, 0X40022000, 4, 1> PRFTBE 	;	 /*!< \brief PRFTBE */
				 static reg_t<ro_t, 0X40022000, 5, 1> PRFTBS 	;	 /*!< \brief PRFTBS */
			};
			 static reg_t<rw_t,0X40022000, 0, 32> ACR_D;	 /*!< \brief ACR register direct access */

			/*!
			\brief Flash key register
			*/
			struct KEYR{
				 static reg_t<wo_t, 0X40022004, 0, 32> FKEYR 	;	 /*!< \brief Flash Key */
			};

			/*!
			\brief Flash option key register
			*/
				 static reg_t<wo_t, 0X40022008, 0, 32> OPTKEYR 	;	 /*!< \brief Option byte key */

			/*!
			\brief Flash status register
			*/
			struct SR{
				 static reg_t<rw_t, 0X4002200C, 5, 1> EOP 	;	 /*!< \brief End of operation */
				 static reg_t<rw_t, 0X4002200C, 4, 1> WRPRT 	;	 /*!< \brief Write protection error */
				 static reg_t<rw_t, 0X4002200C, 2, 1> PGERR 	;	 /*!< \brief Programming error */
				 static reg_t<ro_t, 0X4002200C, 0, 1> BSY 	;	 /*!< \brief Busy */
			};
			 static reg_t<rw_t,0X4002200C, 0, 32> SR_D;	 /*!< \brief SR register direct access */

			/*!
			\brief Flash control register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40022010, 13, 1> FORCE_OPTLOAD 	;	 /*!< \brief Force option byte loading */
				 static reg_t<rw_t, 0X40022010, 12, 1> EOPIE 	;	 /*!< \brief End of operation interrupt enable */
				 static reg_t<rw_t, 0X40022010, 10, 1> ERRIE 	;	 /*!< \brief Error interrupt enable */
				 static reg_t<rw_t, 0X40022010, 9, 1> OPTWRE 	;	 /*!< \brief Option bytes write enable */
				 static reg_t<rw_t, 0X40022010, 7, 1> LOCK 	;	 /*!< \brief Lock */
				 static reg_t<rw_t, 0X40022010, 6, 1> STRT 	;	 /*!< \brief Start */
				 static reg_t<rw_t, 0X40022010, 5, 1> OPTER 	;	 /*!< \brief Option byte erase */
				 static reg_t<rw_t, 0X40022010, 4, 1> OPTPG 	;	 /*!< \brief Option byte programming */
				 static reg_t<rw_t, 0X40022010, 2, 1> MER 	;	 /*!< \brief Mass erase */
				 static reg_t<rw_t, 0X40022010, 1, 1> PER 	;	 /*!< \brief Page erase */
				 static reg_t<rw_t, 0X40022010, 0, 1> PG 	;	 /*!< \brief Programming */
			};
			 static reg_t<rw_t,0X40022010, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief Flash address register
			*/
			struct AR{
				 static reg_t<wo_t, 0X40022014, 0, 32> FAR 	;	 /*!< \brief Flash address */
			};

			/*!
			\brief Option byte register
			*/
			struct OBR{
				 static reg_t<ro_t, 0X4002201C, 24, 8> Data1 	;	 /*!< \brief Data1 */
				 static reg_t<ro_t, 0X4002201C, 16, 8> Data0 	;	 /*!< \brief Data0 */
				 static reg_t<ro_t, 0X4002201C, 13, 1> VDDA_MONITOR 	;	 /*!< \brief VDDA_MONITOR */
				 static reg_t<ro_t, 0X4002201C, 12, 1> BOOT1 	;	 /*!< \brief BOOT1 */
				 static reg_t<ro_t, 0X4002201C, 10, 1> nRST_STDBY 	;	 /*!< \brief nRST_STDBY */
				 static reg_t<ro_t, 0X4002201C, 9, 1> nRST_STOP 	;	 /*!< \brief nRST_STOP */
				 static reg_t<ro_t, 0X4002201C, 8, 1> WDG_SW 	;	 /*!< \brief WDG_SW */
				 static reg_t<ro_t, 0X4002201C, 2, 1> LEVEL2_PROT 	;	 /*!< \brief Level 2 protection status */
				 static reg_t<ro_t, 0X4002201C, 1, 1> LEVEL1_PROT 	;	 /*!< \brief Level 1 protection status */
				 static reg_t<ro_t, 0X4002201C, 0, 1> OPTERR 	;	 /*!< \brief Option byte error */
			};
			 static reg_t<rw_t,0X4002201C, 0, 32> OBR_D;	 /*!< \brief OBR register direct access */

			/*!
			\brief Write protection register
			*/
			struct WRPR{
				 static reg_t<ro_t, 0X40022020, 0, 32> WRP 	;	 /*!< \brief Write protect */
			};
		};

		/*!
		\brief Debug support
		*/
		struct DBGMCU{

			/*!
			\brief MCU Device ID Code Register
			*/
			struct IDCODE{
				 static reg_t<ro_t, 0X40015800, 0, 12> DEV_ID 	;	 /*!< \brief Device Identifier */
				 static reg_t<ro_t, 0X40015800, 12, 4> DIV_ID 	;	 /*!< \brief Division Identifier */
				 static reg_t<ro_t, 0X40015800, 16, 16> REV_ID 	;	 /*!< \brief Revision Identifier */
			};
			 static reg_t<rw_t,0X40015800, 0, 32> IDCODE_D;	 /*!< \brief IDCODE register direct access */

			/*!
			\brief Debug MCU Configuration Register
			*/
			struct CR{
				 static reg_t<rw_t, 0X40015804, 1, 1> DBG_STOP 	;	 /*!< \brief Debug Stop Mode */
				 static reg_t<rw_t, 0X40015804, 2, 1> DBG_STANDBY 	;	 /*!< \brief Debug Standby Mode */
			};
			 static reg_t<rw_t,0X40015804, 0, 32> CR_D;	 /*!< \brief CR register direct access */

			/*!
			\brief APB Low Freeze Register
			*/
			struct APBLFZ{
				 static reg_t<rw_t, 0X40015808, 0, 1> DBG_TIMER2_STOP 	;	 /*!< \brief Debug Timer 2 stopped when Core is halted */
				 static reg_t<rw_t, 0X40015808, 1, 1> DBG_TIMER3_STOP 	;	 /*!< \brief Debug Timer 3 stopped when Core is halted */
				 static reg_t<rw_t, 0X40015808, 4, 1> DBG_TIMER6_STOP 	;	 /*!< \brief Debug Timer 6 stopped when Core is halted */
				 static reg_t<rw_t, 0X40015808, 8, 1> DBG_TIMER14_STOP 	;	 /*!< \brief Debug Timer 14 stopped when Core is halted */
				 static reg_t<rw_t, 0X40015808, 10, 1> DBG_RTC_STOP 	;	 /*!< \brief Debug RTC stopped when Core is halted */
				 static reg_t<rw_t, 0X40015808, 11, 1> DBG_WWDG_STOP 	;	 /*!< \brief Debug Window Wachdog stopped when Core is halted */
				 static reg_t<rw_t, 0X40015808, 12, 1> DBG_IWDG_STOP 	;	 /*!< \brief Debug Independent Wachdog stopped when Core is halted */
				 static reg_t<rw_t, 0X40015808, 21, 1> I2C1_SMBUS_TIMEOUT 	;	 /*!< \brief SMBUS timeout mode stopped when Core is halted */
			};
			 static reg_t<rw_t,0X40015808, 0, 32> APBLFZ_D;	 /*!< \brief APBLFZ register direct access */

			/*!
			\brief APB High Freeze Register
			*/
			struct APBHFZ{
				 static reg_t<rw_t, 0X4001580C, 11, 1> DBG_TIMER1_STOP 	;	 /*!< \brief Debug Timer 1 stopped when Core is halted */
				 static reg_t<rw_t, 0X4001580C, 16, 1> DBG_TIMER15_STO 	;	 /*!< \brief Debug Timer 15 stopped when Core is halted */
				 static reg_t<rw_t, 0X4001580C, 17, 1> DBG_TIMER16_STO 	;	 /*!< \brief Debug Timer 16 stopped when Core is halted */
				 static reg_t<rw_t, 0X4001580C, 18, 1> DBG_TIMER17_STO 	;	 /*!< \brief Debug Timer 17 stopped when Core is halted */
			};
			 static reg_t<rw_t,0X4001580C, 0, 32> APBHFZ_D;	 /*!< \brief APBHFZ register direct access */
		};
	}
}
