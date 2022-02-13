#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int student = 1;
    int pageSum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] + pageSum < mid)
        {
            pageSum += arr[i];
        }
        else
        {
            student++;
            if ((student > m) || (arr[i] > mid))
                return false;
        }
        pageSum = arr[i];
    }
    return true;
}
int bookAllocate(int arr[], int n, int m)
{
    // int ans = 0;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + arr[i];
    }
    int s = 0;
    int ans;
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            cout << ans;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int val = bookAllocate(arr, 4, 2);
    cout << val;
    return 0;
}