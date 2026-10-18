#include <iostream>
using namespace std;


int main() {
    int a, b, c;
    cout << "Enter three nonzero integers: ";
    cin >> a >> b >> c;

    //判断边长是否为正数
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Side lengths must be positive." << endl;
        return 0;
    }


    int side1, side2, hypotenuse;

    //找出最大的数作斜边
    if (a >= b && a >= c) {
        hypotenuse = a;
        side1 = b;
        side2 = c;
    }
    else if (b >= a && b >= c) {
        hypotenuse = b;
        side1 = a;
        side2 = c;
    }
    else {
        hypotenuse = c;
        side1 = a;
        side2 = b;
    }

    //判断勾股定理
    if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
        cout << "These three numbers are sides of a right triangle." << endl;
    } else {
        cout << "These three numbers are not sides of a right triangle." << endl;
    }

    return 0;
}
