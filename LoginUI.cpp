#include "LoginUI.hpp"

// 생성자, 소멸자
LoginUI::LoginUI() {}

LoginUI::~LoginUI() {}

/*
    함수 이름 : LoginUI::startInterface()
    기능	  : 인터페이스를 시작하고 기능명을 파일에 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void LoginUI::startInterface()
{
    fprintf(_fout, "\n2.1. 로그인\n");
}

/*
    함수 이름 : LoginUI::requestLogin()
    기능	  : id 와 pw 를 입력받아 loginForm 구조체를 만들어 반환하여 해당 Form 으로 login 을 요청함
    전달 인자 : 없음
    반환값    : LoginForm loginForm
*/
LoginForm LoginUI::requestLogIn()
{
    char id[MAX_STRING];
    char pw[MAX_STRING];

    fscanf(_fin, "%s %s\n", id, pw);
    LoginForm loginForm{string(id), string(pw)};
    return (loginForm);
}

/*
    함수 이름 : LoginUI::showResult(Member *member)
    기능	  : 로그인 요청한 member의 id, pw를 파일에 출력
    전달 인자 : Member* member
    반환값    : 없음
*/
void LoginUI::showResult(Member *member)
{
    fprintf(_fout, "> %s %s\n", member->getId().c_str(), member->getPw().c_str());
}
