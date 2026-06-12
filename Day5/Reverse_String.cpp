#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void reverseString(vector<char>& s) {
    reverse(s.begin(),s.end());
}
int main()
{
    int n;
    cout<<"Enter size of character array : ";
    cin>>n;
    vector<char> s;
    cout<<"Enter character : ";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    reverseString(s);
    // print //
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
}