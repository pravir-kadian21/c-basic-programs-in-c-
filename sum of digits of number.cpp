#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin >> n;
    while(n!=0){
        int ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    cout << sum << endl;
}
