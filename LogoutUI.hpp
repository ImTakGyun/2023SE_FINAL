#pragma once
#include "BasicUI.hpp"

/*
Ŭ���� �̸� : LogoutUI
��� : �α׾ƿ� boudnary Ŭ����
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
