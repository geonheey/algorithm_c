#include <iostream>
using namespace std;

int main(){
    int n, i, a, max=-21470000, min = 2147000;
    cin >> n;
    
    for(i=1; i<=n; i++){ // n바퀴를 돌게끔
        cin >> a;
        if(a > max) max = a;
        if(a < min) min = a;
    }
    cout << max-min;
}