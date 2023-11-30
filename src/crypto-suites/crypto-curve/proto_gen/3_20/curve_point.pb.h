// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: curve_point.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_curve_5fpoint_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_curve_5fpoint_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_curve_5fpoint_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_curve_5fpoint_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_curve_5fpoint_2eproto;
namespace safeheron {
namespace proto {
class CurvePoint;
struct CurvePointDefaultTypeInternal;
extern CurvePointDefaultTypeInternal _CurvePoint_default_instance_;
}  // namespace proto
}  // namespace safeheron
PROTOBUF_NAMESPACE_OPEN
template<> ::safeheron::proto::CurvePoint* Arena::CreateMaybeMessage<::safeheron::proto::CurvePoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace safeheron {
namespace proto {

// ===================================================================

class CurvePoint final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:safeheron.proto.CurvePoint) */ {
 public:
  inline CurvePoint() : CurvePoint(nullptr) {}
  ~CurvePoint() override;
  explicit PROTOBUF_CONSTEXPR CurvePoint(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CurvePoint(const CurvePoint& from);
  CurvePoint(CurvePoint&& from) noexcept
    : CurvePoint() {
    *this = ::std::move(from);
  }

  inline CurvePoint& operator=(const CurvePoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline CurvePoint& operator=(CurvePoint&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CurvePoint& default_instance() {
    return *internal_default_instance();
  }
  static inline const CurvePoint* internal_default_instance() {
    return reinterpret_cast<const CurvePoint*>(
               &_CurvePoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CurvePoint& a, CurvePoint& b) {
    a.Swap(&b);
  }
  inline void Swap(CurvePoint* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CurvePoint* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CurvePoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CurvePoint>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CurvePoint& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const CurvePoint& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CurvePoint* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "safeheron.proto.CurvePoint";
  }
  protected:
  explicit CurvePoint(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kCurveFieldNumber = 3,
  };
  // string x = 1;
  void clear_x();
  const std::string& x() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_x(ArgT0&& arg0, ArgT... args);
  std::string* mutable_x();
  PROTOBUF_NODISCARD std::string* release_x();
  void set_allocated_x(std::string* x);
  private:
  const std::string& _internal_x() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_x(const std::string& value);
  std::string* _internal_mutable_x();
  public:

  // string y = 2;
  void clear_y();
  const std::string& y() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_y(ArgT0&& arg0, ArgT... args);
  std::string* mutable_y();
  PROTOBUF_NODISCARD std::string* release_y();
  void set_allocated_y(std::string* y);
  private:
  const std::string& _internal_y() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_y(const std::string& value);
  std::string* _internal_mutable_y();
  public:

  // string curve = 3;
  void clear_curve();
  const std::string& curve() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_curve(ArgT0&& arg0, ArgT... args);
  std::string* mutable_curve();
  PROTOBUF_NODISCARD std::string* release_curve();
  void set_allocated_curve(std::string* curve);
  private:
  const std::string& _internal_curve() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_curve(const std::string& value);
  std::string* _internal_mutable_curve();
  public:

  // @@protoc_insertion_point(class_scope:safeheron.proto.CurvePoint)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr x_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr y_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr curve_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_curve_5fpoint_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CurvePoint

// string x = 1;
inline void CurvePoint::clear_x() {
  x_.ClearToEmpty();
}
inline const std::string& CurvePoint::x() const {
  // @@protoc_insertion_point(field_get:safeheron.proto.CurvePoint.x)
  return _internal_x();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CurvePoint::set_x(ArgT0&& arg0, ArgT... args) {
 
 x_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:safeheron.proto.CurvePoint.x)
}
inline std::string* CurvePoint::mutable_x() {
  std::string* _s = _internal_mutable_x();
  // @@protoc_insertion_point(field_mutable:safeheron.proto.CurvePoint.x)
  return _s;
}
inline const std::string& CurvePoint::_internal_x() const {
  return x_.Get();
}
inline void CurvePoint::_internal_set_x(const std::string& value) {
  
  x_.Set(value, GetArenaForAllocation());
}
inline std::string* CurvePoint::_internal_mutable_x() {
  
  return x_.Mutable(GetArenaForAllocation());
}
inline std::string* CurvePoint::release_x() {
  // @@protoc_insertion_point(field_release:safeheron.proto.CurvePoint.x)
  return x_.Release();
}
inline void CurvePoint::set_allocated_x(std::string* x) {
  if (x != nullptr) {
    
  } else {
    
  }
  x_.SetAllocated(x, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (x_.IsDefault()) {
    x_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:safeheron.proto.CurvePoint.x)
}

// string y = 2;
inline void CurvePoint::clear_y() {
  y_.ClearToEmpty();
}
inline const std::string& CurvePoint::y() const {
  // @@protoc_insertion_point(field_get:safeheron.proto.CurvePoint.y)
  return _internal_y();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CurvePoint::set_y(ArgT0&& arg0, ArgT... args) {
 
 y_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:safeheron.proto.CurvePoint.y)
}
inline std::string* CurvePoint::mutable_y() {
  std::string* _s = _internal_mutable_y();
  // @@protoc_insertion_point(field_mutable:safeheron.proto.CurvePoint.y)
  return _s;
}
inline const std::string& CurvePoint::_internal_y() const {
  return y_.Get();
}
inline void CurvePoint::_internal_set_y(const std::string& value) {
  
  y_.Set(value, GetArenaForAllocation());
}
inline std::string* CurvePoint::_internal_mutable_y() {
  
  return y_.Mutable(GetArenaForAllocation());
}
inline std::string* CurvePoint::release_y() {
  // @@protoc_insertion_point(field_release:safeheron.proto.CurvePoint.y)
  return y_.Release();
}
inline void CurvePoint::set_allocated_y(std::string* y) {
  if (y != nullptr) {
    
  } else {
    
  }
  y_.SetAllocated(y, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (y_.IsDefault()) {
    y_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:safeheron.proto.CurvePoint.y)
}

// string curve = 3;
inline void CurvePoint::clear_curve() {
  curve_.ClearToEmpty();
}
inline const std::string& CurvePoint::curve() const {
  // @@protoc_insertion_point(field_get:safeheron.proto.CurvePoint.curve)
  return _internal_curve();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CurvePoint::set_curve(ArgT0&& arg0, ArgT... args) {
 
 curve_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:safeheron.proto.CurvePoint.curve)
}
inline std::string* CurvePoint::mutable_curve() {
  std::string* _s = _internal_mutable_curve();
  // @@protoc_insertion_point(field_mutable:safeheron.proto.CurvePoint.curve)
  return _s;
}
inline const std::string& CurvePoint::_internal_curve() const {
  return curve_.Get();
}
inline void CurvePoint::_internal_set_curve(const std::string& value) {
  
  curve_.Set(value, GetArenaForAllocation());
}
inline std::string* CurvePoint::_internal_mutable_curve() {
  
  return curve_.Mutable(GetArenaForAllocation());
}
inline std::string* CurvePoint::release_curve() {
  // @@protoc_insertion_point(field_release:safeheron.proto.CurvePoint.curve)
  return curve_.Release();
}
inline void CurvePoint::set_allocated_curve(std::string* curve) {
  if (curve != nullptr) {
    
  } else {
    
  }
  curve_.SetAllocated(curve, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (curve_.IsDefault()) {
    curve_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:safeheron.proto.CurvePoint.curve)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace safeheron

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_curve_5fpoint_2eproto