// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WeaponBuffCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WeaponBuffCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_WeaponBuffCfg_2eproto() {
  delete WeaponBuffCfg::default_instance_;
  delete WeaponBuffCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_WeaponBuffCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_WeaponBuffCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  WeaponBuffCfg::default_instance_ = new WeaponBuffCfg();
  WeaponBuffCfgSet::default_instance_ = new WeaponBuffCfgSet();
  WeaponBuffCfg::default_instance_->InitAsDefaultInstance();
  WeaponBuffCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WeaponBuffCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_WeaponBuffCfg_2eproto_once_);
void protobuf_AddDesc_WeaponBuffCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_WeaponBuffCfg_2eproto_once_,
                 &protobuf_AddDesc_WeaponBuffCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WeaponBuffCfg_2eproto {
  StaticDescriptorInitializer_WeaponBuffCfg_2eproto() {
    protobuf_AddDesc_WeaponBuffCfg_2eproto();
  }
} static_descriptor_initializer_WeaponBuffCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int WeaponBuffCfg::kIDFieldNumber;
const int WeaponBuffCfg::kWeaponCfgIdFieldNumber;
const int WeaponBuffCfg::kWeaponLvFieldNumber;
const int WeaponBuffCfg::kWeaponColorFieldNumber;
#endif  // !_MSC_VER

WeaponBuffCfg::WeaponBuffCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponBuffCfg::InitAsDefaultInstance() {
}

WeaponBuffCfg::WeaponBuffCfg(const WeaponBuffCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponBuffCfg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  weaponcfgid_ = 0u;
  weaponlv_ = 0u;
  weaponcolor_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponBuffCfg::~WeaponBuffCfg() {
  SharedDtor();
}

void WeaponBuffCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponBuffCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponBuffCfg& WeaponBuffCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponBuffCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponBuffCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponBuffCfg* WeaponBuffCfg::default_instance_ = NULL;

WeaponBuffCfg* WeaponBuffCfg::New() const {
  return new WeaponBuffCfg;
}

void WeaponBuffCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    weaponcfgid_ = 0u;
    weaponlv_ = 0u;
    weaponcolor_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponBuffCfg::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_WeaponCfgId;
        break;
      }

      // required uint32 WeaponCfgId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WeaponCfgId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &weaponcfgid_)));
          set_has_weaponcfgid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_WeaponLv;
        break;
      }

      // required uint32 WeaponLv = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WeaponLv:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &weaponlv_)));
          set_has_weaponlv();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_WeaponColor;
        break;
      }

      // required uint32 WeaponColor = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_WeaponColor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &weaponcolor_)));
          set_has_weaponcolor();
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

void WeaponBuffCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ID = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required uint32 WeaponCfgId = 2;
  if (has_weaponcfgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->weaponcfgid(), output);
  }

  // required uint32 WeaponLv = 3;
  if (has_weaponlv()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->weaponlv(), output);
  }

  // required uint32 WeaponColor = 4;
  if (has_weaponcolor()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->weaponcolor(), output);
  }

}

int WeaponBuffCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ID = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required uint32 WeaponCfgId = 2;
    if (has_weaponcfgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->weaponcfgid());
    }

    // required uint32 WeaponLv = 3;
    if (has_weaponlv()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->weaponlv());
    }

    // required uint32 WeaponColor = 4;
    if (has_weaponcolor()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->weaponcolor());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponBuffCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponBuffCfg*>(&from));
}

void WeaponBuffCfg::MergeFrom(const WeaponBuffCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_weaponcfgid()) {
      set_weaponcfgid(from.weaponcfgid());
    }
    if (from.has_weaponlv()) {
      set_weaponlv(from.weaponlv());
    }
    if (from.has_weaponcolor()) {
      set_weaponcolor(from.weaponcolor());
    }
  }
}

void WeaponBuffCfg::CopyFrom(const WeaponBuffCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponBuffCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void WeaponBuffCfg::Swap(WeaponBuffCfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(weaponcfgid_, other->weaponcfgid_);
    std::swap(weaponlv_, other->weaponlv_);
    std::swap(weaponcolor_, other->weaponcolor_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponBuffCfg::GetTypeName() const {
  return "com.cfg.vo.WeaponBuffCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int WeaponBuffCfgSet::kWeaponBuffCfgFieldNumber;
#endif  // !_MSC_VER

WeaponBuffCfgSet::WeaponBuffCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponBuffCfgSet::InitAsDefaultInstance() {
}

WeaponBuffCfgSet::WeaponBuffCfgSet(const WeaponBuffCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponBuffCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponBuffCfgSet::~WeaponBuffCfgSet() {
  SharedDtor();
}

void WeaponBuffCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponBuffCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponBuffCfgSet& WeaponBuffCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponBuffCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponBuffCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponBuffCfgSet* WeaponBuffCfgSet::default_instance_ = NULL;

WeaponBuffCfgSet* WeaponBuffCfgSet::New() const {
  return new WeaponBuffCfgSet;
}

void WeaponBuffCfgSet::Clear() {
  weaponbuffcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponBuffCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.WeaponBuffCfg weaponBuffCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_weaponBuffCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_weaponbuffcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_weaponBuffCfg;
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

void WeaponBuffCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.WeaponBuffCfg weaponBuffCfg = 1;
  for (int i = 0; i < this->weaponbuffcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->weaponbuffcfg(i), output);
  }

}

int WeaponBuffCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.WeaponBuffCfg weaponBuffCfg = 1;
  total_size += 1 * this->weaponbuffcfg_size();
  for (int i = 0; i < this->weaponbuffcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->weaponbuffcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponBuffCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponBuffCfgSet*>(&from));
}

void WeaponBuffCfgSet::MergeFrom(const WeaponBuffCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  weaponbuffcfg_.MergeFrom(from.weaponbuffcfg_);
}

void WeaponBuffCfgSet::CopyFrom(const WeaponBuffCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponBuffCfgSet::IsInitialized() const {

  for (int i = 0; i < weaponbuffcfg_size(); i++) {
    if (!this->weaponbuffcfg(i).IsInitialized()) return false;
  }
  return true;
}

void WeaponBuffCfgSet::Swap(WeaponBuffCfgSet* other) {
  if (other != this) {
    weaponbuffcfg_.Swap(&other->weaponbuffcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponBuffCfgSet::GetTypeName() const {
  return "com.cfg.vo.WeaponBuffCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)