#include<bits/stdc++.h>
using namespace std;

void expVector(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(4);

    for(int x : v) cout<<x<<" ";
}

int main(){
    expVector();
    return 0;
}