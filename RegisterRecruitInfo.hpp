#pragma once
#include "BasicController.hpp"
#include "RegisterRecruitInfoUI.hpp"
#include "Member.hpp"
#include "RecruitInfo.hpp"

// RegisterRecruitInfo Controller: BasicController를 상속
// CompanyMember로부터 입력받은 정보(task, numOfPersonnel, deadline)를 바탕으로 
// CompanyMember의 _ownedRecruitInfo를 업데이트.
class RegisterRecruitInfo : public BasicController
{
private:
    RegisterRecruitInfoUI _registerRecruitInfoUI;
public:
    RegisterRecruitInfo();
    ~RegisterRecruitInfo();
    void run();
    RecruitInfo* addNewRecruitInfo(RecruitInfoDetail recruitInfo);
};

