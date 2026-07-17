#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

//A가 중앙값이라면, B<A<C 거나, C<A<B 여야 한다.
    if((B<A && A<C) || (C<A && A<B)){
        cout << A;
    }
//abc, cba
    else if((A<B && B<C) || (C<B && B<A)){
        cout << B;
    }
    else{
        cout << C;
    }



    return 0;
}