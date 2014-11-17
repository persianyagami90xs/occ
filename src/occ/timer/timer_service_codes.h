/******************************************************************************
// @file timer_service_codes.h
// @brief Error codes for timer component.
*/
/******************************************************************************
 *
 *       @page ChangeLogs Change Logs
 *       @section _timer_service_codes_h timer_service_codes.h
 *       @verbatim
 *
 *   Flag    Def/Fea    Userid    Date        Description
 *   ------- ---------- --------  ----------  ----------------------------------
 *                      pbavari   09/26/2011  Created
 *   @rc003             rickylie  02/03/2012  Verify & Clean Up OCC Headers & Comments
 *   @pb00E             pbavari   03/11/2012  Added correct include file
 *
 *  @endverbatim
 *
 *///*************************************************************************/
 
#ifndef _TIMER_SERVICE_CODES_H_
#define _TIMER_SERVICE_CODES_H_

//*************************************************************************
// Includes
//*************************************************************************
#include <comp_ids.h>

//*************************************************************************
// Externs
//*************************************************************************

//*************************************************************************
// Macros
//*************************************************************************

//*************************************************************************
// Defines/Enums
//*************************************************************************
enum occTimerModuleId
{
    INIT_WD_TIMERS                  =  TMER_COMP_ID | 0x00,
    RESET_OCB_TIMER                 =  TMER_COMP_ID | 0x01,
};

//*************************************************************************
// Structures
//*************************************************************************

//*************************************************************************
// Globals
//*************************************************************************

//*************************************************************************
// Function Prototypes
//*************************************************************************

//*************************************************************************
// Functions
//*************************************************************************

#endif /* #ifndef _TIMER_SERVICE_CODES_H_ */