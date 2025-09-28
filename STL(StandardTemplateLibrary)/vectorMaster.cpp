/* push_back and emplace_back

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    v.push_back(string("Hello"));
    v.emplace_back("World");
    for (auto &s : v) cout<< s << ' '; // to point the original string directly
    for (auto s : v) cout<< s << ' '; //Make a copy of each string
    return 0;
}

*/

/* 
    pop_back()
    Always check the empty() before calling pop_back() -> empty vector is undefined.

#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {1, 2, 3};
   v.pop_back();

   for(auto s : v) cout<< s << " ";
   return 0;
}

*/

/*
    Operator[] vs at()

#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {1, 2, 3};
   cout<< v[1] << '\n'; //print 2
   cout<< v.at(2); //print 3 (use this in safety sensitive code..)

   return 0;
}

*/

/*
Then there is the front() and back() which prints the first and last elements of given list if we have {1, 2, 3}, then the front will print 1, and the last will print 3
*/


/*
    size() and capacity()
*/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v = {1, 2, 3};

   cout<< v.size()<< '\n'; // 3
   cout<< v.empty()<< '\n'; //0 -> False

   return 0;
}