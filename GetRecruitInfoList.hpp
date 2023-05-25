#pragma once
#include "BasicController.hpp"
#include "GetRecruitInfoListUI.hpp"
#include "Member.hpp"

/*
클래스 이름 : GetRecruitInfoList
기능 : 회사회원 자신이 등록한 채용 정보 조회 controller 클래스, CompanyMember의 채용 정보 리스트를 불러와 Boundary에 전달함
*/
class GetRecruitInfoList : public BasicController
{
private:
    GetRecruitInfoListUI _getRecruitInfoListUI;

public:
    GetRecruitInfoList();
    ~GetRecruitInfoList();
    void run();
};
