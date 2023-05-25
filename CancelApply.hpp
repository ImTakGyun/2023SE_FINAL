#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "CancelApplyUI.hpp"

/*
클래스 이름 : CancelApply
기능 : 지원 취소 controller 클래스
*/
class CancelApply : public BasicController
{
private:
    CancelApplyUI _cancelApplyUI;

public:
    ApplyInfoDetail cancelApplyInfo(GeneralMember *member, string businessNumber);
    // 채용 정보의 지원자 수를 줄여주는 함수
    void decreaseApplyNum(string businessNumber);
    CancelApply();
    ~CancelApply();
    void run();
};