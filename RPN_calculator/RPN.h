#ifndef RPN_H
#define RPN_H

#include  <bits/stdc++.h>
#include <iostream>
#include <stack>

class RPN 
{
	private:
		
	std::string rpn;
	double res;
	
	
	public:
		
		//RPN(std::string ln = "");
		
		bool isBalanced(std::string line);
		bool isValid(std::string line);
		std::string infix_to_postfix(std::string infix);
		double RPN_result(std::string RPN);
		double chartodouble(char x);
		
	protected:
};

#endif