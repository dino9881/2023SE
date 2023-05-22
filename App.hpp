#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define MAX_STRING 32
#define MAX_APPLY_NUM 100
#define COMPANY_MEMBER_TYPE 1
#define GENERAL_MEMBER_TYPE 2
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
#define LOGOUT  1
#define LOGIN   2

typedef struct _RecruitInfoDetail
{
    string companyName;
    string task;
    string deadline;
    unsigned int numOfPersonnel;
} RecruitInfoDetail;

typedef struct _RegisterForm
{
    int type;
    string name;
    string number;
    string id;
    string pw;
} RegisterForm;

typedef struct _LoginForm
{
    string id;
    string pw;
} LoginForm;
