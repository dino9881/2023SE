#include "GeneralMember.hpp"

GeneralMember::GeneralMember(string id, string pw, string name, string residentNumber) : Member(id, pw), _name(name), _residentNumber(residentNumber) {}

GeneralMember::~GeneralMember(){}

unsigned int    GeneralMember::totalApplyNum()
{
    return 0;
}
void            GeneralMember::cancelApplyInfo()
{

}
void            GeneralMember::listApplyInfo()
{

}
void            GeneralMember::createNewApplyInfo()
{

}
void	GeneralMember::checkInfo()
{
    
}