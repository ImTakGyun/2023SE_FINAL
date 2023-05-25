#include "ApplyRecruitInfo.hpp"
#include "Server.hpp"
#include "RecruitInfo.hpp"
#include "CompanyMember.hpp"

// 생성자, 소멸자
ApplyRecruitInfo::ApplyRecruitInfo() {}

ApplyRecruitInfo::~ApplyRecruitInfo() {}

/*
    함수 이름 : ApplyRecruitInfo::addNewApplyInfo(GeneralMember *member, RecruitInfoDetail recruitInfoDetail)
    기능	  : member의 createNewApplyInfo(recruitInfoDetail)를 호출하여 지원정보를 생성함
    전달 인자 : GeneralMember *member, RecruitInfoDetail recruitInfoDetail
    반환값    : 없음
*/
void ApplyRecruitInfo::addNewApplyInfo(GeneralMember *member, RecruitInfoDetail recruitInfoDetail)
{
    member->createNewApplyInfo(recruitInfoDetail);
}

/*
    함수 이름 : ApplyRecruitInfo::run()
    기능	  : 사업자번호를 읽어서 해당 채용정보에 대한 지원정보를 생성하고 상세를 출력함
    전달 인자 : 없음
    반환값    : 없음
*/
void ApplyRecruitInfo::run()
{
    // 현재 접속해있는 사용자의 정보를 받아온다.
    Server *server = Server::getInstance();
    RecruitInfoDetail recruitInfoDetail;
    GeneralMember *member = NULL;
    member = dynamic_cast<GeneralMember *>(server->getCurMember());
    vector<Member *> memberList = server->getMemberList();
    string toFindBusinessNumber;

    _applyRecruitInfoUI.startInterface();
    toFindBusinessNumber = _applyRecruitInfoUI.applyRecruit();
    for (int i = 0; i < memberList.size(); i++)
    {
        CompanyMember *companyMember = dynamic_cast<CompanyMember *>(memberList[i]);
        if (companyMember)
        {
            if (companyMember->getBusinessNumber() == toFindBusinessNumber)
            {
                companyMember->listRecruitInfo().back()->increaseApplyNum();
                recruitInfoDetail = companyMember->listRecruitInfo().back()->getRecruitInfoDetail();
                break;
            }
        }
        else
            continue;
    }
    addNewApplyInfo(member, recruitInfoDetail);
    _applyRecruitInfoUI.showResult(recruitInfoDetail);
}