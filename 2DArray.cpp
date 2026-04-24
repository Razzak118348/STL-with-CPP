#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;
    vector<int> a1={1,2,3};
    vector<int> a2={4,5,6,8,3};
    v.push_back(a1);
    v.push_back(a2);
    for(auto u:v){
        for(auto x:u){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}