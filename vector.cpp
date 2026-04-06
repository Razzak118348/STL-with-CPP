#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(10);

v[2]=100;
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    cout<<"print all vector element"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    // from user input of n size vector
int n;
cout<<"enter the size of vector"<<endl;
cin>>n;
vector<int>v1;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v1.push_back(a);
}

cout<<"print all vector v1 element"<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}

// vector resize kora
v1.resize(10);
cout<<"print all vector v1 element after resize"<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}

//vector copy kora
vector<int>temp;
temp=v1;
cout<<"print all vector temp element after copy"<<endl;
for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<endl;
}

//vector iterator

vector<int>:: iterator it;
cout<<"print all vector v1 element using iterator"<<endl;
for(it=v1.begin();it!=v1.end();it++){
    cout<<"iterator element: "<<*it<<endl; // *it(pointer) means iterator er value print kora
}


// v.clear();
// cout<<"size of vector v after clear "<<v.size()<<endl;
// vector ki empty ki na check kora
// if(v.empty()){
//     cout<<"vector v is empty"<<endl;
// }
// else{
//     cout<<"vector v is not empty"<<endl;
// }



}