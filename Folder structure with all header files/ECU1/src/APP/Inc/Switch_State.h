
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
 * \Parameters (in) :          
 *              name: currentSwitchState 
 *       description: the current switch state reading
 *              type: uint8
 *             range: 0 or 1
 * 
 *              name: Switch_ID 
 *       description: the switch number 
 *              type: uin32
 *             range: 0 or 5000
 * 
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
 * \Parameters (in) : 
 *              name: pin 
 *       description: switch pin number
 *              type: Pin_Num
 *             range: 0 - 32
 *                   
 *              name: port 
 *       description: switch port number
 *              type: Port_Num
 *             range: 0 - 8
 * 
 * \Parameters (out): None
 * \Return value    : Switch id
 *****************************************************************/

uint32 Attach_Switch(Pin_Num pin , Port_Num port);