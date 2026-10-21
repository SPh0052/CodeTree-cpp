#include <iostream>
using namespace std;

int main() {
    int A, B;

    cin >> A >> B;

    int i=A;

    while(i<=B){
        cout << i << ' ';
        if(i%2!=0){
            i*=2;
        }

        else{
            i+=3;
        }

    }
    return 0;
}