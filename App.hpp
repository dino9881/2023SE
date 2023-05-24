#pragma once

// 헤더 정리
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// define 정리
#define MAX_STRING 100
#define MAX_APPLY_NUM 100
#define COMPANY_MEMBER_TYPE 1
#define GENERAL_MEMBER_TYPE 2
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
#define LOGOUT  1
#define LOGIN   2

// struct 정리
typedef struct _RecruitInfoDetail
{
    string          companyName;
    string          businessNumber;
    string          task;
    string          deadline;
    unsigned int    numOfPersonnel;
} RecruitInfoDetail;

typedef struct _ApplyInfoDetail
{
    string          companyName;
    string          businessNumber;
    string          task;
    string          deadline;
    unsigned int    numOfPersonnel;
} ApplyInfoDetail;

typedef struct _StatisticsDetail
{
    string          task;
    unsigned int    count;
} StatisticsDetail;

typedef struct _RegisterForm
{
    int     type;
    string  name;
    string  number;
    string  id;
    string  pw;
} RegisterForm;

typedef struct _LoginForm
{
    string  id;
    string  pw;
} LoginForm;
