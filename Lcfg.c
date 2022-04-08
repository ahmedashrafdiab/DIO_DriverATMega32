#include "DIO_Interface.h"

/* ------- Lcfg File (linking configuration file) -------
	-this file created to configure the pins of micro controller and
	  choose status of pin according to your project
	-it's consist of constant array have statuses of all pins 
	-length of array is number of total pins of M.C.
	-by using DIO_Init() function can access the elements of this array once only in main() function 
*/
const	DIO_Status_type PinsStatusArray[TOTAL_PINS]={
	OUTPUT,      /* Port A Pin 0 ADC0*/
	OUTPUT,      /* Port A Pin 1 ADC1*/
	OUTPUT,      /* Port A Pin 2 */
	OUTPUT,      /* Port A Pin 3 */
	OUTPUT,      /* Port A Pin 4 */
	OUTPUT,      /* Port A Pin 5 */
	OUTPUT,      /* Port A Pin 6 */
	OUTPUT,      /* Port A Pin 7 */
	INPULL,      /* Port B Pin 0   / */
	OUTPUT,      /* Port B Pin 1   /*/
	OUTPUT,		 /* Port B Pin 2 / INT2*/
	OUTPUT,		 /* Port B Pin 3   /OC0*/
	OUTPUT,		 /* Port B Pin 4 /ss*/
	INFREE,		 /* Port B Pin 5 //mosi*/
	OUTPUT,		 /* Port B Pin 6 /miso*/
	INFREE,		 /* Port B Pin 7 clk*/
	OUTPUT,		 /* Port C Pin 0 */
	OUTPUT,		 /* Port C Pin 1 */
	OUTPUT,		 /* Port C Pin 2 */
	OUTPUT,		 /* Port C Pin 3 */
	OUTPUT,		 /* Port C Pin 4 */
	OUTPUT,		 /* Port C Pin 5 */
	OUTPUT,		 /* Port C Pin 6 */
	OUTPUT,		 /* Port C Pin 7 */
	OUTPUT,		 /* Port D Pin 0 */
	OUTPUT,		 /* Port D Pin 1 */
    OUTPUT,      /* Port D Pin 2 / INT0  */
	OUTPUT,      /* Port D Pin 3 / INT1  */
	OUTPUT,		 /* Port D Pin 4 / OCR1B */
	OUTPUT,		 /* Port D Pin 5 / OCR1A */
	OUTPUT,		 /* Port D Pin 6 / ICP   */
	OUTPUT		 /* Port D Pin 7 */
	};