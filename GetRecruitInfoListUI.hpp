#pragma once
#include "BasicUI.hpp"

/*
클래스 이름 : GetRecruitInfoListUI
기능 : 회사회원 자신이 등록한 채용 정보 조회 boundary 클래스
*/
class GetRecruitInfoListUI : public BasicUI
{
private:
public:
    GetRecruitInfoListUI();
    ~GetRecruitInfoListUI();
    void startInterface();
    void showResult(RecruitInfoDetail recruitInfo);
};
