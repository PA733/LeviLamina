#include "mc/world/level/levelgen/structure/StructureTemplate.h"
#include "liteloader/api/GlobalServiceAPI.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/levelgen/structure/StructureManager.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

void StructureTemplate::placeInWorld(
    BlockSource&    blockSource,
    BlockPos const& minCorner,
    Mirror          mirror,
    Rotation        rotation,
    bool            ignoreBlocks,
    bool            ignoreEntities
) const {
    auto setting = StructureSettings(getSize(), ignoreBlocks, ignoreEntities);
    setting.setMirror(mirror);
    setting.setRotation(rotation);
    placeInWorld(blockSource, Global<Level>->getBlockPalette(), minCorner, setting);
}


std::unique_ptr<StructureTemplate> StructureTemplate::create(std::string name, CompoundTag const& tag) {

    auto& unknownBlockRegistry = Global<StructureManager>->mUnknownBlockRegistry;

    auto res = std::make_unique<StructureTemplate>(name, unknownBlockRegistry);

    bool success = res->load(tag);

    if (!success) {
        return nullptr;
    }

    return res;
}

std::unique_ptr<StructureTemplate> StructureTemplate::create(
    std::string        name,
    BlockSource&       blockSource,
    BoundingBox const& boundingBox,
    bool               ignoreBlocks   = false,
    bool               ignoreEntities = false
) {

    auto& unknownBlockRegistry = Global<StructureManager>->mUnknownBlockRegistry;

    auto res = std::make_unique<StructureTemplate>(name, unknownBlockRegistry);

    auto setting = StructureSettings(boundingBox.getSideLength(), ignoreBlocks, ignoreEntities);

    res->fillFromWorld(blockSource, boundingBox.min, setting);

    return res;
}
