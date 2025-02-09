#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyTriggerItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    LegacyTriggerItemComponent& operator=(LegacyTriggerItemComponent const&);
    LegacyTriggerItemComponent(LegacyTriggerItemComponent const&);
    LegacyTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LegacyTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyTriggerItemComponent();

    // symbol:
    // ?onTrigger@LegacyTriggerItemComponent@@QEAAAEAV?$Connector@$$A6AXAEA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z@PubSub@Bedrock@@XZ
    MCAPI class Bedrock::PubSub::Connector<
        void(bool&, class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&)>&
    onTrigger();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_dispatch@LegacyTriggerItemComponent@@IEAAXAEA_NAEAVItemStackBase@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    MCAPI void _dispatch(bool&, class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&);

    // NOLINTEND
};
