#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt_class = 0;
    int cnt_hall = 0;
    int cnt_toilet = 0;

    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%12==0){
            cnt_toilet +=1;
        }

        else if(i%3==0){
            cnt_hall +=1;
        }

        else if(i%2==0){
            cnt_class +=1;
        }

    }

    cout << cnt_class << " " << cnt_hall << " " << cnt_toilet;
    return 0;
}