#include <Std_Types.h>
 
 typedef enum{
    CAN,
    UART,
    SPI
}Communication;

/******************************************************************
 * \Syntax          : void Send_Message(Communication com , uint32 value)
 * \Description     : send a word through a chosen communication module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) :  
 *              name: com    
 *       description: the chosen communication module
 *              type: Communication
 *             range: 0 - 2
 *                    
 *              name: value    
 *       description: the word to be transmitted
 *              type: uint32
 *             range: 0 - 65535
 * 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Send_Message(Communication com , uint32 value);
/******************************************************************
 * \Syntax          : uint32 Read_Message(Communication com)
 * \Description     : read a word from a communication module
 *                   
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 *              name: com    
 *       description: the chosen communication module
 *              type: Communication
 *             range: 0 - 2
 * 
 * \Parameters (out): None
 * \Return value    : uint32 the word recieved on the communication module
 *****************************************************************/
uint32 Read_Message(Communication com);