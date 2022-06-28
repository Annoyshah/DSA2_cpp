#include<iostream> 
using namespace std; 
class hospital
{
int roll_no; string name;
public:
void get()
{
cout<<"Enter the roll no : "; cin>>roll_no;
cout<<"Enter the name : "; cin>>name;
}
void put()
{
cout<<"Roll No.: "<<roll_no<<endl; cout<<"Name : "<<name<<endl;
}
};
class ward:virtual 
public hospital
{
int number; 
public:
void getdata()
{
    cout<<"Enter the Ward number : "; cin>>number;
}
void putdata()
{
cout<<"Ward number : "<<number<<endl;
}
};
class room:virtual public hospital
{
int bed; string nature;
public:
void gtdata()
{
cout<<"Enter the bed number : "; cin>>bed;
cout<<"Enter the nature of illness : "; cin>>nature;
}
void ptdata()
{
cout<<"Bed number : "<<bed<<endl; cout<<"Nature of illness : "<<nature<<endl;
}
};
class patient:public ward,public room
{

};
int main()
{
int i;
patient p[5]; for(i=0;i<5;i++)
{
p[i].get();
p[i].getdata();
p[i].gtdata(); cout<<endl;
}
for(i=0;i<5;i++)
{
p[i].put();
p[i].putdata();
p[i].ptdata(); cout<<endl;
}
cout<<endl<<"Program by siddhi(21ce086)."; return 0;
}

