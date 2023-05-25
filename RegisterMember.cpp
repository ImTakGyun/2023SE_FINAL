#include "RegisterMember.hpp"
#include "GeneralMember.hpp"
#include "CompanyMember.hpp"
#include "Server.hpp"

// 전달받은 registerForm 을 바탕으로 member 를 생성한다. 
Member* RegisterMember::createNewMember(RegisterForm registerForm)
{
    Server* server = Server::getInstance();
    Member* member = NULL;

    if (registerForm.type == COMPANY_MEMBER_TYPE)
        member = new CompanyMember(registerForm.name, registerForm.number, registerForm.id, registerForm.pw);
    else if (registerForm.type == GENERAL_MEMBER_TYPE)
        member = new GeneralMember(registerForm.name, registerForm.number, registerForm.id, registerForm.pw);
    server->registerMember(member);
    return (member);
}

RegisterMember::RegisterMember(){}

// server class 에 있는 memberList 에 멤버를 생성하여 넣어준다. 
void RegisterMember::run()
{
    Member* member = NULL;
    _registerMemberUI.startInterface();
    member = createNewMember(_registerMemberUI.enterRegisterInfo());
    _registerMemberUI.showResult(member);
}

RegisterMember::~RegisterMember(){}
