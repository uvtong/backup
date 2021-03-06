// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DailyLoginAwardCfg.proto

#ifndef PROTOBUF_DailyLoginAwardCfg_2eproto__INCLUDED
#define PROTOBUF_DailyLoginAwardCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
void protobuf_AssignDesc_DailyLoginAwardCfg_2eproto();
void protobuf_ShutdownFile_DailyLoginAwardCfg_2eproto();

class DailyLoginAwardElmt;
class DailyLoginAwardCfg;
class DailyLoginAwardCfgSet;

// ===================================================================

class DailyLoginAwardElmt : public ::google::protobuf::MessageLite {
 public:
  DailyLoginAwardElmt();
  virtual ~DailyLoginAwardElmt();

  DailyLoginAwardElmt(const DailyLoginAwardElmt& from);

  inline DailyLoginAwardElmt& operator=(const DailyLoginAwardElmt& from) {
    CopyFrom(from);
    return *this;
  }

  static const DailyLoginAwardElmt& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DailyLoginAwardElmt* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DailyLoginAwardElmt* other);

  // implements Message ----------------------------------------------

  DailyLoginAwardElmt* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DailyLoginAwardElmt& from);
  void MergeFrom(const DailyLoginAwardElmt& from);
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

  // required uint32 ElementType = 1;
  inline bool has_elementtype() const;
  inline void clear_elementtype();
  static const int kElementTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 elementtype() const;
  inline void set_elementtype(::google::protobuf::uint32 value);

  // required uint32 ElementID = 2;
  inline bool has_elementid() const;
  inline void clear_elementid();
  static const int kElementIDFieldNumber = 2;
  inline ::google::protobuf::uint32 elementid() const;
  inline void set_elementid(::google::protobuf::uint32 value);

  // required uint32 ElementCnt = 3;
  inline bool has_elementcnt() const;
  inline void clear_elementcnt();
  static const int kElementCntFieldNumber = 3;
  inline ::google::protobuf::uint32 elementcnt() const;
  inline void set_elementcnt(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DailyLoginAwardElmt)
 private:
  inline void set_has_elementtype();
  inline void clear_has_elementtype();
  inline void set_has_elementid();
  inline void clear_has_elementid();
  inline void set_has_elementcnt();
  inline void clear_has_elementcnt();

  ::google::protobuf::uint32 elementtype_;
  ::google::protobuf::uint32 elementid_;
  ::google::protobuf::uint32 elementcnt_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DailyLoginAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DailyLoginAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_DailyLoginAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static DailyLoginAwardElmt* default_instance_;
};
// -------------------------------------------------------------------

class DailyLoginAwardCfg : public ::google::protobuf::MessageLite {
 public:
  DailyLoginAwardCfg();
  virtual ~DailyLoginAwardCfg();

  DailyLoginAwardCfg(const DailyLoginAwardCfg& from);

  inline DailyLoginAwardCfg& operator=(const DailyLoginAwardCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const DailyLoginAwardCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DailyLoginAwardCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DailyLoginAwardCfg* other);

  // implements Message ----------------------------------------------

  DailyLoginAwardCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DailyLoginAwardCfg& from);
  void MergeFrom(const DailyLoginAwardCfg& from);
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

  // required uint32 Day = 1;
  inline bool has_day() const;
  inline void clear_day();
  static const int kDayFieldNumber = 1;
  inline ::google::protobuf::uint32 day() const;
  inline void set_day(::google::protobuf::uint32 value);

  // required uint32 AwardType = 2;
  inline bool has_awardtype() const;
  inline void clear_awardtype();
  static const int kAwardTypeFieldNumber = 2;
  inline ::google::protobuf::uint32 awardtype() const;
  inline void set_awardtype(::google::protobuf::uint32 value);

  // repeated .com.cfg.vo.DailyLoginAwardElmt ElmtLst = 3;
  inline int elmtlst_size() const;
  inline void clear_elmtlst();
  static const int kElmtLstFieldNumber = 3;
  inline const ::com::cfg::vo::DailyLoginAwardElmt& elmtlst(int index) const;
  inline ::com::cfg::vo::DailyLoginAwardElmt* mutable_elmtlst(int index);
  inline ::com::cfg::vo::DailyLoginAwardElmt* add_elmtlst();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardElmt >&
      elmtlst() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardElmt >*
      mutable_elmtlst();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DailyLoginAwardCfg)
 private:
  inline void set_has_day();
  inline void clear_has_day();
  inline void set_has_awardtype();
  inline void clear_has_awardtype();

  ::google::protobuf::uint32 day_;
  ::google::protobuf::uint32 awardtype_;
  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardElmt > elmtlst_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DailyLoginAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DailyLoginAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_DailyLoginAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static DailyLoginAwardCfg* default_instance_;
};
// -------------------------------------------------------------------

class DailyLoginAwardCfgSet : public ::google::protobuf::MessageLite {
 public:
  DailyLoginAwardCfgSet();
  virtual ~DailyLoginAwardCfgSet();

  DailyLoginAwardCfgSet(const DailyLoginAwardCfgSet& from);

  inline DailyLoginAwardCfgSet& operator=(const DailyLoginAwardCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const DailyLoginAwardCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DailyLoginAwardCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DailyLoginAwardCfgSet* other);

  // implements Message ----------------------------------------------

  DailyLoginAwardCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DailyLoginAwardCfgSet& from);
  void MergeFrom(const DailyLoginAwardCfgSet& from);
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

  // repeated .com.cfg.vo.DailyLoginAwardCfg dailyLoginAwardCfg = 1;
  inline int dailyloginawardcfg_size() const;
  inline void clear_dailyloginawardcfg();
  static const int kDailyLoginAwardCfgFieldNumber = 1;
  inline const ::com::cfg::vo::DailyLoginAwardCfg& dailyloginawardcfg(int index) const;
  inline ::com::cfg::vo::DailyLoginAwardCfg* mutable_dailyloginawardcfg(int index);
  inline ::com::cfg::vo::DailyLoginAwardCfg* add_dailyloginawardcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardCfg >&
      dailyloginawardcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardCfg >*
      mutable_dailyloginawardcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DailyLoginAwardCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardCfg > dailyloginawardcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DailyLoginAwardCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DailyLoginAwardCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DailyLoginAwardCfg_2eproto();
  friend void protobuf_ShutdownFile_DailyLoginAwardCfg_2eproto();

  void InitAsDefaultInstance();
  static DailyLoginAwardCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// DailyLoginAwardElmt

// required uint32 ElementType = 1;
inline bool DailyLoginAwardElmt::has_elementtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DailyLoginAwardElmt::set_has_elementtype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DailyLoginAwardElmt::clear_has_elementtype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DailyLoginAwardElmt::clear_elementtype() {
  elementtype_ = 0u;
  clear_has_elementtype();
}
inline ::google::protobuf::uint32 DailyLoginAwardElmt::elementtype() const {
  return elementtype_;
}
inline void DailyLoginAwardElmt::set_elementtype(::google::protobuf::uint32 value) {
  set_has_elementtype();
  elementtype_ = value;
}

// required uint32 ElementID = 2;
inline bool DailyLoginAwardElmt::has_elementid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DailyLoginAwardElmt::set_has_elementid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DailyLoginAwardElmt::clear_has_elementid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DailyLoginAwardElmt::clear_elementid() {
  elementid_ = 0u;
  clear_has_elementid();
}
inline ::google::protobuf::uint32 DailyLoginAwardElmt::elementid() const {
  return elementid_;
}
inline void DailyLoginAwardElmt::set_elementid(::google::protobuf::uint32 value) {
  set_has_elementid();
  elementid_ = value;
}

// required uint32 ElementCnt = 3;
inline bool DailyLoginAwardElmt::has_elementcnt() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DailyLoginAwardElmt::set_has_elementcnt() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DailyLoginAwardElmt::clear_has_elementcnt() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DailyLoginAwardElmt::clear_elementcnt() {
  elementcnt_ = 0u;
  clear_has_elementcnt();
}
inline ::google::protobuf::uint32 DailyLoginAwardElmt::elementcnt() const {
  return elementcnt_;
}
inline void DailyLoginAwardElmt::set_elementcnt(::google::protobuf::uint32 value) {
  set_has_elementcnt();
  elementcnt_ = value;
}

// -------------------------------------------------------------------

// DailyLoginAwardCfg

// required uint32 Day = 1;
inline bool DailyLoginAwardCfg::has_day() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DailyLoginAwardCfg::set_has_day() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DailyLoginAwardCfg::clear_has_day() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DailyLoginAwardCfg::clear_day() {
  day_ = 0u;
  clear_has_day();
}
inline ::google::protobuf::uint32 DailyLoginAwardCfg::day() const {
  return day_;
}
inline void DailyLoginAwardCfg::set_day(::google::protobuf::uint32 value) {
  set_has_day();
  day_ = value;
}

// required uint32 AwardType = 2;
inline bool DailyLoginAwardCfg::has_awardtype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DailyLoginAwardCfg::set_has_awardtype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DailyLoginAwardCfg::clear_has_awardtype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DailyLoginAwardCfg::clear_awardtype() {
  awardtype_ = 0u;
  clear_has_awardtype();
}
inline ::google::protobuf::uint32 DailyLoginAwardCfg::awardtype() const {
  return awardtype_;
}
inline void DailyLoginAwardCfg::set_awardtype(::google::protobuf::uint32 value) {
  set_has_awardtype();
  awardtype_ = value;
}

// repeated .com.cfg.vo.DailyLoginAwardElmt ElmtLst = 3;
inline int DailyLoginAwardCfg::elmtlst_size() const {
  return elmtlst_.size();
}
inline void DailyLoginAwardCfg::clear_elmtlst() {
  elmtlst_.Clear();
}
inline const ::com::cfg::vo::DailyLoginAwardElmt& DailyLoginAwardCfg::elmtlst(int index) const {
  return elmtlst_.Get(index);
}
inline ::com::cfg::vo::DailyLoginAwardElmt* DailyLoginAwardCfg::mutable_elmtlst(int index) {
  return elmtlst_.Mutable(index);
}
inline ::com::cfg::vo::DailyLoginAwardElmt* DailyLoginAwardCfg::add_elmtlst() {
  return elmtlst_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardElmt >&
DailyLoginAwardCfg::elmtlst() const {
  return elmtlst_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardElmt >*
DailyLoginAwardCfg::mutable_elmtlst() {
  return &elmtlst_;
}

// -------------------------------------------------------------------

// DailyLoginAwardCfgSet

// repeated .com.cfg.vo.DailyLoginAwardCfg dailyLoginAwardCfg = 1;
inline int DailyLoginAwardCfgSet::dailyloginawardcfg_size() const {
  return dailyloginawardcfg_.size();
}
inline void DailyLoginAwardCfgSet::clear_dailyloginawardcfg() {
  dailyloginawardcfg_.Clear();
}
inline const ::com::cfg::vo::DailyLoginAwardCfg& DailyLoginAwardCfgSet::dailyloginawardcfg(int index) const {
  return dailyloginawardcfg_.Get(index);
}
inline ::com::cfg::vo::DailyLoginAwardCfg* DailyLoginAwardCfgSet::mutable_dailyloginawardcfg(int index) {
  return dailyloginawardcfg_.Mutable(index);
}
inline ::com::cfg::vo::DailyLoginAwardCfg* DailyLoginAwardCfgSet::add_dailyloginawardcfg() {
  return dailyloginawardcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardCfg >&
DailyLoginAwardCfgSet::dailyloginawardcfg() const {
  return dailyloginawardcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DailyLoginAwardCfg >*
DailyLoginAwardCfgSet::mutable_dailyloginawardcfg() {
  return &dailyloginawardcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DailyLoginAwardCfg_2eproto__INCLUDED
