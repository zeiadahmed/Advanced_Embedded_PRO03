#include <Car_State_Update.h>
#include <Std_Types.h>


/******************************************************************
 * \Syntax          : void Update_Buzzer(State state)
 * \Description     : update the buzzer state with its new state 
 *                    based on the speed , switch and door readings
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : state the car global state variable
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Update_Buzzer(State state);

/******************************************************************
 * \Syntax          : void Update_LED(State state)
 * \Description     : update the LED state variable with its new state 
 *                    based on the speed , switch and door readings
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : state the car global state variable
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Update_LED(State state);

