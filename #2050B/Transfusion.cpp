#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int odd_sum = 0;
        int even_sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                even_sum += arr[i];
            }
            else
            {
                odd_sum += arr[i];
            }
        }

        int odd_places = n / 2;
        int even_places = (n + 1) / 2;

        if (odd_sum % odd_places == 0 && even_sum % even_places == 0 && odd_sum / odd_places == even_sum / even_places)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}