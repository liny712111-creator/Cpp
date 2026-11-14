#include <iostream>
using namespace std;

int main()
{
    const int TOTAL = 20;       //总共输入20个数
    int uniqueNums[TOTAL];      //最小数组：最坏情况全不重复，容量20
    int uniqueCount = 0;        //当前已存入的不重复数字个数

    cout << "请输入20个10~100之间的整数：" << endl;

    for (int i = 0; i < TOTAL; i++)
    {
        int num;
        cin >> num;

        //1.范围校验
        if (num < 10 || num > 100)
        {
            cout << num << " 不在10~100范围内，已忽略" << endl;
            continue;
        }

        //2.检查是否重复
        bool isDuplicate = false;

        //检查num是否与已存入非重复的数字相同，下标只需uniqueCount个
        for (int j = 0; j < uniqueCount; j++)
        {
            if (uniqueNums[j] == num)
            {
                isDuplicate = true;  //用于后续判断是否加入uniquenums
                break;               //如果true，也就是已找到uniqueNums里相同的数，那就直接break跳出循环，不用再继续检查下去了
            }
        }

        //3.不重复则存入数组
        if (!isDuplicate)   //如果上面判断重复为true，那这里！true也就是false，也就不加入uniquenums
        {
            uniqueNums[uniqueCount] = num;
            uniqueCount++;
        }
    }

    //输出不重复的结果
    cout << "\n不重复的数值为：" << endl;
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << uniqueNums[i] << " ";
    }
    cout << endl;

    return 0;
}
