#include <Std_Types.h>

#define Speed uint32

/******************************************************************
 * \Syntax          : void Init_Speed_Sensor(void)
 * \Description     : Initialize the Speed sensor module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Init_Speed_Sensor(void);

/******************************************************************
 * \Syntax          : Speed Get_Speed(void)
 * \Description     : get the current speed reading 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : Speed the speed reading in km/h
 *****************************************************************/
Speed Get_Speed(void);
