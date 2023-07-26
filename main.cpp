#include<iostream>
using namespace std; // std :: 하지 않게 하는 방법
int main(){
    int n,m,i,sum=0;
    cin >> n >> m; // n에는 15, m에는 3이 들어감
    for (i=1; i<= n ; i++){
        if(i%m == 0){
            sum = sum+i;
        }
    }
    cout << sum << endl;
    return 0;
}