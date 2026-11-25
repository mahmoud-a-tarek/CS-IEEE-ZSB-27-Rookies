// A
#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
/*=====================================================*/

// B
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b, c;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
/*=====================================================*/

// C

#include <iostream>
using namespace std;

int main()
{
    int t, rating;
    cin >> t;

    while (t--)
    {
        cin >> rating;

        if (rating >= 1900)
            cout << "Division 1\n";
        else if (rating >= 1600)
            cout << "Division 2\n";
        else if (rating >= 1400)
            cout << "Division 3\n";
        else
            cout << "Division 4\n";
    }

    return 0;
}
/*=====================================================*/

// D

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
/*=====================================================*/

// E

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s = "codeforces";

    while (t--)
    {
        char c;
        cin >> c;

        if (s.find(c) != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
/*=====================================================*/

// F

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans = N % 100;

    if (ans < 10)
        cout << "0" << ans;
    else
        cout << ans;

    return 0;
}

/*=====================================================*/

// G

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    int x1, y1, x2, y2;
    int count = 0;

    for (int i = 0; i < H; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < W; j++)
        {
            if (s[j] == 'o')
            {
                if (count == 0)
                {
                    x1 = i;
                    y1 = j;
                }
                else
                {
                    x2 = i;
                    y2 = j;
                }
                count++;
            }
        }
    }

    cout << abs(x1 - x2) + abs(y1 - y2);

    return 0;
}

/*=====================================================*/