#include<iostream>
#include<cstring>
using namespace std;
void right_rotate(string s ,int r , int len){
    string s1;
for(int i=0; i<r; i++){
s1[i]=s[len-r+i];
}
for(int i=0 ; i<len-r ; i++){
s1[i+3]=s[i];
}
for(int i=0; i<len; i++){
cout<<s1[i];
}
}

int main(){
    string s;
    cin>>s;
    int r;
    cin>>r;
       int len =s.length();
 cout<<len<<endl<<r<<endl;
 cout<<s<<endl;

 right_rotate(s,r,len);
   

}


