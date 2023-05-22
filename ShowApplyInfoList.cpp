#include "ShowApplyInfoList.hpp"
#include "Server.hpp"

ShowApplyInfoList::ShowApplyInfoList(){}


void ShowApplyInfoList::run()
{
    Server* server = Server::getInstance();
    GeneralMember* member = NULL;
    member = dynamic_cast<GeneralMember*>(server->getCurMember());
    vector<ApplyInfo*> applyInfoList =  member->listApplyInfo();

    _showApplyInfoListUI.startInterface();
    for (int i = 0; i < applyInfoList.size(); i++)
    {
        _showApplyInfoListUI.showResult(applyInfoList[i]->getApplyInfoDetail());
    }
}

ShowApplyInfoList::~ShowApplyInfoList(){}