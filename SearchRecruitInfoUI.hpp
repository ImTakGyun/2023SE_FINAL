#pragma once
#include "BasicUI.hpp"
#include "App.hpp"

/*
클래스 이름 : SearchRecruitInfoUI
기능 : 채용정보 검색 boundary 클래스
*/
class SearchRecruitInfoUI : public BasicUI
{
private:
public:
    SearchRecruitInfoUI();
    ~SearchRecruitInfoUI();
    void startInterface();
    string searchCompanyName();
    void showResult(RecruitInfoDetail recruitInfoDetail);
};