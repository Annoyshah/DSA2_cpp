

#include<iostream>
using namespace std;

class Operators{
    private:
    int a , b;
    public:

    void setdata(int x , int y){
        a=x;
        b=y;
    };
    void display(){
        cout<<a<<""<<b;
    }
    Operators operator + (Operators Second_ob) {
        Operators temp;
        temp.a=a+Second_ob.a;
        temp.b=b+Second_ob.b;
    return temp;
    }
      Operators operator - (Operators Second_ob) {
        Operators temp;
        temp.a=a-Second_ob.a;
        temp.b=b-Second_ob.b;
        return temp;
    }
     Operators operator * (Operators Second_ob) {
        Operators temp;
        temp.a=a*Second_ob.a;
        temp.b=b*Second_ob.b;
        return temp;
    }
    Operators operator / (Operators Second_ob) {
        Operators temp;
        temp.a=a/Second_ob.a;
        temp.b=b/Second_ob.b;
        return temp;
    }
    Operators operator == (Operators Second_ob) {
        Operators temp;
        if(a==Second_ob.a){
            temp.a=a;
        }
         if(b==Second_ob.b){
            temp.b=b;

         }
        return temp;
    }
};

int main(){
int x,y, choice;
 


   Operators First_ob;
      Operators Second_ob;
      Operators Third_ob;
      cout<<"Enter values of x and y for first  object"<<endl;
      cin>>x>>y;
      First_ob.setdata(x,y);
          cout<<"Enter values of x and y for Second  object"<<endl;
      cin>>x>>y;
      Second_ob.setdata(x,y);

      cout<<"enter your choice"<<endl;
      cin>>choice;
      
      switch(choice){
      case 1:
     Third_ob=First_ob+Second_ob;
  

     break;
     case 2:
     Third_ob=First_ob-Second_ob;
      case 3:
     Third_ob=First_ob*Second_ob;
     break;
     case 4:
     Third_ob=First_ob/Second_ob;
     break;
     case 5:
     Third_ob=First_ob==Second_ob;
     break;
     default:
     cout<<"Try again"<<endl;
      }
      Third_ob.display();
       
}