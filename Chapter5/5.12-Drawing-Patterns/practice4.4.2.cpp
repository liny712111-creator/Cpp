#include <iostream>
using namespace std;

//并列打印四个图案版本
int main()
{
    //一共10行，每行同时输出a b c d四块
    for (int row = 1; row <= 10; ++row)
    {
        //图案a
        for (int s = 1; s <= row; ++s)
            cout << "*" ;
        for (int s = 1; s <= 10 - row; ++s)
            cout << " " ;
        cout << "  "; // 图案之间的间隔

        //图案b
        for (int s = 1; s <= 11 - row; ++s)
            cout << "*" ;
        for (int s = 1; s <= row - 1; ++s)
            cout << " " ;
        cout << "  ";

        //图案c
        for (int s = 1; s <= row - 1; ++s)
            cout << " " ;
        for (int s = 1; s <= 11 - row; ++s)
            cout << "*" ;
        cout << "  ";

        //图案d
        for (int s = 1; s <= 10 - row; ++s)
            cout << " " ;
        for (int s = 1; s <= row; ++s)
            cout << "*" ;

        cout << endl;
    }
    return 0;
}
