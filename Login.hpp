#pragma once
#include "BasicController.hpp"
#include "LoginUI.hpp"
#include "Member.hpp"

/*
클래스 이름 : Login
기능 : 로그인 controller 클래스
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
