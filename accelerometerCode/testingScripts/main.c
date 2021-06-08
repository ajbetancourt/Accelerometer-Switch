//download these libraries later
/*
This is code for an accelerometer written in c, the communication protocols are eiter i2c
or spi.  refresh.h will hold information on how often to refresh, might get rid of that one.  
mxc4005.h will hold values accelerometer specific values 
*/

//add whatever libraries necessary
//subject to change
#include <stdio.h>
#include <i2c.h>
#include <mxc4005.h>
#include <refresh.h>


#define MXC4005_DRV_NAME    "mxc4005"
#define MXC4005_IRQ_NAME    "mxc4005_event"
#define MXC4005_REGMAP_NAME "mxc4005_regmap"

