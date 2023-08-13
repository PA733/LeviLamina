#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RestrictOpenDoorGoal : public ::Goal {

public:
    // prevent constructor by default
    RestrictOpenDoorGoal& operator=(RestrictOpenDoorGoal const&) = delete;
    RestrictOpenDoorGoal(RestrictOpenDoorGoal const&)            = delete;
    RestrictOpenDoorGoal()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RestrictOpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RestrictOpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@RestrictOpenDoorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RestrictOpenDoorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RestrictOpenDoorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RestrictOpenDoorGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RestrictOpenDoorGoal(class Mob&);
    // NOLINTEND
};
