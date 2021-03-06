// Copyright 2001-2016 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include "Schematyc/Script/IScriptElement.h"

namespace Schematyc
{
// Forward declare structures.
struct SElementId;
// Forward declare classes.
class CAnyConstPtr;

struct IScriptBase : public IScriptElementBase<EScriptElementType::Base>
{
	virtual ~IScriptBase() {}

	virtual SElementId   GetClassId() const = 0;
	virtual CAnyConstPtr GetEnvClassProperties() const = 0;
};
}
