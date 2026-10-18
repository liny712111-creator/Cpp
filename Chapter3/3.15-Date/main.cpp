#include <iostream>
using namespace std;


class Date {

	//定义成员变量
private:
	int day;
	int month;
	int year;

	//构造函数
public:
	Date(int m, int d, int y) {
		//判断month是否在1-12
		if (m >= 1 && m <= 12) {
			month = m;
		}
		else {
			month = 1;
		}

		day = d;
		year = y;
	}

	//set函数
	//set月份
	void setMonth(int m){
		if (m >= 1 && m <= 12) {
			month = m;
		}
		else {
			month = 1;
		}
	}

	//set日期
	void setDay(int d){
		day = d;
	}

	//set年份
	void setYear(int y){
		year = y;
	}

	//get函数
	//get月份
	int getMonth() {
		return month;
	}

	//get日期
	int getDay() {
		return day;
	}

	//get年份
	int getYear() {
		return year;
	}

	
	//构造成员函数：按月/日/年 格式输出
	void displayDate() {
		cout << month << "/" << day << "/" << year << endl;
	}
};


//主程序
int main() {

	//1.测试合法月份
	Date date1(10, 11, 2026);
	cout << "This is test1: ";
	date1.displayDate();

	//2.测试非法月份
	Date date2(15, 11, 2026);
	cout << "This is test2: ";
	date2.displayDate();

	//3.测试set函数和get函数
	date1.setMonth(12);
	cout << "set 的 month 为： ";
	date1.displayDate();

	cout << "date1's year: " << date1.getYear() << endl;


	return 0;
}
