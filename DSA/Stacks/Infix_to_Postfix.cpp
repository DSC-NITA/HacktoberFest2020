#include<bits/stdc++.h>
using namespace std;

bool Is_Operator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    else
        return false;
}

bool Is_Operand(char c)
{
    if(c >= '0' && c <= '9')
        return true;
    else if(c >= 'a' && c <= 'z')
        return true;
    else if(c >= 'A' && c <= 'Z')
        return true;
    else
        return false;
}

int Get_Operator_Weight(char c)
{
    int weight=-1;
    switch(c){
        case '+':
        case '-':
            weight=1;
            break;
        case '*':
        case '/':
            weight=2;
            break;
        case '^':
            weight=3;
    }
    return weight;
}

bool has_Higher_Precedence(char p1, char p2)
{
    int p1_weight = Get_Operator_Weight(p1);
    int p2_weight = Get_Operator_Weight(p2);
    return p1_weight >= p2_weight ? true: false;
}

void Get_Postfix(string exp)
{
    stack<char> S;

    for(int i = 0; i < exp.length(); i++)
    {
        if(exp[i] == ' ' || exp[i] == ',')     //...ignoring delimiter....
            continue;

        else if(Is_Operator(exp[i]))
        {
            while(!S.empty() && S.top() != '(' && has_Higher_Precedence(S.top(), exp[i]))
            {
                    cout << S.top();
                    S.pop();
            }
            S.push(exp[i]);
        }

        else if(Is_Operand(exp[i]))
        {
            cout<<exp[i];
        }
        else if(exp[i] == '(')
            S.push(exp[i]);

        else if(exp[i] == ')')
        {
            while(!S.empty() && S.top() != '(')
            {
                    cout<<S.top();
                    S.pop();
            }
            S.pop();
        }
    }
    while(!S.empty())
    {
        cout<<S.top();
        S.pop();
    }
}

//.....Driver code...
int main()
{
    string str = " (A+(B*C-(D/E^F)*G)*H) ";
    Get_Postfix(str);
    return 0;
}
