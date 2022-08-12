#include "UserService.pb.h"
#include <rpc/RpcChannel.hpp>
#include <rpc/RpcApplication.hpp>
#include <google/protobuf/service.h>
#include <google/protobuf/empty.pb.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    // 整个程序启动以后，想要使用mprpc框架来享受rpc服务调用，一定需要先调用框架的初始化函数（只初始化一次）
    RpcApplication::init(argc, argv);
    // 调用远程发布方法的rpc方法Login
    ik_UserService::UserServiceRpc_Stub stub(new RpcChannel);
    // rpc方法的请求的参数
    ik_UserService::LoginRequest request;
    request.set_id(1);
    request.set_password("123456");
    // rpc方法的响应
    ik_UserService::LoginReponse response;
    // 发起rpc方法的调用 同步的rpc调用过程 mrrpcChannel::callMethod
    stub.Login(nullptr, &request, &response, nullptr);
}