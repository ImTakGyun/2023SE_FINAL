#pragma once
#include "BasicController.hpp"
#include "SearchRecruitInfoUI.hpp"
#include "RecruitInfo.hpp"

/*
클래스 이름 : SearchRecruitInfo
기능 : 채용정보 검색 controller 클래스
*/
class SearchRecruitInfo : public BasicController
{
private:
    SearchRecruitInfoUI _searchRecruitInfoUI;

public:
    SearchRecruitInfo();
    ~SearchRecruitInfo();
    void showCompanyRecruitInfo(vector<RecruitInfo *> RecuitInfo);
    void run();
};