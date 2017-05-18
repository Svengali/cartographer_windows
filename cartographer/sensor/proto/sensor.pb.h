// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/sensor/proto/sensor.proto

#ifndef PROTOBUF_cartographer_2fsensor_2fproto_2fsensor_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fsensor_2fproto_2fsensor_2eproto__INCLUDED

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
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace sensor {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
void protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
void protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fsensor_2eproto();

class PointCloud;
class CompressedPointCloud;
class Matrix;
class RangeData;

// ===================================================================

class PointCloud : public ::google::protobuf::Message {
 public:
  PointCloud();
  virtual ~PointCloud();

  PointCloud(const PointCloud& from);

  inline PointCloud& operator=(const PointCloud& from) {
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
  static const PointCloud& default_instance();

  void Swap(PointCloud* other);

  // implements Message ----------------------------------------------

  PointCloud* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PointCloud& from);
  void MergeFrom(const PointCloud& from);
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

  // repeated float x = 3 [packed = true];
  inline int x_size() const;
  inline void clear_x();
  static const int kXFieldNumber = 3;
  inline float x(int index) const;
  inline void set_x(int index, float value);
  inline void add_x(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      x() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_x();

  // repeated float y = 4 [packed = true];
  inline int y_size() const;
  inline void clear_y();
  static const int kYFieldNumber = 4;
  inline float y(int index) const;
  inline void set_y(int index, float value);
  inline void add_y(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      y() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_y();

  // repeated float z = 5 [packed = true];
  inline int z_size() const;
  inline void clear_z();
  static const int kZFieldNumber = 5;
  inline float z(int index) const;
  inline void set_z(int index, float value);
  inline void add_z(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      z() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_z();

  // @@protoc_insertion_point(class_scope:cartographer.sensor.proto.PointCloud)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< float > x_;
  mutable int _x_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > y_;
  mutable int _y_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > z_;
  mutable int _z_cached_byte_size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fsensor_2eproto();

  void InitAsDefaultInstance();
  static PointCloud* default_instance_;
};
// -------------------------------------------------------------------

class CompressedPointCloud : public ::google::protobuf::Message {
 public:
  CompressedPointCloud();
  virtual ~CompressedPointCloud();

  CompressedPointCloud(const CompressedPointCloud& from);

  inline CompressedPointCloud& operator=(const CompressedPointCloud& from) {
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
  static const CompressedPointCloud& default_instance();

  void Swap(CompressedPointCloud* other);

  // implements Message ----------------------------------------------

  CompressedPointCloud* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CompressedPointCloud& from);
  void MergeFrom(const CompressedPointCloud& from);
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

  // optional int32 num_points = 1;
  inline bool has_num_points() const;
  inline void clear_num_points();
  static const int kNumPointsFieldNumber = 1;
  inline ::google::protobuf::int32 num_points() const;
  inline void set_num_points(::google::protobuf::int32 value);

  // repeated int32 point_data = 3 [packed = true];
  inline int point_data_size() const;
  inline void clear_point_data();
  static const int kPointDataFieldNumber = 3;
  inline ::google::protobuf::int32 point_data(int index) const;
  inline void set_point_data(int index, ::google::protobuf::int32 value);
  inline void add_point_data(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      point_data() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_point_data();

  // @@protoc_insertion_point(class_scope:cartographer.sensor.proto.CompressedPointCloud)
 private:
  inline void set_has_num_points();
  inline void clear_has_num_points();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > point_data_;
  mutable int _point_data_cached_byte_size_;
  ::google::protobuf::int32 num_points_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fsensor_2eproto();

  void InitAsDefaultInstance();
  static CompressedPointCloud* default_instance_;
};
// -------------------------------------------------------------------

class Matrix : public ::google::protobuf::Message {
 public:
  Matrix();
  virtual ~Matrix();

  Matrix(const Matrix& from);

  inline Matrix& operator=(const Matrix& from) {
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
  static const Matrix& default_instance();

  void Swap(Matrix* other);

  // implements Message ----------------------------------------------

  Matrix* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Matrix& from);
  void MergeFrom(const Matrix& from);
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

  // optional int32 rows = 1;
  inline bool has_rows() const;
  inline void clear_rows();
  static const int kRowsFieldNumber = 1;
  inline ::google::protobuf::int32 rows() const;
  inline void set_rows(::google::protobuf::int32 value);

  // optional int32 cols = 2;
  inline bool has_cols() const;
  inline void clear_cols();
  static const int kColsFieldNumber = 2;
  inline ::google::protobuf::int32 cols() const;
  inline void set_cols(::google::protobuf::int32 value);

  // repeated double data = 3;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline double data(int index) const;
  inline void set_data(int index, double value);
  inline void add_data(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      data() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:cartographer.sensor.proto.Matrix)
 private:
  inline void set_has_rows();
  inline void clear_has_rows();
  inline void set_has_cols();
  inline void clear_has_cols();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 rows_;
  ::google::protobuf::int32 cols_;
  ::google::protobuf::RepeatedField< double > data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fsensor_2eproto();

  void InitAsDefaultInstance();
  static Matrix* default_instance_;
};
// -------------------------------------------------------------------

class RangeData : public ::google::protobuf::Message {
 public:
  RangeData();
  virtual ~RangeData();

  RangeData(const RangeData& from);

  inline RangeData& operator=(const RangeData& from) {
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
  static const RangeData& default_instance();

  void Swap(RangeData* other);

  // implements Message ----------------------------------------------

  RangeData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RangeData& from);
  void MergeFrom(const RangeData& from);
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

  // optional .cartographer.transform.proto.Vector3f origin = 1;
  inline bool has_origin() const;
  inline void clear_origin();
  static const int kOriginFieldNumber = 1;
  inline const ::cartographer::transform::proto::Vector3f& origin() const;
  inline ::cartographer::transform::proto::Vector3f* mutable_origin();
  inline ::cartographer::transform::proto::Vector3f* release_origin();
  inline void set_allocated_origin(::cartographer::transform::proto::Vector3f* origin);

  // optional .cartographer.sensor.proto.PointCloud point_cloud = 2;
  inline bool has_point_cloud() const;
  inline void clear_point_cloud();
  static const int kPointCloudFieldNumber = 2;
  inline const ::cartographer::sensor::proto::PointCloud& point_cloud() const;
  inline ::cartographer::sensor::proto::PointCloud* mutable_point_cloud();
  inline ::cartographer::sensor::proto::PointCloud* release_point_cloud();
  inline void set_allocated_point_cloud(::cartographer::sensor::proto::PointCloud* point_cloud);

  // optional .cartographer.sensor.proto.PointCloud missing_echo_point_cloud = 3;
  inline bool has_missing_echo_point_cloud() const;
  inline void clear_missing_echo_point_cloud();
  static const int kMissingEchoPointCloudFieldNumber = 3;
  inline const ::cartographer::sensor::proto::PointCloud& missing_echo_point_cloud() const;
  inline ::cartographer::sensor::proto::PointCloud* mutable_missing_echo_point_cloud();
  inline ::cartographer::sensor::proto::PointCloud* release_missing_echo_point_cloud();
  inline void set_allocated_missing_echo_point_cloud(::cartographer::sensor::proto::PointCloud* missing_echo_point_cloud);

  // @@protoc_insertion_point(class_scope:cartographer.sensor.proto.RangeData)
 private:
  inline void set_has_origin();
  inline void clear_has_origin();
  inline void set_has_point_cloud();
  inline void clear_has_point_cloud();
  inline void set_has_missing_echo_point_cloud();
  inline void clear_has_missing_echo_point_cloud();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::cartographer::transform::proto::Vector3f* origin_;
  ::cartographer::sensor::proto::PointCloud* point_cloud_;
  ::cartographer::sensor::proto::PointCloud* missing_echo_point_cloud_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fsensor_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fsensor_2eproto();

  void InitAsDefaultInstance();
  static RangeData* default_instance_;
};
// ===================================================================


// ===================================================================

// PointCloud

// repeated float x = 3 [packed = true];
inline int PointCloud::x_size() const {
  return x_.size();
}
inline void PointCloud::clear_x() {
  x_.Clear();
}
inline float PointCloud::x(int index) const {
  return x_.Get(index);
}
inline void PointCloud::set_x(int index, float value) {
  x_.Set(index, value);
}
inline void PointCloud::add_x(float value) {
  x_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
PointCloud::x() const {
  return x_;
}
inline ::google::protobuf::RepeatedField< float >*
PointCloud::mutable_x() {
  return &x_;
}

// repeated float y = 4 [packed = true];
inline int PointCloud::y_size() const {
  return y_.size();
}
inline void PointCloud::clear_y() {
  y_.Clear();
}
inline float PointCloud::y(int index) const {
  return y_.Get(index);
}
inline void PointCloud::set_y(int index, float value) {
  y_.Set(index, value);
}
inline void PointCloud::add_y(float value) {
  y_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
PointCloud::y() const {
  return y_;
}
inline ::google::protobuf::RepeatedField< float >*
PointCloud::mutable_y() {
  return &y_;
}

// repeated float z = 5 [packed = true];
inline int PointCloud::z_size() const {
  return z_.size();
}
inline void PointCloud::clear_z() {
  z_.Clear();
}
inline float PointCloud::z(int index) const {
  return z_.Get(index);
}
inline void PointCloud::set_z(int index, float value) {
  z_.Set(index, value);
}
inline void PointCloud::add_z(float value) {
  z_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
PointCloud::z() const {
  return z_;
}
inline ::google::protobuf::RepeatedField< float >*
PointCloud::mutable_z() {
  return &z_;
}

// -------------------------------------------------------------------

// CompressedPointCloud

// optional int32 num_points = 1;
inline bool CompressedPointCloud::has_num_points() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CompressedPointCloud::set_has_num_points() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CompressedPointCloud::clear_has_num_points() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CompressedPointCloud::clear_num_points() {
  num_points_ = 0;
  clear_has_num_points();
}
inline ::google::protobuf::int32 CompressedPointCloud::num_points() const {
  return num_points_;
}
inline void CompressedPointCloud::set_num_points(::google::protobuf::int32 value) {
  set_has_num_points();
  num_points_ = value;
}

// repeated int32 point_data = 3 [packed = true];
inline int CompressedPointCloud::point_data_size() const {
  return point_data_.size();
}
inline void CompressedPointCloud::clear_point_data() {
  point_data_.Clear();
}
inline ::google::protobuf::int32 CompressedPointCloud::point_data(int index) const {
  return point_data_.Get(index);
}
inline void CompressedPointCloud::set_point_data(int index, ::google::protobuf::int32 value) {
  point_data_.Set(index, value);
}
inline void CompressedPointCloud::add_point_data(::google::protobuf::int32 value) {
  point_data_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CompressedPointCloud::point_data() const {
  return point_data_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CompressedPointCloud::mutable_point_data() {
  return &point_data_;
}

// -------------------------------------------------------------------

// Matrix

// optional int32 rows = 1;
inline bool Matrix::has_rows() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Matrix::set_has_rows() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Matrix::clear_has_rows() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Matrix::clear_rows() {
  rows_ = 0;
  clear_has_rows();
}
inline ::google::protobuf::int32 Matrix::rows() const {
  return rows_;
}
inline void Matrix::set_rows(::google::protobuf::int32 value) {
  set_has_rows();
  rows_ = value;
}

// optional int32 cols = 2;
inline bool Matrix::has_cols() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Matrix::set_has_cols() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Matrix::clear_has_cols() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Matrix::clear_cols() {
  cols_ = 0;
  clear_has_cols();
}
inline ::google::protobuf::int32 Matrix::cols() const {
  return cols_;
}
inline void Matrix::set_cols(::google::protobuf::int32 value) {
  set_has_cols();
  cols_ = value;
}

// repeated double data = 3;
inline int Matrix::data_size() const {
  return data_.size();
}
inline void Matrix::clear_data() {
  data_.Clear();
}
inline double Matrix::data(int index) const {
  return data_.Get(index);
}
inline void Matrix::set_data(int index, double value) {
  data_.Set(index, value);
}
inline void Matrix::add_data(double value) {
  data_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
Matrix::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedField< double >*
Matrix::mutable_data() {
  return &data_;
}

// -------------------------------------------------------------------

// RangeData

// optional .cartographer.transform.proto.Vector3f origin = 1;
inline bool RangeData::has_origin() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RangeData::set_has_origin() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RangeData::clear_has_origin() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RangeData::clear_origin() {
  if (origin_ != NULL) origin_->::cartographer::transform::proto::Vector3f::Clear();
  clear_has_origin();
}
inline const ::cartographer::transform::proto::Vector3f& RangeData::origin() const {
  return origin_ != NULL ? *origin_ : *default_instance_->origin_;
}
inline ::cartographer::transform::proto::Vector3f* RangeData::mutable_origin() {
  set_has_origin();
  if (origin_ == NULL) origin_ = new ::cartographer::transform::proto::Vector3f;
  return origin_;
}
inline ::cartographer::transform::proto::Vector3f* RangeData::release_origin() {
  clear_has_origin();
  ::cartographer::transform::proto::Vector3f* temp = origin_;
  origin_ = NULL;
  return temp;
}
inline void RangeData::set_allocated_origin(::cartographer::transform::proto::Vector3f* origin) {
  delete origin_;
  origin_ = origin;
  if (origin) {
    set_has_origin();
  } else {
    clear_has_origin();
  }
}

// optional .cartographer.sensor.proto.PointCloud point_cloud = 2;
inline bool RangeData::has_point_cloud() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RangeData::set_has_point_cloud() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RangeData::clear_has_point_cloud() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RangeData::clear_point_cloud() {
  if (point_cloud_ != NULL) point_cloud_->::cartographer::sensor::proto::PointCloud::Clear();
  clear_has_point_cloud();
}
inline const ::cartographer::sensor::proto::PointCloud& RangeData::point_cloud() const {
  return point_cloud_ != NULL ? *point_cloud_ : *default_instance_->point_cloud_;
}
inline ::cartographer::sensor::proto::PointCloud* RangeData::mutable_point_cloud() {
  set_has_point_cloud();
  if (point_cloud_ == NULL) point_cloud_ = new ::cartographer::sensor::proto::PointCloud;
  return point_cloud_;
}
inline ::cartographer::sensor::proto::PointCloud* RangeData::release_point_cloud() {
  clear_has_point_cloud();
  ::cartographer::sensor::proto::PointCloud* temp = point_cloud_;
  point_cloud_ = NULL;
  return temp;
}
inline void RangeData::set_allocated_point_cloud(::cartographer::sensor::proto::PointCloud* point_cloud) {
  delete point_cloud_;
  point_cloud_ = point_cloud;
  if (point_cloud) {
    set_has_point_cloud();
  } else {
    clear_has_point_cloud();
  }
}

// optional .cartographer.sensor.proto.PointCloud missing_echo_point_cloud = 3;
inline bool RangeData::has_missing_echo_point_cloud() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RangeData::set_has_missing_echo_point_cloud() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RangeData::clear_has_missing_echo_point_cloud() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RangeData::clear_missing_echo_point_cloud() {
  if (missing_echo_point_cloud_ != NULL) missing_echo_point_cloud_->::cartographer::sensor::proto::PointCloud::Clear();
  clear_has_missing_echo_point_cloud();
}
inline const ::cartographer::sensor::proto::PointCloud& RangeData::missing_echo_point_cloud() const {
  return missing_echo_point_cloud_ != NULL ? *missing_echo_point_cloud_ : *default_instance_->missing_echo_point_cloud_;
}
inline ::cartographer::sensor::proto::PointCloud* RangeData::mutable_missing_echo_point_cloud() {
  set_has_missing_echo_point_cloud();
  if (missing_echo_point_cloud_ == NULL) missing_echo_point_cloud_ = new ::cartographer::sensor::proto::PointCloud;
  return missing_echo_point_cloud_;
}
inline ::cartographer::sensor::proto::PointCloud* RangeData::release_missing_echo_point_cloud() {
  clear_has_missing_echo_point_cloud();
  ::cartographer::sensor::proto::PointCloud* temp = missing_echo_point_cloud_;
  missing_echo_point_cloud_ = NULL;
  return temp;
}
inline void RangeData::set_allocated_missing_echo_point_cloud(::cartographer::sensor::proto::PointCloud* missing_echo_point_cloud) {
  delete missing_echo_point_cloud_;
  missing_echo_point_cloud_ = missing_echo_point_cloud;
  if (missing_echo_point_cloud) {
    set_has_missing_echo_point_cloud();
  } else {
    clear_has_missing_echo_point_cloud();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace sensor
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fsensor_2fproto_2fsensor_2eproto__INCLUDED
