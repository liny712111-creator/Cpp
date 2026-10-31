#include <iostream>
using namespace std;

int main()
{
    //图案(a)
    cout << "(a)\n";
    for (int row = 1; row <= 10; row++)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    cout << endl;


    //图案(b)：倒序，从10到1，所以外层循环起始10，然后row--
    cout << "(b)\n";
    for (int row = 10; row >= 1; row--)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    cout << endl;


    //图案(c)：先打空格，再打星号
    cout << "(c)\n";
    for (int row = 10; row >= 1; row--)
    {
        //先打印前面的空格
        for (int space = 1; space <= 10 - row; space++)
        {
            cout << " ";
        }
        //再打印星号
        for (int star = 1; star <= row; star++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    cout << endl;


    //图案(d)
    cout << "(d)\n";
    for (int row = 1; row <= 10; row++)
    {
        //先打印前面的空格
        for (int space = 1; space <= 10 - row; space++)
        {
            cout << " ";
        }
        //再打印星号
        for (int star = 1; star <= row; star++)
        {
            cout << "*" ;
        }
        cout << endl;
    }

    return 0;
}
