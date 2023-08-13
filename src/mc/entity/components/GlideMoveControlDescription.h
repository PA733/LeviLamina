#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class GlideMoveControlDescription : public ::MoveControlDescription {

public:
    // prevent constructor by default
    GlideMoveControlDescription& operator=(GlideMoveControlDescription const&) = delete;
    GlideMoveControlDescription(GlideMoveControlDescription const&)            = delete;
    GlideMoveControlDescription()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@GlideMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@GlideMoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLIDEMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GlideMoveControlDescription();
#endif
    // NOLINTEND
};
