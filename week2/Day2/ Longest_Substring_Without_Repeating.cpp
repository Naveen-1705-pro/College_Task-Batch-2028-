#include<iostream>
#include<vector>
#include<string>
using namespace std;
int lengthOfLongestSubstring(string& s)
{
    int arr[256] = {0};
    int i = 0;
    int j = 0;
    int len = 0;
    // '\0'  ---> 0 (starting)
    while(j<s.length())
    {
        while(arr[s[j]-'\0']==1)
        {
            arr[s[i]-'\0'] = 0;
            i++;
        }
        arr[s[j]-'\0'] = 1;
        len = max(len,j-i+1);
        j++;
    }
    return len;
}
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int ans = lengthOfLongestSubstring(s);
    // output //
}