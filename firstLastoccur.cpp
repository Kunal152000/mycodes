// here we will define the first and last occurence of a number
#include <iostream>
using namespace std;
int ans1, ans2;
int firstOccur(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans1 = mid;

            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans1;
}
int lastOccur(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans2 = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans2;
}
int count()
{
    int count = (ans2 - ans1) + 1;
    return count;
}

int main()
{
    int arr[13] = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 5};
    cout << "the firstoccurence is at"
         << " " << firstOccur(arr, 13, 2) << endl;
    cout << "the lastoccurence is at"
         << " " << lastOccur(arr, 13, 2) << endl;
    cout << "the number of occurence is "
         << " " << count() << endl;

    return 0;
}