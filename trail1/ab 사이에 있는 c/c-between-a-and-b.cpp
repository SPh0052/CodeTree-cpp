#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool satisfied = false;
    cin >> a >> b>>c;

    for(int i=a; i<=b; i++){
        if(i%c==0){
            satisfied = true;
            // cout << i;
        }
    }

    if(satisfied == true){
        cout << "YES";
    }

    else{
        cout << "NO";
    }
    return 0;
}
//이거 python처럼 for-else 문으로 바꿔도 되지 않나? : C++에서는 안된다.