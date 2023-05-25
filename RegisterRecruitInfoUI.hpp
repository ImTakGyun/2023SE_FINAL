#pragma once
#include "BasicUI.hpp"

/*
클래스 이름 : RegisterRecruitInfoUI
기능 : 채용정보 등록 boundary 클래스로 CompanyMember에게 정보를 입력받아 new RecruitInfo를 생성 및 저장함
*/
class RegisterRecruitInfoUI : public BasicUI
{
private:
public:
    RegisterRecruitInfoUI();
    ~RegisterRecruitInfoUI();
    RecruitInfoDetail registerNewRecruit();
    void startInterface();
    void showResult(RecruitInfoDetail recruitInfo);
};
