#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    //优化版冒泡排序
    for (int pass = 0; pass < SIZE - 1; pass++)
    {
        bool swapped = false;     //标记本轮是否发生过交换

        //优化a：每轮比较次数逐轮减1，末尾已归位的数无需再比较。外循环和内循环次数的和为size-1
        for (int i = 0; i < SIZE - 1 - pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                //交换相邻元素
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;   //标记本轮发生了交换
            }
        }

        //优化b：本轮没有发生交换，说明数组已经完全有序，直接终止。跟6.2一样设置一个布尔值来做if的条件判断
        if (!swapped)
        {
            break;
        }
    }

    cout << "排序后的数组：" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
