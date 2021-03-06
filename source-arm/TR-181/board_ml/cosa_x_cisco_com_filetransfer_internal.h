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

    module: cosa_FileTransfer_internal.h

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

#ifndef  _COSA_FILETRANSFER_INTERNAL_H
#define  _COSA_FILETRANSFER_INTERNAL_H

#include "cosa_apis.h"
#include "plugin_main_apis.h"
#include "cosa_x_cisco_com_filetransfer_apis.h"

#define  COSA_DATAMODEL_FILETRANSFER_CLASS_CONTENT                          \
    /* duplication of the base object class content */                      \
    COSA_BASE_CONTENT                                                       \
    /* start of FileTransfer object class content */                        \
    COSA_DML_FILETRANSFER_CFG               Cfg;                            \
    COSA_DML_FILETRANSFER_STATUS            Status;                         \

typedef  struct
_COSA_DATAMODEL_FILETRANSFER_CLASS_CONTENT
{
    COSA_DATAMODEL_FILETRANSFER_CLASS_CONTENT
}
COSA_DATAMODEL_FILETRANSFER, *PCOSA_DATAMODEL_FILETRANSFER;

/*
    Standard function declaration
*/
ANSC_HANDLE
CosaFileTransferCreate
    (
        VOID
    );

ANSC_STATUS
CosaFileTransferInitialize
    (
        ANSC_HANDLE                 hThisObject
    );

ANSC_STATUS
CosaFileTransferRemove
    (
        ANSC_HANDLE                 hThisObject
    );

#endif
