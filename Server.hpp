#pragma once
#include "RegisterMember.hpp"
#include "Login.hpp"
#include "Logout.hpp"

class Server
{
private:
    FILE*           _fin;
    FILE*           _fout;
    vector<Member*> _memberList;
    Member*         _curMember;
    static Server*  _instance;
    Server();
    ~Server();
public:
    static  Server* getInstance();
    FILE*           getFin();
    FILE*           getFout();
    Member*         getCurMember();
    void            setCurMember(Member* member);
    vector<Member*> &getMemberList();
    void            doTask();
};
