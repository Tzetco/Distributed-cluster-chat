// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserService.proto

#ifndef PROTOBUF_UserService_2eproto__INCLUDED
#define PROTOBUF_UserService_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)

namespace ik_UserService {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_UserService_2eproto();
void protobuf_AssignDesc_UserService_2eproto();
void protobuf_ShutdownFile_UserService_2eproto();

class ErrorMsg;
class LoginOutRequest;
class LoginReponse;
class LoginRequest;
class RegisterRequest;
class RegisterResponse;

// ===================================================================

class LoginRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_UserService.LoginRequest) */ {
 public:
  LoginRequest();
  virtual ~LoginRequest();

  LoginRequest(const LoginRequest& from);

  inline LoginRequest& operator=(const LoginRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginRequest& default_instance();

  void Swap(LoginRequest* other);

  // implements Message ----------------------------------------------

  inline LoginRequest* New() const { return New(NULL); }

  LoginRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginRequest& from);
  void MergeFrom(const LoginRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LoginRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional bytes password = 2;
  void clear_password();
  static const int kPasswordFieldNumber = 2;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  void set_password(const char* value);
  void set_password(const void* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:ik_UserService.LoginRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_UserService_2eproto();
  friend void protobuf_AssignDesc_UserService_2eproto();
  friend void protobuf_ShutdownFile_UserService_2eproto();

  void InitAsDefaultInstance();
  static LoginRequest* default_instance_;
};
// -------------------------------------------------------------------

class ErrorMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_UserService.ErrorMsg) */ {
 public:
  ErrorMsg();
  virtual ~ErrorMsg();

  ErrorMsg(const ErrorMsg& from);

  inline ErrorMsg& operator=(const ErrorMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ErrorMsg& default_instance();

  void Swap(ErrorMsg* other);

  // implements Message ----------------------------------------------

  inline ErrorMsg* New() const { return New(NULL); }

  ErrorMsg* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ErrorMsg& from);
  void MergeFrom(const ErrorMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ErrorMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  void set_message(const char* value);
  void set_message(const void* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:ik_UserService.ErrorMsg)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_UserService_2eproto();
  friend void protobuf_AssignDesc_UserService_2eproto();
  friend void protobuf_ShutdownFile_UserService_2eproto();

  void InitAsDefaultInstance();
  static ErrorMsg* default_instance_;
};
// -------------------------------------------------------------------

class LoginReponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_UserService.LoginReponse) */ {
 public:
  LoginReponse();
  virtual ~LoginReponse();

  LoginReponse(const LoginReponse& from);

  inline LoginReponse& operator=(const LoginReponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginReponse& default_instance();

  void Swap(LoginReponse* other);

  // implements Message ----------------------------------------------

  inline LoginReponse* New() const { return New(NULL); }

  LoginReponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginReponse& from);
  void MergeFrom(const LoginReponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LoginReponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool is_success = 1;
  void clear_is_success();
  static const int kIsSuccessFieldNumber = 1;
  bool is_success() const;
  void set_is_success(bool value);

  // optional .ik_UserService.ErrorMsg msg = 2;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::ik_UserService::ErrorMsg& msg() const;
  ::ik_UserService::ErrorMsg* mutable_msg();
  ::ik_UserService::ErrorMsg* release_msg();
  void set_allocated_msg(::ik_UserService::ErrorMsg* msg);

  // @@protoc_insertion_point(class_scope:ik_UserService.LoginReponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::ik_UserService::ErrorMsg* msg_;
  bool is_success_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_UserService_2eproto();
  friend void protobuf_AssignDesc_UserService_2eproto();
  friend void protobuf_ShutdownFile_UserService_2eproto();

  void InitAsDefaultInstance();
  static LoginReponse* default_instance_;
};
// -------------------------------------------------------------------

class RegisterRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_UserService.RegisterRequest) */ {
 public:
  RegisterRequest();
  virtual ~RegisterRequest();

  RegisterRequest(const RegisterRequest& from);

  inline RegisterRequest& operator=(const RegisterRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RegisterRequest& default_instance();

  void Swap(RegisterRequest* other);

  // implements Message ----------------------------------------------

  inline RegisterRequest* New() const { return New(NULL); }

  RegisterRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RegisterRequest& from);
  void MergeFrom(const RegisterRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RegisterRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const void* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional bytes password = 2;
  void clear_password();
  static const int kPasswordFieldNumber = 2;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  void set_password(const char* value);
  void set_password(const void* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:ik_UserService.RegisterRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_UserService_2eproto();
  friend void protobuf_AssignDesc_UserService_2eproto();
  friend void protobuf_ShutdownFile_UserService_2eproto();

  void InitAsDefaultInstance();
  static RegisterRequest* default_instance_;
};
// -------------------------------------------------------------------

class RegisterResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_UserService.RegisterResponse) */ {
 public:
  RegisterResponse();
  virtual ~RegisterResponse();

  RegisterResponse(const RegisterResponse& from);

  inline RegisterResponse& operator=(const RegisterResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RegisterResponse& default_instance();

  void Swap(RegisterResponse* other);

  // implements Message ----------------------------------------------

  inline RegisterResponse* New() const { return New(NULL); }

  RegisterResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RegisterResponse& from);
  void MergeFrom(const RegisterResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RegisterResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool is_success = 1;
  void clear_is_success();
  static const int kIsSuccessFieldNumber = 1;
  bool is_success() const;
  void set_is_success(bool value);

  // optional int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ik_UserService.RegisterResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  bool is_success_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_UserService_2eproto();
  friend void protobuf_AssignDesc_UserService_2eproto();
  friend void protobuf_ShutdownFile_UserService_2eproto();

  void InitAsDefaultInstance();
  static RegisterResponse* default_instance_;
};
// -------------------------------------------------------------------

class LoginOutRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_UserService.LoginOutRequest) */ {
 public:
  LoginOutRequest();
  virtual ~LoginOutRequest();

  LoginOutRequest(const LoginOutRequest& from);

  inline LoginOutRequest& operator=(const LoginOutRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginOutRequest& default_instance();

  void Swap(LoginOutRequest* other);

  // implements Message ----------------------------------------------

  inline LoginOutRequest* New() const { return New(NULL); }

  LoginOutRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginOutRequest& from);
  void MergeFrom(const LoginOutRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LoginOutRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ik_UserService.LoginOutRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_UserService_2eproto();
  friend void protobuf_AssignDesc_UserService_2eproto();
  friend void protobuf_ShutdownFile_UserService_2eproto();

  void InitAsDefaultInstance();
  static LoginOutRequest* default_instance_;
};
// ===================================================================

class UserServiceRpc_Stub;

class UserServiceRpc : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline UserServiceRpc() {};
 public:
  virtual ~UserServiceRpc();

  typedef UserServiceRpc_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void Login(::google::protobuf::RpcController* controller,
                       const ::ik_UserService::LoginRequest* request,
                       ::ik_UserService::LoginReponse* response,
                       ::google::protobuf::Closure* done);
  virtual void Registe(::google::protobuf::RpcController* controller,
                       const ::ik_UserService::RegisterRequest* request,
                       ::ik_UserService::RegisterResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void LoginOut(::google::protobuf::RpcController* controller,
                       const ::ik_UserService::LoginOutRequest* request,
                       ::google::protobuf::Empty* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(UserServiceRpc);
};

class UserServiceRpc_Stub : public UserServiceRpc {
 public:
  UserServiceRpc_Stub(::google::protobuf::RpcChannel* channel);
  UserServiceRpc_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~UserServiceRpc_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements UserServiceRpc ------------------------------------------

  void Login(::google::protobuf::RpcController* controller,
                       const ::ik_UserService::LoginRequest* request,
                       ::ik_UserService::LoginReponse* response,
                       ::google::protobuf::Closure* done);
  void Registe(::google::protobuf::RpcController* controller,
                       const ::ik_UserService::RegisterRequest* request,
                       ::ik_UserService::RegisterResponse* response,
                       ::google::protobuf::Closure* done);
  void LoginOut(::google::protobuf::RpcController* controller,
                       const ::ik_UserService::LoginOutRequest* request,
                       ::google::protobuf::Empty* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(UserServiceRpc_Stub);
};


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LoginRequest

// optional int32 id = 1;
inline void LoginRequest::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 LoginRequest::id() const {
  // @@protoc_insertion_point(field_get:ik_UserService.LoginRequest.id)
  return id_;
}
inline void LoginRequest::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ik_UserService.LoginRequest.id)
}

// optional bytes password = 2;
inline void LoginRequest::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LoginRequest::password() const {
  // @@protoc_insertion_point(field_get:ik_UserService.LoginRequest.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginRequest::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_UserService.LoginRequest.password)
}
inline void LoginRequest::set_password(const char* value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_UserService.LoginRequest.password)
}
inline void LoginRequest::set_password(const void* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_UserService.LoginRequest.password)
}
inline ::std::string* LoginRequest::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:ik_UserService.LoginRequest.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginRequest::release_password() {
  // @@protoc_insertion_point(field_release:ik_UserService.LoginRequest.password)
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginRequest::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:ik_UserService.LoginRequest.password)
}

// -------------------------------------------------------------------

// ErrorMsg

// optional bytes message = 2;
inline void ErrorMsg::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ErrorMsg::message() const {
  // @@protoc_insertion_point(field_get:ik_UserService.ErrorMsg.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ErrorMsg::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_UserService.ErrorMsg.message)
}
inline void ErrorMsg::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_UserService.ErrorMsg.message)
}
inline void ErrorMsg::set_message(const void* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_UserService.ErrorMsg.message)
}
inline ::std::string* ErrorMsg::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:ik_UserService.ErrorMsg.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ErrorMsg::release_message() {
  // @@protoc_insertion_point(field_release:ik_UserService.ErrorMsg.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ErrorMsg::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:ik_UserService.ErrorMsg.message)
}

// -------------------------------------------------------------------

// LoginReponse

// optional bool is_success = 1;
inline void LoginReponse::clear_is_success() {
  is_success_ = false;
}
inline bool LoginReponse::is_success() const {
  // @@protoc_insertion_point(field_get:ik_UserService.LoginReponse.is_success)
  return is_success_;
}
inline void LoginReponse::set_is_success(bool value) {
  
  is_success_ = value;
  // @@protoc_insertion_point(field_set:ik_UserService.LoginReponse.is_success)
}

// optional .ik_UserService.ErrorMsg msg = 2;
inline bool LoginReponse::has_msg() const {
  return !_is_default_instance_ && msg_ != NULL;
}
inline void LoginReponse::clear_msg() {
  if (GetArenaNoVirtual() == NULL && msg_ != NULL) delete msg_;
  msg_ = NULL;
}
inline const ::ik_UserService::ErrorMsg& LoginReponse::msg() const {
  // @@protoc_insertion_point(field_get:ik_UserService.LoginReponse.msg)
  return msg_ != NULL ? *msg_ : *default_instance_->msg_;
}
inline ::ik_UserService::ErrorMsg* LoginReponse::mutable_msg() {
  
  if (msg_ == NULL) {
    msg_ = new ::ik_UserService::ErrorMsg;
  }
  // @@protoc_insertion_point(field_mutable:ik_UserService.LoginReponse.msg)
  return msg_;
}
inline ::ik_UserService::ErrorMsg* LoginReponse::release_msg() {
  // @@protoc_insertion_point(field_release:ik_UserService.LoginReponse.msg)
  
  ::ik_UserService::ErrorMsg* temp = msg_;
  msg_ = NULL;
  return temp;
}
inline void LoginReponse::set_allocated_msg(::ik_UserService::ErrorMsg* msg) {
  delete msg_;
  msg_ = msg;
  if (msg) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:ik_UserService.LoginReponse.msg)
}

// -------------------------------------------------------------------

// RegisterRequest

// optional bytes name = 1;
inline void RegisterRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RegisterRequest::name() const {
  // @@protoc_insertion_point(field_get:ik_UserService.RegisterRequest.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RegisterRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_UserService.RegisterRequest.name)
}
inline void RegisterRequest::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_UserService.RegisterRequest.name)
}
inline void RegisterRequest::set_name(const void* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_UserService.RegisterRequest.name)
}
inline ::std::string* RegisterRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ik_UserService.RegisterRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RegisterRequest::release_name() {
  // @@protoc_insertion_point(field_release:ik_UserService.RegisterRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RegisterRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ik_UserService.RegisterRequest.name)
}

// optional bytes password = 2;
inline void RegisterRequest::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RegisterRequest::password() const {
  // @@protoc_insertion_point(field_get:ik_UserService.RegisterRequest.password)
  return password_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RegisterRequest::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_UserService.RegisterRequest.password)
}
inline void RegisterRequest::set_password(const char* value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_UserService.RegisterRequest.password)
}
inline void RegisterRequest::set_password(const void* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_UserService.RegisterRequest.password)
}
inline ::std::string* RegisterRequest::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:ik_UserService.RegisterRequest.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RegisterRequest::release_password() {
  // @@protoc_insertion_point(field_release:ik_UserService.RegisterRequest.password)
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RegisterRequest::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:ik_UserService.RegisterRequest.password)
}

// -------------------------------------------------------------------

// RegisterResponse

// optional bool is_success = 1;
inline void RegisterResponse::clear_is_success() {
  is_success_ = false;
}
inline bool RegisterResponse::is_success() const {
  // @@protoc_insertion_point(field_get:ik_UserService.RegisterResponse.is_success)
  return is_success_;
}
inline void RegisterResponse::set_is_success(bool value) {
  
  is_success_ = value;
  // @@protoc_insertion_point(field_set:ik_UserService.RegisterResponse.is_success)
}

// optional int32 id = 2;
inline void RegisterResponse::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 RegisterResponse::id() const {
  // @@protoc_insertion_point(field_get:ik_UserService.RegisterResponse.id)
  return id_;
}
inline void RegisterResponse::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ik_UserService.RegisterResponse.id)
}

// -------------------------------------------------------------------

// LoginOutRequest

// optional int32 id = 1;
inline void LoginOutRequest::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 LoginOutRequest::id() const {
  // @@protoc_insertion_point(field_get:ik_UserService.LoginOutRequest.id)
  return id_;
}
inline void LoginOutRequest::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ik_UserService.LoginOutRequest.id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ik_UserService

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UserService_2eproto__INCLUDED