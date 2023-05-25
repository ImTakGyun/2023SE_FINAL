#include "CancelApply.hpp"
#include "Server.hpp"

/*
    함수 이름 : CancelApply::cancelApplyInfo(GeneralMember *member, string businessNumber)
    기능	  : 사업자번호와 일치하는 지원을 취소함
    전달 인자 : GeneralMember *member, string businessNumber
    반환값    : ApplyInfoDetail applyInfoDetail
*/
ApplyInfoDetail CancelApply::cancelApplyInfo(GeneralMember *member, string businessNumber)
{
    ApplyInfoDetail applyInfoDetail = member->cancelApplyInfo(businessNumber);
    decreaseApplyNum(businessNumber);
    return applyInfoDetail;
}

/*
    함수 이름 : CancelApply::decreaseApplyNum(string businessNumber)
    기능	  : 사업자번호로 찾은 회사회원의 채용공고의 지원자수를 감소시킴
    전달 인자 : string businessNumber
    반환값    : 없음
*/
void CancelApply::decreaseApplyNum(string businessNumber)
{
    Server *server = Server::getInstance();
    vector<Member *> memberList = server->getMemberList();
    CompanyMember *companyMember;
    for (int i = 0; i < memberList.size(); i++)
    {
        companyMember = dynamic_cast<CompanyMember *>(memberList[i]);
        if (companyMember)
        {
            if (companyMember->getBusinessNumber() == businessNumber)
            {
                companyMember->decreaseApplyNum();
                break;
            }
        }
        else
            continue;
    }
}

// 생성자, 소멸자
CancelApply::CancelApply() {}
CancelApply::~CancelApply() {}

/*
    함수 이름 : CancelApply::run()
    기능	  : 접속중인 일반회원의 지원정보 중에 사업자번호에 해당하는 지원을 취소하고 상세 정보를 전달한다.
    전달 인자 : 없음
    반환값    : 없음
*/
void CancelApply::run()
{
    Server *server = Server::getInstance();
    GeneralMember *member = NULL;

    member = dynamic_cast<GeneralMember *>(server->getCurMember());
    _cancelApplyUI.startInterface();

    // 지원 취소한 지원정보의 상세 정보를 받아온다..
    ApplyInfoDetail applyInfoDetail = cancelApplyInfo(member, _cancelApplyUI.cancelApply());

    _cancelApplyUI.showResult(applyInfoDetail);
}
