#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
string decodeString(string& s)
{
    stack<string>strStack;  // stack for string part 
    stack<int>intStack;  // stack for integer part
    string currentString = "";  // use for store the current string
    int k = 0;  // use for store the integer value
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            k = k*10 + (s[i]-'0');   // k*10 ---> reason kiyuki contraint me integer value lie between 0 to 30
        }
        else if(s[i]=='[')
        {
            intStack.push(k);  // integer ko stack int me push kar diya 
            strStack.push(currentString);  // current string ko str stack me push kar diya jisse hume peeche waale part bhi current string me mil jaye
            currentString ="";
            k = 0;
        }
        else if(s[i]==']')
        {
            int n = intStack.top();  // intstack ki top value ko n me daal diya jisse kitne time value likhni hai 
            intStack.pop();
            string previousString = strStack.top();
            strStack.pop();
            string expendString = "";
            for(int i=0;i<n;i++)
            {
                expendString+=currentString;
            }
            currentString = previousString + expendString;
        }
        else 
        {
            currentString+=s[i];
        }
    }
    return currentString;
}
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    string ans = decodeString(s);
    // output //
}