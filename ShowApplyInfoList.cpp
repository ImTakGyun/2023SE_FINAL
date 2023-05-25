#include "ShowApplyInfoList.hpp"
#include "Server.hpp"

// ������, �Ҹ���
ShowApplyInfoList::ShowApplyInfoList() {}
ShowApplyInfoList::~ShowApplyInfoList() {}

/*
    �Լ� �̸� : comparePointers(ApplyInfo *a, ApplyInfo *b)
    ���      : ȸ���̸� �������� ������ ���� ������ ��
    ���� ���� : ApplyInfo *a, ApplyInfo *b
    ��ȯ��    : bool
*/
bool comparePointers(ApplyInfo *a, ApplyInfo *b)
{
    return *a < *b;
}

/*
    �Լ� �̸� : ShowApplyInfoList::run()
    ���      : ���� �� �������� ����� ��û��
    ���� ���� : ����
    ��ȯ��    : ����
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
