#include "WithdrawlMember.hpp"
#include "Server.hpp"

WithdrawlMember::WithdrawlMember() {}
WithdrawlMember::~WithdrawlMember() {}

string WithdrawlMember::deleteMember(Member* member)
{
    Server* server = Server::getInstance();
    return (server->withdrawlMember(member));
}


void WithdrawlMember::run()
{
    Server* server = Server::getInstance();
    _withdrawlMemberUI.startInterface();

    Member* member = NULL;
    member = server->getCurMember();
    _withdrawlMemberUI.showResult(deleteMember(member));
}