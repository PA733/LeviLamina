#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ComponentItemDataLoader {
public:
    // prevent constructor by default
    ComponentItemDataLoader& operator=(ComponentItemDataLoader const&);
    ComponentItemDataLoader(ComponentItemDataLoader const&);
    ComponentItemDataLoader();

public:
    // NOLINTBEGIN
    // symbol: ?load@ComponentItemDataLoader@@QEBA?AV?$LoadResult@UComponentItemDataAll_Latest@@@Puv@@AEBVValue@Json@@@Z
    MCAPI class Puv::LoadResult<struct ComponentItemDataAll_Latest> load(class Json::Value const&) const;

    // symbol: ??1ComponentItemDataLoader@@QEAA@XZ
    MCAPI ~ComponentItemDataLoader();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_parseCereal@ComponentItemDataLoader@@AEBA?AV?$LoadResult@UComponentItemData_v1_20_50@@@Puv@@AEBVValue@Json@@@Z
    MCAPI class Puv::LoadResult<struct ComponentItemData_v1_20_50> _parseCereal(class Json::Value const&) const;

    // symbol:
    // ?_parseEvents@ComponentItemDataLoader@@AEBA?AV?$optional@ULegacyEventItemComponentData@@@std@@AEBVValue@Json@@@Z
    MCAPI std::optional<struct LegacyEventItemComponentData> _parseEvents(class Json::Value const&) const;

    // symbol:
    // ?_parseLegacyComponents@ComponentItemDataLoader@@AEBA?AU?$pair@UComponentItemData_Legacy@@_N@std@@VValue@Json@@@Z
    MCAPI std::pair<struct ComponentItemData_Legacy, bool> _parseLegacyComponents(class Json::Value) const;

    // NOLINTEND
};
