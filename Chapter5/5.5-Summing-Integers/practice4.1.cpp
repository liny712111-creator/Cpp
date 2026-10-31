#include <iostream>
using namespace std;

int main()
{
    int count;   //定义变量count：表示后面要输入数字的个数
    int num;     //存放每次读入的数字
    int sum = 0; //总和

    cout << "请输入数字的个数：";
    cin >> count;

    cout << "请依次输入 " << count << " 个整数（每次只输入一个就回车）：" << endl;

    //for循环，一共读取count个数字
    for (int i = 0; i < count; i++)
    {
        cin >> num;  //每次只读一个数
        sum = sum + num;
    }

    cout <<count << "个数的总和为：" << sum << endl;
    return 0;
}
