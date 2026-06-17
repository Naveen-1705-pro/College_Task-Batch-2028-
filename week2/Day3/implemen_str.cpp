#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=string::npos)
        {
            size_t pos = haystack.find(needle);
            return pos;
        }
        return -1;
}
int main()
{
    string haystack;
    cout<<"Enter a string : ";
    cin>>haystack;
    string needle;
    cout<<"Enter a string : ";
    cin>>needle;
    int ans  = strStr(haystack,needle);
    // output //
}