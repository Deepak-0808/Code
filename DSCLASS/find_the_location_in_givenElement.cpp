// To find the location of a given element.

#include<bits/stdc++.h> 
using namespace std;

void locationfind()
{
    
    int n;
    cout<<"Enter the size of array::"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element::"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element whose location is to be searched."<<endl;
    cin>>element;
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            cout<<"Element found at index : "<<i<<" and position :: "<<i+1<<endl;
            break;
            
        }
        
    }
    if(i==n)
    cout<<"Element not found"<<endl;
         
    
 cout<<endl;
    
}

void Delete()
{
    int n, position;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position of element which you want to delete : " << endl;
    cin >> position;

    for (int i = 0; i < n; i++)
    {
        if (position == i + 1)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    cout << "New array : " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void exit(void)
{
    exit(0);
}

int main()
{
    int case_num;
    while (1)
    {
        cout << "     **** MENU ****     " << endl
             << endl;
        cout << "Enter 1. find the location" << endl;
        cout << "Enter 2. Delete an element" << endl;
        cout << " Enter 3. For exite" << endl
             << endl;
        cout << "Enter your choice" << endl;
        cin >> case_num;
        switch (case_num)
        {
        case 1:
            locationfind();
            break;
        case 2:
            Delete ();
            break;
        case 3:
            exit();
        }
    }
    return 0;
}
