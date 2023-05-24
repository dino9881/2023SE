#include "Server.hpp"

// 싱글톤 패턴으로 구현하며 서버 객체 생성시 현제 로그인 되어있는 member = NULL , 과제 명세에 적혀있는 파일을 열고 파일 포인터에 저장해준다.
// Server 의 생성자 를 private 선언하여 다른곳에서 생성을 하지 못하게 한후 getInstance() 를 이용해서 객체를 참조할 수 있게 한다. 
Server::Server()
{
    _fin = fopen(INPUT_FILE_NAME, "r+");
    _fout = fopen(OUTPUT_FILE_NAME, "w+");
    _curMember = NULL;
}

Server::~Server(){}

Server* Server::_instance = NULL;

Server* Server::getInstance()
{
	if (!_instance)
		_instance = new Server();
	return (_instance);
}

Member* Server::getCurMember()
{
    return _curMember;
}

void Server::setCurMember(Member* member)
{
    _curMember = member;
}

FILE* Server::getFin()
{
    return this->_fin;
}

FILE* Server::getFout()
{
    return this->_fout;
}

Member*         Server::registerMember(Member* member)
{
    _memberList.push_back(member);
    return member;
}
string          Server::withdrawlMember(Member* member)
{
    string id;

    id = member->getId();
    for (int i = 0 ; i < _memberList.size(); i++)
    {
        if (member == _memberList[i])
        {
            id = _memberList[i]->getId();
            _memberList.erase(_memberList.begin() + i);
            break;
        }
    }
    return id;
}


vector<Member*> &Server::getMemberList()
{
    return this->_memberList;
}

void Server::doTask()
{
    RegisterMember  registerMember;
    Login           login;
    Logout          logout;
    RegisterRecruitInfo registerRecruitInfo;
    GetRecruitInfoList getRecruitInfoList;
    ApplyRecruitInfo applyRecruitInfo;
    ShowApplyInfoList showApplyInfoList;
    CancelApply cancelApply;
    WithdrawlMember withdrawlMember;
    ShowApplyStatistics showApplyStatistics;
    SearchRecruitInfo searchRecruitInfo;

    int menu_level_1, menu_level_2;
    int is_program_exit;

    menu_level_1 = 0;
    menu_level_2 = 0; 
    is_program_exit = 0;
    fprintf(_fout, "프로그램 시작 \n");
    while (! is_program_exit)
    {
        fscanf(_fin, "%d %d \n", &menu_level_1, &menu_level_2);
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
                case 1:
                    registerMember.run();
                    break;
                case 2:
                    withdrawlMember.run();
                    break;
                default:
                    is_program_exit = 1;
                    break;
            }
            break;
        case 2:
            switch (menu_level_2)
            {
                case 1:
                    login.run();
                    break;
                case 2:
                    logout.run();
                    break;
                default:
                    is_program_exit = 1;
                    break;
            }
            break;
        case 3:
            switch (menu_level_2)
            {
                case 1:
                    registerRecruitInfo.run();
                    break;
                case 2:
                    getRecruitInfoList.run();
                    break;
                default:
                    is_program_exit = 1;
                    break;
            }
            break;
        case 4:
            switch (menu_level_2)
            {
                case 1:
                    searchRecruitInfo.run();
                    break;
                case 2:
                    applyRecruitInfo.run();
                    break;
                case 3:
                    showApplyInfoList.run();
                    break;
                case 4:
                    cancelApply.run();
                    break;
                default:
                    is_program_exit = 1;
                    break;
            }
            break;
        case 5:
            switch (menu_level_2)
            {
                case 1:
                    showApplyStatistics.run();
                    break;
                default:
                    is_program_exit = 1;
                    break;
            }
            break;
        case 6:
            switch (menu_level_2)
            {
                case 1:
                    is_program_exit = 1;
                    break;
                default:
                    is_program_exit = 1;
                    break;
            }
            break;
        
        default:
            is_program_exit = 1;
            break;
        }
    }
    fprintf(_fout, "\n6.1 프로그램 종료 \n");
}