#pragma once
#include "BasicUI.hpp"
#include "ApplyInfo.hpp"

/*
Ŭ���� �̸� : ShowApplyInfoListUI
��� : ���� ���� ��ȸ boundary Ŭ����
*/
class ShowApplyInfoListUI : public BasicUI
{
private:
public:
    ShowApplyInfoListUI();
    ~ShowApplyInfoListUI();
    void startInterface();
    void showResult(ApplyInfoDetail applyInfoDetail);
};