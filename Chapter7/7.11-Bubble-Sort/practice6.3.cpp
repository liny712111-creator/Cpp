#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    //输入10个整数
    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    //基础版冒泡排序
    for (int pass = 0; pass < SIZE - 1; pass++) // 共9轮遍历
    {
        //每一轮比较所有相邻元素，共9次比较
        for (int i = 0; i < SIZE - 1; i++)
        {
            //前一个元素大于后一个，交换位置
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    //输出排序后的结果
    cout << "排序后的数组：" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
