#include "ShowApplyInfoList.hpp"
#include "Server.hpp"

// 생성자, 소멸자
ShowApplyInfoList::ShowApplyInfoList() {}
ShowApplyInfoList::~ShowApplyInfoList() {}

/*
    함수 이름 : comparePointers(ApplyInfo *a, ApplyInfo *b)
    기능      : 회사이름 오름차순 정렬을 위한 포인터 비교
    전달 인자 : ApplyInfo *a, ApplyInfo *b
    반환값    : bool
*/
bool comparePointers(ApplyInfo *a, ApplyInfo *b)
{
    return *a < *b;
}

/*
    함수 이름 : ShowApplyInfoList::run()
    기능      : 지원 상세 정보들의 출력을 요청함
    전달 인자 : 없음
    반환값    : 없음
*/
void ShowApplyInfoList::run()
{
    Server *server = Server::getInstance();
    GeneralMember *member = NULL;
    member = dynamic_cast<GeneralMember *>(server->getCurMember());
    vector<ApplyInfo *> applyInfoList = member->listApplyInfo();
    sort(applyInfoList.begin(), applyInfoList.end(), comparePointers);

    _showApplyInfoListUI.startInterface();
    for (int i = 0; i < applyInfoList.size(); i++)
    {
        _showApplyInfoListUI.showResult(applyInfoList[i]->getApplyInfoDetail());
    }
}
