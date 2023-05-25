#pragma once
#include "BasicUI.hpp"
#include "Member.hpp"

/*
클래스 이름 : LoginUI
기능 : 로그인 boudnary 클래스
*/
class LoginUI : public BasicUI
{
private:
public:
    LoginUI();
    ~LoginUI();
    void startInterface();
    LoginForm requestLogIn();
    void showResult(Member *member);
};
