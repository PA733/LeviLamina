#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MovePredictionType.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/events/EventResult.h"

class ActorEventListener {

public:
    // prevent constructor by default
    ActorEventListener& operator=(ActorEventListener const&) = delete;
    ActorEventListener(ActorEventListener const&)            = delete;
    ActorEventListener()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onEvent\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTLISTENER
    /**
     * @symbol ?onActorAttackedActor\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorAttackedActor(class Actor&, class Actor&);
    /**
     * @symbol ?onActorCreated\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorCreated(class Actor&);
    /**
     * @symbol
     * ?onActorCreationAttemptFailed\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onActorCreationAttemptFailed(class Actor&, std::string_view);
    /**
     * @symbol
     * ?onActorDefinitionEvent\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@5\@\@Z
     */
    MCVAPI enum class EventResult
    onActorDefinitionEvent(class Actor&, std::string const&, std::vector<struct ActorDefinitionModifier>&);
    /**
     * @symbol
     * ?onActorMobInteraction\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@W4InteractionType\@MinecraftEventing\@\@W4ActorType\@\@\@Z
     */
    MCVAPI enum class EventResult
    onActorMobInteraction(class Actor&, enum class MinecraftEventing::InteractionType, enum class ActorType);
    /**
     * @symbol
     * ?onActorPredictedMove\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@W4MovePredictionType\@\@AEBVVec3\@\@\@Z
     */
    MCVAPI enum class EventResult onActorPredictedMove(class Actor&, enum class MovePredictionType, class Vec3 const&);
    /**
     * @symbol ?onActorSneakChanged\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@_N\@Z
     */
    MCVAPI enum class EventResult onActorSneakChanged(class Actor&, bool);
    /**
     * @symbol ?onActorStartRiding\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorStartRiding(class Actor&, class Actor&);
    /**
     * @symbol ?onActorStopRiding\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@_N11\@Z
     */
    MCVAPI enum class EventResult onActorStopRiding(class Actor&, bool, bool, bool);
    /**
     * @symbol ?onActorTargetAcquired\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorTargetAcquired(class Actor&, class Actor&);
    /**
     * @symbol ?onActorTeleported\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorTeleported(class Actor&);
    /**
     * @symbol ?onActorTick\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorTick(class Actor&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorEventListener();
#endif
    // NOLINTEND
};
