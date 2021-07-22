#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int a(int [], int, int);

int main() 
{
    int test;
    cin >> test;
    while(test--)
	{
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cout << a(arr, 0,  n - 1) << endl;
    }
    return 0;
}

int a(int arr[], int left, int right)
{
    if(left == right)
        return arr[left];
    
    int mid = (left + right) / 2;
    
    int Max_Left = a(arr, left, mid);
    int Max_Right = a(arr, mid + 1, right);
    
    int leftsum = INT_MIN;
    int rightsum = INT_MIN;
    int sum = 0;
    for(int i = mid; i >= 0; i--)
	{
        sum += arr[i];
        leftsum = max(leftsum, sum);
    }
    sum = 0;
    for(int i = mid + 1; i <= right; i++)
	{
        sum += arr[i];
        rightsum = max(rightsum, sum);
    }
    return max(max(Max_Left, Max_Right), leftsum + rightsum);
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/