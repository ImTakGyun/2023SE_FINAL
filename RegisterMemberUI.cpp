#include "RegisterMember.hpp"
#include "GeneralMember.hpp"
#include "CompanyMember.hpp"
void    RegisterMemberUI::startInterface()
{
    fprintf(_fout, "\n1.1. 회원가입\n");
}

// 사용자의 입력을 받고 registerForm 을 만들어 controller 에 전달한다. 
RegisterForm    RegisterMemberUI::enterRegisterInfo()
{
    int     type = 0;
    char    name[MAX_STRING];
    char    number[MAX_STRING];
    char    id[MAX_STRING];
    char    pw[MAX_STRING];
    
    fscanf(_fin, "%d %s %s %s %s \n", &type, name, number, id, pw);
    RegisterForm registerForm = {type, string(name), string(number), string(id), string(pw)};
    return (registerForm);
}
void            RegisterMemberUI::showResult(Member *member)
{
    RegisterForm registerForm;

    if (dynamic_cast<CompanyMember*>(member))
        registerForm = dynamic_cast<CompanyMember*>(member)->getMemberDetail();
    else if (dynamic_cast<GeneralMember*>(member))
        registerForm = dynamic_cast<GeneralMember*>(member)->getMemberDetail();
    fprintf(_fout, "> %d %s %s %s %s\n", registerForm.type, registerForm.name.c_str(), registerForm.number.c_str(), registerForm.id.c_str(), registerForm.pw.c_str());
}

RegisterMemberUI::RegisterMemberUI() : BasicUI() {}

RegisterMemberUI::~RegisterMemberUI(){}