#include "ShowApplyInfoList.hpp"
#include "Server.hpp"

ShowApplyInfoList::ShowApplyInfoList(){}

bool comparePointers(ApplyInfo* a, ApplyInfo* b) {
    return *a < *b;
}

void ShowApplyInfoList::run()
{
    Server* server = Server::getInstance();
    GeneralMember* member = NULL;
    member = dynamic_cast<GeneralMember*>(server->getCurMember());
    vector<ApplyInfo*> applyInfoList =  member->listApplyInfo();
    sort(applyInfoList.begin(), applyInfoList.end(), comparePointers);

    _showApplyInfoListUI.startInterface();
    for (int i = 0; i < applyInfoList.size(); i++)
    {
        _showApplyInfoListUI.showResult(applyInfoList[i]->getApplyInfoDetail());
    }
}

ShowApplyInfoList::~ShowApplyInfoList(){}