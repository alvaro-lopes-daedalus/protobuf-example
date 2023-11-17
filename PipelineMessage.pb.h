// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PipelineMessage.proto
// Protobuf C++ Version: 4.26.0-dev

#ifndef GOOGLE_PROTOBUF_INCLUDED_PipelineMessage_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_PipelineMessage_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION != 4026000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_PipelineMessage_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_PipelineMessage_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_PipelineMessage_2eproto;
namespace opencv {
class OcvMat;
struct OcvMatDefaultTypeInternal;
extern OcvMatDefaultTypeInternal _OcvMat_default_instance_;
}  // namespace opencv
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace opencv {

// ===================================================================


// -------------------------------------------------------------------

class OcvMat final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:opencv.OcvMat) */ {
 public:
  inline OcvMat() : OcvMat(nullptr) {}
  ~OcvMat() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR OcvMat(
      ::google::protobuf::internal::ConstantInitialized);

  inline OcvMat(const OcvMat& from) : OcvMat(nullptr, from) {}
  OcvMat(OcvMat&& from) noexcept : OcvMat() {
    *this = ::std::move(from);
  }

  inline OcvMat& operator=(const OcvMat& from) {
    CopyFrom(from);
    return *this;
  }
  inline OcvMat& operator=(OcvMat&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const OcvMat& default_instance() {
    return *internal_default_instance();
  }
  static inline const OcvMat* internal_default_instance() {
    return reinterpret_cast<const OcvMat*>(
        &_OcvMat_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(OcvMat& a, OcvMat& b) { a.Swap(&b); }
  inline void Swap(OcvMat* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OcvMat* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  OcvMat* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<OcvMat>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const OcvMat& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const OcvMat& from) { OcvMat::MergeImpl(*this, from); }

  private:
  static void MergeImpl(::google::protobuf::Message& to_msg,
                        const ::google::protobuf::Message& from_msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(OcvMat* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "opencv.OcvMat"; }

 protected:
  explicit OcvMat(::google::protobuf::Arena* arena);
  OcvMat(::google::protobuf::Arena* arena, const OcvMat& from);
  const ::google::protobuf::MessageLite::ClassData* GetClassData()
      const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const final;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kMatDataFieldNumber = 5,
    kRowsFieldNumber = 1,
    kColsFieldNumber = 2,
    kEltTypeFieldNumber = 3,
    kEltSizeFieldNumber = 4,
  };
  // bytes mat_data = 5;
  void clear_mat_data() ;
  const std::string& mat_data() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_mat_data(Arg_&& arg, Args_... args);
  std::string* mutable_mat_data();
  PROTOBUF_NODISCARD std::string* release_mat_data();
  void set_allocated_mat_data(std::string* value);

  private:
  const std::string& _internal_mat_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_mat_data(
      const std::string& value);
  std::string* _internal_mutable_mat_data();

  public:
  // int32 rows = 1;
  void clear_rows() ;
  ::int32_t rows() const;
  void set_rows(::int32_t value);

  private:
  ::int32_t _internal_rows() const;
  void _internal_set_rows(::int32_t value);

  public:
  // int32 cols = 2;
  void clear_cols() ;
  ::int32_t cols() const;
  void set_cols(::int32_t value);

  private:
  ::int32_t _internal_cols() const;
  void _internal_set_cols(::int32_t value);

  public:
  // int32 elt_type = 3;
  void clear_elt_type() ;
  ::int32_t elt_type() const;
  void set_elt_type(::int32_t value);

  private:
  ::int32_t _internal_elt_type() const;
  void _internal_set_elt_type(::int32_t value);

  public:
  // int32 elt_size = 4;
  void clear_elt_size() ;
  ::int32_t elt_size() const;
  void set_elt_size(::int32_t value);

  private:
  ::int32_t _internal_elt_size() const;
  void _internal_set_elt_size(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:opencv.OcvMat)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr mat_data_;
    ::int32_t rows_;
    ::int32_t cols_;
    ::int32_t elt_type_;
    ::int32_t elt_size_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_PipelineMessage_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// OcvMat

// int32 rows = 1;
inline void OcvMat::clear_rows() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.rows_ = 0;
}
inline ::int32_t OcvMat::rows() const {
  // @@protoc_insertion_point(field_get:opencv.OcvMat.rows)
  return _internal_rows();
}
inline void OcvMat::set_rows(::int32_t value) {
  _internal_set_rows(value);
  // @@protoc_insertion_point(field_set:opencv.OcvMat.rows)
}
inline ::int32_t OcvMat::_internal_rows() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.rows_;
}
inline void OcvMat::_internal_set_rows(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.rows_ = value;
}

// int32 cols = 2;
inline void OcvMat::clear_cols() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.cols_ = 0;
}
inline ::int32_t OcvMat::cols() const {
  // @@protoc_insertion_point(field_get:opencv.OcvMat.cols)
  return _internal_cols();
}
inline void OcvMat::set_cols(::int32_t value) {
  _internal_set_cols(value);
  // @@protoc_insertion_point(field_set:opencv.OcvMat.cols)
}
inline ::int32_t OcvMat::_internal_cols() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.cols_;
}
inline void OcvMat::_internal_set_cols(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.cols_ = value;
}

// int32 elt_type = 3;
inline void OcvMat::clear_elt_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.elt_type_ = 0;
}
inline ::int32_t OcvMat::elt_type() const {
  // @@protoc_insertion_point(field_get:opencv.OcvMat.elt_type)
  return _internal_elt_type();
}
inline void OcvMat::set_elt_type(::int32_t value) {
  _internal_set_elt_type(value);
  // @@protoc_insertion_point(field_set:opencv.OcvMat.elt_type)
}
inline ::int32_t OcvMat::_internal_elt_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.elt_type_;
}
inline void OcvMat::_internal_set_elt_type(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.elt_type_ = value;
}

// int32 elt_size = 4;
inline void OcvMat::clear_elt_size() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.elt_size_ = 0;
}
inline ::int32_t OcvMat::elt_size() const {
  // @@protoc_insertion_point(field_get:opencv.OcvMat.elt_size)
  return _internal_elt_size();
}
inline void OcvMat::set_elt_size(::int32_t value) {
  _internal_set_elt_size(value);
  // @@protoc_insertion_point(field_set:opencv.OcvMat.elt_size)
}
inline ::int32_t OcvMat::_internal_elt_size() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.elt_size_;
}
inline void OcvMat::_internal_set_elt_size(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.elt_size_ = value;
}

// bytes mat_data = 5;
inline void OcvMat::clear_mat_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.mat_data_.ClearToEmpty();
}
inline const std::string& OcvMat::mat_data() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:opencv.OcvMat.mat_data)
  return _internal_mat_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void OcvMat::set_mat_data(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.mat_data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:opencv.OcvMat.mat_data)
}
inline std::string* OcvMat::mutable_mat_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_mat_data();
  // @@protoc_insertion_point(field_mutable:opencv.OcvMat.mat_data)
  return _s;
}
inline const std::string& OcvMat::_internal_mat_data() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.mat_data_.Get();
}
inline void OcvMat::_internal_set_mat_data(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.mat_data_.Set(value, GetArena());
}
inline std::string* OcvMat::_internal_mutable_mat_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _impl_.mat_data_.Mutable( GetArena());
}
inline std::string* OcvMat::release_mat_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:opencv.OcvMat.mat_data)
  return _impl_.mat_data_.Release();
}
inline void OcvMat::set_allocated_mat_data(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.mat_data_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.mat_data_.IsDefault()) {
          _impl_.mat_data_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:opencv.OcvMat.mat_data)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace opencv


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_PipelineMessage_2eproto_2epb_2eh