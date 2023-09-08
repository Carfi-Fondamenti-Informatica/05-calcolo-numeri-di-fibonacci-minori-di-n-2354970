#include <iostream>
using namespace std;

int main () {
    bool condition= true;
    int n=0, primo=1, secondo=1;
    cin>>n;
    while(secondo<=n){
    if (condition) {
        condition = false;
        cout << secondo << endl;
    } else {
        cout << secondo << endl;
            int terzo = secondo;
            secondo += primo;
            primo = terzo;
        }
    }
    return 0;
}
