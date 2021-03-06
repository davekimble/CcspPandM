/**********************************************************************
   Copyright [2014] [Cisco Systems, Inc.]
 
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
 
       http://www.apache.org/licenses/LICENSE-2.0
 
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
**********************************************************************/

/**************************************************************************

    module: cosa_time_apis.h

        For COSA Data Model Library Development

    -------------------------------------------------------------------

    copyright:

        Cisco Systems, Inc.
        All Rights Reserved.

    -------------------------------------------------------------------

    description:

        This file defines the apis for objects to support Data Model Library.

    -------------------------------------------------------------------


    author:

        COSA XML TOOL CODE GENERATOR 1.0

    -------------------------------------------------------------------

    revision:

        01/11/2011    initial revision.

**************************************************************************/


#ifndef  _COSA_TIME_API_H
#define  _COSA_TIME_API_H

#include "../middle_layer_src/cosa_apis.h"
#include "../middle_layer_src/plugin_main_apis.h"

/**********************************************************************
                STRUCTURE AND CONSTANT DEFINITIONS
**********************************************************************/

typedef  enum
_COSA_DML_TIME_STATUS
{
    COSA_DML_TIME_STATUS_Disabled           = 1,
    COSA_DML_TIME_STATUS_Unsynchronized,
    COSA_DML_TIME_STATUS_Synchronized,
    COSA_DML_TIME_STATUS_ErrorFailedToSync,
    COSA_DML_TIME_STATUS_Error
}
COSA_DML_TIME_STATUS, *PCOSA_DML_TIME_STATUS;

typedef  struct
_COSA_DML_TIME_CFG
{
    BOOLEAN                         bEnabled;
    char                            NTPServer1[64];     /* Either a host name of IP address */
    char                            NTPServer2[64];     /* Either a host name of IP address */
    char                            NTPServer3[64];     /* Either a host name of IP address */
    char                            NTPServer4[64];     /* Either a host name of IP address */
    char                            NTPServer5[64];     /* Either a host name of IP address */
    char                            LocalTimeZone[256]; /* Local time zone definition, encoded in IEEE 1003.1 */
    BOOLEAN                         bDaylightSaving;
    LONG                            DaylightSavingOffset;
    ULONG                           cityIndex;
}
COSA_DML_TIME_CFG,  *PCOSA_DML_TIME_CFG;


/**********************************************************************
                FUNCTION PROTOTYPES
**********************************************************************/

ANSC_STATUS
CosaDmlTimeInit
    (
        ANSC_HANDLE                 hDml,
        PANSC_HANDLE                phContext
    );

ANSC_STATUS
CosaDmlTimeSetCfg
    (
        ANSC_HANDLE                 hContext,
        PCOSA_DML_TIME_CFG          pTimeCfg
    );

ANSC_STATUS
CosaDmlTimeGetCfg
    (
        ANSC_HANDLE                 hContext,
        PCOSA_DML_TIME_CFG          pTimeCfg
    );

ANSC_STATUS
CosaDmlTimeGetState
    (
        ANSC_HANDLE                 hContext,
        PCOSA_DML_TIME_STATUS       pStatus,
        PANSC_UNIVERSAL_TIME        pCurrLocalTime
    );

ANSC_STATUS
CosaDmlTimeGetLocalTime
    (
       ANSC_HANDLE                 hContext,
       char                       *pCurrLocalTime
    );


#endif
