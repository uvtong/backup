// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WeaponLevelCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WeaponLevelCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_WeaponLevelCfg_2eproto() {
  delete WeaponLevelCfg::default_instance_;
  delete WeaponLevelCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_WeaponLevelCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_WeaponLevelCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  WeaponLevelCfg::default_instance_ = new WeaponLevelCfg();
  WeaponLevelCfgSet::default_instance_ = new WeaponLevelCfgSet();
  WeaponLevelCfg::default_instance_->InitAsDefaultInstance();
  WeaponLevelCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WeaponLevelCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_WeaponLevelCfg_2eproto_once_);
void protobuf_AddDesc_WeaponLevelCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_WeaponLevelCfg_2eproto_once_,
                 &protobuf_AddDesc_WeaponLevelCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WeaponLevelCfg_2eproto {
  StaticDescriptorInitializer_WeaponLevelCfg_2eproto() {
    protobuf_AddDesc_WeaponLevelCfg_2eproto();
  }
} static_descriptor_initializer_WeaponLevelCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int WeaponLevelCfg::kLevelFieldNumber;
const int WeaponLevelCfg::kExpFieldNumber;
const int WeaponLevelCfg::kNeedStarFieldNumber;
const int WeaponLevelCfg::kNeedStepFieldNumber;
const int WeaponLevelCfg::kScoreMultiFieldNumber;
#endif  // !_MSC_VER

WeaponLevelCfg::WeaponLevelCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponLevelCfg::InitAsDefaultInstance() {
}

WeaponLevelCfg::WeaponLevelCfg(const WeaponLevelCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponLevelCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  exp_ = 0u;
  needstar_ = 0u;
  needstep_ = 0u;
  scoremulti_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponLevelCfg::~WeaponLevelCfg() {
  SharedDtor();
}

void WeaponLevelCfg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponLevelCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponLevelCfg& WeaponLevelCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponLevelCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponLevelCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponLevelCfg* WeaponLevelCfg::default_instance_ = NULL;

WeaponLevelCfg* WeaponLevelCfg::New() const {
  return new WeaponLevelCfg;
}

void WeaponLevelCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
    exp_ = 0u;
    needstar_ = 0u;
    needstep_ = 0u;
    scoremulti_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponLevelCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Level = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Exp;
        break;
      }

      // required uint32 Exp = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &exp_)));
          set_has_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_NeedStar;
        break;
      }

      // required uint32 NeedStar = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NeedStar:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &needstar_)));
          set_has_needstar();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_NeedStep;
        break;
      }

      // required uint32 NeedStep = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NeedStep:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &needstep_)));
          set_has_needstep();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_ScoreMulti;
        break;
      }

      // required uint32 ScoreMulti = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ScoreMulti:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scoremulti_)));
          set_has_scoremulti();
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

void WeaponLevelCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // required uint32 Exp = 2;
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->exp(), output);
  }

  // required uint32 NeedStar = 3;
  if (has_needstar()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->needstar(), output);
  }

  // required uint32 NeedStep = 4;
  if (has_needstep()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->needstep(), output);
  }

  // required uint32 ScoreMulti = 5;
  if (has_scoremulti()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->scoremulti(), output);
  }

}

int WeaponLevelCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 Exp = 2;
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->exp());
    }

    // required uint32 NeedStar = 3;
    if (has_needstar()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->needstar());
    }

    // required uint32 NeedStep = 4;
    if (has_needstep()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->needstep());
    }

    // required uint32 ScoreMulti = 5;
    if (has_scoremulti()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->scoremulti());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponLevelCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponLevelCfg*>(&from));
}

void WeaponLevelCfg::MergeFrom(const WeaponLevelCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_needstar()) {
      set_needstar(from.needstar());
    }
    if (from.has_needstep()) {
      set_needstep(from.needstep());
    }
    if (from.has_scoremulti()) {
      set_scoremulti(from.scoremulti());
    }
  }
}

void WeaponLevelCfg::CopyFrom(const WeaponLevelCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponLevelCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void WeaponLevelCfg::Swap(WeaponLevelCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(exp_, other->exp_);
    std::swap(needstar_, other->needstar_);
    std::swap(needstep_, other->needstep_);
    std::swap(scoremulti_, other->scoremulti_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponLevelCfg::GetTypeName() const {
  return "com.cfg.vo.WeaponLevelCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int WeaponLevelCfgSet::kWeaponlevelcfgFieldNumber;
#endif  // !_MSC_VER

WeaponLevelCfgSet::WeaponLevelCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void WeaponLevelCfgSet::InitAsDefaultInstance() {
}

WeaponLevelCfgSet::WeaponLevelCfgSet(const WeaponLevelCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void WeaponLevelCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WeaponLevelCfgSet::~WeaponLevelCfgSet() {
  SharedDtor();
}

void WeaponLevelCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WeaponLevelCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WeaponLevelCfgSet& WeaponLevelCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_WeaponLevelCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_WeaponLevelCfg_2eproto();
#endif
  return *default_instance_;
}

WeaponLevelCfgSet* WeaponLevelCfgSet::default_instance_ = NULL;

WeaponLevelCfgSet* WeaponLevelCfgSet::New() const {
  return new WeaponLevelCfgSet;
}

void WeaponLevelCfgSet::Clear() {
  weaponlevelcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool WeaponLevelCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.WeaponLevelCfg weaponlevelcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_weaponlevelcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_weaponlevelcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_weaponlevelcfg;
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

void WeaponLevelCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.WeaponLevelCfg weaponlevelcfg = 1;
  for (int i = 0; i < this->weaponlevelcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->weaponlevelcfg(i), output);
  }

}

int WeaponLevelCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.WeaponLevelCfg weaponlevelcfg = 1;
  total_size += 1 * this->weaponlevelcfg_size();
  for (int i = 0; i < this->weaponlevelcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->weaponlevelcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WeaponLevelCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WeaponLevelCfgSet*>(&from));
}

void WeaponLevelCfgSet::MergeFrom(const WeaponLevelCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  weaponlevelcfg_.MergeFrom(from.weaponlevelcfg_);
}

void WeaponLevelCfgSet::CopyFrom(const WeaponLevelCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WeaponLevelCfgSet::IsInitialized() const {

  for (int i = 0; i < weaponlevelcfg_size(); i++) {
    if (!this->weaponlevelcfg(i).IsInitialized()) return false;
  }
  return true;
}

void WeaponLevelCfgSet::Swap(WeaponLevelCfgSet* other) {
  if (other != this) {
    weaponlevelcfg_.Swap(&other->weaponlevelcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string WeaponLevelCfgSet::GetTypeName() const {
  return "com.cfg.vo.WeaponLevelCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
