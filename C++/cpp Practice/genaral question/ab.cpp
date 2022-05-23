#include<bits/stdc++.h> 
using namespace std;

int main(){
    int total_amount, wid;
    float final_amount;
    
    
    cin>>wid;
    cin>>total_amount;
    
    if(wid%5==0)
    {
       final_amount=total_amount-wid;
       final_amount=final_amount-0.5;
       cout<<final_amount;
    }


    return 0;
}