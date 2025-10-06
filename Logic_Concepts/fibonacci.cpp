#include<bits/stdc++.h>
using namespace std;

void fibSeries(int n){
    if(n<=0) return;

    long long t1 = 0, t2 = 1;
    for(int i = 1; i <= n; i++){
        cout<<t1<<" ";
        long long next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    cout << endl;
}

int main(){
   fibSeries(10);
   return 0;
}