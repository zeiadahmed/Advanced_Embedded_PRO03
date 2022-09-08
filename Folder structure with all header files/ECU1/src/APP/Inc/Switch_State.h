
#include <Std_Types.h>
#include <DIO.h>

#define Switch_State_Refresh_Rate 20

extern uint8 currentSwitchState;


/******************************************************************
 * \Syntax          : void  Upload_Switch_State(uint8 currentSwitchState,uint32 Switch_ID)
 * \Description     : upload the Switch state every 20 ms using the BCM to ECU2
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : currentSwitchState the current switch state reading
 *                    Switch_ID the switch number 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Upload_Switch_State(uint8 currentSwitchState,uint32 Switch_ID);


/******************************************************************
 * \Syntax          : uint32 Attach_Switch(Pin_Num pin , Port_Num port);
 * \Description     : initialize a switch with port and pin numbers 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : pin switch pin number
 *                    port switch port number
 * \Parameters (out): None
 * \Return value    : Switch id
 *****************************************************************/

uint32 Attach_Switch(Pin_Num pin , Port_Num port);