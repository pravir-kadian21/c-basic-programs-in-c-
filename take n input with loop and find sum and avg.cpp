#include <iostream>
using namespace std;
int main() {
    int n,sum=0,no;
    float avg;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> no;
        sum=sum+no;
    }
    cout << sum << endl;
    avg=float(sum)/n;
    cout << avg << endl;
}
