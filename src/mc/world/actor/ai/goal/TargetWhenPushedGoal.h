#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TargetWhenPushedGoal : public ::Goal {

public:
    // prevent constructor by default
    TargetWhenPushedGoal& operator=(TargetWhenPushedGoal const&) = delete;
    TargetWhenPushedGoal(TargetWhenPushedGoal const&)            = delete;
    TargetWhenPushedGoal()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol ?start\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@TargetWhenPushedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND
};
