#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int arr1[26] = {0};
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
        }

        if(s.length()>t.length())return false;
        for(int i=0;i<t.length();i++)
        {
            arr1[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=arr1[i])return false;
        }
        return true;
}
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    string t;
    cout<<"Enter string : ";
    cin>>t;
    bool ans = isAnagram(s,t);
    // output //
    cout<<ans<<endl;
}