#pragma once
#include "BasicUI.hpp"
#include "ApplyInfo.hpp"

/*
클래스 이름 : ShowApplyInfoListUI
기능 : 지원 정보 조회 boundary 클래스
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