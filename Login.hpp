#pragma once
#include "BasicController.hpp"
#include "LoginUI.hpp"
#include "Member.hpp"

/*
Ŭ���� �̸� : Login
��� : �α��� controller Ŭ����
*/
class Login : public BasicController
{
private:
    LoginUI _loginUI;

public:
    Login();
    ~Login();
    void run();
    Member *checkValidation(LoginForm loginForm);
};
