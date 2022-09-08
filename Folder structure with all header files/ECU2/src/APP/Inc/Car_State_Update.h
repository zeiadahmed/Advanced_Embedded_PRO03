#include <Std_Types.h>
 
typedef struct{
    uint8 LED_State;
    uint8 Door_State;
    uint8 Switch_State;
    uint32 Current_Speed;
}State;



/******************************************************************
 * \Syntax          : void Update_Speed(uint32 Current_Speed)
 * \Description     : update the Speed state variable with its new state 
 *                    recieved on the CAN bus via the BCM from ECU1
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : Current_Speed the current speed reading
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Update_Speed(uint32 Current_Speed);
/******************************************************************
 * \Syntax          : void Update_Door_State(uint8 Door_State)
 * \Description     : update the Door state variable with its new state 
 *                    recieved on the CAN bus via the BCM from ECU1
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : Door_State the current Door state
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Update_Door_State(uint8 Door_State);


/******************************************************************
 * \Syntax          : void Update_Switch_State(uint8 Switch_State)
 * \Description     : update the Switch state variable with its new state 
 *                    recieved on the CAN bus via the BCM from ECU1
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : Switch_State the current switch state
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Update_Switch_State(uint8 Switch_State);


/******************************************************************
 * \Syntax          : State Refresh_Car_Status(void)
 * \Description     : this fucntion recieves any message from the BCM 
 *                    and decodes it knowing which sensor state the BCM sent
 *                    and updates the sensor returning the new state 
 *                    and updating the global state variables
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : State a copy of the current state
 *****************************************************************/
State Refresh_Car_Status(void);


/******************************************************************
 * \Syntax          : State Get_Car_Status(void)
 * \Description     : returns a copy of the global current state
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : State a copy of the current state
 *****************************************************************/
State Get_Car_Status(void);