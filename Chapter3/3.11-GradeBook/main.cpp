#include <iostream>
#include "GradeBook.h"
using namespace std;



int main()
{
    // 创建对象，传入课程名和讲师名
    GradeBook gradeBook("C++ Programming", "Professor Chen");

    // 初始状态显示
    cout << "Initial course information:\n" << endl;
    gradeBook.displayMessage();

    // 测试 set 函数修改讲师姓名
    gradeBook.setInstructorName("Professor Lin");
    cout << "\nAfter changing instructor:\n" << endl;
    gradeBook.displayMessage();

    return 0;
}

