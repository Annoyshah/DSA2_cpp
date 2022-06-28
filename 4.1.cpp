#include <iostream>
using namespace std;
int divide(int a,int b)
{
if(a%b==0)
{
cout<<a<<" is divisible by "<<b<<endl;
}
else
cout<<a<<" is not divisible by "<<b<<endl;
}
float divide(float a,float b, float c)
{float result;
result=(a+b+c)/3;
return result;
}
int divide(int a)
{int flag=0;
int i;
for(i=2;i<a;i++)
{
if(a%i==0)
{
flag++;
break;
}
}
if(flag==0)
{
cout<<"Its a prime number"<<endl;
}
else
cout<<"Its is the composite number "<<endl;
}
int main()
{int t;
float result;
cout<<"Please enter your choice"<<endl;
cin>>t;
switch(t)
{
case 1:
divide(56,2);
break;
 case 2:
result=divide(27.7,81.42,73.51);
cout<<"Average of entered number = "<<result;
break;
case 3:
divide(4);
break;
}
return 0;
}
