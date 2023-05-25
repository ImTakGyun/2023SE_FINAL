#include "SearchRecruitInfoUI.hpp"

/*
    함수 이름 : SearchRecruitInfoUI::startInterface()
    기능      : 인터페이스를 시작하고 기능명을 파일에 출력함
    전달 인자 : 없음
    반환값    : 없음
*/
void SearchRecruitInfoUI::startInterface()
{
    fprintf(_fout, "\n4.1. 채용 정보 검색\n");
}

/*
    함수 이름 : SearchRecruitInfoUI::searchCompanyName()
    기능      : 회사이름을 입력받아 반환함
    전달 인자 : 없음
    반환값    : string companyName
*/
string SearchRecruitInfoUI::searchCompanyName()
{
    char companyName[MAX_STRING];

    fscanf(_fin, "%s\n", companyName);
    return (companyName);
}

/*
    함수 이름 : SearchRecruitInfoUI::showResult(RecruitInfoDetail recruitInfoDetail)
    기능      : 채용공고의 회사이름, 사업자번호, 업무, 인원수, 신청마감일 정보를 파일에 출력함
    전달 인자 : RecruitIoDetail recruitInfoDetail
    반환값    : 없음
*/
void SearchRecruitInfoUI::showResult(RecruitInfoDetail recruitInfoDetail)
{
    fprintf(_fout, "> %s %s %s %u %s\n", recruitInfoDetail.companyName.c_str(), recruitInfoDetail.businessNumber.c_str(), recruitInfoDetail.task.c_str(), recruitInfoDetail.numOfPersonnel, recruitInfoDetail.deadline.c_str());
}

// 생성자, 소멸자
SearchRecruitInfoUI::SearchRecruitInfoUI() : BasicUI() {}

SearchRecruitInfoUI::~SearchRecruitInfoUI() {}