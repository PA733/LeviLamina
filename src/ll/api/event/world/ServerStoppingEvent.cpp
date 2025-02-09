#include "ll/api/event/world/ServerStoppingEvent.h"
#include "ll/api/ServerInfo.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline world {

void ServerStoppingEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["server"] = (uintptr_t)&server();
}

ServerInstance& ServerStoppingEvent::server() const { return mServer; }

LL_TYPE_INSTANCE_HOOK(
    ServerStoppingEventHook,
    HookPriority::Normal,
    ServerInstance,
    &ServerInstance::leaveGameSync,
    void
) {
    setServerStatus(ServerStatus::Stopping);
    EventBus::getInstance().publish(ServerStoppingEvent(*this));
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class ServerStoppingEventEmitter : public Emitter<ServerStoppingEvent, emitterFactory> {
    memory::HookRegistrar<ServerStoppingEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<ServerStoppingEventEmitter>();
}
} // namespace ll::event::inline world
