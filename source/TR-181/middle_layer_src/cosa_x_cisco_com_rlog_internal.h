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

#ifndef _COSA_RLOG_INTERNAL_H
#define _COSA_RLOG_INTERNAL_H

#include "cosa_x_cisco_com_rlog_apis.h"

typedef struct
_COSA_DATAMODEL_RLOG
{
    COSA_BASE_CONTENT
    COSA_DML_RLOG       RLog;
}
COSA_DATAMODEL_RLOG, *PCOSA_DATAMODEL_RLOG;

ANSC_HANDLE
CosaRLogCreate(void);

ANSC_STATUS
CosaRLogInitialize(ANSC_HANDLE hThisObject);

ANSC_STATUS
CosaRLogRemove(ANSC_HANDLE hThisObject);

#endif
