#include "Logout.hpp"
#include "Server.hpp"

// ������, �Ҹ���
Logout::Logout() {}
Logout::~Logout() {}

/*
    �Լ� �̸� : Logout::run()
    ���	  : _curMember�� NULL�� ���� �α׾ƿ� ��Ŵ
    ���� ���� : ����
    ��ȯ��    : ����
*/
void Logout::run()
{
    Server *server = Server::getInstance();
    Member *member = NULL;
    _logoutUI.startInterface();
    member = server->getCurMember();
    if (member)
    {
        _logoutUI.showResult(member->getId());
        server->setCurMember(NULL);
    }
}