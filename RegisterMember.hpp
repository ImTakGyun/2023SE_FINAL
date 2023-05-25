#pragma once
#include "App.hpp"
#include "Member.hpp"
#include "RegisterMemberUI.hpp"
#include "BasicController.hpp"

// 회원가입 controller
class RegisterMember : public BasicController
{
private:
    RegisterMemberUI    _registerMemberUI;
public:
    Member* createNewMember(RegisterForm registerForm);
    void    run();
    RegisterMember();
    ~RegisterMember();

};

