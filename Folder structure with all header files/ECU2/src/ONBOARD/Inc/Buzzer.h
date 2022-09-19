#include <Std_Types.h>
#include <DIO.h>
/******************************************************************
 * \Syntax          : uint8 Init_Buzzer(Pin_Num pin , Port_Num port);
 * \Description     : initialize a Buzzer with port and pin numbers 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 * 
 *              name: pin    
 *       description: Buzzer pin number
 *              type: Pin_Num
 *             range: 0 - 32
 * 
 *              name: port    
 *       description: Buzzer port number
 *              type: Port_Num
 *             range: 0 - 8
 * 
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
 * \Parameters (in) : 
 * 
 *              name: buzzerID    
 *       description: the buzzer number
 *              type: uint32
 *             range: 0 - 5000
 * 
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
 * \Parameters (in) : 
 * 
 *              name: buzzerID    
 *       description: the buzzer number
 *              type: uint32
 *             range: 0 - 5000
 * 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Buzzer_LOW(uint32 buzzerID);
