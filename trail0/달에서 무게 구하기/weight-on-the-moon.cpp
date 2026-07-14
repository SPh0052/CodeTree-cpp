#include <iostream>
using namespace std;

int main() {
    int weight = 13;
    double moon_gravity = 0.165;

    cout << fixed;

    cout.precision(6);

    cout << weight << " * " << moon_gravity << " = " << weight*moon_gravity;
    return 0;
}