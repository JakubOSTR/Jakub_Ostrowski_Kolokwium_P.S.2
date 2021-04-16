#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false)
    long long n;
    cin >> n;
    for(int i=1; i<=n/2; i++)
    {
        if(n % i == 0)
            cout << i << endl;
    }
    cout << n;
    return 0;
}
