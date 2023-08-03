#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        
    }

    cout<<endl;
}

void sortOne(int arr[], int n)
{

    int left = 0;
    int right = n - 1;
    int i = 0;
    int j = n - 1;

    int step = 0;

    while (i < j)
    {
        // cout<<"step"<<step++<<endl;
        // printArray(arr, 9);
        // cout<<endl;

        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    // sorting 0 1

    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);
}