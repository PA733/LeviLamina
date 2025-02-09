#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkChargeCursor {
public:
    // prevent constructor by default
    SculkChargeCursor& operator=(SculkChargeCursor const&);
    SculkChargeCursor(SculkChargeCursor const&);
    SculkChargeCursor();

public:
    // NOLINTBEGIN
    // symbol: ??0SculkChargeCursor@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit SculkChargeCursor(class CompoundTag const& tag);

    // symbol:
    // ?update@SculkChargeCursor@@QEAAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVSculkSpreader@@_N@Z
    MCAPI void update(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    origin,
        class Random&            random,
        class SculkSpreader&,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getNonCornerNeighborsOffsets@SculkChargeCursor@@CA?AV?$array@VBlockPos@@$0BC@@std@@AEAVRandom@@@Z
    MCAPI static std::array<class BlockPos, 18> _getNonCornerNeighborsOffsets(class Random& random);

    // symbol: ?_getSculkBehavior@SculkChargeCursor@@CAAEBVSculkBehavior@@AEBVBlock@@@Z
    MCAPI static class SculkBehavior const& _getSculkBehavior(class Block const& block);

    // symbol:
    // ?_getValidMovementPos@SculkChargeCursor@@CA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVSculkSpreader@@AEAVRandom@@@Z
    MCAPI static std::optional<class BlockPos> _getValidMovementPos(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class SculkSpreader&,
        class Random& random
    );

    // symbol: ?_isMovementUnobstructed@SculkChargeCursor@@CA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@1@Z
    MCAPI static bool
    _isMovementUnobstructed(class IBlockWorldGenAPI& target, class BlockPos const& fromPos, class BlockPos const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sDefaultSculkBehavior@SculkChargeCursor@@0VDefaultSculkBehavior@@B
    MCAPI static class DefaultSculkBehavior const sDefaultSculkBehavior;

    // symbol: ?sSculkBlockBehavior@SculkChargeCursor@@0VSculkBlockBehavior@@B
    MCAPI static class SculkBlockBehavior const sSculkBlockBehavior;

    // symbol: ?sSculkVeinBlockBehavior@SculkChargeCursor@@0VSculkVeinBlockBehavior@@B
    MCAPI static class SculkVeinBlockBehavior const sSculkVeinBlockBehavior;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sDefaultSculkBehavior() { return sDefaultSculkBehavior; }

    static auto& $sSculkBlockBehavior() { return sSculkBlockBehavior; }

    static auto& $sSculkVeinBlockBehavior() { return sSculkVeinBlockBehavior; }

    // NOLINTEND
};
