#include<iostream>
#include<vector>
#include<string>
using namespace std;
void find(string& s1,int i,int j)
{
    while(i<=j)
    {
        swap(s1[i],s1[j]);
        i++;
        j--;
    }
}
    string reverseWords(string s) {
        int j = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                find(s,j,i-1);
                if(i+1<s.length())
                j=i+1;
            }
            if(i==s.length()-1)
            {
                find(s,j,i);

            }
        }
        return s;
    }
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    string ans = reverseWords(s);
    // output //
}