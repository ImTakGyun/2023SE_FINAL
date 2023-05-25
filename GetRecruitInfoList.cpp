#include "GetRecruitInfoList.hpp"
#include "RecruitInfo.hpp"
#include "GeneralMember.hpp"
#include "CompanyMember.hpp"
#include "Server.hpp"

/*
    함수 이름 : comparePointers(RecruitInfo *a, RecruitInfo *b)
    기능	  : 회사이름 오름차순 정렬을 위한 포인터 비교
    전달 인자 : RecruitInfo *a, RecruitInfo *b
    반환값    : bool
*/
bool comparePointers(RecruitInfo *a, RecruitInfo *b)
{
    return *a < *b;
}

/*
    함수 이름 : GetRecruitInfoList::run()
    기능	  : CompanyMember의 _ownedRecruitInfo를 불러와 차례대로 순회하며 showResult를 호출함
    전달 인자 : 없음
    반환값    : 없음
*/
void GetRecruitInfoList::run()
{
    Server *server = Server::getInstance();
    CompanyMember *member = dynamic_cast<CompanyMember *>(server->getCurMember());
    _getRecruitInfoListUI.startInterface();
    vector<RecruitInfo *> info = member->listRecruitInfo();
    sort(info.begin(), info.end(), comparePointers);

    for (int i = 0; i < info.size(); i++)
    {
        _getRecruitInfoListUI.showResult(info[i]->getRecruitInfoDetail());
    }
}

// 생성자, 소멸자
GetRecruitInfoList::GetRecruitInfoList() {}
GetRecruitInfoList::~GetRecruitInfoList() {}
