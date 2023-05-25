#include "Logout.hpp"
#include "Server.hpp"

// 생성자, 소멸자
Logout::Logout() {}
Logout::~Logout() {}

/*
    함수 이름 : Logout::run()
    기능	  : _curMember를 NULL로 만들어서 로그아웃 시킴
    전달 인자 : 없음
    반환값    : 없음
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