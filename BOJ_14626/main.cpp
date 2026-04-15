#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char input[14];
    for (int i = 0; i < 13; i++)
    {
		cin >> input[i];
    }

    int star = -1;
    int sum = 0;

    for (int i = 0; i < 13; i++)
    {
        int w = (i % 2 == 0) ? 1 : 3;

        if (input[i] == '*')
        {
            star = i;
        }
        else
        {
            sum += (input[i] - '0') * w;
        }
    }
    int weight = (star % 2 == 0) ? 1 : 3;

    for (int x = 0; x <= 9; x++)
    {
        if ((sum + x * weight) % 10 == 0)
        {
            cout << x;
            break;
        }
    }

    return 0;
}