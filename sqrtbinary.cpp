#include <iostream>
using namespace std;
int sqrt(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int square = mid * mid;

    while (s < e)
    {
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else if (square < n)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
        square = mid * mid;
    }
    return mid;
}
double precise(int n, int tempSol, int precision)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = (factor / 10);
        for (double j = ans; (j * j) < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int tempSol = sqrt(n);
    cout << "the square root is " << precise(n, tempSol, 3) << endl;
    return 0;
}