#include "ShowApplyStatisticsUI.hpp"


ShowApplyStatisticsUI::ShowApplyStatisticsUI(){}

ShowApplyStatisticsUI::~ShowApplyStatisticsUI() {}

void   ShowApplyStatisticsUI::startInterface()
{
    fprintf(_fout, "\n5.1. 지원 정보 통계\n");
}

void ShowApplyStatisticsUI::showResult(StatisticsDetail statisticsDetail)
{
    fprintf(_fout, "> %s %u\n", statisticsDetail.task.c_str(), statisticsDetail.count);
}
