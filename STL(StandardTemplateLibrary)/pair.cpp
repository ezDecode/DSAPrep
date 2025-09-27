#include<bits/stdc++.h>
using namespace std;

void demoPair(){
    pair<int, int> p = {1,2};
    cout<<p.first<<" "<<p.second;
    //Nested Pair
    cout<<endl;

    pair<int, pair<int, int>> p2 = {1, {2, 5}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first;


    //pair with array
    cout<<endl;
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 5}};
    cout<<arr[2].first;
}

int main(){
    demoPair();
    return 0;
}