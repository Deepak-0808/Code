// Delete an element from a given whose value is given.


#include<bits/stdc++.h> 
using namespace std;

int main(){
     int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    int value;
    cout<<"Enter the value which you want to delete  "<<endl;
    cin>>value;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(value==arr[i])
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Value not found"<<endl;
        n++;
        
    }
    cout<<"Current array:"<<endl;

    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}