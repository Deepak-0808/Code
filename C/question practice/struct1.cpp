#include<stdio.h>

#include<bits/stdc++.h> 
using namespace std;

struct class1
{                               
    int x;
    char y;
    double z;
};


int main(){
   // struct class1 student1,student2;
   // struct class1 *stuptr;
   // stuptr=&student1;
   // stuptr->x=2;
   // printf("%d\n",student1.x);
   // printf("%d\n",stuptr->x);
   // student1.x=3;
   // printf("%d\n",student1.x);
   // printf("%d\n",stuptr->x);


     int *ptr=NULL;
     ptr=(int*) malloc(8);
     
     
     for(int i=0;i<2;i++)
     {
         scanf("%d",ptr+i);
         printf("%d\n",*ptr+i);
     }

    for(int i=0;i<2;i++)
     {
         printf("%d\n",*ptr+i);
     }
 
     
    
   
    
    
    
    return 0;
}

