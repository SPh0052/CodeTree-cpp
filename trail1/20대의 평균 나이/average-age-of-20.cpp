#include <iostream>
using namespace std;

int main() {
    int age, age_sum=0, cnt=0;
    double avg;
    
    while(1){
        cin >> age;
        // cout << age << " "<< age_sum << " " << cnt << " " << avg << endl;
        if(age <20 || age >=30){
            cout << fixed;
            cout.precision(2);
            cout << avg;
            break;
        }
        age_sum += age;
        cnt +=1;
        avg = double(age_sum)/cnt;
    }
    return 0;
}