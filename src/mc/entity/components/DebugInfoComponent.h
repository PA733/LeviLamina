#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"
#include "mc/world/events/EventResult.h"

class DebugInfoComponent {
public:
    // DebugInfoComponent inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // DebugInfoComponent inner types define
    struct Listener {

    public:
        // prevent constructor by default
        Listener& operator=(Listener const&) = delete;
        Listener(Listener const&)            = delete;
        Listener()                           = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1Listener\@DebugInfoComponent\@\@QEAA\@XZ
         */
        MCAPI ~Listener();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    DebugInfoComponent& operator=(DebugInfoComponent const&) = delete;
    DebugInfoComponent()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VActorEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const&);
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl 27
     * @symbol __unk_vfn_27
     */
    virtual void __unk_vfn_27();
    /**
     * @vftbl 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol ?onEvent\@DebugInfoComponent\@\@UEAA?AW4EventResult\@\@AEBUActorDefinitionTriggeredEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorDefinitionTriggeredEvent const&);
    /**
     * @symbol ??0DebugInfoComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI DebugInfoComponent(class DebugInfoComponent const&);
    /**
     * @symbol ??0DebugInfoComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DebugInfoComponent(class DebugInfoComponent&&);
    /**
     * @symbol ?addListener\@DebugInfoComponent\@\@QEAAXAEBVHashedString\@\@VNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void addListener(class HashedString const&, class NetworkIdentifier, enum class SubClientId);
    /**
     * @symbol ?listenersEmpty\@DebugInfoComponent\@\@QEBA_NXZ
     */
    MCAPI bool listenersEmpty() const;
    /**
     * @symbol ??4DebugInfoComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DebugInfoComponent& operator=(class DebugInfoComponent&&);
    /**
     * @symbol
     * ?removeListener\@DebugInfoComponent\@\@QEAAXAEBVHashedString\@\@VNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void removeListener(class HashedString const&, class NetworkIdentifier, enum class SubClientId);
    // NOLINTEND
};
