// Move all negative numbers to beginning and positive to end with constant extra space

#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    int ptr, J = -1, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            J++;
            temp = arr[J];
            arr[J] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {-1, -2, 3, 4, -5, 6, -7, 8, -9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}