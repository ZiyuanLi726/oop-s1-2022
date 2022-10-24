#include <iostream>
#include <stack>
#include <string>
#include <sstream> 
using namespace std;

//To judge the symbol whether or not are +-*/
bool judge(char x)
{ 
    switch (x) 
    {
        case '+':
        case '-':
        case '/':
        case '*':
        return true;
    }
    return false;
}

//build the arighmetric logic
int evaluate(signed int int1,signed int int2,char symbol)
{
    int ans;

    if(symbol=='+')
    {
        ans=int1+int2;
    }

    else if(symbol=='-')
    {
        ans=int1-int2;
    }

    else if(symbol=='/')
    {
        ans=int1/int2;
    }

    else if(symbol=='*')
    {
        ans=int1*int2;
    }

    return ans;
}


string calculate(string cal) 
{
    stack<string> s;
    stack<int> s2;

    int len = cal.size();


    for (int i = len - 1; i >= 0; i--) 
    {


        if (judge(cal[i])) 
        {
            string op1,op2;
            signed int int1,int2;

            if(!s.empty())
            {

                op1 = s.top(); 
                s.pop();
                int1=s2.top();
                s2.pop();

                if(!s.empty())
                {
                    op2 = s.top(); 
                    s.pop();
                    int2=s2.top();
                    s2.pop();
                }
                else
                {
                    cout<<"Error"<<endl;
                    break;
                }
            }

            else
            {
                cout<<"Error"<<endl;
                break;
            }


            string temp_str = "(" + op1 + cal[i] + op2 + ")";

            signed int ans=evaluate(int1,int2,cal[i]);

            s.push(temp_str);
            s2.push(ans);
        }


        else 
        {
            s.push(string(1, cal[i]));
            s2.push(cal[i]-'0');
        }
    }


    if(s.size()>1)
    {
        cout<<"Error";
        exit(0);
    }
    else
    {
        ostringstream o;
        o <<s2.top();
        string res=s.top()+"="+o.str();
        return res;
    }
}


int main() 
{
    string cal;
    cout<<"Enter a function:"<<endl;
    cin>>cal;
    cout << calculate(cal);
    return 0;
}
