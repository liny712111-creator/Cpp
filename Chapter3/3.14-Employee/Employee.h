#include <string>
class Employee
{
public:
    //构造函数，初始化三个成员
    explicit Employee(std::string, std::string, int);

    //set、get函数
    void setFirstName(std::string);
    std::string getFirstName() const;

    void setLastName(std::string);
    std::string getLastName() const;

    void setMonthlySalary(int);
    int getMonthlySalary() const;

private:
    std::string firstName;
    std::string lastName;
    int monthlySalary;
};
