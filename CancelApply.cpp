#include "CancelApply.hpp"
#include "Server.hpp"

// 일반회원에게 입력된 사업자번호로 등록된 채용공고에서의 지원을 취소하게 한다.
ApplyInfoDetail  CancelApply::cancelApplyInfo(GeneralMember* member, string businessNumber)
{
    ApplyInfoDetail applyInfoDetail = member->cancelApplyInfo(businessNumber);
    decreaseApplyNum(businessNumber);
    return applyInfoDetail;
}
void            CancelApply::decreaseApplyNum(string businessNumber)
{
    Server* server = Server::getInstance();
    vector<Member*> memberList = server->getMemberList();
    CompanyMember* companyMember;
    for (int i = 0 ; i < memberList.size(); i++)
    {
        companyMember = dynamic_cast<CompanyMember*>(memberList[i]);
        if (companyMember)
        {
            if (companyMember->getBusinessNumber() == businessNumber)
            {
                companyMember->decreaseApplyNum();
                break;
            }
        }
        else
            continue;
    }
}


CancelApply::CancelApply(){}
CancelApply::~CancelApply(){}

void CancelApply::run()
{
    Server* server = Server::getInstance();
    GeneralMember* member = NULL;

    member = dynamic_cast<GeneralMember*>(server->getCurMember());
    _cancelApplyUI.startInterface();

    //접속중인 일반회원으로부터 사업자번호로 등록된 채용공고로의 지원을 취소한다.
    ApplyInfoDetail applyInfoDetail = cancelApplyInfo(member, _cancelApplyUI.cancelApply());
    // cancelRecruit -> 서버에서 해당 회사 찾기 -> 회사에서 공고찾기 -> -1 해주기 

    // // 채용공고의 지원자 수를 줄여주기 위한 로직(ApplyRecruitInfo와 같은 로직)
    // vector<Member*> MemberList = server->getMemberList();
    // for(int i=0; i<MemberList.size(); i++){
    //     //Member의 type이 '2'(회사회원)이면서 type 값이 2인 Member를 회사회원으로 cast하여 사업자번호를 비교한다.
    //     // if(MemberList[i]->getType() == 2 &&
    //     //      dynamic_cast<CompanyMember*>(MemberList[i])->getbusinessNumber() == applyInfoDetail.businessNumber){
    //     //     CompanyMember* companyMember = dynamic_cast<CompanyMember*>(MemberList[i]);
    //     //     //회사회원이 등록한 채용공고들 중(vector<RecruitInfo*>)에서 마지막으로 등록한(현재 사용중인 채용공고)를 읽어온다.
    //     //     RecruitInfo* info = companyMember->listRecruitInfo().back();
    //     //     // RecruitInfo를 가져왔다면 지원자 수를 줄여준다.
    //     //     info -> decreaseApplyNum();
    //     //     break;
    //     //}
    // }

    _cancelApplyUI.showResult(applyInfoDetail);
    
}


