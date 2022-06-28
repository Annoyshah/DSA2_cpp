#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// void right_rotate(char* s ,int r , int len){
//     char s1[50];
// for(int i=0; i<r; i++){
// s1[i]=s[len-r+i];
// }


// for(int i=0 ; i<len-r ; i++){
// s1[i+3]=s[i];
// }
// for(int i=0; i<len; i++){
// printf("%c",s1[i]);
// }
// }

int main(){
    char s[89];
    
    printf("Input your string ");
     for(int i=0 ; s[i]!='\0' ;i++){
  scanf("%c",&s[i]);
    }
    int len=strlen(s[8]);
    printf("%d",len);
      for(int i=0 ;i<len ;i++){
  printf("%c",s[i]);
    }

         int r;
     scanf("%d",&r);

//  right_rotate(s,r);
   

}


