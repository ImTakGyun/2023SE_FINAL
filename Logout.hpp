#pragma once
#include "BasicController.hpp"
#include "LogoutUI.hpp"
#include "Member.hpp"

/*
Ŭ���� �̸� : Logout
��� : �α׾ƿ� controller Ŭ����
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
