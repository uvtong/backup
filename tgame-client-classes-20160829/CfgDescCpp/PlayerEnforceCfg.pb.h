// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerEnforceCfg.proto

#ifndef PROTOBUF_PlayerEnforceCfg_2eproto__INCLUDED
#define PROTOBUF_PlayerEnforceCfg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PlayerEnforceCfg_2eproto();
void protobuf_AssignDesc_PlayerEnforceCfg_2eproto();
void protobuf_ShutdownFile_PlayerEnforceCfg_2eproto();

class PlayerEnforceCfg;
class PlayerEnforceCfgSet;

// ===================================================================

class PlayerEnforceCfg : public ::google::protobuf::MessageLite {
 public:
  PlayerEnforceCfg();
  virtual ~PlayerEnforceCfg();

  PlayerEnforceCfg(const PlayerEnforceCfg& from);

  inline PlayerEnforceCfg& operator=(const PlayerEnforceCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerEnforceCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerEnforceCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerEnforceCfg* other);

  // implements Message ----------------------------------------------

  PlayerEnforceCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerEnforceCfg& from);
  void MergeFrom(const PlayerEnforceCfg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 Level = 1;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 1;
  inline ::google::protobuf::uint32 level() const;
  inline void set_level(::google::protobuf::uint32 value);

  // required int32 EnforceTotalMax = 2;
  inline bool has_enforcetotalmax() const;
  inline void clear_enforcetotalmax();
  static const int kEnforceTotalMaxFieldNumber = 2;
  inline ::google::protobuf::int32 enforcetotalmax() const;
  inline void set_enforcetotalmax(::google::protobuf::int32 value);

  // required uint32 RegularCost = 3;
  inline bool has_regularcost() const;
  inline void clear_regularcost();
  static const int kRegularCostFieldNumber = 3;
  inline ::google::protobuf::uint32 regularcost() const;
  inline void set_regularcost(::google::protobuf::uint32 value);

  // required uint32 RegularSingleTotalMax = 4;
  inline bool has_regularsingletotalmax() const;
  inline void clear_regularsingletotalmax();
  static const int kRegularSingleTotalMaxFieldNumber = 4;
  inline ::google::protobuf::uint32 regularsingletotalmax() const;
  inline void set_regularsingletotalmax(::google::protobuf::uint32 value);

  // required uint32 RegularSumBelowSingleMax = 5;
  inline bool has_regularsumbelowsinglemax() const;
  inline void clear_regularsumbelowsinglemax();
  static const int kRegularSumBelowSingleMaxFieldNumber = 5;
  inline ::google::protobuf::uint32 regularsumbelowsinglemax() const;
  inline void set_regularsumbelowsinglemax(::google::protobuf::uint32 value);

  // required int32 RegularSumUpSingleMax = 6;
  inline bool has_regularsumupsinglemax() const;
  inline void clear_regularsumupsinglemax();
  static const int kRegularSumUpSingleMaxFieldNumber = 6;
  inline ::google::protobuf::int32 regularsumupsinglemax() const;
  inline void set_regularsumupsinglemax(::google::protobuf::int32 value);

  // required int32 RegularSingleMaxUpMax = 7;
  inline bool has_regularsinglemaxupmax() const;
  inline void clear_regularsinglemaxupmax();
  static const int kRegularSingleMaxUpMaxFieldNumber = 7;
  inline ::google::protobuf::int32 regularsinglemaxupmax() const;
  inline void set_regularsinglemaxupmax(::google::protobuf::int32 value);

  // required uint32 AdvancedCost = 8;
  inline bool has_advancedcost() const;
  inline void clear_advancedcost();
  static const int kAdvancedCostFieldNumber = 8;
  inline ::google::protobuf::uint32 advancedcost() const;
  inline void set_advancedcost(::google::protobuf::uint32 value);

  // required uint32 AdvancedSingleTotalMax = 9;
  inline bool has_advancedsingletotalmax() const;
  inline void clear_advancedsingletotalmax();
  static const int kAdvancedSingleTotalMaxFieldNumber = 9;
  inline ::google::protobuf::uint32 advancedsingletotalmax() const;
  inline void set_advancedsingletotalmax(::google::protobuf::uint32 value);

  // required uint32 AdvancedSumBelowSingleMax = 10;
  inline bool has_advancedsumbelowsinglemax() const;
  inline void clear_advancedsumbelowsinglemax();
  static const int kAdvancedSumBelowSingleMaxFieldNumber = 10;
  inline ::google::protobuf::uint32 advancedsumbelowsinglemax() const;
  inline void set_advancedsumbelowsinglemax(::google::protobuf::uint32 value);

  // required int32 AdvanceSumUpSingleMax = 11;
  inline bool has_advancesumupsinglemax() const;
  inline void clear_advancesumupsinglemax();
  static const int kAdvanceSumUpSingleMaxFieldNumber = 11;
  inline ::google::protobuf::int32 advancesumupsinglemax() const;
  inline void set_advancesumupsinglemax(::google::protobuf::int32 value);

  // required int32 AdvancedSignleMaxUpMax = 12;
  inline bool has_advancedsignlemaxupmax() const;
  inline void clear_advancedsignlemaxupmax();
  static const int kAdvancedSignleMaxUpMaxFieldNumber = 12;
  inline ::google::protobuf::int32 advancedsignlemaxupmax() const;
  inline void set_advancedsignlemaxupmax(::google::protobuf::int32 value);

  // required uint32 MasterCost = 13;
  inline bool has_mastercost() const;
  inline void clear_mastercost();
  static const int kMasterCostFieldNumber = 13;
  inline ::google::protobuf::uint32 mastercost() const;
  inline void set_mastercost(::google::protobuf::uint32 value);

  // required uint32 MasterSingleTotalMax = 14;
  inline bool has_mastersingletotalmax() const;
  inline void clear_mastersingletotalmax();
  static const int kMasterSingleTotalMaxFieldNumber = 14;
  inline ::google::protobuf::uint32 mastersingletotalmax() const;
  inline void set_mastersingletotalmax(::google::protobuf::uint32 value);

  // required uint32 MasterSumBelowSingleMax = 15;
  inline bool has_mastersumbelowsinglemax() const;
  inline void clear_mastersumbelowsinglemax();
  static const int kMasterSumBelowSingleMaxFieldNumber = 15;
  inline ::google::protobuf::uint32 mastersumbelowsinglemax() const;
  inline void set_mastersumbelowsinglemax(::google::protobuf::uint32 value);

  // required int32 MasterSumUpSingleMax = 16;
  inline bool has_mastersumupsinglemax() const;
  inline void clear_mastersumupsinglemax();
  static const int kMasterSumUpSingleMaxFieldNumber = 16;
  inline ::google::protobuf::int32 mastersumupsinglemax() const;
  inline void set_mastersumupsinglemax(::google::protobuf::int32 value);

  // required int32 MasterSingleMaxUpMax = 17;
  inline bool has_mastersinglemaxupmax() const;
  inline void clear_mastersinglemaxupmax();
  static const int kMasterSingleMaxUpMaxFieldNumber = 17;
  inline ::google::protobuf::int32 mastersinglemaxupmax() const;
  inline void set_mastersinglemaxupmax(::google::protobuf::int32 value);

  // required uint32 SuperCost = 18;
  inline bool has_supercost() const;
  inline void clear_supercost();
  static const int kSuperCostFieldNumber = 18;
  inline ::google::protobuf::uint32 supercost() const;
  inline void set_supercost(::google::protobuf::uint32 value);

  // required int32 SuperAdd = 19;
  inline bool has_superadd() const;
  inline void clear_superadd();
  static const int kSuperAddFieldNumber = 19;
  inline ::google::protobuf::int32 superadd() const;
  inline void set_superadd(::google::protobuf::int32 value);

  // required uint32 HPAdd = 20;
  inline bool has_hpadd() const;
  inline void clear_hpadd();
  static const int kHPAddFieldNumber = 20;
  inline ::google::protobuf::uint32 hpadd() const;
  inline void set_hpadd(::google::protobuf::uint32 value);

  // required uint32 AtkAdd = 21;
  inline bool has_atkadd() const;
  inline void clear_atkadd();
  static const int kAtkAddFieldNumber = 21;
  inline ::google::protobuf::uint32 atkadd() const;
  inline void set_atkadd(::google::protobuf::uint32 value);

  // required uint32 DefAdd = 22;
  inline bool has_defadd() const;
  inline void clear_defadd();
  static const int kDefAddFieldNumber = 22;
  inline ::google::protobuf::uint32 defadd() const;
  inline void set_defadd(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.PlayerEnforceCfg)
 private:
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_enforcetotalmax();
  inline void clear_has_enforcetotalmax();
  inline void set_has_regularcost();
  inline void clear_has_regularcost();
  inline void set_has_regularsingletotalmax();
  inline void clear_has_regularsingletotalmax();
  inline void set_has_regularsumbelowsinglemax();
  inline void clear_has_regularsumbelowsinglemax();
  inline void set_has_regularsumupsinglemax();
  inline void clear_has_regularsumupsinglemax();
  inline void set_has_regularsinglemaxupmax();
  inline void clear_has_regularsinglemaxupmax();
  inline void set_has_advancedcost();
  inline void clear_has_advancedcost();
  inline void set_has_advancedsingletotalmax();
  inline void clear_has_advancedsingletotalmax();
  inline void set_has_advancedsumbelowsinglemax();
  inline void clear_has_advancedsumbelowsinglemax();
  inline void set_has_advancesumupsinglemax();
  inline void clear_has_advancesumupsinglemax();
  inline void set_has_advancedsignlemaxupmax();
  inline void clear_has_advancedsignlemaxupmax();
  inline void set_has_mastercost();
  inline void clear_has_mastercost();
  inline void set_has_mastersingletotalmax();
  inline void clear_has_mastersingletotalmax();
  inline void set_has_mastersumbelowsinglemax();
  inline void clear_has_mastersumbelowsinglemax();
  inline void set_has_mastersumupsinglemax();
  inline void clear_has_mastersumupsinglemax();
  inline void set_has_mastersinglemaxupmax();
  inline void clear_has_mastersinglemaxupmax();
  inline void set_has_supercost();
  inline void clear_has_supercost();
  inline void set_has_superadd();
  inline void clear_has_superadd();
  inline void set_has_hpadd();
  inline void clear_has_hpadd();
  inline void set_has_atkadd();
  inline void clear_has_atkadd();
  inline void set_has_defadd();
  inline void clear_has_defadd();

  ::google::protobuf::uint32 level_;
  ::google::protobuf::int32 enforcetotalmax_;
  ::google::protobuf::uint32 regularcost_;
  ::google::protobuf::uint32 regularsingletotalmax_;
  ::google::protobuf::uint32 regularsumbelowsinglemax_;
  ::google::protobuf::int32 regularsumupsinglemax_;
  ::google::protobuf::int32 regularsinglemaxupmax_;
  ::google::protobuf::uint32 advancedcost_;
  ::google::protobuf::uint32 advancedsingletotalmax_;
  ::google::protobuf::uint32 advancedsumbelowsinglemax_;
  ::google::protobuf::int32 advancesumupsinglemax_;
  ::google::protobuf::int32 advancedsignlemaxupmax_;
  ::google::protobuf::uint32 mastercost_;
  ::google::protobuf::uint32 mastersingletotalmax_;
  ::google::protobuf::uint32 mastersumbelowsinglemax_;
  ::google::protobuf::int32 mastersumupsinglemax_;
  ::google::protobuf::int32 mastersinglemaxupmax_;
  ::google::protobuf::uint32 supercost_;
  ::google::protobuf::int32 superadd_;
  ::google::protobuf::uint32 hpadd_;
  ::google::protobuf::uint32 atkadd_;
  ::google::protobuf::uint32 defadd_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(22 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerEnforceCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerEnforceCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerEnforceCfg_2eproto();
  friend void protobuf_ShutdownFile_PlayerEnforceCfg_2eproto();

  void InitAsDefaultInstance();
  static PlayerEnforceCfg* default_instance_;
};
// -------------------------------------------------------------------

class PlayerEnforceCfgSet : public ::google::protobuf::MessageLite {
 public:
  PlayerEnforceCfgSet();
  virtual ~PlayerEnforceCfgSet();

  PlayerEnforceCfgSet(const PlayerEnforceCfgSet& from);

  inline PlayerEnforceCfgSet& operator=(const PlayerEnforceCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const PlayerEnforceCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PlayerEnforceCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PlayerEnforceCfgSet* other);

  // implements Message ----------------------------------------------

  PlayerEnforceCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PlayerEnforceCfgSet& from);
  void MergeFrom(const PlayerEnforceCfgSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.cfg.vo.PlayerEnforceCfg playerenforcecfg = 1;
  inline int playerenforcecfg_size() const;
  inline void clear_playerenforcecfg();
  static const int kPlayerenforcecfgFieldNumber = 1;
  inline const ::com::cfg::vo::PlayerEnforceCfg& playerenforcecfg(int index) const;
  inline ::com::cfg::vo::PlayerEnforceCfg* mutable_playerenforcecfg(int index);
  inline ::com::cfg::vo::PlayerEnforceCfg* add_playerenforcecfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerEnforceCfg >&
      playerenforcecfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerEnforceCfg >*
      mutable_playerenforcecfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.PlayerEnforceCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerEnforceCfg > playerenforcecfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PlayerEnforceCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PlayerEnforceCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_PlayerEnforceCfg_2eproto();
  friend void protobuf_ShutdownFile_PlayerEnforceCfg_2eproto();

  void InitAsDefaultInstance();
  static PlayerEnforceCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// PlayerEnforceCfg

// required uint32 Level = 1;
inline bool PlayerEnforceCfg::has_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PlayerEnforceCfg::set_has_level() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PlayerEnforceCfg::clear_has_level() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PlayerEnforceCfg::clear_level() {
  level_ = 0u;
  clear_has_level();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::level() const {
  return level_;
}
inline void PlayerEnforceCfg::set_level(::google::protobuf::uint32 value) {
  set_has_level();
  level_ = value;
}

// required int32 EnforceTotalMax = 2;
inline bool PlayerEnforceCfg::has_enforcetotalmax() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PlayerEnforceCfg::set_has_enforcetotalmax() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PlayerEnforceCfg::clear_has_enforcetotalmax() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PlayerEnforceCfg::clear_enforcetotalmax() {
  enforcetotalmax_ = 0;
  clear_has_enforcetotalmax();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::enforcetotalmax() const {
  return enforcetotalmax_;
}
inline void PlayerEnforceCfg::set_enforcetotalmax(::google::protobuf::int32 value) {
  set_has_enforcetotalmax();
  enforcetotalmax_ = value;
}

// required uint32 RegularCost = 3;
inline bool PlayerEnforceCfg::has_regularcost() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PlayerEnforceCfg::set_has_regularcost() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PlayerEnforceCfg::clear_has_regularcost() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PlayerEnforceCfg::clear_regularcost() {
  regularcost_ = 0u;
  clear_has_regularcost();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::regularcost() const {
  return regularcost_;
}
inline void PlayerEnforceCfg::set_regularcost(::google::protobuf::uint32 value) {
  set_has_regularcost();
  regularcost_ = value;
}

// required uint32 RegularSingleTotalMax = 4;
inline bool PlayerEnforceCfg::has_regularsingletotalmax() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PlayerEnforceCfg::set_has_regularsingletotalmax() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PlayerEnforceCfg::clear_has_regularsingletotalmax() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PlayerEnforceCfg::clear_regularsingletotalmax() {
  regularsingletotalmax_ = 0u;
  clear_has_regularsingletotalmax();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::regularsingletotalmax() const {
  return regularsingletotalmax_;
}
inline void PlayerEnforceCfg::set_regularsingletotalmax(::google::protobuf::uint32 value) {
  set_has_regularsingletotalmax();
  regularsingletotalmax_ = value;
}

// required uint32 RegularSumBelowSingleMax = 5;
inline bool PlayerEnforceCfg::has_regularsumbelowsinglemax() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PlayerEnforceCfg::set_has_regularsumbelowsinglemax() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PlayerEnforceCfg::clear_has_regularsumbelowsinglemax() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PlayerEnforceCfg::clear_regularsumbelowsinglemax() {
  regularsumbelowsinglemax_ = 0u;
  clear_has_regularsumbelowsinglemax();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::regularsumbelowsinglemax() const {
  return regularsumbelowsinglemax_;
}
inline void PlayerEnforceCfg::set_regularsumbelowsinglemax(::google::protobuf::uint32 value) {
  set_has_regularsumbelowsinglemax();
  regularsumbelowsinglemax_ = value;
}

// required int32 RegularSumUpSingleMax = 6;
inline bool PlayerEnforceCfg::has_regularsumupsinglemax() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PlayerEnforceCfg::set_has_regularsumupsinglemax() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PlayerEnforceCfg::clear_has_regularsumupsinglemax() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PlayerEnforceCfg::clear_regularsumupsinglemax() {
  regularsumupsinglemax_ = 0;
  clear_has_regularsumupsinglemax();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::regularsumupsinglemax() const {
  return regularsumupsinglemax_;
}
inline void PlayerEnforceCfg::set_regularsumupsinglemax(::google::protobuf::int32 value) {
  set_has_regularsumupsinglemax();
  regularsumupsinglemax_ = value;
}

// required int32 RegularSingleMaxUpMax = 7;
inline bool PlayerEnforceCfg::has_regularsinglemaxupmax() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PlayerEnforceCfg::set_has_regularsinglemaxupmax() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PlayerEnforceCfg::clear_has_regularsinglemaxupmax() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PlayerEnforceCfg::clear_regularsinglemaxupmax() {
  regularsinglemaxupmax_ = 0;
  clear_has_regularsinglemaxupmax();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::regularsinglemaxupmax() const {
  return regularsinglemaxupmax_;
}
inline void PlayerEnforceCfg::set_regularsinglemaxupmax(::google::protobuf::int32 value) {
  set_has_regularsinglemaxupmax();
  regularsinglemaxupmax_ = value;
}

// required uint32 AdvancedCost = 8;
inline bool PlayerEnforceCfg::has_advancedcost() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void PlayerEnforceCfg::set_has_advancedcost() {
  _has_bits_[0] |= 0x00000080u;
}
inline void PlayerEnforceCfg::clear_has_advancedcost() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void PlayerEnforceCfg::clear_advancedcost() {
  advancedcost_ = 0u;
  clear_has_advancedcost();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::advancedcost() const {
  return advancedcost_;
}
inline void PlayerEnforceCfg::set_advancedcost(::google::protobuf::uint32 value) {
  set_has_advancedcost();
  advancedcost_ = value;
}

// required uint32 AdvancedSingleTotalMax = 9;
inline bool PlayerEnforceCfg::has_advancedsingletotalmax() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void PlayerEnforceCfg::set_has_advancedsingletotalmax() {
  _has_bits_[0] |= 0x00000100u;
}
inline void PlayerEnforceCfg::clear_has_advancedsingletotalmax() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void PlayerEnforceCfg::clear_advancedsingletotalmax() {
  advancedsingletotalmax_ = 0u;
  clear_has_advancedsingletotalmax();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::advancedsingletotalmax() const {
  return advancedsingletotalmax_;
}
inline void PlayerEnforceCfg::set_advancedsingletotalmax(::google::protobuf::uint32 value) {
  set_has_advancedsingletotalmax();
  advancedsingletotalmax_ = value;
}

// required uint32 AdvancedSumBelowSingleMax = 10;
inline bool PlayerEnforceCfg::has_advancedsumbelowsinglemax() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void PlayerEnforceCfg::set_has_advancedsumbelowsinglemax() {
  _has_bits_[0] |= 0x00000200u;
}
inline void PlayerEnforceCfg::clear_has_advancedsumbelowsinglemax() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void PlayerEnforceCfg::clear_advancedsumbelowsinglemax() {
  advancedsumbelowsinglemax_ = 0u;
  clear_has_advancedsumbelowsinglemax();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::advancedsumbelowsinglemax() const {
  return advancedsumbelowsinglemax_;
}
inline void PlayerEnforceCfg::set_advancedsumbelowsinglemax(::google::protobuf::uint32 value) {
  set_has_advancedsumbelowsinglemax();
  advancedsumbelowsinglemax_ = value;
}

// required int32 AdvanceSumUpSingleMax = 11;
inline bool PlayerEnforceCfg::has_advancesumupsinglemax() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void PlayerEnforceCfg::set_has_advancesumupsinglemax() {
  _has_bits_[0] |= 0x00000400u;
}
inline void PlayerEnforceCfg::clear_has_advancesumupsinglemax() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void PlayerEnforceCfg::clear_advancesumupsinglemax() {
  advancesumupsinglemax_ = 0;
  clear_has_advancesumupsinglemax();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::advancesumupsinglemax() const {
  return advancesumupsinglemax_;
}
inline void PlayerEnforceCfg::set_advancesumupsinglemax(::google::protobuf::int32 value) {
  set_has_advancesumupsinglemax();
  advancesumupsinglemax_ = value;
}

// required int32 AdvancedSignleMaxUpMax = 12;
inline bool PlayerEnforceCfg::has_advancedsignlemaxupmax() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void PlayerEnforceCfg::set_has_advancedsignlemaxupmax() {
  _has_bits_[0] |= 0x00000800u;
}
inline void PlayerEnforceCfg::clear_has_advancedsignlemaxupmax() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void PlayerEnforceCfg::clear_advancedsignlemaxupmax() {
  advancedsignlemaxupmax_ = 0;
  clear_has_advancedsignlemaxupmax();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::advancedsignlemaxupmax() const {
  return advancedsignlemaxupmax_;
}
inline void PlayerEnforceCfg::set_advancedsignlemaxupmax(::google::protobuf::int32 value) {
  set_has_advancedsignlemaxupmax();
  advancedsignlemaxupmax_ = value;
}

// required uint32 MasterCost = 13;
inline bool PlayerEnforceCfg::has_mastercost() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void PlayerEnforceCfg::set_has_mastercost() {
  _has_bits_[0] |= 0x00001000u;
}
inline void PlayerEnforceCfg::clear_has_mastercost() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void PlayerEnforceCfg::clear_mastercost() {
  mastercost_ = 0u;
  clear_has_mastercost();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::mastercost() const {
  return mastercost_;
}
inline void PlayerEnforceCfg::set_mastercost(::google::protobuf::uint32 value) {
  set_has_mastercost();
  mastercost_ = value;
}

// required uint32 MasterSingleTotalMax = 14;
inline bool PlayerEnforceCfg::has_mastersingletotalmax() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void PlayerEnforceCfg::set_has_mastersingletotalmax() {
  _has_bits_[0] |= 0x00002000u;
}
inline void PlayerEnforceCfg::clear_has_mastersingletotalmax() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void PlayerEnforceCfg::clear_mastersingletotalmax() {
  mastersingletotalmax_ = 0u;
  clear_has_mastersingletotalmax();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::mastersingletotalmax() const {
  return mastersingletotalmax_;
}
inline void PlayerEnforceCfg::set_mastersingletotalmax(::google::protobuf::uint32 value) {
  set_has_mastersingletotalmax();
  mastersingletotalmax_ = value;
}

// required uint32 MasterSumBelowSingleMax = 15;
inline bool PlayerEnforceCfg::has_mastersumbelowsinglemax() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void PlayerEnforceCfg::set_has_mastersumbelowsinglemax() {
  _has_bits_[0] |= 0x00004000u;
}
inline void PlayerEnforceCfg::clear_has_mastersumbelowsinglemax() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void PlayerEnforceCfg::clear_mastersumbelowsinglemax() {
  mastersumbelowsinglemax_ = 0u;
  clear_has_mastersumbelowsinglemax();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::mastersumbelowsinglemax() const {
  return mastersumbelowsinglemax_;
}
inline void PlayerEnforceCfg::set_mastersumbelowsinglemax(::google::protobuf::uint32 value) {
  set_has_mastersumbelowsinglemax();
  mastersumbelowsinglemax_ = value;
}

// required int32 MasterSumUpSingleMax = 16;
inline bool PlayerEnforceCfg::has_mastersumupsinglemax() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void PlayerEnforceCfg::set_has_mastersumupsinglemax() {
  _has_bits_[0] |= 0x00008000u;
}
inline void PlayerEnforceCfg::clear_has_mastersumupsinglemax() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void PlayerEnforceCfg::clear_mastersumupsinglemax() {
  mastersumupsinglemax_ = 0;
  clear_has_mastersumupsinglemax();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::mastersumupsinglemax() const {
  return mastersumupsinglemax_;
}
inline void PlayerEnforceCfg::set_mastersumupsinglemax(::google::protobuf::int32 value) {
  set_has_mastersumupsinglemax();
  mastersumupsinglemax_ = value;
}

// required int32 MasterSingleMaxUpMax = 17;
inline bool PlayerEnforceCfg::has_mastersinglemaxupmax() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void PlayerEnforceCfg::set_has_mastersinglemaxupmax() {
  _has_bits_[0] |= 0x00010000u;
}
inline void PlayerEnforceCfg::clear_has_mastersinglemaxupmax() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void PlayerEnforceCfg::clear_mastersinglemaxupmax() {
  mastersinglemaxupmax_ = 0;
  clear_has_mastersinglemaxupmax();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::mastersinglemaxupmax() const {
  return mastersinglemaxupmax_;
}
inline void PlayerEnforceCfg::set_mastersinglemaxupmax(::google::protobuf::int32 value) {
  set_has_mastersinglemaxupmax();
  mastersinglemaxupmax_ = value;
}

// required uint32 SuperCost = 18;
inline bool PlayerEnforceCfg::has_supercost() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void PlayerEnforceCfg::set_has_supercost() {
  _has_bits_[0] |= 0x00020000u;
}
inline void PlayerEnforceCfg::clear_has_supercost() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void PlayerEnforceCfg::clear_supercost() {
  supercost_ = 0u;
  clear_has_supercost();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::supercost() const {
  return supercost_;
}
inline void PlayerEnforceCfg::set_supercost(::google::protobuf::uint32 value) {
  set_has_supercost();
  supercost_ = value;
}

// required int32 SuperAdd = 19;
inline bool PlayerEnforceCfg::has_superadd() const {
  return (_has_bits_[0] & 0x00040000u) != 0;
}
inline void PlayerEnforceCfg::set_has_superadd() {
  _has_bits_[0] |= 0x00040000u;
}
inline void PlayerEnforceCfg::clear_has_superadd() {
  _has_bits_[0] &= ~0x00040000u;
}
inline void PlayerEnforceCfg::clear_superadd() {
  superadd_ = 0;
  clear_has_superadd();
}
inline ::google::protobuf::int32 PlayerEnforceCfg::superadd() const {
  return superadd_;
}
inline void PlayerEnforceCfg::set_superadd(::google::protobuf::int32 value) {
  set_has_superadd();
  superadd_ = value;
}

// required uint32 HPAdd = 20;
inline bool PlayerEnforceCfg::has_hpadd() const {
  return (_has_bits_[0] & 0x00080000u) != 0;
}
inline void PlayerEnforceCfg::set_has_hpadd() {
  _has_bits_[0] |= 0x00080000u;
}
inline void PlayerEnforceCfg::clear_has_hpadd() {
  _has_bits_[0] &= ~0x00080000u;
}
inline void PlayerEnforceCfg::clear_hpadd() {
  hpadd_ = 0u;
  clear_has_hpadd();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::hpadd() const {
  return hpadd_;
}
inline void PlayerEnforceCfg::set_hpadd(::google::protobuf::uint32 value) {
  set_has_hpadd();
  hpadd_ = value;
}

// required uint32 AtkAdd = 21;
inline bool PlayerEnforceCfg::has_atkadd() const {
  return (_has_bits_[0] & 0x00100000u) != 0;
}
inline void PlayerEnforceCfg::set_has_atkadd() {
  _has_bits_[0] |= 0x00100000u;
}
inline void PlayerEnforceCfg::clear_has_atkadd() {
  _has_bits_[0] &= ~0x00100000u;
}
inline void PlayerEnforceCfg::clear_atkadd() {
  atkadd_ = 0u;
  clear_has_atkadd();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::atkadd() const {
  return atkadd_;
}
inline void PlayerEnforceCfg::set_atkadd(::google::protobuf::uint32 value) {
  set_has_atkadd();
  atkadd_ = value;
}

// required uint32 DefAdd = 22;
inline bool PlayerEnforceCfg::has_defadd() const {
  return (_has_bits_[0] & 0x00200000u) != 0;
}
inline void PlayerEnforceCfg::set_has_defadd() {
  _has_bits_[0] |= 0x00200000u;
}
inline void PlayerEnforceCfg::clear_has_defadd() {
  _has_bits_[0] &= ~0x00200000u;
}
inline void PlayerEnforceCfg::clear_defadd() {
  defadd_ = 0u;
  clear_has_defadd();
}
inline ::google::protobuf::uint32 PlayerEnforceCfg::defadd() const {
  return defadd_;
}
inline void PlayerEnforceCfg::set_defadd(::google::protobuf::uint32 value) {
  set_has_defadd();
  defadd_ = value;
}

// -------------------------------------------------------------------

// PlayerEnforceCfgSet

// repeated .com.cfg.vo.PlayerEnforceCfg playerenforcecfg = 1;
inline int PlayerEnforceCfgSet::playerenforcecfg_size() const {
  return playerenforcecfg_.size();
}
inline void PlayerEnforceCfgSet::clear_playerenforcecfg() {
  playerenforcecfg_.Clear();
}
inline const ::com::cfg::vo::PlayerEnforceCfg& PlayerEnforceCfgSet::playerenforcecfg(int index) const {
  return playerenforcecfg_.Get(index);
}
inline ::com::cfg::vo::PlayerEnforceCfg* PlayerEnforceCfgSet::mutable_playerenforcecfg(int index) {
  return playerenforcecfg_.Mutable(index);
}
inline ::com::cfg::vo::PlayerEnforceCfg* PlayerEnforceCfgSet::add_playerenforcecfg() {
  return playerenforcecfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerEnforceCfg >&
PlayerEnforceCfgSet::playerenforcecfg() const {
  return playerenforcecfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::PlayerEnforceCfg >*
PlayerEnforceCfgSet::mutable_playerenforcecfg() {
  return &playerenforcecfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PlayerEnforceCfg_2eproto__INCLUDED