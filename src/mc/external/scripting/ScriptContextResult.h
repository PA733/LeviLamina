#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptContextResult {
public:
    // prevent constructor by default
    ScriptContextResult& operator=(ScriptContextResult const&);
    ScriptContextResult(ScriptContextResult const&);
    ScriptContextResult();

public:
    // NOLINTBEGIN
    // symbol: ?hasErrors@ScriptContextResult@Scripting@@QEBA_NXZ
    MCAPI bool hasErrors() const;

    // symbol: ??1ScriptContextResult@Scripting@@QEAA@XZ
    MCAPI ~ScriptContextResult();

    // NOLINTEND
};

}; // namespace Scripting
