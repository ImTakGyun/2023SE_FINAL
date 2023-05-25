#include "SearchRecruitInfo.hpp"
#include "Server.hpp"
#include "RecruitInfo.hpp"
#include "CompanyMember.hpp"

// 생성자, 소멸자
SearchRecruitInfo::SearchRecruitInfo() {}

SearchRecruitInfo::~SearchRecruitInfo() {}

/*
    함수 이름  : SearchRecruitInfo::showCompanyRecruitInfo
    기능      : 회사의 모든 채용정보를 출력 요청함
    전달 인자 : vector<RecruitInfo *> RecruitInfos
    반환값    : 없음
*/
void SearchRecruitInfo::showCompanyRecruitInfo(vector<RecruitInfo *> RecruitInfos)
{
    RecruitInfoDetail recruitInfoDetail;

    for (int i = RecruitInfos.size() - 1; i >= 0; i--)
    {
        recruitInfoDetail = RecruitInfos[i]->getRecruitInfoDetail();
        _searchRecruitInfoUI.showResult(recruitInfoDetail);
    }
}

/*
    함수 이름  : SearchRecruitInfo::run()
    기능      : 입력받은 회사의 모든 채용정보를 검색함
    전달 인자 : 없음
    반환값    : 없음
*/
void SearchRecruitInfo::run()
{
    // 현재 접속해있는 사용자의 정보를 받아온다.
    Server *server = Server::getInstance();
    vector<Member *> memberList = server->getMemberList();
    string companyName;

    _searchRecruitInfoUI.startInterface();
    companyName = _searchRecruitInfoUI.searchCompanyName();
    for (int i = 0; i < memberList.size(); i++)
    {
        CompanyMember *companyMember = dynamic_cast<CompanyMember *>(memberList[i]);
        if (companyMember)
        {
            if (companyMember->getCompanyName() == companyName)
            {
                showCompanyRecruitInfo(companyMember->listRecruitInfo());
                break;
            }
        }
        else
            continue;
    }
}