#include<iostream>
#include<string>
#include<vector>
using namespace std;
void find(int n,vector<string>& ans,string& s,int L ,int R)
{
    if(L+R==2*n)
    {
        ans.push_back(s);
        return ;
    }
    // left paranthesis ko add karne ke liye 
    if(L<n)
    {
        s.push_back('(');
        find(n,ans,s,L+1,R);
        s.pop_back();  // kiyuki reference me hai string to original form tak pohoch ne ke lye
    }
    if(R<L)
    {
        s.push_back(')');
        find(n,ans,s,L,R+1);
        s.pop_back();  // same reason // jabhi reference me string ho to pop back hamesh try karo

    }
}
vector<string> findParan(int n)
{
    vector<string>ans;
    string s = "";
    find(n,ans,s,0,0);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    vector<string> ans = findParan(n);
    // output //
}