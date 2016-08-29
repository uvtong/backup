// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NihilityPackageCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NihilityPackageCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_NihilityPackageCfg_2eproto() {
  delete NihilityPackageCfg::default_instance_;
  delete NihilityPackageCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_NihilityPackageCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_NihilityPackageCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  NihilityPackageCfg::default_instance_ = new NihilityPackageCfg();
  NihilityPackageCfgSet::default_instance_ = new NihilityPackageCfgSet();
  NihilityPackageCfg::default_instance_->InitAsDefaultInstance();
  NihilityPackageCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NihilityPackageCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_NihilityPackageCfg_2eproto_once_);
void protobuf_AddDesc_NihilityPackageCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_NihilityPackageCfg_2eproto_once_,
                 &protobuf_AddDesc_NihilityPackageCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NihilityPackageCfg_2eproto {
  StaticDescriptorInitializer_NihilityPackageCfg_2eproto() {
    protobuf_AddDesc_NihilityPackageCfg_2eproto();
  }
} static_descriptor_initializer_NihilityPackageCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int NihilityPackageCfg::kIDFieldNumber;
const int NihilityPackageCfg::kMinLevFieldNumber;
const int NihilityPackageCfg::kMaxLevFieldNumber;
const int NihilityPackageCfg::kDropCntFieldNumber;
#endif  // !_MSC_VER

NihilityPackageCfg::NihilityPackageCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NihilityPackageCfg::InitAsDefaultInstance() {
}

NihilityPackageCfg::NihilityPackageCfg(const NihilityPackageCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NihilityPackageCfg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  minlev_ = 0u;
  maxlev_ = 0u;
  dropcnt_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NihilityPackageCfg::~NihilityPackageCfg() {
  SharedDtor();
}

void NihilityPackageCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NihilityPackageCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NihilityPackageCfg& NihilityPackageCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_NihilityPackageCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_NihilityPackageCfg_2eproto();
#endif
  return *default_instance_;
}

NihilityPackageCfg* NihilityPackageCfg::default_instance_ = NULL;

NihilityPackageCfg* NihilityPackageCfg::New() const {
  return new NihilityPackageCfg;
}

void NihilityPackageCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    minlev_ = 0u;
    maxlev_ = 0u;
    dropcnt_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NihilityPackageCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_MinLev;
        break;
      }

      // required uint32 MinLev = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MinLev:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &minlev_)));
          set_has_minlev();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_MaxLev;
        break;
      }

      // required uint32 MaxLev = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MaxLev:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxlev_)));
          set_has_maxlev();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_DropCnt;
        break;
      }

      // required uint32 DropCnt = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DropCnt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dropcnt_)));
          set_has_dropcnt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void NihilityPackageCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ID = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required uint32 MinLev = 2;
  if (has_minlev()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->minlev(), output);
  }

  // required uint32 MaxLev = 3;
  if (has_maxlev()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->maxlev(), output);
  }

  // required uint32 DropCnt = 4;
  if (has_dropcnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->dropcnt(), output);
  }

}

int NihilityPackageCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ID = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required uint32 MinLev = 2;
    if (has_minlev()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->minlev());
    }

    // required uint32 MaxLev = 3;
    if (has_maxlev()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxlev());
    }

    // required uint32 DropCnt = 4;
    if (has_dropcnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dropcnt());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NihilityPackageCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NihilityPackageCfg*>(&from));
}

void NihilityPackageCfg::MergeFrom(const NihilityPackageCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_minlev()) {
      set_minlev(from.minlev());
    }
    if (from.has_maxlev()) {
      set_maxlev(from.maxlev());
    }
    if (from.has_dropcnt()) {
      set_dropcnt(from.dropcnt());
    }
  }
}

void NihilityPackageCfg::CopyFrom(const NihilityPackageCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NihilityPackageCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void NihilityPackageCfg::Swap(NihilityPackageCfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(minlev_, other->minlev_);
    std::swap(maxlev_, other->maxlev_);
    std::swap(dropcnt_, other->dropcnt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NihilityPackageCfg::GetTypeName() const {
  return "com.cfg.vo.NihilityPackageCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int NihilityPackageCfgSet::kNihilityPackageCfgFieldNumber;
#endif  // !_MSC_VER

NihilityPackageCfgSet::NihilityPackageCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NihilityPackageCfgSet::InitAsDefaultInstance() {
}

NihilityPackageCfgSet::NihilityPackageCfgSet(const NihilityPackageCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NihilityPackageCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NihilityPackageCfgSet::~NihilityPackageCfgSet() {
  SharedDtor();
}

void NihilityPackageCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NihilityPackageCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NihilityPackageCfgSet& NihilityPackageCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_NihilityPackageCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_NihilityPackageCfg_2eproto();
#endif
  return *default_instance_;
}

NihilityPackageCfgSet* NihilityPackageCfgSet::default_instance_ = NULL;

NihilityPackageCfgSet* NihilityPackageCfgSet::New() const {
  return new NihilityPackageCfgSet;
}

void NihilityPackageCfgSet::Clear() {
  nihilitypackagecfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NihilityPackageCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.NihilityPackageCfg nihilityPackageCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nihilityPackageCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_nihilitypackagecfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_nihilityPackageCfg;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void NihilityPackageCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.NihilityPackageCfg nihilityPackageCfg = 1;
  for (int i = 0; i < this->nihilitypackagecfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->nihilitypackagecfg(i), output);
  }

}

int NihilityPackageCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.NihilityPackageCfg nihilityPackageCfg = 1;
  total_size += 1 * this->nihilitypackagecfg_size();
  for (int i = 0; i < this->nihilitypackagecfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->nihilitypackagecfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NihilityPackageCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NihilityPackageCfgSet*>(&from));
}

void NihilityPackageCfgSet::MergeFrom(const NihilityPackageCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  nihilitypackagecfg_.MergeFrom(from.nihilitypackagecfg_);
}

void NihilityPackageCfgSet::CopyFrom(const NihilityPackageCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NihilityPackageCfgSet::IsInitialized() const {

  for (int i = 0; i < nihilitypackagecfg_size(); i++) {
    if (!this->nihilitypackagecfg(i).IsInitialized()) return false;
  }
  return true;
}

void NihilityPackageCfgSet::Swap(NihilityPackageCfgSet* other) {
  if (other != this) {
    nihilitypackagecfg_.Swap(&other->nihilitypackagecfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NihilityPackageCfgSet::GetTypeName() const {
  return "com.cfg.vo.NihilityPackageCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)