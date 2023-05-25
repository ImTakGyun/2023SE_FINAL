#pragma once
#include "BasicUI.hpp"
#include "App.hpp"

/*
클래스 이름 : ApplyRecruitInfoUI
기능 : 지원하기 boundary 클래스
*/
class ApplyRecruitInfoUI : public BasicUI
{
private:
public:
    ApplyRecruitInfoUI();
    ~ApplyRecruitInfoUI();
    void startInterface();
    string applyRecruit();
    void showResult(RecruitInfoDetail recruitInfoDetail);
};