#include "ApplyRecruitInfoUI.hpp"

/*
    함수 이름 : ApplyRecruitInfoUI::startInterface()
    기능	  : 인터페이스를 시작하고 기능명을 파일에 출력함
    전달 인자 : 없음
    반환값    : 없음
*/
void ApplyRecruitInfoUI::startInterface()
{
    fprintf(_fout, "\n4.2. 채용지원\n");
}

/*
    함수 이름 : ApplyRecruitInfoUI::applyRecruit()
    기능	  : 사업자번호를 읽어와서 반환함
    전달 인자 : 없음
    반환값    : string businessNumber
*/
string ApplyRecruitInfoUI::applyRecruit()
{
    char businessNumber[MAX_STRING];

    fscanf(_fin, "%s\n", businessNumber);
    return (businessNumber);
}

/*
    함수 이름 : ApplyRecruitInfoUI::showResult(RecruitInfoDetail recruitInfoDetail)
    기능	  : 지원정보의 회사이름, 사업자번호, 업무를 파일에 출력함
    전달 인자 : RecruitInfoDetail recruitInfoDetail
    반환값    : 없음
*/
void ApplyRecruitInfoUI::showResult(RecruitInfoDetail recruitInfoDetail)
{
    fprintf(_fout, "> %s %s %s\n", recruitInfoDetail.companyName.c_str(), recruitInfoDetail.businessNumber.c_str(), recruitInfoDetail.task.c_str());
}

// 생성자, 소멸자
ApplyRecruitInfoUI::ApplyRecruitInfoUI() : BasicUI() {}

ApplyRecruitInfoUI::~ApplyRecruitInfoUI() {}