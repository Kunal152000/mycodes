#include <iostream>
using namespace std;
int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int ans;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s + 1;
}
int binarysearch(int arr[], int s, int e, int key)
{
    int low = s;
    int high = e;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int search(int arr[], int n, int key)
{
    int pivot = getpivot(arr, n);

    if (key <= arr[n - 1] && key >= arr[pivot])
    {
        return binarysearch(arr, pivot, n - 1, key);
    }
    else
    {
        return binarysearch(arr, 0, pivot, key);
    }
}
int main()
{
    int arr[] = {7, 8, 9, 10, 1, 2, 3};
    cout << "the element found at " << search(arr, 7, 2);

    return 0;
}