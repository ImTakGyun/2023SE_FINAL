#include "RegisterRecruitInfoUI.hpp"
#include "App.hpp"
#include "CompanyMember.hpp"
#include "Server.hpp"

/*
    함수 이름 : RegisterRecruitInfoUI::startInterface()
    기능      : 인터페이스를 시작하고 기능명을 파일에 출력함
    전달 인자 : 없음
    반환값    : 없음
*/
void RegisterRecruitInfoUI::startInterface()
{
    fprintf(_fout, "\n3.1. 채용 정보 등록 \n");
}

/*
    함수 이름 : RegisterRecruitInfoUI::registerNewRecruit()
    기능      : ComapanyMember에게 정보를 입력받아 controller에 전달함
    전달 인자 : 없음
    반환값    : RecruitInfoDetail recruitInfo
*/
RecruitInfoDetail RegisterRecruitInfoUI::registerNewRecruit()
{
    Server *server = Server::getInstance();
    CompanyMember *member = dynamic_cast<CompanyMember *>(server->getCurMember());
    ;
    // 입력을 받는 부분
    char task[MAX_STRING];
    char deadline[MAX_STRING];
    unsigned int numOfPersonnel;

    fscanf(_fin, "%s %u %s \n", task, &numOfPersonnel, deadline);

    // CompanyMember에 getComapanyName 함수 추가
    // recruitInfo의 상세 정보들을 CompanyMember의 attribute에서 가져옴.
    RecruitInfoDetail recruitInfo = {string(member->getCompanyName()), string(member->getBusinessNumber()), string(task), string(deadline), numOfPersonnel};

    return (recruitInfo);
}

/*
    함수 이름 : RegisterRecruitInfoUI::showResult(RecruitInfoDetail recruitInfo)
    기능      : 채용정보의 업무, 인원수, 신청마감일 정보를 파일에 출력함
    전달 인자 : RecruitIoDetail recruitInfo -> 채용 상세 정보
    반환값    : 없음
*/
void RegisterRecruitInfoUI::showResult(RecruitInfoDetail recruitInfo)
{
    fprintf(_fout, "> %s %u %s\n", recruitInfo.task.c_str(), recruitInfo.numOfPersonnel, recruitInfo.deadline.c_str());
}

// 생성자, 소멸자
RegisterRecruitInfoUI::RegisterRecruitInfoUI() : BasicUI() {}

RegisterRecruitInfoUI::~RegisterRecruitInfoUI() {}