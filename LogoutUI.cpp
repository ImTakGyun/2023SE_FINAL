#include "LogoutUI.hpp"

// 생성자, 소멸자
LogoutUI::LogoutUI() {}

LogoutUI::~LogoutUI() {}

/*
    함수 이름 : LogoutUI::startInterface()
    기능	  : 인터페이스를 시작하고 기능명을 파일에 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void LogoutUI::startInterface()
{
    fprintf(_fout, "\n2.2. 로그아웃\n");
}

/*
    함수 이름 : LogoutUI::showResult(string id)
    기능	  : 로그아웃 요청한 member의 id를 파일에 출력
    전달 인자 : string id
    반환값    : 없음
*/
void LogoutUI::showResult(string id)
{
    fprintf(_fout, "> %s\n", id.c_str());
}
