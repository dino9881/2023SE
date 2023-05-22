#pragma once
#include "RegisterMember.hpp"
#include "Login.hpp"
#include "Logout.hpp"
#include "RegisterRecruitInfo.hpp"
#include "GetRecruitInfoList.hpp"
#include "ApplyRecruitInfo.hpp"

// 프로그램의 정보를 담고있는 Server class => 싱글톤 패턴으로 구현함 
class Server
{
private:
    // 프로그램에서 사용하는 파일 포인터
    FILE*           _fin;
    FILE*           _fout;
    // 프로그렘이 갖고 있는 member에 대한 정보
    vector<Member*> _memberList;
    Member*         _curMember;
    // 싱글톤 패턴
    static Server*  _instance;
    Server();
    ~Server();
public:
    static  Server* getInstance();
    FILE*           getFin();
    FILE*           getFout();
    Member*         getCurMember();
    void            setCurMember(Member* member);
    Member*         registerMember(Member* member);
    vector<Member*> &getMemberList();
    void            doTask();
};
