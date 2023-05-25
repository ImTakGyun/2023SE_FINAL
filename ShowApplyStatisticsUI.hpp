// 작성#pragma once
#include "BasicUI.hpp"
#include "ApplyInfo.hpp"
#include "RecruitInfo.hpp"


class ShowApplyStatisticsUI : public BasicUI
{
private:
public:
    ShowApplyStatisticsUI();
    ~ShowApplyStatisticsUI();
    void    startInterface();
    void    showResult(StatisticsDetail statisticsDetail);
};