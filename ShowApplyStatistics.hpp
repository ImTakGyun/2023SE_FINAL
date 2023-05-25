#pragma once
#include "BasicController.hpp"
#include "ShowApplyStatisticsUI.hpp"
#include "GeneralMember.hpp"
#include "CompanyMember.hpp"

class ShowApplyStatistics : public BasicController
{
private:
    ShowApplyStatisticsUI               _showApplyStatisticsUI;
    vector<pair<string, unsigned int>>  getGeneralMemberStatistics(GeneralMember* member);
    vector<pair<string, unsigned int>>  getCompanyMemberStatistics(CompanyMember* member);
public:
    ShowApplyStatistics();
    ~ShowApplyStatistics();
    void    run();
};