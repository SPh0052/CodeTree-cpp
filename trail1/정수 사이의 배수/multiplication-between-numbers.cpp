#include <iostream>
using namespace std;

int main() {
    int A, B;
    int sum = 0, cnt=0;
    double avg;

    cin >> A >> B;

    for(int i=A; i<=B; i++) {
        if(i%5==0 || i%7==0) {
            sum +=i;
            cnt ++;
        }
    }

    avg = double(sum)/cnt;

    cout << fixed;

    cout.precision(1);

    cout << sum << " " << avg;
}