#include "UserService.hpp"
#include <iostream>
#include <memory>
using namespace std;

#define BUFF_SIZE 256

UserService::UserService() : stub_(new RpcChannel), master_("/UserService")
{
    master_.start();
}
/*
当一个业务请求通过 抽象节点 UserService分发到UserServer上的时候，
它会先去反序列化请求，得到这个数据是请求哪个服务，
然后根据请求类型，先去数据库连接池获得一个连接，然后去选择相应服务，并返回相应结果。

框架给业务上报了请求参数LoginRequest，应用获取相应数据做本地业务
std::string name = request->name();
std::string pwd = request->pwd();

做本地业务
bool login_result = Login(name, pwd); 

把响应写入  包括错误码、错误消息、返回值
fixbug::ResultCode *code = response->mutable_result();
code->set_errcode(0);
code->set_errmsg("");
response->set_sucess(login_result);

执行回调操作   执行响应对象数据的序列化和网络发送（都是由框架来完成的）
done->Run();
*/
//重写基类方法
void UserService::Login(::google::protobuf::RpcController *controller,
                        const ::ik_UserService::LoginRequest *request,
                        ::ik_UserService::LoginReponse *response,
                        ::google::protobuf::Closure *done)
{
    master_.get_follow();
    ik_UserServer::Request login_request;
    login_request.set_type("Login");
    login_request.set_request(request->SerializeAsString()); //对象数据序列化

    string send_str = login_request.SerializeAsString();
    //获取一个服务信息
    int client_fd;
    while ((client_fd = master_.get_service()) == -1)
    {
        //刷新服务列表
        master_.get_follow();
        sleep(1);
    }

    //发送信息  获取server的login执行状态
    send(client_fd, send_str.c_str(), send_str.size(), 0);

    //获取信息  然后将server的执行状态作为给客户端的返回
    char recv_buf[BUFF_SIZE] = {0};
    recv(client_fd, recv_buf, BUFF_SIZE, 0);
    ik_UserServer::LoginReponse login_response;
    login_response.ParseFromString(recv_buf); //反序列化
    response->set_is_success(login_response.is_success());

    close(client_fd);
    done->Run();
}
void UserService::Registe(::google::protobuf::RpcController *controller,
                          const ::ik_UserService::RegisterRequest *request,
                          ::ik_UserService::RegisterResponse *response,
                          ::google::protobuf::Closure *done)
{
    master_.get_follow();
    ik_UserServer::Request register_request;
    register_request.set_type("Register");
    register_request.set_request(request->SerializeAsString());

    string send_str = register_request.SerializeAsString();
    //获取一个服务信息
    int client_fd;
    while ((client_fd = master_.get_service()) == -1)
    {
        //刷新服务列表
        master_.get_follow();
        sleep(1);
    }

    //发送信息
    send(client_fd, send_str.c_str(), send_str.size(), 0);

    //获取信息 
    char recv_buf[BUFF_SIZE] = {0};
    recv(client_fd, recv_buf, BUFF_SIZE, 0);
    ik_UserServer::RegisterResponse register_response;

    register_response.ParseFromString(recv_buf);
    response->set_id(register_response.id());
    response->set_is_success(register_response.is_success());

    close(client_fd);
    //执行回调操作 执行响应对象数据的序列化和网络发送（都是由框架来完成的）
    done->Run(); 
}
void UserService::LoginOut(::google::protobuf::RpcController *controller,
                           const ::ik_UserService::LoginOutRequest *request,
                           ::google::protobuf::Empty *response,
                           ::google::protobuf::Closure *done)
{
    master_.get_follow();
    ik_UserServer::Request loginout_request;
    loginout_request.set_type("LoginOut");
    loginout_request.set_request(request->SerializeAsString());

    string send_str = loginout_request.SerializeAsString();
    //获取一个服务信息
    int client_fd;
    while ((client_fd = master_.get_service()) == -1)
    {
        //刷新服务列表
        master_.get_follow();
        sleep(1);
    }

    //发送信息
    send(client_fd, send_str.c_str(), send_str.size(), 0);

    close(client_fd);
    done->Run();
}