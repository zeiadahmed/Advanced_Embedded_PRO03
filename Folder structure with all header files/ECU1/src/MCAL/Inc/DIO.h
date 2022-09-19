#include <Std_Types.h>
 
typedef enum{
    Pin0,
    Pin1,
    Pin2,
    Pin3,
    Pin4,
    Pin5,
    Pin6,
    Pin7
}Pin_Num;

typedef enum{
    Pin0,
    Pin1,
    Pin2,
    Pin3,
    Pin4,
    Pin5,
    Pin6,
    Pin7
}Port_Num;

typedef enum{
 INPUT,
 OUTPUT
}Mode;


/******************************************************************
 * \Syntax          : void Set_Pin_Mode(Pin_Num pin , Port_Num port , Mode mode)
 * \Description     : set the pin direction as input or output
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) :  
 * 
 *              name: pin    
 *       description: the pin number
 *              type: Pin_Num
 *             range: 0 - 32
 * 
 *              name: port    
 *       description: the port number
 *              type: Pin_Num
 *             range: 0 - 8
 *                     
 *              name: mode    
 *       description: the state of pin input or output
 *              type: Mode
 *             range: 0 - 1
 * 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Set_Pin_Mode(Pin_Num pin , Port_Num port , Mode mode);



/******************************************************************
 * \Syntax          : void Write_Pin(Pin_Num pin , Port_Num port , uint8 Level)
 * \Description     : write a given level value on a chosen channel
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) :  
 *              name: Level    
 *       description: the value to be written in the channel
 *              type: uint8
 *             range: 0 - 1
 * 
 *              name: pin    
 *       description: the pin number
 *              type: Pin_Num
 *             range: 0 - 32
 * 
 *              name: port    
 *       description: the port number
 *              type: Pin_Num
 *             range: 0 - 8
 * 
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Write_Pin(Pin_Num pin , Port_Num port , uint8 value);


/******************************************************************
 * \Syntax          : uint8 Read_Pin(Pin_Num pin , Port_Num port )
 * \Description     : returns the value on a given channel
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 * 
 *              name: pin    
 *       description: the pin number
 *              type: Pin_Num
 *             range: 0 - 32
 * 
 *              name: port    
 *       description: the port number
 *              type: Pin_Num
 *             range: 0 - 8
 * 
 * \Parameters (out): None
 * \Return value    : uint8 the value on pin
 *****************************************************************/
uint8 Read_Pin(Pin_Num pin , Port_Num port );



/******************************************************************
 * \Syntax          : void Write_Port(Port_Num PortId, uint32 Level )
 * \Description     : writes a value on a chosen port in the gpio
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) :  
 *                     
 *              name: PortId    
 *       description: the port number to write on
 *              type: Port_Num
 *             range: 0 - 8
 * 
 *              name: Level    
 *       description: the value to write on the desired port
 *              type: uint32
 *             range: 0 - 65535
 * \Parameters (out): None
 * \Return value    : None
 *****************************************************************/
void Write_Port(Port_Num PortId, uint32 Level );


/******************************************************************
 * \Syntax          : uint32 Read_Port(Port_Num PortId);
 * \Description     : returns the value on a chosen port in the gpio
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : 
 * 
 *              name: PortId    
 *       description: the port id to read from
 *              type: Port_Num
 *             range: 0 - 8
 * 
 * \Parameters (out): None
 * \Return value    : uint32 the value on the chosen port
 *****************************************************************/
uint32 Read_Port(Port_Num PortId);
