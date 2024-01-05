#include <bits/stdc++.h>

class minStack {
public:
    stack<int> mainStack;
    stack<int> secondStack;

    minStack() {
        // Constructor
    }

    void push(int num)
	 {
        mainStack.push(num);

        if (secondStack.empty() || num <= secondStack.top())
		 {
            secondStack.push(num);
        }
    }

    int pop() {
        if (mainStack.empty())
		 {
            return -1;
        }

        int popElement = mainStack.top();
        mainStack.pop();

        if (popElement == secondStack.top()) 
		{
            secondStack.pop();
        }

        return popElement;
    }

    int top() {
        if (mainStack.empty())
		 {
            return -1;
        }
        return mainStack.top();
    }

    int getMin() {
        if (secondStack.empty())
		 {
            return -1;
        }
        return secondStack.top();
    }
};
