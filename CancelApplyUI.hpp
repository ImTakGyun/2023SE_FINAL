#pragma once
#include "BasicUI.hpp"

/*
Ŭ���� �̸� : CancelApplyUI
��� : ���� ��� boundary Ŭ����
*/
class CancelApplyUI : public BasicUI
{
private:
public:
    CancelApplyUI();
    ~CancelApplyUI();
    void startInterface();
    string cancelApply();
    void showResult(ApplyInfoDetail applyInfoDetail);
};