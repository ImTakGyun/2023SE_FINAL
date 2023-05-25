#pragma once
#include "BasicUI.hpp"

class RegisterMemberUI : public BasicUI
{
private:
public: 
    void            startInterface();
    void            showResult(Member* member);
    RegisterForm    enterRegisterInfo();
    RegisterMemberUI();
    ~RegisterMemberUI();
};
