#include<iostream>
#include<stack>
#include<string>
using namespace std;
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()=='(' && s[i]==')')
            {
                st.pop();
            }
            else if(st.top()=='{' && s[i]=='}')
                st.pop();
            else if(st.top()=='[' && s[i]==']')
                st.pop();
            else
            st.push(s[i]);
        }
        int n = st.size();
        if(n!=0)
        return 0;
        return 1;
}
int main()
{
    string s;
    cin>>s;
    bool ans = isValid(s);
    // output //
}