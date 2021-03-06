// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/kalman_filter/proto/pose_tracker_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/kalman_filter/proto/pose_tracker_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace kalman_filter {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* PoseTrackerOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PoseTrackerOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/kalman_filter/proto/pose_tracker_options.proto");
  GOOGLE_CHECK(file != NULL);
  PoseTrackerOptions_descriptor_ = file->message_type(0);
  static const int PoseTrackerOptions_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, position_model_variance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, orientation_model_variance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, velocity_model_variance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, imu_gravity_time_constant_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, imu_gravity_variance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, num_odometry_states_),
  };
  PoseTrackerOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PoseTrackerOptions_descriptor_,
      PoseTrackerOptions::default_instance_,
      PoseTrackerOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrackerOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PoseTrackerOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PoseTrackerOptions_descriptor_, &PoseTrackerOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto() {
  delete PoseTrackerOptions::default_instance_;
  delete PoseTrackerOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n;cartographer/kalman_filter/proto/pose_"
    "tracker_options.proto\022 cartographer.kalm"
    "an_filter.proto\"\330\001\n\022PoseTrackerOptions\022\037"
    "\n\027position_model_variance\030\001 \001(\001\022\"\n\032orien"
    "tation_model_variance\030\002 \001(\001\022\037\n\027velocity_"
    "model_variance\030\003 \001(\001\022!\n\031imu_gravity_time"
    "_constant\030\004 \001(\001\022\034\n\024imu_gravity_variance\030"
    "\005 \001(\001\022\033\n\023num_odometry_states\030\006 \001(\005", 314);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/kalman_filter/proto/pose_tracker_options.proto", &protobuf_RegisterTypes);
  PoseTrackerOptions::default_instance_ = new PoseTrackerOptions();
  PoseTrackerOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PoseTrackerOptions::kPositionModelVarianceFieldNumber;
const int PoseTrackerOptions::kOrientationModelVarianceFieldNumber;
const int PoseTrackerOptions::kVelocityModelVarianceFieldNumber;
const int PoseTrackerOptions::kImuGravityTimeConstantFieldNumber;
const int PoseTrackerOptions::kImuGravityVarianceFieldNumber;
const int PoseTrackerOptions::kNumOdometryStatesFieldNumber;
#endif  // !_MSC_VER

PoseTrackerOptions::PoseTrackerOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PoseTrackerOptions::InitAsDefaultInstance() {
}

PoseTrackerOptions::PoseTrackerOptions(const PoseTrackerOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PoseTrackerOptions::SharedCtor() {
  _cached_size_ = 0;
  position_model_variance_ = 0;
  orientation_model_variance_ = 0;
  velocity_model_variance_ = 0;
  imu_gravity_time_constant_ = 0;
  imu_gravity_variance_ = 0;
  num_odometry_states_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PoseTrackerOptions::~PoseTrackerOptions() {
  SharedDtor();
}

void PoseTrackerOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PoseTrackerOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PoseTrackerOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PoseTrackerOptions_descriptor_;
}

const PoseTrackerOptions& PoseTrackerOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
  return *default_instance_;
}

PoseTrackerOptions* PoseTrackerOptions::default_instance_ = NULL;

PoseTrackerOptions* PoseTrackerOptions::New() const {
  return new PoseTrackerOptions;
}

void PoseTrackerOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    position_model_variance_ = 0;
    orientation_model_variance_ = 0;
    velocity_model_variance_ = 0;
    imu_gravity_time_constant_ = 0;
    imu_gravity_variance_ = 0;
    num_odometry_states_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PoseTrackerOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double position_model_variance = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &position_model_variance_)));
          set_has_position_model_variance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_orientation_model_variance;
        break;
      }

      // optional double orientation_model_variance = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_orientation_model_variance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &orientation_model_variance_)));
          set_has_orientation_model_variance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_velocity_model_variance;
        break;
      }

      // optional double velocity_model_variance = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_velocity_model_variance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_model_variance_)));
          set_has_velocity_model_variance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_imu_gravity_time_constant;
        break;
      }

      // optional double imu_gravity_time_constant = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_imu_gravity_time_constant:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &imu_gravity_time_constant_)));
          set_has_imu_gravity_time_constant();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(41)) goto parse_imu_gravity_variance;
        break;
      }

      // optional double imu_gravity_variance = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_imu_gravity_variance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &imu_gravity_variance_)));
          set_has_imu_gravity_variance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_num_odometry_states;
        break;
      }

      // optional int32 num_odometry_states = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_num_odometry_states:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_odometry_states_)));
          set_has_num_odometry_states();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PoseTrackerOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double position_model_variance = 1;
  if (has_position_model_variance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->position_model_variance(), output);
  }

  // optional double orientation_model_variance = 2;
  if (has_orientation_model_variance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->orientation_model_variance(), output);
  }

  // optional double velocity_model_variance = 3;
  if (has_velocity_model_variance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->velocity_model_variance(), output);
  }

  // optional double imu_gravity_time_constant = 4;
  if (has_imu_gravity_time_constant()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->imu_gravity_time_constant(), output);
  }

  // optional double imu_gravity_variance = 5;
  if (has_imu_gravity_variance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->imu_gravity_variance(), output);
  }

  // optional int32 num_odometry_states = 6;
  if (has_num_odometry_states()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->num_odometry_states(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PoseTrackerOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double position_model_variance = 1;
  if (has_position_model_variance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->position_model_variance(), target);
  }

  // optional double orientation_model_variance = 2;
  if (has_orientation_model_variance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->orientation_model_variance(), target);
  }

  // optional double velocity_model_variance = 3;
  if (has_velocity_model_variance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->velocity_model_variance(), target);
  }

  // optional double imu_gravity_time_constant = 4;
  if (has_imu_gravity_time_constant()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->imu_gravity_time_constant(), target);
  }

  // optional double imu_gravity_variance = 5;
  if (has_imu_gravity_variance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->imu_gravity_variance(), target);
  }

  // optional int32 num_odometry_states = 6;
  if (has_num_odometry_states()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->num_odometry_states(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PoseTrackerOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double position_model_variance = 1;
    if (has_position_model_variance()) {
      total_size += 1 + 8;
    }

    // optional double orientation_model_variance = 2;
    if (has_orientation_model_variance()) {
      total_size += 1 + 8;
    }

    // optional double velocity_model_variance = 3;
    if (has_velocity_model_variance()) {
      total_size += 1 + 8;
    }

    // optional double imu_gravity_time_constant = 4;
    if (has_imu_gravity_time_constant()) {
      total_size += 1 + 8;
    }

    // optional double imu_gravity_variance = 5;
    if (has_imu_gravity_variance()) {
      total_size += 1 + 8;
    }

    // optional int32 num_odometry_states = 6;
    if (has_num_odometry_states()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num_odometry_states());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PoseTrackerOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PoseTrackerOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PoseTrackerOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PoseTrackerOptions::MergeFrom(const PoseTrackerOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_position_model_variance()) {
      set_position_model_variance(from.position_model_variance());
    }
    if (from.has_orientation_model_variance()) {
      set_orientation_model_variance(from.orientation_model_variance());
    }
    if (from.has_velocity_model_variance()) {
      set_velocity_model_variance(from.velocity_model_variance());
    }
    if (from.has_imu_gravity_time_constant()) {
      set_imu_gravity_time_constant(from.imu_gravity_time_constant());
    }
    if (from.has_imu_gravity_variance()) {
      set_imu_gravity_variance(from.imu_gravity_variance());
    }
    if (from.has_num_odometry_states()) {
      set_num_odometry_states(from.num_odometry_states());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PoseTrackerOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PoseTrackerOptions::CopyFrom(const PoseTrackerOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PoseTrackerOptions::IsInitialized() const {

  return true;
}

void PoseTrackerOptions::Swap(PoseTrackerOptions* other) {
  if (other != this) {
    std::swap(position_model_variance_, other->position_model_variance_);
    std::swap(orientation_model_variance_, other->orientation_model_variance_);
    std::swap(velocity_model_variance_, other->velocity_model_variance_);
    std::swap(imu_gravity_time_constant_, other->imu_gravity_time_constant_);
    std::swap(imu_gravity_variance_, other->imu_gravity_variance_);
    std::swap(num_odometry_states_, other->num_odometry_states_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PoseTrackerOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PoseTrackerOptions_descriptor_;
  metadata.reflection = PoseTrackerOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace kalman_filter
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
