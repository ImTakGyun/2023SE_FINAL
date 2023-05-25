#include "ShowApplyStatistics.hpp"
#include "Server.hpp"

ShowApplyStatistics::ShowApplyStatistics() {}
ShowApplyStatistics::~ShowApplyStatistics() {}

vector<pair<string, unsigned int>> ShowApplyStatistics::getGeneralMemberStatistics(GeneralMember* member)
{
    vector<ApplyInfo*> applyInfolist = member->listApplyInfo();
    vector<pair<string, unsigned int>> statisticList;
    for (auto list : applyInfolist)
    {
        // 처음에는 업무 통계 정보가 하나도 없다.
        if (statisticList.size() == 0)
            statisticList.push_back(make_pair(list->getApplyInfoDetail().task, 0));
        for (int i = 0; i < statisticList.size(); i++)
        {
            // 해당 업무정보에 대한 통계가 이미 있다면
            if (list->getApplyInfoDetail().task == statisticList[i].first)
            {
                // 통계 1 증가
                statisticList[i].second++;
                break;
            }
            else if (i == statisticList.size() - 1)
            // 없다면 만들어준다.
                statisticList.push_back(make_pair(list->getApplyInfoDetail().task, 0));
        }
    }
    return (statisticList);
}

vector<pair<string, unsigned int>> ShowApplyStatistics::getCompanyMemberStatistics(CompanyMember* member)
{
    vector<RecruitInfo*> recruitInfolist = member->listRecruitInfo();
    vector<pair<string, unsigned int>> statisticList;
    for (auto list : recruitInfolist)
    {
        // 처음에는 업무 통계 정보가 하나도 없다.
        if (statisticList.size() == 0)
            statisticList.push_back(make_pair(list->getRecruitInfoDetail().task, 0));
        for (int i = 0; i < statisticList.size(); i++)
        {
            // 해당 업무정보에 대한 통계가 이미 있다면
            if (list->getRecruitInfoDetail().task == statisticList[i].first)
            {
                // 통계 지원자 수만큼 증가
                statisticList[i].second += list->getNumOfApplicants();
                break;
            }
            else if (i == statisticList.size() - 1)
            // 없다면 만들어준다.
                statisticList.push_back(make_pair(list->getRecruitInfoDetail().task, 0));
        }
    }
    return (statisticList);
}

void ShowApplyStatistics::run()
{
    Server* server = Server::getInstance();
    _showApplyStatisticsUI.startInterface();

    Member* member = NULL;
    member = server->getCurMember();
    GeneralMember* generalMember = dynamic_cast<GeneralMember*> (member);
    CompanyMember* companyMember = dynamic_cast<CompanyMember*> (member);
    vector<pair<string, unsigned int>> result;
    StatisticsDetail statisticsDetail;
    if (generalMember)
    {
        result = getGeneralMemberStatistics(generalMember);
        for (int i = 0; i < result.size(); i++)
        {
            statisticsDetail.task = result[i].first;
            statisticsDetail.count = result[i].second;
            _showApplyStatisticsUI.showResult(statisticsDetail);
        }
        
    }
    else if (companyMember)
    {
        result = getCompanyMemberStatistics(companyMember);
        for (int i = 0; i < result.size(); i++)
        {
            statisticsDetail.task = result[i].first;
            statisticsDetail.count = result[i].second;
            _showApplyStatisticsUI.showResult(statisticsDetail);
        }
    }
}