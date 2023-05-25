#include "CancelApplyUI.hpp"

/*
    함수 이름 : CancelApplyUI::startInterface()
    기능	  : 인터페이스를 시작하고 기능명을 파일에 출력
    전달 인자 : 없음
    반환값    : 없음
*/
void CancelApplyUI::startInterface()
{
    fprintf(_fout, "\n4.4. 지원취소\n");
}

/*
    함수 이름 : CancelApplyUI::cancelApply()
    기능	  : businessNumber를 읽어서 반환함
    전달 인자 : 없음
    반환값    : string businessNumber
*/
string CancelApplyUI::cancelApply()
{
    // 사업자번호를 읽어온다.
    char businessNumber[MAX_STRING];

    fscanf(_fin, "%s\n", businessNumber);
    return (string(businessNumber));
}

/*
    함수 이름 : CancelApplyUI::showResult(ApplyInfoDetail applyInfoDetail)
    기능	  : 삭제한 지원정보의 회사이름, 사업자번호, 업무를 파일에 출력함
    전달 인자 : ApplyInfoDetail applyInfoDetail
    반환값    : 없음
*/
void CancelApplyUI::showResult(ApplyInfoDetail applyInfoDetail)
{
    fprintf(_fout, "> %s %s %s\n", applyInfoDetail.companyName.c_str(), applyInfoDetail.businessNumber.c_str(), applyInfoDetail.task.c_str());
}

// 생성자, 소멸자
CancelApplyUI::CancelApplyUI() : BasicUI() {}

CancelApplyUI::~CancelApplyUI() {}
