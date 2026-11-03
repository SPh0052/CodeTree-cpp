#include <iostream>
using namespace std;

int main() {
    int N, k;
    int sum =0, cnt=0;
    double avg;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> k;
        sum += k;
        cnt ++;
    }

    avg = double(sum)/cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << avg;
    return 0;
}