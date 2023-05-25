#pragma once
#include "BasicController.hpp"
#include "WithdrawlMemberUI.hpp"
#include "Member.hpp"
class WithdrawlMember : public BasicController
{
private:
    WithdrawlMemberUI    _withdrawlMemberUI;
public:
    WithdrawlMember();
    ~WithdrawlMember();
    void    run();
    string  deleteMember(Member* member);
};