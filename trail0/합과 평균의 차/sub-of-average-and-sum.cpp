#include <iostream>
using namespace std;

int main() {
    int a, b, c, sum;
    //sum은 정수들의 합이니까 정수이다.
    double avg;

    cin >> a >> b >> c;

    sum = a+b+c;
    avg = (double)(a+b+c)/3;

    cout << sum << "\n" << avg << "\n" << sum - avg;
    // Please write your code here.
    return 0;
}