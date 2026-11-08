#include <iostream>
#include <cmath>
using namespace std;

//基础版：判断素数，循环到n/2
bool isPrime_half(int n)
{   
    //排除1、2
    if (n < 2)
        return false;
    
    //for循环，用求余判断是否存在因子，如果求余后为0，则存在因子，则不是素数
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

//升级版：判断素数，循环到根号n
bool isPrime_sqrt(int n)
{
    //排除1、2
    if (n < 2)
        return false;

    //for循环，用求余判断是否存在因子，如果求余后为0，则存在因子，则不是素数
    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int count = 0;
    cout << "2-10000 的素数：" << endl;

    for (int num = 2; num <= 10000; num++)
    {
        //注释切换另一种测试版本
        if(isPrime_half(num))
        //if (isPrime_sqrt(num))
        {
            cout << num << " ";
            count++;
        }
    }

    cout << "\n\n2-10000之间素数总数量 = " << count << endl;
    cout << "最少需要试除到100，即10000开根号" << endl;
    return 0;
}
