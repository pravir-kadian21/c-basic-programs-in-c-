#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout << "no is not prime" << endl;
            break;
        }
    }
    if(i==n){
        cout << "no is a prime\n";
    }
}
