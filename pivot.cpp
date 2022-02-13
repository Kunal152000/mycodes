#include <iostream>
using namespace std;

int peakIndex(int arr[], int n)
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
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3};
    cout << "the pivot element is at " << peakIndex(arr, 6) << endl;

    return 0;
}
