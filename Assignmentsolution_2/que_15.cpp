#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = N; i >= 0; i--)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}