#include <iostream>
using namespace std;

//定义函数：反转数字：用while循环，每次取出并去掉最后一个数字，然后将取出的数字放到rev里，下一个取出数字来时先将原有rev*10向前推一位再加上下一个取出数字
long long reverseDigits(long long n)
{
    long long rev = 0;
    while (n != 0)
    {
        long long digit = n % 10; //取出末尾数字
        rev = rev * 10 + digit;   //先将现有rev*10整体向前推一位，再将取出数字加到rev
        n = n / 10;               //去掉末尾数字
    }
    return rev;
}

int main()
{   
    //定义变量
    long long num;
    cout << "请输入一个整数：";
    cin >> num;

    //调用reverse函数
    long long result = reverseDigits(num);
    cout << "该整数的反转为：" << result << endl;

    return 0;
}
