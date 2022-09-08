#include <Std_Types.h>
#include <DIO.h>
/******************************************************************
 * \Syntax          : uint8 Init_LED(Pin_Num pin , Port_Num port);
 * \Description     : initialize a LED with port and pin numbers 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : pin LED pin number
 *                    port LED port number
 * \Parameters (out): None
 * \Return value    : uint32 LED id
 *****************************************************************/
uint32 Init_LED(Pin_Num pin , Port_Num port);
/******************************************************************
 * \Syntax          : void LED_HIGH(uint32 LDE_ID)
 * \Description     : set the value on the LED to high
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : LDE_ID the LED number
 * \Parameters (out): None
 * \Return value    : None 
 *****************************************************************/
void LED_HIGH(uint32 LDE_ID);
/******************************************************************
 * \Syntax          : void LED_LOW(uint32 LDE_ID)
 * \Description     : set the value on the LED to low
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : LDE_ID the LED number
 * \Parameters (out): None
 * \Return value    : None 
 *****************************************************************/
void LED_LOW(uint32 LDE_ID);