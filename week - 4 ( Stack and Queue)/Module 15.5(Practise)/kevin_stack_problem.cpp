#include <bits/stdc++.h>

using namespace std;

string kevinStackProblem(string &s)
 {
     stack<char>charStack;
	 for( char c: s)
	 {
		 charStack.push(c);
	 }

	 string ReverseString = "";
	 while(!charStack.empty())
	 {
		 ReverseString += charStack.top();
		 charStack.pop();
	 }

	 return ReverseString;
}
