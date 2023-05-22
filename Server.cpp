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
    int menu_level_1, menu_level_2;
    int is_program_exit;

    menu_level_1 = 0;
    menu_level_2 = 0; 
    is_program_exit = 0;
    while (! is_program_exit)
    {
        fscanf(_fin, "%d %d \n", &menu_level_1, &menu_level_2);
        cout << menu_level_1 << " " << menu_level_2 << endl;
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
                case 1:
                    registerMember.run();
                    break;
                case 2:
                    // cout << "1.2. 회원탈퇴" << endl;
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
                    // cout << "2.1. 로그인" << endl;
                    login.run();
                    break;
                case 2:
                    // cout << "2.2. 로그아웃" << endl;
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
                    // cout <<"3.1. 채용 정보 등록" << endl;
                    registerRecruitInfo.run();
                    break;
                case 2:
                    // cout <<"3.2. 등록된 채용 정보 조회" << endl;
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
                    // cout <<"4.1. 채용 정보 검색" << endl;
                    break;
                case 2:
                    // cout <<"4.2. 채용 지원" << endl;
                    break;
                case 3:
                    // cout <<"4.3. 지원 정보 조회" << endl;
                    break;
                case 4:
                    // cout <<"4.4. 지원 취소" << endl;
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
                    // cout <<"5.1. 지원 정보 통계" << endl;
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
                    // cout <<"6.1. 종료" << endl;
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
}