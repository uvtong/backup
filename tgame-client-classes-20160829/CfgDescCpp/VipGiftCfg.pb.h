// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VipGiftCfg.proto

#ifndef PROTOBUF_VipGiftCfg_2eproto__INCLUDED
#define PROTOBUF_VipGiftCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_VipGiftCfg_2eproto();
void protobuf_AssignDesc_VipGiftCfg_2eproto();
void protobuf_ShutdownFile_VipGiftCfg_2eproto();

class VipGiftCfgElmt;
class VipGiftCfg;
class VipGiftCfgSet;

// ===================================================================

class VipGiftCfgElmt : public ::google::protobuf::MessageLite {
 public:
  VipGiftCfgElmt();
  virtual ~VipGiftCfgElmt();

  VipGiftCfgElmt(const VipGiftCfgElmt& from);

  inline VipGiftCfgElmt& operator=(const VipGiftCfgElmt& from) {
    CopyFrom(from);
    return *this;
  }

  static const VipGiftCfgElmt& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const VipGiftCfgElmt* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(VipGiftCfgElmt* other);

  // implements Message ----------------------------------------------

  VipGiftCfgElmt* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const VipGiftCfgElmt& from);
  void MergeFrom(const VipGiftCfgElmt& from);
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

  // @@protoc_insertion_point(class_scope:com.cfg.vo.VipGiftCfgElmt)
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
  friend void  protobuf_AddDesc_VipGiftCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_VipGiftCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_VipGiftCfg_2eproto();
  friend void protobuf_ShutdownFile_VipGiftCfg_2eproto();

  void InitAsDefaultInstance();
  static VipGiftCfgElmt* default_instance_;
};
// -------------------------------------------------------------------

class VipGiftCfg : public ::google::protobuf::MessageLite {
 public:
  VipGiftCfg();
  virtual ~VipGiftCfg();

  VipGiftCfg(const VipGiftCfg& from);

  inline VipGiftCfg& operator=(const VipGiftCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const VipGiftCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const VipGiftCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(VipGiftCfg* other);

  // implements Message ----------------------------------------------

  VipGiftCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const VipGiftCfg& from);
  void MergeFrom(const VipGiftCfg& from);
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

  // required uint32 VipLevel = 2;
  inline bool has_viplevel() const;
  inline void clear_viplevel();
  static const int kVipLevelFieldNumber = 2;
  inline ::google::protobuf::uint32 viplevel() const;
  inline void set_viplevel(::google::protobuf::uint32 value);

  // repeated .com.cfg.vo.VipGiftCfgElmt ElmtLst = 3;
  inline int elmtlst_size() const;
  inline void clear_elmtlst();
  static const int kElmtLstFieldNumber = 3;
  inline const ::com::cfg::vo::VipGiftCfgElmt& elmtlst(int index) const;
  inline ::com::cfg::vo::VipGiftCfgElmt* mutable_elmtlst(int index);
  inline ::com::cfg::vo::VipGiftCfgElmt* add_elmtlst();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfgElmt >&
      elmtlst() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfgElmt >*
      mutable_elmtlst();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.VipGiftCfg)
 private:
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_viplevel();
  inline void clear_has_viplevel();

  ::google::protobuf::uint32 level_;
  ::google::protobuf::uint32 viplevel_;
  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfgElmt > elmtlst_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_VipGiftCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_VipGiftCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_VipGiftCfg_2eproto();
  friend void protobuf_ShutdownFile_VipGiftCfg_2eproto();

  void InitAsDefaultInstance();
  static VipGiftCfg* default_instance_;
};
// -------------------------------------------------------------------

class VipGiftCfgSet : public ::google::protobuf::MessageLite {
 public:
  VipGiftCfgSet();
  virtual ~VipGiftCfgSet();

  VipGiftCfgSet(const VipGiftCfgSet& from);

  inline VipGiftCfgSet& operator=(const VipGiftCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const VipGiftCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const VipGiftCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(VipGiftCfgSet* other);

  // implements Message ----------------------------------------------

  VipGiftCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const VipGiftCfgSet& from);
  void MergeFrom(const VipGiftCfgSet& from);
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

  // repeated .com.cfg.vo.VipGiftCfg vipGiftCfg = 1;
  inline int vipgiftcfg_size() const;
  inline void clear_vipgiftcfg();
  static const int kVipGiftCfgFieldNumber = 1;
  inline const ::com::cfg::vo::VipGiftCfg& vipgiftcfg(int index) const;
  inline ::com::cfg::vo::VipGiftCfg* mutable_vipgiftcfg(int index);
  inline ::com::cfg::vo::VipGiftCfg* add_vipgiftcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfg >&
      vipgiftcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfg >*
      mutable_vipgiftcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.VipGiftCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfg > vipgiftcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_VipGiftCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_VipGiftCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_VipGiftCfg_2eproto();
  friend void protobuf_ShutdownFile_VipGiftCfg_2eproto();

  void InitAsDefaultInstance();
  static VipGiftCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// VipGiftCfgElmt

// required uint32 ElementType = 1;
inline bool VipGiftCfgElmt::has_elementtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VipGiftCfgElmt::set_has_elementtype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VipGiftCfgElmt::clear_has_elementtype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VipGiftCfgElmt::clear_elementtype() {
  elementtype_ = 0u;
  clear_has_elementtype();
}
inline ::google::protobuf::uint32 VipGiftCfgElmt::elementtype() const {
  return elementtype_;
}
inline void VipGiftCfgElmt::set_elementtype(::google::protobuf::uint32 value) {
  set_has_elementtype();
  elementtype_ = value;
}

// required uint32 ElementID = 2;
inline bool VipGiftCfgElmt::has_elementid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VipGiftCfgElmt::set_has_elementid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VipGiftCfgElmt::clear_has_elementid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VipGiftCfgElmt::clear_elementid() {
  elementid_ = 0u;
  clear_has_elementid();
}
inline ::google::protobuf::uint32 VipGiftCfgElmt::elementid() const {
  return elementid_;
}
inline void VipGiftCfgElmt::set_elementid(::google::protobuf::uint32 value) {
  set_has_elementid();
  elementid_ = value;
}

// required uint32 ElementCnt = 3;
inline bool VipGiftCfgElmt::has_elementcnt() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VipGiftCfgElmt::set_has_elementcnt() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VipGiftCfgElmt::clear_has_elementcnt() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VipGiftCfgElmt::clear_elementcnt() {
  elementcnt_ = 0u;
  clear_has_elementcnt();
}
inline ::google::protobuf::uint32 VipGiftCfgElmt::elementcnt() const {
  return elementcnt_;
}
inline void VipGiftCfgElmt::set_elementcnt(::google::protobuf::uint32 value) {
  set_has_elementcnt();
  elementcnt_ = value;
}

// -------------------------------------------------------------------

// VipGiftCfg

// required uint32 Level = 1;
inline bool VipGiftCfg::has_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VipGiftCfg::set_has_level() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VipGiftCfg::clear_has_level() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VipGiftCfg::clear_level() {
  level_ = 0u;
  clear_has_level();
}
inline ::google::protobuf::uint32 VipGiftCfg::level() const {
  return level_;
}
inline void VipGiftCfg::set_level(::google::protobuf::uint32 value) {
  set_has_level();
  level_ = value;
}

// required uint32 VipLevel = 2;
inline bool VipGiftCfg::has_viplevel() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VipGiftCfg::set_has_viplevel() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VipGiftCfg::clear_has_viplevel() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VipGiftCfg::clear_viplevel() {
  viplevel_ = 0u;
  clear_has_viplevel();
}
inline ::google::protobuf::uint32 VipGiftCfg::viplevel() const {
  return viplevel_;
}
inline void VipGiftCfg::set_viplevel(::google::protobuf::uint32 value) {
  set_has_viplevel();
  viplevel_ = value;
}

// repeated .com.cfg.vo.VipGiftCfgElmt ElmtLst = 3;
inline int VipGiftCfg::elmtlst_size() const {
  return elmtlst_.size();
}
inline void VipGiftCfg::clear_elmtlst() {
  elmtlst_.Clear();
}
inline const ::com::cfg::vo::VipGiftCfgElmt& VipGiftCfg::elmtlst(int index) const {
  return elmtlst_.Get(index);
}
inline ::com::cfg::vo::VipGiftCfgElmt* VipGiftCfg::mutable_elmtlst(int index) {
  return elmtlst_.Mutable(index);
}
inline ::com::cfg::vo::VipGiftCfgElmt* VipGiftCfg::add_elmtlst() {
  return elmtlst_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfgElmt >&
VipGiftCfg::elmtlst() const {
  return elmtlst_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfgElmt >*
VipGiftCfg::mutable_elmtlst() {
  return &elmtlst_;
}

// -------------------------------------------------------------------

// VipGiftCfgSet

// repeated .com.cfg.vo.VipGiftCfg vipGiftCfg = 1;
inline int VipGiftCfgSet::vipgiftcfg_size() const {
  return vipgiftcfg_.size();
}
inline void VipGiftCfgSet::clear_vipgiftcfg() {
  vipgiftcfg_.Clear();
}
inline const ::com::cfg::vo::VipGiftCfg& VipGiftCfgSet::vipgiftcfg(int index) const {
  return vipgiftcfg_.Get(index);
}
inline ::com::cfg::vo::VipGiftCfg* VipGiftCfgSet::mutable_vipgiftcfg(int index) {
  return vipgiftcfg_.Mutable(index);
}
inline ::com::cfg::vo::VipGiftCfg* VipGiftCfgSet::add_vipgiftcfg() {
  return vipgiftcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfg >&
VipGiftCfgSet::vipgiftcfg() const {
  return vipgiftcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::VipGiftCfg >*
VipGiftCfgSet::mutable_vipgiftcfg() {
  return &vipgiftcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_VipGiftCfg_2eproto__INCLUDED
