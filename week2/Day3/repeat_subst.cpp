#include<iostream>
#include<string>
using namespace std;
bool repeat(string s)
{
    int n = s.length();
    for(int i=1;i<=n/2;i++)
    {
        string pattern = s.substr(0,i);
        string ans = "";
        int time = n/i;
        while(time--)
        {
            ans+=pattern;
        }
        if(ans==s)return true;
    }
    return false;
}
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    bool ans = repeat(s);
    // output //
}