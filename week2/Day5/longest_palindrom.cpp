#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool find(string& str,int s,int e)
{
    while(s<=e)
    {
        if(str[s]!=str[e])
        return 0;
        s++;
        e--;
    }
    return 1;
}
    string longestPalindrome(string s) {
        int maxi = 0;
        string ans = "";
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(s[i]==s[j])
                {
                    if(find(s,i,j))
                    {
                        if(j-i+1 > maxi)
                    {
                        ans = "";
                        maxi = max(maxi,j-i+1);
                        ans +=s.substr(i,maxi);
                    }
                    }
                }
            }
        }
        return ans;
}
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    string ans = longestPalindrome(s);
    // output //
    
}