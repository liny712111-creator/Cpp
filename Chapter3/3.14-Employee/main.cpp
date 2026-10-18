#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    //创建两个员工对象
    Employee emp1("Chen", "Jett", 1000);
    Employee emp2("Lin", "Xiao", -200); //设置负的月薪，会被自动变为0

    cout << "涨薪前年薪： " << endl;
    cout << emp1.getFirstName() << " " << emp1.getLastName()
        << " 年薪： " << emp1.getMonthlySalary() * 12 << endl;
    cout << emp2.getFirstName() << " " << emp2.getLastName()
        << " 年薪： " << emp2.getMonthlySalary() * 12 << endl;

    // 涨10%工资
    emp1.setMonthlySalary( (int) (emp1.getMonthlySalary() * 1.1));
    emp2.setMonthlySalary( (int) (emp2.getMonthlySalary() * 1.1));

    cout << "涨薪10%后年薪： " << endl;
    cout << emp1.getFirstName() << " " << emp1.getLastName()
        << " 年薪： " << emp1.getMonthlySalary() * 12 << endl;
    cout << emp2.getFirstName() << " " << emp2.getLastName()
        << " 年薪： " << emp2.getMonthlySalary() * 12 << endl;

    return 0;
}
