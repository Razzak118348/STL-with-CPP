#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,4,4,5,5,7,7,1};
int n =min_element(v.begin(),v.end())-v.begin();// for all element min index
cout<<"min element index: "<<n<<endl;
cout<<"min element : "<<v[n]<<endl;

int m=min_element(v.begin()+1,v.begin()+5)-v.begin();// for specific range min index
cout<<"min element index: "<<m<<endl;
cout<<"min element : "<<v[m]<<endl;
    return 0;
}