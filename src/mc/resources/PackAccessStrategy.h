#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/PackAccessAssetGenerationResult.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PackAccessStrategy {

public:
    // prevent constructor by default
    PackAccessStrategy& operator=(PackAccessStrategy const&) = delete;
    PackAccessStrategy(PackAccessStrategy const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getPackSize\@ZipPackAccessStrategy\@\@UEBA_KXZ
     */
    virtual uint64_t getPackSize() const = 0;
    /**
     * @vftbl 2
     * @symbol ?getPackLocation\@ZipPackAccessStrategy\@\@UEBAAEBVResourceLocation\@\@XZ
     */
    virtual class ResourceLocation const& getPackLocation() const = 0;
    /**
     * @vftbl 3
     * @symbol
     * ?getPackName\@ZipPackAccessStrategy\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getPackName() const = 0;
    /**
     * @vftbl 4
     * @symbol ?isWritable\@ZipPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isWritable() const = 0;
    /**
     * @vftbl 5
     * @symbol ?setIsTrusted\@ZipPackAccessStrategy\@\@UEAAX_N\@Z
     */
    virtual void setIsTrusted(bool) = 0;
    /**
     * @vftbl 6
     * @symbol ?isTrusted\@ZipPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isTrusted() const = 0;
    /**
     * @vftbl 7
     * @symbol ?hasAsset\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@_N1\@Z
     */
    virtual bool hasAsset(class Core::Path const&, bool, bool) const = 0;
    /**
     * @vftbl 8
     * @symbol ?hasFolder\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool hasFolder(class Core::Path const&) const = 0;
    /**
     * @vftbl 9
     * @symbol
     * ?getAsset\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual bool getAsset(class Core::Path const&, std::string&, bool) const = 0;
    /**
     * @vftbl 10
     * @symbol
     * ?deleteAsset\@ZipPackAccessStrategy\@\@UEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const&) = 0;
    /**
     * @vftbl 11
     * @symbol
     * ?writeAsset\@ZipPackAccessStrategy\@\@UEAA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool writeAsset(class Core::Path const&, std::string const&) = 0;
    /**
     * @vftbl 12
     * @symbol
     * ?forEachIn\@ZipPackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    virtual void forEachIn(class Core::Path const&, std::function<void(class Core::Path const&)>, bool) const = 0;
    /**
     * @vftbl 13
     * @symbol
     * ?forEachInAssetSet\@PackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachInAssetSet(class Core::Path const&, std::function<void(class Core::Path const&)>) const;
    /**
     * @vftbl 14
     * @symbol ?getStrategyType\@ZipPackAccessStrategy\@\@UEBA?AW4PackAccessStrategyType\@\@XZ
     */
    virtual enum class PackAccessStrategyType getStrategyType() const = 0;
    /**
     * @vftbl 15
     * @symbol
     * ?getSubPath\@PackAccessStrategy\@\@UEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const& getSubPath() const;
    /**
     * @vftbl 16
     * @symbol
     * ?createSubPack\@ZipPackAccessStrategy\@\@UEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const = 0;
    /**
     * @vftbl 17
     * @symbol ?generateAssetSet\@PackAccessStrategy\@\@UEAA?AW4PackAccessAssetGenerationResult\@\@XZ
     */
    virtual enum class PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @vftbl 18
     * @symbol ?canRecurse\@PackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool canRecurse() const;
    /**
     * @vftbl 19
     * @symbol ?unload\@ZipPackAccessStrategy\@\@UEAAXXZ
     */
    virtual void unload() = 0;
    /**
     * @vftbl 20
     * @symbol ?hasUpgradeFiles\@PackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool hasUpgradeFiles() const;
    /**
     * @vftbl 21
     * @symbol ?readContentIdentity\@PackAccessStrategy\@\@UEBA?AVContentIdentity\@\@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKACCESSSTRATEGY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PackAccessStrategy();
#endif
    /**
     * @symbol ??0PackAccessStrategy\@\@QEAA\@XZ
     */
    MCAPI PackAccessStrategy();
    /**
     * @symbol ?hasGeneratedAssetSet\@PackAccessStrategy\@\@QEBA_NXZ
     */
    MCAPI bool hasGeneratedAssetSet() const;
    /**
     * @symbol
     * ?PACK_IMPORT_LOCK_FILE\@PackAccessStrategy\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const PACK_IMPORT_LOCK_FILE;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_addToAssetSet\@PackAccessStrategy\@\@IEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void _addToAssetSet(class Core::Path const&);
    /**
     * @symbol
     * ?_deleteFromAssetSet\@PackAccessStrategy\@\@IEAAXAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI void _deleteFromAssetSet(class Core::PathBuffer<std::string> const&);
    /**
     * @symbol ?_isInAssetSet\@PackAccessStrategy\@\@IEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool _isInAssetSet(class Core::Path const&) const;
    /**
     * @symbol ?_isInAssetSetCaseInsensative\@PackAccessStrategy\@\@IEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool _isInAssetSetCaseInsensative(class Core::Path const&) const;
    // NOLINTEND
};
