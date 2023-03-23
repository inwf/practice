#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        if (a.length() < b.length() || (a.length() == b.length() && a < b))
        {
            swap(a, b);
            cout<<'-';
        }

        int i = a.length() - 1, j = b.length() - 1, carry = 0;
        string s;

        while (i >= 0 || j >= 0 || carry)
        {
            int num1 = (i >= 0 ? a[i] - '0' : 0);
            int num2 = (j >= 0 ? b[j] - '0' : 0);
            int diff = num1 - num2 + carry;

            if (diff < 0)
            {
                diff += 10;
                carry = -1;
            }
            else
            {
                carry = 0;
            }

            s.push_back(diff + '0');
            i--;
            j--;
        }

        while (s.size() > 1 && s.back() == '0')
        {
            s.pop_back();
        }

        if (s == "0")
        {
            cout << "0" << endl;
        }
        else
        {

            for (int i = s.size() - 1; i >= 0; i--)
            {
                cout << s[i];
            }

            cout << endl;
        }
    }

    return 0;
}