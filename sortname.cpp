#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n;
cin>>n;
string temp;
vector<string> v;
for(int i=0 ; i<=n ; i++){
    cin>>temp;
    cin>>v.push_back(temp)>>endl;
}

sort(v.begin(),v.end());
for(auto value:v){
    cout<<value<<endl;
    
}
return 0;
}