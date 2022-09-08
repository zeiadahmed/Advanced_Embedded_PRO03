#include <Std_Types.h>
 
 typedef enum{
    CLOSE,
    OPEN
}Door_State;

/******************************************************************
 * \Syntax          : void Init_Door_Sensor(void)
 * \Description     : Initialize the Door sensor module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Init_Door_Sensor(void);

/******************************************************************
 * \Syntax          : Door_State Get_Door_State(void)
 * \Description     : get the current sensor reading 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : Door_State the sensor reading (open/close)
 *****************************************************************/
Door_State Get_Door_State(void);
