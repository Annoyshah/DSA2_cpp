#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s;
   cin>>s;
   
   stack<char> st;
   stack<char> st2;
     for(int i=0 ;i<s.length();i++){
         
      st.push(s[i]);   
     }
for(int i=0; i<s.length() ; i++){
     st2.push(st.top());
     cout<<st.top()<<endl;
    st.pop();
     
}

cout<<"stack2"<<endl;
for(int i=0; i<s.length(); i++){
    cout<<st2.top()<<endl;
    st2.pop();
}


}