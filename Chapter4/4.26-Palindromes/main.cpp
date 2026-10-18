#include <iostream>
using namespace std;


int main() {

    //定义变量，输入一个五位数
    int num;
    cout << "Enter a five-digit integer: ";
    cin >> num;

    //校验是否为五位数
    if (num < 10000 || num > 99999) {
        cout << "Error: " << num << " is not a five-digit integer!" << endl;
    }
    else {

        //提取各位数字
        int d1 = num / 10000;        // 万位
        int d2 = num / 1000 % 10;    // 千位
        int d4 = num / 10 % 10;      // 十位
        int d5 = num % 10;           // 个位

        //判断是否为回文数
        if (d1 == d5 && d2 == d4) {
            cout << num << " is a palindrome." << endl;
        }
        else {
            cout << num << " is not a palindrome." << endl;
        }
    }

    return 0;
}
