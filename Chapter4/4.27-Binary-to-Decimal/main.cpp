#include <iostream>
using namespace std;

int main() {

    //定义变量，输入一个二进制数
    int binary;
    cout << "Enter a binary integer (only 0s and 1s): ";
    cin >> binary;

    //定义变量
    int decimal = 0;    //最终的十进制结果
    int weight = 1;     //当前位的位权，从最右位的1开始
    int temp = binary;  //用临时变量操作，保留原始输入

    //while循环将二进制转化十进制
    while (temp != 0) {
        int digit = temp % 10;       //提取最右边的一位
        decimal += digit * weight;   //该位乘以位权，累加到结果
        temp = temp / 10;            //去掉最右边的一位
        weight *= 2;                 //位权翻倍，处理左一位
    }

    cout << "The decimal equivalent of " << binary << " is " << decimal << endl;

    return 0;
}
