#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "ApplyRecruitInfoUI.hpp"

/*
클래스 이름 : ApplyRecruitInfo
기능 : 채용 지원 controller 클래스
*/

class ApplyRecruitInfo : public BasicController
{
private:
    ApplyRecruitInfoUI _applyRecruitInfoUI;
public:
    ApplyRecruitInfo();
    ~ApplyRecruitInfo();
    void    addNewApplyInfo(GeneralMember* member, RecruitInfoDetail recruitInfoDetail);
    void    run();
};