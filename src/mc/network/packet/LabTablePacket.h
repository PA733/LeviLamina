#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/LabTableReactionType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LabTablePacket : public ::Packet {
public:
    // LabTablePacket inner types define
    enum class Type {};

public:
    // prevent constructor by default
    LabTablePacket& operator=(LabTablePacket const&) = delete;
    LabTablePacket(LabTablePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LabTablePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LabTablePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LabTablePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LabTablePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LabTablePacket();
#endif
    /**
     * @symbol ??0LabTablePacket\@\@QEAA\@XZ
     */
    MCAPI LabTablePacket();
    /**
     * @symbol ??0LabTablePacket\@\@QEAA\@AEBVBlockPos\@\@W4LabTableReactionType\@\@\@Z
     */
    MCAPI LabTablePacket(class BlockPos const&, enum class LabTableReactionType);
    /**
     * @symbol ??0LabTablePacket\@\@QEAA\@W4Type\@0\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LabTablePacket(enum class LabTablePacket::Type, class BlockPos const&);
    // NOLINTEND
};
