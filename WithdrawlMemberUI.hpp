#pragma once
#include "BasicUI.hpp"
#include "Member.hpp"

class WithdrawlMemberUI : public BasicUI
{
private:
public:
    WithdrawlMemberUI();
    ~WithdrawlMemberUI();
    void    startInterface();
    void    withdrawl();
    void    showResult(string id);
};