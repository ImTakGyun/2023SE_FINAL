#pragma once
#include "BasicController.hpp"
#include "LogoutUI.hpp"
#include "Member.hpp"

/*
클래스 이름 : Logout
기능 : 로그아웃 controller 클래스
*/
class Logout : public BasicController
{
private:
    LogoutUI _logoutUI;

public:
    Logout();
    ~Logout();
    void run();
};
