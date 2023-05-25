#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "ShowApplyInfoListUI.hpp"

/*
클래스 이름 : ShowApplyInfoList
기능 : 지원정보 조회 controller 클래스
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
