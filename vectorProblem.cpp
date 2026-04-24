#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,4,4,5,5,7,7,1};
    sort(v.begin(),v.end());//o(nlogn)

int Sz =unique(v.begin(),v.end())-v.begin();//O(n)
    cout<<Sz<<endl;
for(int i=0;i<Sz;i++){
    cout<<v[i]<<" ";
}

    return 0;
}