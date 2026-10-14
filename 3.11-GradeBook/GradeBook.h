// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
	//1.修改构造函数：接收课程名 + 讲师名两个参数
	explicit GradeBook(std::string, std::string);

	void setCourseName(std::string); // sets the course name
	std::string getCourseName() const; // gets the course name

	//2.新增讲师姓名的set / get函数声明
	void setInstructorName(std::string);
	std::string getInstructorName() const;

	void displayMessage() const; // displays a welcome message

private:
	std::string courseName; // course name for this GradeBook
	std::string instructorName; //新增：课程讲师姓名
}; // end class GradeBook
