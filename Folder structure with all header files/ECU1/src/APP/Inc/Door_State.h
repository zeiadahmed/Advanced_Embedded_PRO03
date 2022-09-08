#include <Std_Types.h>
#include <Door_Sensor.h>
#define Door_State_Refresh_Rate 10

extern Door_State currentDoorState;





/******************************************************************
 * \Syntax          : void Upload_Door_State(Door_State currentDoorState)
 * \Description     : upload the Door state every 10 ms using the BCM to ECU2
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : currentDoorState the current Door state reading
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/

void Upload_Door_State(Door_State currentDoorState);