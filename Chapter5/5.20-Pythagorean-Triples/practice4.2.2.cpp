#include <iostream>
using namespace std;

/*
int main()
{
    int count = 0; //统计找到的三元组总数

    cout << "边长不超过500的毕达哥拉斯三元组：" << endl;
    cout << "直角边1\t直角边2\t斜边" << endl;

    //使用三重嵌套循环，穷举所有边长组合
    for (int side1 = 1; side1 <= 500; side1++)
    {
        for (int side2 = side1; side2 <= 500; side2++)
        {
            for (int hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
            {
                //判断是否满足勾股定理
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
                {
                    cout << side1 << "\t" << side2 << "\t" << hypotenuse << endl;
                    count++;
                }
            }
        }
    }

    cout << "\n共找到 " << count << " 组毕达哥拉斯三元组" << endl;
    return 0;
}
*/