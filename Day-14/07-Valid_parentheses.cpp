#include <bits/stdc++.h>

using namespace std;

// () [] {}

bool isValid(string s)
{
    stack<char> stk;
    for (const auto &c : s){
        switch (c)
        {
        case '{':
            stk.push('}');
            break;
        case '(':
            stk.push(')');
            break;
        case '[':
            stk.push(']');
            break;
        default:
            if(stk.size() == 0 || c != stk.top()) return false;
            else stk.pop();
        }
    }
    return stk.size() == 0;
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "The expression is valid" << endl;
    }
    else
    {
        cout << "The expression is invalid" << endl;
    }
    return 0;
}