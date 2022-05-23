
#include <bits/stdc++.h>
using namespace std;
// Delete an element whose position is given.

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

// Insert a new element at a given position.

void insert()
{
    int n, num;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int position;
    cout << "Enter the position between 1-" << n << endl;
    cin >> position;
    cout << "Enter the number " << endl;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (position == (i + 1))
        {
            arr[i] = num;
        }
    }
    cout << "New array:" << endl;
    for (int i = 0; i < n; i++)
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
        cout << "Enter 1. Insert a new element" << endl;
        cout << "Enter 2. Delete an element" << endl;
        cout << " Enter 3. For exite" << endl
             << endl;
        cout << "Enter your choice" << endl;
        cin >> case_num;
        switch (case_num)
        {
        case 1:
            insert();
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
