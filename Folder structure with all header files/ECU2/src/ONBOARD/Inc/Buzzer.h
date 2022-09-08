#include <Std_Types.h>
#include <DIO.h>
/******************************************************************
 * \Syntax          : uint8 Init_Buzzer(Pin_Num pin , Port_Num port);
 * \Description     : initialize a Buzzer with port and pin numbers 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : pin Buzzer pin number
 *                    port Buzzer port number
 * \Parameters (out): None
 * \Return value    : uint32 buzzer id
 *****************************************************************/
uint32 Init_Buzzer(Pin_Num pin , Port_Num port);
/******************************************************************
 * \Syntax          : void Buzzer_HIGH(uint32 buzzerID)
 * \Description     : set the value on the buzzer to high
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : buzzerID the buzzer number
 * \Parameters (out): None
 * \Return value    : None 
 *****************************************************************/
void Buzzer_HIGH(uint32 buzzerID);
/******************************************************************
 * \Syntax          : void Buzzer_LOW(uint32 buzzerID)
 * \Description     : set the value on the buzzer to low
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : buzzerID the buzzer number
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Buzzer_LOW(uint32 buzzerID);
