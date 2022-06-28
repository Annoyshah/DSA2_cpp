#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
        int roll_no;
        char Name[50];
    public:
        void getter()
        {
                cout<<endl<<"Enter Roll No.      : ";
            
                cin>>roll_no;

                cout<<endl<<" Enter Student Name        : ";
                cin>>Name;
        }
        void setter()
        {
                cout<<endl;
                cout<<"**** Student Marklist ****";
                cout<<endl;
                cout<<" Roll No.             :  "<<roll_no;
                cout<<" Student Name         :  "<<Name<<endl;
        }
};
class StudentExam : public Student      
{
    public:
        int subj1, subj2, subj3, subj4, subj5, subj6;
        float percentage;
    public:
        void input_marks()
        {
                getter();
                
                cout<<endl<<" Enter Marks for Subject 1 : ";
                cin>>subj1;
                cout<<endl<<" Enter Marks for Subject 2 : ";
                cin>>subj2;
                cout<<endl<<" Enter Marks for Subject 3 : ";
                cin>>subj3;
                cout<<endl<<" Enter Marks for Subject 4 : ";
                cin>>subj4;
                cout<<endl<<" Enter Marks for Subject 5 : ";
                cin>>subj5;
                cout<<endl<<" Enter Marks for Subject 6 : ";
                cin>>subj6;
        }
        void display()
        {
                setter();
                cout<<endl;
                cout<<" Marks of Subject 1   :  "<<subj1<<endl;
                cout<<" Marks of Subject 2   :  "<<subj2<<endl;
                cout<<" Marks of Subject 3   :  "<<subj3<<endl;
                cout<<" Marks of Subject 4   :  "<<subj4<<endl;
                cout<<" Marks of Subject 5   :  "<<subj5<<endl;
                cout<<" Marks of Subject 6   :  "<<subj6<<endl;
        }
};
class StudentResult : public StudentExam     
{
    public:
        void Evaluate ()
        {
                percentage= (subj1+subj2+subj3+subj4+subj5+subj6)/6.0;
                cout<<endl;
                cout<<endl;
                cout<<" Total Percentage     :  "<<percentage;
               
        }
};
int main()
{
        StudentResult stu_res;     
        int count;
        cout<<"\n Enter No. of Students You Want? : ";
        cin>>count;
        for(int j=0; j<count; j++)
        {
                stu_res.input_marks();
                stu_res.display();
                stu_res.Evaluate();
        }
        return 0;
}