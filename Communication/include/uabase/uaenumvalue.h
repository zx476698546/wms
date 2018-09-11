/******************************************************************************
** uaenumvalue.h
**
** Copyright (c) 2006-2016 Unified Automation GmbH. All rights reserved.
**
** Software License Agreement ("SLA") Version 2.5
**
** Unless explicitly acquired and licensed from Licensor under another
** license, the contents of this file are subject to the Software License
** Agreement ("SLA") Version 2.5, or subsequent versions
** as allowed by the SLA, and You may not copy or use this file in either
** source code or executable form, except in compliance with the terms and
** conditions of the SLA.
**
** All software distributed under the SLA is provided strictly on an
** "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED,
** AND LICENSOR HEREBY DISCLAIMS ALL SUCH WARRANTIES, INCLUDING WITHOUT
** LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
** PURPOSE, QUIET ENJOYMENT, OR NON-INFRINGEMENT. See the SLA for specific
** language governing rights and limitations under the SLA.
**
** The complete license agreement can be found here:
** http://unifiedautomation.com/License/SLA/2.5/
**
** Project: C++ OPC SDK base module
**
******************************************************************************/
#ifndef UAENUMVALUE_H
#define UAENUMVALUE_H

#include "uadatatypedefinition.h"
#include <ualocalizedtext.h>

class UABASE_EXPORT UaEnumValuePrivate;

/** This class describes an enum value of a UaEnumDefinition.
 *
 * An enum value is described by its name and its value.
 */
class UABASE_EXPORT UaEnumValue
{
    UA_DECLARE_PRIVATE(UaEnumValue)
public:
    UaEnumValue();
    UaEnumValue(const UaEnumValue &other);
    virtual ~UaEnumValue();

    UaEnumValue& operator=(const UaEnumValue &other);

    void setName(const UaString &sName);
    UaString name() const;

    void setDocumentation(const UaLocalizedText &sDocumentation);
    UaLocalizedText documentation() const;

    void setValue(int i);
    int value() const;
};
#endif // UAENUMVALUE_H
