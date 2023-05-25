#include "GetRecruitInfoListUI.hpp"

/*
    함수 이름 : GetRecruitInfoListUI::startInterface()
    기능	  : 인터페이스를 시작하고 기능명을 파일에 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void GetRecruitInfoListUI::startInterface()
{
    fprintf(_fout, "\n3.2 등록된 채용 정보 조회 \n");
}

/*
    함수 이름 : GetRecruitInfoListUI::showResult(RecruitInfoDetail recruitInfo)
    기능	  : 채용 정보의 업무, 인원수, 신청마감일을 파일에 출력함
    전달 인자 : RecruitInfoDetail recruitInfo
    반환값    : 없음
*/
void GetRecruitInfoListUI::showResult(RecruitInfoDetail recruitInfo)
{
    fprintf(_fout, "> %s %u %s\n", recruitInfo.task.c_str(), recruitInfo.numOfPersonnel, recruitInfo.deadline.c_str());
}

// 생성자, 소멸자
GetRecruitInfoListUI::GetRecruitInfoListUI() {}
GetRecruitInfoListUI::~GetRecruitInfoListUI() {}
