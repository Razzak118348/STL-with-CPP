#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,4,4,5,5,7,7,1};
// int n =max_element(v.begin(),v.end())-v.begin();// for all element max index
// cout<<"max element index: "<<n<<endl;

int m=max_element(v.begin()+1,v.begin()+5)-v.begin();// for specific range max index
cout<<"max element index: "<<m<<endl;
    return 0;
}