#include <Std_Types.h>
#define Speed_Refresh_Rate 5

extern uint32 currentSpeed;


/******************************************************************
 * \Syntax          : void Upload_Car_Speed(uint32 currentSpeed)
 * \Description     : upload the car speed every 5 ms using the BCM to ECU2
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 *              name: currentSpeed    : 
 *       description: current car speed reading
 *              type: uint32
 *             range: 0-500
 *   
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/

void Upload_Car_Speed(uint32 currentSpeed);


