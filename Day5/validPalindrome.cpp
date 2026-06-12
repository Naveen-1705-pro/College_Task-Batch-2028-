#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            ans+=(s[i]-'A'+'a');
            if(s[i]>='a' && s[i]<='z')
            ans+=s[i];
            if(s[i]>='0' && s[i]<='9')
            ans+=s[i];
        }
        s.clear();
        s = ans;
        reverse(ans.begin(),ans.end());
        if(ans==s)
        return true;
        return false;
    }
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    bool ans = isPalindrome(s);
    // output //
    cout<<ans<<endl;
}