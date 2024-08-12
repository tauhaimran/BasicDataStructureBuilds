#include  <bits/stdc++.h>
	#include <iostream>
#include <stack>
#include "RPN.h"
	using namespace std;
	
int main(){
    stack<int> istack;

string operation;

	cout << "type : ";
	
	getline(cin , operation);
	
	cout << "\nyou typed ; " << operation << endl;
	
	RPN calculator;
	
	
	if( calculator.isValid(operation) && calculator.isBalanced(operation) ) {
		cout << "RPN version:"<<calculator.infix_to_postfix(operation) << endl;
		cout << "answer : "<< calculator.RPN_result(calculator.infix_to_postfix(operation)) << endl;	
	}
	else
	{
		cout << "invalid entry Re-run program" << endl;
	}
	
/*
    istack.push( 13 );
    istack.push( 42 );
    cout << "Top: " << istack.top() << endl;
    istack.pop();            // no return value
    cout << "Top: " << istack.top() << endl;
    cout << "Size: " << istack.size() << endl;*/
	
	
	return 0;
}