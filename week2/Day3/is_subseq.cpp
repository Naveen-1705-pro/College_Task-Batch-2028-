#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isSubsequence(string s, string t) {
        int i = 0;
        int j =0;
        int count = 0;
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j])
            {
                count++;
                i++;
            }
            j++;
        }
        if(count==s.length())return true;
        return false;
}
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    string t;
    cout<<"Enter string : ";
    cin>>t;
    bool ans = isSubsequence(s,t);
    // output //

}