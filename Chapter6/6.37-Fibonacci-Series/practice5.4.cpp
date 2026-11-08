#include <iostream>
using namespace std;

//（a）非递归版本，int 类型，求第n个斐波那契数
int fibonacci_int(int n)
{
    //1、0直接返回
    if (n == 0 || n == 1)
        return n;

    int prevPrev = 0;  //fib(0)
    int prev = 1;      //fib(1)
    int curr;

    for (int i = 2; i <= n; i++)
    {
        curr = prevPrev + prev;
        prevPrev = prev;
        prev = curr;
    }
    return curr;
}

//（b）修改版：double类型
double fibonacci_double(int n)
{
    if (n == 0 || n == 1)
        return n;

    double prevPrev = 0.0;
    double prev = 1.0;
    double curr;

    for (int i = 2; i <= n; i++)
    {
        curr = prevPrev + prev;
        prevPrev = prev;
        prev = curr;
    }
    return curr;
}

int main()
{
    int n;
    cout << "请输入n，查看第n项斐波那契数：";
    cin >> n;

    cout << "int版本 fib(" << n << ") = " << fibonacci_int(n) << endl;
    cout << "double版本 fib(" << n << ") = " << fibonacci_double(n) << endl;

    //寻找int能承载的最大斐波那契数
    cout << "\n查找int可容纳的最大斐波那契数" << endl;
    for (int i = 0; ; i++)
    {
        int val = fibonacci_int(i);
        //int溢出后会突然变成负数，可以以此判断边界
        if (val < 0)
        {
            cout << "int在第" << i << "项溢出\n";
            break;
        }
        cout << "fib(" << i << ") = " << val << endl;
    }

    cout << "\ndouble版本（可以支持更大n）" << endl;
    for (int i = 0; i <= 50; i++)
    {
        cout << "fib(" << i << ") = " << fibonacci_double(i) << endl;
    }

    return 0;
}
