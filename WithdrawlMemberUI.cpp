#include "WithdrawlMemberUI.hpp"


WithdrawlMemberUI::WithdrawlMemberUI() {}

WithdrawlMemberUI::~WithdrawlMemberUI() {}

void   WithdrawlMemberUI::startInterface()
{
    fprintf(_fout, "\n1.2. 회원탈퇴\n");
}

void WithdrawlMemberUI::showResult(string id)
{
    fprintf(_fout, "> %s\n", id.c_str());
}
