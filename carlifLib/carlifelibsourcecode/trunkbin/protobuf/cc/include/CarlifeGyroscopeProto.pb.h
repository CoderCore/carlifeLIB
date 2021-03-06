// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeGyroscopeProto.proto

#ifndef PROTOBUF_CarlifeGyroscopeProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeGyroscopeProto_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeGyroscopeProto_2eproto();
void protobuf_AssignDesc_CarlifeGyroscopeProto_2eproto();
void protobuf_ShutdownFile_CarlifeGyroscopeProto_2eproto();

class CarlifeGyroscope;

// ===================================================================

class CarlifeGyroscope : public ::google::protobuf::Message {
 public:
  CarlifeGyroscope();
  virtual ~CarlifeGyroscope();

  CarlifeGyroscope(const CarlifeGyroscope& from);

  inline CarlifeGyroscope& operator=(const CarlifeGyroscope& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CarlifeGyroscope& default_instance();

  void Swap(CarlifeGyroscope* other);

  // implements Message ----------------------------------------------

  CarlifeGyroscope* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeGyroscope& from);
  void MergeFrom(const CarlifeGyroscope& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 samplesCount = 1;
  inline bool has_samplescount() const;
  inline void clear_samplescount();
  static const int kSamplesCountFieldNumber = 1;
  inline ::google::protobuf::int32 samplescount() const;
  inline void set_samplescount(::google::protobuf::int32 value);

  // required int32 xAxisGyroSum = 2;
  inline bool has_xaxisgyrosum() const;
  inline void clear_xaxisgyrosum();
  static const int kXAxisGyroSumFieldNumber = 2;
  inline ::google::protobuf::int32 xaxisgyrosum() const;
  inline void set_xaxisgyrosum(::google::protobuf::int32 value);

  // required int32 yAxisGyroSum = 3;
  inline bool has_yaxisgyrosum() const;
  inline void clear_yaxisgyrosum();
  static const int kYAxisGyroSumFieldNumber = 3;
  inline ::google::protobuf::int32 yaxisgyrosum() const;
  inline void set_yaxisgyrosum(::google::protobuf::int32 value);

  // required int32 zAxisGyroSum = 4;
  inline bool has_zaxisgyrosum() const;
  inline void clear_zaxisgyrosum();
  static const int kZAxisGyroSumFieldNumber = 4;
  inline ::google::protobuf::int32 zaxisgyrosum() const;
  inline void set_zaxisgyrosum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeGyroscope)
 private:
  inline void set_has_samplescount();
  inline void clear_has_samplescount();
  inline void set_has_xaxisgyrosum();
  inline void clear_has_xaxisgyrosum();
  inline void set_has_yaxisgyrosum();
  inline void clear_has_yaxisgyrosum();
  inline void set_has_zaxisgyrosum();
  inline void clear_has_zaxisgyrosum();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 samplescount_;
  ::google::protobuf::int32 xaxisgyrosum_;
  ::google::protobuf::int32 yaxisgyrosum_;
  ::google::protobuf::int32 zaxisgyrosum_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeGyroscopeProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeGyroscopeProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeGyroscopeProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeGyroscope* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeGyroscope

// required int32 samplesCount = 1;
inline bool CarlifeGyroscope::has_samplescount() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeGyroscope::set_has_samplescount() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeGyroscope::clear_has_samplescount() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeGyroscope::clear_samplescount() {
  samplescount_ = 0;
  clear_has_samplescount();
}
inline ::google::protobuf::int32 CarlifeGyroscope::samplescount() const {
  return samplescount_;
}
inline void CarlifeGyroscope::set_samplescount(::google::protobuf::int32 value) {
  set_has_samplescount();
  samplescount_ = value;
}

// required int32 xAxisGyroSum = 2;
inline bool CarlifeGyroscope::has_xaxisgyrosum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CarlifeGyroscope::set_has_xaxisgyrosum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CarlifeGyroscope::clear_has_xaxisgyrosum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CarlifeGyroscope::clear_xaxisgyrosum() {
  xaxisgyrosum_ = 0;
  clear_has_xaxisgyrosum();
}
inline ::google::protobuf::int32 CarlifeGyroscope::xaxisgyrosum() const {
  return xaxisgyrosum_;
}
inline void CarlifeGyroscope::set_xaxisgyrosum(::google::protobuf::int32 value) {
  set_has_xaxisgyrosum();
  xaxisgyrosum_ = value;
}

// required int32 yAxisGyroSum = 3;
inline bool CarlifeGyroscope::has_yaxisgyrosum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CarlifeGyroscope::set_has_yaxisgyrosum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CarlifeGyroscope::clear_has_yaxisgyrosum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CarlifeGyroscope::clear_yaxisgyrosum() {
  yaxisgyrosum_ = 0;
  clear_has_yaxisgyrosum();
}
inline ::google::protobuf::int32 CarlifeGyroscope::yaxisgyrosum() const {
  return yaxisgyrosum_;
}
inline void CarlifeGyroscope::set_yaxisgyrosum(::google::protobuf::int32 value) {
  set_has_yaxisgyrosum();
  yaxisgyrosum_ = value;
}

// required int32 zAxisGyroSum = 4;
inline bool CarlifeGyroscope::has_zaxisgyrosum() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CarlifeGyroscope::set_has_zaxisgyrosum() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CarlifeGyroscope::clear_has_zaxisgyrosum() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CarlifeGyroscope::clear_zaxisgyrosum() {
  zaxisgyrosum_ = 0;
  clear_has_zaxisgyrosum();
}
inline ::google::protobuf::int32 CarlifeGyroscope::zaxisgyrosum() const {
  return zaxisgyrosum_;
}
inline void CarlifeGyroscope::set_zaxisgyrosum(::google::protobuf::int32 value) {
  set_has_zaxisgyrosum();
  zaxisgyrosum_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CarlifeGyroscopeProto_2eproto__INCLUDED
