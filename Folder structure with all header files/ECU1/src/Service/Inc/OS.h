#include <Std_Types.h>
#define configSTACK_DEPTH_TYPE    uint16
typedef void (* TaskFunction_t)( void * );
typedef struct tskTaskControlBlock * TaskHandle_t;
typedef unsigned long UBaseType_t;

/******************************************************************
 * \Syntax          : void create_Task(TaskFunction_t pxTaskCode,
                const char * const pcName, 
                const configSTACK_DEPTH_TYPE usStackDepth,
                void * const pvParameters,
                UBaseType_t uxPriority,
                TaskHandle_t * const pxCreatedTask)
 * \Description     : create a task in the RTOS with a set op parameters 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : pxTaskCode the pointer to function that will execue as a task
 *                    pcName the function name as string to represent the task
 *                    usStackDepth
 *                    pvParameters task parameters
 *                    uxPriority task priority
 *                    pxCreatedTask task handler
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void create_Task(TaskFunction_t pxTaskCode,
                const char * const pcName, 
                const configSTACK_DEPTH_TYPE usStackDepth,
                void * const pvParameters,
                UBaseType_t uxPriority,
                TaskHandle_t * const pxCreatedTask);



/******************************************************************
 * \Syntax          : void Start_Schedular(void)
 * \Description     : start the schedular to run the tasks and schedual them 
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Start_Schedular(void);
