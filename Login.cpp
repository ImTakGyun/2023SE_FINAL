#include "Login.hpp"
#include "Server.hpp"

// 생성자, 소멸자
Login::Login() {}

Login::~Login() {}

/*
    함수 이름 : Login::checkValidation(LoginForm loginForm)
    기능	  : 전달 받은 loginForm으로 로그인을 시도하고 Server class에 있는 memberList를 순회하며 id와 pw가 동일한 member가 있다면 해당 member의 포인터를 반환함
    전달 인자 : LoginForm loginForm
    반환값    : Member* member
*/
Member *Login::checkValidation(LoginForm loginForm)
{
    Server *server = Server::getInstance();
    Member *member = NULL;
    vector<Member *> memberList = server->getMemberList();

    for (int i = 0; i < memberList.size(); i++)
    {
        if (loginForm.id == memberList[i]->getId() && loginForm.pw == memberList[i]->getPw())
        {
            member = memberList[i];
            break;
        }
    }
    server->setCurMember(member);
    return (member);
}

/*
    함수 이름 : Login::run()
    기능	  : chekValidation으로 입력받은 member를 찾고, 해당 member를 서버의 curMember로 넣어줌
    전달 인자 : 없음
    반환값    : 없음
*/
void Login::run()
{
    Server *server = Server::getInstance();
    Member *member = NULL;

    _loginUI.startInterface();
    member = checkValidation(_loginUI.requestLogIn());
    if (!member)
    {
        cout << "로그인 실패 " << endl;
        return;
    }
    server->setCurMember(member);
    _loginUI.showResult(member);
}