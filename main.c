#include <iostream>

using namespace std;

int n;

int main()
{
    n=0;
    cin >> n;
    for(int a = 0; a <= n; a++)
    {
        if(n%a == 0)
        {
            cout << n << endl;
        }
    }
    cin.ignore(2);
    return 0;
}
