/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
 int max_of_four(int a, int b, int c, int d)
{  
    
  if(a>b)
  {
    if(a>c)
    {
       if (a>d)
        {
           return a;
        }
    }
    else if(c>d)
    {
        return c;
    }
    else 
    {
        return d;
    }
  }
    else if(b>c)
    {
        if(b>d)
        {
            return b;
        }
        else
        {
           return d;
        }
    }
    if(c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
}    
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans =  max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}