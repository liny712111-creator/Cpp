#include <iostream>
#include <string>
using namespace std;

//定义函数：递归逆序打印字符串，传入参数：字符串 s，起始下标 index
//就是每次递归都是先进入下一次递归，不打印，然后等到递归到最后一层+1时就触发if条件，开始return到上一层递归，因为上一次的函数是运行到“调用下一次递归”，所以接着走是cout了，然后cout完一层因为这一层的函数执行完了，会自动执行隐式的“return”跑到上一层，所以又会return到上上层，回到调用递归的地方，接下来又是cout，然后再return...
void stringReverse(const string& s, int index)
{
    //基线条件：下标到达字符串末尾，停止递归
    if (index == s.size())
    {
        return;
    }

    //先递归处理下一个字符
    stringReverse(s, index + 1);

    //递归返回后，再打印当前字符
    cout << s[index];
}

int main()
{
    string str;
    cout << "请输入一个字符串：";
    cin >> str;

    cout << "逆序输出：";
    stringReverse(str, 0);  //从下标 0 开始递归
    cout << endl;

    return 0;
}
