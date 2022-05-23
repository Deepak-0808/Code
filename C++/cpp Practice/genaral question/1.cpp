#include <bits/stdc++.h>

using namespace std;

// FIRST PART

void traverse(int arr[], int len)

{

    for (int i = 0; i < len; i++)

    {

        cout << arr[i];

    }

}

// SECOND PART

int search(int arr[], int len, int num)

{

    for (int i = 0; i < len; i++)

    {

        if (arr[i] == num)

        {

            return i;

        }

    }

    return -1;

}

int main()

{

    int num;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "ENTER THE ELEMEMT: ";

    cin >> num;

    int len = sizeof(arr) / sizeof(arr[0]);

    // traverse(arr, len); uncomment this call in order to use it.

    int res = search(arr, len, num);

    if (res != -1)

    {

        cout << "ELEMENT IS AT INDEX: " << res;

    }

    else

    {

        cout << "VALUE IS NOT PRESENT IN THE ARRAY" << endl;

    }

    return 0;

}