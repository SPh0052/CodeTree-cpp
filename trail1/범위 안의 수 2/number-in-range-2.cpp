#include <iostream>
using namespace std;

int main() {

    int k;
    int sum = 0, cnt=0;
    double avg;

    for(int i=0; i<10; i++){
        cin >> k;
        if(k>=0 && k<=200){
            sum +=k;
            cnt ++;
        }
    }

    avg = double(sum)/cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avg;
    return 0;
}