#include <iostream>
using namespace std;

//递归求最大公约数
int gcd(int x, int y)
{
    //分情况：y为0时，gcd就是x
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main()
{   
    //定义变量
    int a, b;
    cout << "请输入两个整数（第一个数 > 第二个数）：";
    cin >> a >> b;

    //调用函数
    cout << "最大公约数是：" << gcd(a, b) << endl;
    return 0;
}
