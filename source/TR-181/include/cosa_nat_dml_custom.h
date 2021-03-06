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

    module: cosa_nat_dml_custom.h

    For Data Model Implementation,
    Common Component Software Platform (CCSP)

    ---------------------------------------------------------------

    Copyright (c) 2011 - 2013, Cisco Systems, Inc.

                    CISCO CONFIDENTIAL
      Unauthorized distribution or copying is prohibited
                    All rights reserved

    No part of this computer software may be reprinted, reproduced or utilized
    in any form or by any electronic, mechanical, or other means, now known or
    hereafter invented, including photocopying and recording, or using any
    information storage and retrieval system, without permission in writing
    from Cisco Systems, Inc.

    -------------------------------------------------------------------

    description:

        The prototypes of custom data model SBAPI are defined here

    ---------------------------------------------------------------

    environment:

        Maybe platform independent, but customer specific

    ---------------------------------------------------------------

    author:

        Ding Hua

    ---------------------------------------------------------------

    revision:

        05/08/2014  initial revision.

**************************************************************************/


#ifndef  _COSA_NAT_DML_CUSTOM_H
#define  _COSA_NAT_DML_CUSTOM_H

/**********************************************************************
         PROTOTYPES of CUSTOM DATA MODEL PROCESSING FUNCTIONS
**********************************************************************/

BOOL
NAT_GetParamBoolValue_Custom
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        BOOL*                       pBool
    );

BOOL
NAT_SetParamBoolValue_Custom
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        BOOL                        bValue
    );

BOOL
PortMapping_GetParamUlongValue_Custom
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        ULONG*                      puLong
    );

BOOL
PortMapping_SetParamUlongValue_Custom
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        ULONG                       uValue
    );

#endif

