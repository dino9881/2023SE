#pragma once
#include "RegisterMember.hpp"

class Server
{
private:
    FILE*           _fin;
    FILE*           _fout;
    vector<Member*> _memberList;
    static Server* instance;
    Server();
    ~Server();
public:
    static  Server* getInstance();
    FILE* getFin();
    FILE* getFout();
    vector<Member*> &getMemberList();
    void    doTask();
};
