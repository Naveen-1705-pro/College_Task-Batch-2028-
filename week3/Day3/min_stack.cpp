#include<iostream>
#include<stack>
using namespace std;
class MinStack {
public:
        stack<int>st;
        stack<int>st1;
    MinStack() {
    }
    
    void push(int value) {
        st.push(value);
        if(!st1.empty())
        {
            if(st1.top()>st.top())
            st1.push(st.top());
            else
            st1.push(st1.top());
        }
        else
        st1.push(value);
    }
    
    void pop() {
        st.pop();
        st1.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st1.top();
    }
};
int main()
{
    // stack command //
}