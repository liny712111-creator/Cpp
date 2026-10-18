#include "Employee.h"


//构造函数，初始化列表
Employee::Employee(std::string first, std::string last, int salary)
    : firstName(first), lastName(last)
{
    //调用set，自动做合法性判断
    setMonthlySalary(salary);
}

//set、get名
void Employee::setFirstName(std::string first)
{
    firstName = first;
}
std::string Employee::getFirstName() const
{
    return firstName;
}

//set/get姓
void Employee::setLastName(std::string last)
{
    lastName = last;
}
std::string Employee::getLastName() const
{
    return lastName;
}

//set月薪：判断非正数就变为0
void Employee::setMonthlySalary(int salary)
{
    if (salary > 0)
    {
        monthlySalary = salary;
    }
    else
    {
        monthlySalary = 0;
    }
}
int Employee::getMonthlySalary() const
{
    return monthlySalary;
}
