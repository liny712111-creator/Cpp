// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

//1.修改构造函数：用成员初始化列表初始化两个数据成员
GradeBook::GradeBook(string course, string instructor)
    : courseName(course), instructorName(instructor) // member initializer
{
    // empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
{
    courseName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
    return courseName; // return object's courseName
} // end function getCourseName

//2.增加set函数和get函数
//set函数：设置讲师姓名
void GradeBook::setInstructorName(string instructor)
{
    instructorName = instructor;
}

//get函数：获取讲师姓名
string GradeBook::getInstructorName() const
{
    return instructorName;
}

//3.修改 displayMessage：输出欢迎信息 + 讲师信息
void GradeBook::displayMessage() const
{
    // call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
    cout << "This course is presented by: " << getInstructorName() << endl;
} // end function displayMessage



