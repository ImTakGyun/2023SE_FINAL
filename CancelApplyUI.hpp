#pragma once
#include "BasicUI.hpp"

/*
클래스 이름 : CancelApplyUI
기능 : 지원 취소 boundary 클래스
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