#include<bits/stdc++.h>
using namespace std;

void expVec(){
    vector<int> v; //empty vector
    vector<int> v1(5, 10);

    // vector<int> v2(v1); //Copy all the elements of the v1

    //for printing
    for(int y : v1) cout<<y<< " ";
    // v1.clear();
    // cout<<"\nAfter clear: ";
    // for(int y : v1) cout<<y<< " ";
    // for(auto z : v2) cout<<z<<" ";


    cout<< "\nChecking v Elements: " << (v.empty()? "Yes" : "No");
    cout<< "\nChecking v1 Elements: " << (v1.empty()? "Yes" : "No");

}

int main(){
    expVec();
    return 0;
}