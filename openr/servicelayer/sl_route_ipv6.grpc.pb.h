// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: sl_route_ipv6.proto
#ifndef GRPC_sl_5froute_5fipv6_2eproto__INCLUDED
#define GRPC_sl_5froute_5fipv6_2eproto__INCLUDED

#include "sl_route_ipv6.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace service_layer {

class SLRoutev6Oper GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SLRoutev6GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalsGetMsgRsp>> AsyncSLRoutev6GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalsGetMsgRsp>>(AsyncSLRoutev6GlobalsGetRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev6GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalStatsGetMsgRsp>> AsyncSLRoutev6GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalStatsGetMsgRsp>>(AsyncSLRoutev6GlobalStatsGetRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev6VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::service_layer::SLVrfRegMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegMsgRsp>> AsyncSLRoutev6VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegMsgRsp>>(AsyncSLRoutev6VrfRegOpRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev6VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVrfRegGetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegGetMsgRsp>> AsyncSLRoutev6VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegGetMsgRsp>>(AsyncSLRoutev6VrfRegGetRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev6VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVRFGetStatsMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVRFGetStatsMsgRsp>> AsyncSLRoutev6VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVRFGetStatsMsgRsp>>(AsyncSLRoutev6VrfGetStatsRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev6Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::service_layer::SLRoutev6MsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev6MsgRsp>> AsyncSLRoutev6Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev6MsgRsp>>(AsyncSLRoutev6OpRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev6Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::service_layer::SLRoutev6GetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev6GetMsgRsp>> AsyncSLRoutev6Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev6GetMsgRsp>>(AsyncSLRoutev6GetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>> SLRoutev6OpStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>>(SLRoutev6OpStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>> AsyncSLRoutev6OpStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>>(AsyncSLRoutev6OpStreamRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>> SLRoutev6GetStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>>(SLRoutev6GetStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>> AsyncSLRoutev6GetStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>>(AsyncSLRoutev6GetStreamRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalsGetMsgRsp>* AsyncSLRoutev6GlobalsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalStatsGetMsgRsp>* AsyncSLRoutev6GlobalStatsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegMsgRsp>* AsyncSLRoutev6VrfRegOpRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegGetMsgRsp>* AsyncSLRoutev6VrfRegGetRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVRFGetStatsMsgRsp>* AsyncSLRoutev6VrfGetStatsRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev6MsgRsp>* AsyncSLRoutev6OpRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev6GetMsgRsp>* AsyncSLRoutev6GetRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>* SLRoutev6OpStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>* AsyncSLRoutev6OpStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>* SLRoutev6GetStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>* AsyncSLRoutev6GetStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SLRoutev6GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>> AsyncSLRoutev6GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>>(AsyncSLRoutev6GlobalsGetRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev6GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>> AsyncSLRoutev6GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>>(AsyncSLRoutev6GlobalStatsGetRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev6VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::service_layer::SLVrfRegMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>> AsyncSLRoutev6VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>>(AsyncSLRoutev6VrfRegOpRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev6VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVrfRegGetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>> AsyncSLRoutev6VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>>(AsyncSLRoutev6VrfRegGetRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev6VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVRFGetStatsMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>> AsyncSLRoutev6VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>>(AsyncSLRoutev6VrfGetStatsRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev6Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::service_layer::SLRoutev6MsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6MsgRsp>> AsyncSLRoutev6Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6MsgRsp>>(AsyncSLRoutev6OpRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev6Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::service_layer::SLRoutev6GetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6GetMsgRsp>> AsyncSLRoutev6Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6GetMsgRsp>>(AsyncSLRoutev6GetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>> SLRoutev6OpStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>>(SLRoutev6OpStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>> AsyncSLRoutev6OpStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>>(AsyncSLRoutev6OpStreamRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>> SLRoutev6GetStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>>(SLRoutev6GetStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>> AsyncSLRoutev6GetStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>>(AsyncSLRoutev6GetStreamRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>* AsyncSLRoutev6GlobalsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>* AsyncSLRoutev6GlobalStatsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>* AsyncSLRoutev6VrfRegOpRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>* AsyncSLRoutev6VrfRegGetRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>* AsyncSLRoutev6VrfGetStatsRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6MsgRsp>* AsyncSLRoutev6OpRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev6Msg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev6GetMsgRsp>* AsyncSLRoutev6GetRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev6GetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>* SLRoutev6OpStreamRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6Msg, ::service_layer::SLRoutev6MsgRsp>* AsyncSLRoutev6OpStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>* SLRoutev6GetStreamRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev6GetMsg, ::service_layer::SLRoutev6GetMsgRsp>* AsyncSLRoutev6GetStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6GlobalsGet_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6GlobalStatsGet_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6VrfRegOp_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6VrfRegGet_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6VrfGetStats_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6Op_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6Get_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6OpStream_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev6GetStream_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SLRoutev6GlobalsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalsGetMsg* request, ::service_layer::SLRouteGlobalsGetMsgRsp* response);
    virtual ::grpc::Status SLRoutev6GlobalStatsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg* request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response);
    virtual ::grpc::Status SLRoutev6VrfRegOp(::grpc::ServerContext* context, const ::service_layer::SLVrfRegMsg* request, ::service_layer::SLVrfRegMsgRsp* response);
    virtual ::grpc::Status SLRoutev6VrfRegGet(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVrfRegGetMsgRsp* response);
    virtual ::grpc::Status SLRoutev6VrfGetStats(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVRFGetStatsMsgRsp* response);
    virtual ::grpc::Status SLRoutev6Op(::grpc::ServerContext* context, const ::service_layer::SLRoutev6Msg* request, ::service_layer::SLRoutev6MsgRsp* response);
    virtual ::grpc::Status SLRoutev6Get(::grpc::ServerContext* context, const ::service_layer::SLRoutev6GetMsg* request, ::service_layer::SLRoutev6GetMsgRsp* response);
    virtual ::grpc::Status SLRoutev6OpStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6MsgRsp, ::service_layer::SLRoutev6Msg>* stream);
    virtual ::grpc::Status SLRoutev6GetStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6GetMsgRsp, ::service_layer::SLRoutev6GetMsg>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6GlobalsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6GlobalsGet() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SLRoutev6GlobalsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6GlobalsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalsGetMsg* request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6GlobalsGet(::grpc::ServerContext* context, ::service_layer::SLRouteGlobalsGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRouteGlobalsGetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6GlobalStatsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6GlobalStatsGet() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SLRoutev6GlobalStatsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6GlobalStatsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg* request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6GlobalStatsGet(::grpc::ServerContext* context, ::service_layer::SLRouteGlobalStatsGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRouteGlobalStatsGetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6VrfRegOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6VrfRegOp() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_SLRoutev6VrfRegOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6VrfRegOp(::grpc::ServerContext* context, const ::service_layer::SLVrfRegMsg* request, ::service_layer::SLVrfRegMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6VrfRegOp(::grpc::ServerContext* context, ::service_layer::SLVrfRegMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLVrfRegMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6VrfRegGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6VrfRegGet() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_SLRoutev6VrfRegGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6VrfRegGet(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVrfRegGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6VrfRegGet(::grpc::ServerContext* context, ::service_layer::SLVrfRegGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLVrfRegGetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6VrfGetStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6VrfGetStats() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_SLRoutev6VrfGetStats() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6VrfGetStats(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVRFGetStatsMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6VrfGetStats(::grpc::ServerContext* context, ::service_layer::SLVrfRegGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLVRFGetStatsMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6Op : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6Op() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_SLRoutev6Op() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6Op(::grpc::ServerContext* context, const ::service_layer::SLRoutev6Msg* request, ::service_layer::SLRoutev6MsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6Op(::grpc::ServerContext* context, ::service_layer::SLRoutev6Msg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRoutev6MsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6Get() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_SLRoutev6Get() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6Get(::grpc::ServerContext* context, const ::service_layer::SLRoutev6GetMsg* request, ::service_layer::SLRoutev6GetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6Get(::grpc::ServerContext* context, ::service_layer::SLRoutev6GetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRoutev6GetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6OpStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6OpStream() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_SLRoutev6OpStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6OpStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6MsgRsp, ::service_layer::SLRoutev6Msg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6OpStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::service_layer::SLRoutev6MsgRsp, ::service_layer::SLRoutev6Msg>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(7, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev6GetStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev6GetStream() {
      ::grpc::Service::MarkMethodAsync(8);
    }
    ~WithAsyncMethod_SLRoutev6GetStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6GetStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6GetMsgRsp, ::service_layer::SLRoutev6GetMsg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev6GetStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::service_layer::SLRoutev6GetMsgRsp, ::service_layer::SLRoutev6GetMsg>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(8, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SLRoutev6GlobalsGet<WithAsyncMethod_SLRoutev6GlobalStatsGet<WithAsyncMethod_SLRoutev6VrfRegOp<WithAsyncMethod_SLRoutev6VrfRegGet<WithAsyncMethod_SLRoutev6VrfGetStats<WithAsyncMethod_SLRoutev6Op<WithAsyncMethod_SLRoutev6Get<WithAsyncMethod_SLRoutev6OpStream<WithAsyncMethod_SLRoutev6GetStream<Service > > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6GlobalsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6GlobalsGet() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SLRoutev6GlobalsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6GlobalsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalsGetMsg* request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6GlobalStatsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6GlobalStatsGet() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SLRoutev6GlobalStatsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6GlobalStatsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg* request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6VrfRegOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6VrfRegOp() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_SLRoutev6VrfRegOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6VrfRegOp(::grpc::ServerContext* context, const ::service_layer::SLVrfRegMsg* request, ::service_layer::SLVrfRegMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6VrfRegGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6VrfRegGet() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_SLRoutev6VrfRegGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6VrfRegGet(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVrfRegGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6VrfGetStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6VrfGetStats() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_SLRoutev6VrfGetStats() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6VrfGetStats(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVRFGetStatsMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6Op : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6Op() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_SLRoutev6Op() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6Op(::grpc::ServerContext* context, const ::service_layer::SLRoutev6Msg* request, ::service_layer::SLRoutev6MsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6Get() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_SLRoutev6Get() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6Get(::grpc::ServerContext* context, const ::service_layer::SLRoutev6GetMsg* request, ::service_layer::SLRoutev6GetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6OpStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6OpStream() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_SLRoutev6OpStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6OpStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6MsgRsp, ::service_layer::SLRoutev6Msg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev6GetStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev6GetStream() {
      ::grpc::Service::MarkMethodGeneric(8);
    }
    ~WithGenericMethod_SLRoutev6GetStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev6GetStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev6GetMsgRsp, ::service_layer::SLRoutev6GetMsg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace service_layer


#endif  // GRPC_sl_5froute_5fipv6_2eproto__INCLUDED