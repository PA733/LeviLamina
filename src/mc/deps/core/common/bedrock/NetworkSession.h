#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/TransportLayer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class NetworkSession : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&);
    NetworkSession(NetworkSession const&);
    NetworkSession();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetworkSession@@UEAA@XZ
    virtual ~NetworkSession() = default;

    // symbol: ??0NetworkSession@@QEAA@W4TransportLayer@@@Z
    MCAPI explicit NetworkSession(::TransportLayer);

    // symbol: ?getTransportLayer@NetworkSession@@QEBA?AW4TransportLayer@@XZ
    MCAPI ::TransportLayer getTransportLayer() const;

    // NOLINTEND
};
