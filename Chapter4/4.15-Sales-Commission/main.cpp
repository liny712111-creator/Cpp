#include <iostream>
#include <iomanip>  //用于控制输出小数位数
using namespace std;


int main() {

    //定义变量，输入第一次sales，第一次必须放外面，如果放while循环里，此时即使输入-1也会执行一次salary
    double sales;
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;


    //用while循环计算每个员工的收入
    while (sales != -1) {

        //用if判断输入值正负
        if (sales < 0) {
            cout << "Invalid input! Please enter a positive value or -1 to end.\n";
        }
        else {

            //计算输出salary和总收入
            double earnings = 200 + 0.09 * sales;
            cout << "Salary is: $" << fixed << setprecision(2) << earnings << endl;
        }
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;
    }


    return 0;
}
