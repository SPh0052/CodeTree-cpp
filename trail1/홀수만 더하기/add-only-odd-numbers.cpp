#include <iostream>
using namespace std;

int main() {
    int N, k;
    int sum = 0;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> k;
        if(k%2==1 && i%3==0){
            sum+=k;
        }

    }

    cout << sum;


    return 0;
}