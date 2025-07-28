// MIN STACK
//Statement - Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
/*
Implement the MinStack class:
MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.
*/

#include <iostream>
#include <stack>
using namespace std; 

class MinStack {
private:
    stack<int> s;
    stack<int> minS;

public:
    MinStack() {}
    
    void push(int val) {
        s.push(val);
        if (minS.empty() || val <= minS.top()) {
            minS.push(val);
        }
    }
    
    void pop() {
        if (s.top() == minS.top()) {
            minS.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minS.top();
    }
};