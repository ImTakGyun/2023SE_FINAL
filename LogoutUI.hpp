#pragma once
#include "BasicUI.hpp"

/*
클래스 이름 : LogoutUI
기능 : 로그아웃 boudnary 클래스
*/
class LogoutUI : public BasicUI
{
private:
public:
    LogoutUI();
    ~LogoutUI();
    void startInterface();
    void showResult(string id);
};
