#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "ShowApplyInfoListUI.hpp"

/*
Ŭ���� �̸� : ShowApplyInfoList
��� : �������� ��ȸ controller Ŭ����
*/
class ShowApplyInfoList : public BasicController
{
private:
    ShowApplyInfoListUI _showApplyInfoListUI;

public:
    ShowApplyInfoList();
    ~ShowApplyInfoList();
    void run();
};
