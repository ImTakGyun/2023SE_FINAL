#include "ShowApplyInfoListUI.hpp"
#include "ApplyInfo.hpp"
#include "App.hpp"

// 생성자, 소멸자
ShowApplyInfoListUI::ShowApplyInfoListUI() {}

ShowApplyInfoListUI::~ShowApplyInfoListUI() {}

/*
    함수 이름 : ShowApplyInfoListUI::startInterface()
    기능      : 인터페이스를 시작하고 기능명을 파일에 출력함
    전달 인자 : 없음
    반환값    : 없음
*/
void ShowApplyInfoListUI::startInterface()
{
    fprintf(_fout, "\n4.3. 지원 정보 조회\n");
}

/*
    함수 이름 : ShowApplyInfoListUI::showResult(ApplyInfoDetail applyInfoDetail)
    기능      : 지원정보의 회사이름, 사업자번호, 업무, 인원수, 신청마감일 정보를 파일에 출력함
    전달 인자 : ApplyInfoDetail -> 지원 상세 정보
    반환값    : 없음
*/
void ShowApplyInfoListUI::showResult(ApplyInfoDetail applyInfoDetail)
{
    fprintf(_fout, "> %s %s %s %u %s \n", applyInfoDetail.companyName.c_str(), applyInfoDetail.businessNumber.c_str(), applyInfoDetail.task.c_str(), applyInfoDetail.numOfPersonnel, applyInfoDetail.deadline.c_str());
}