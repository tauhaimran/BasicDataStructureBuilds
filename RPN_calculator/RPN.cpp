#include "RPN.h"
#include <iostream>
#include <string>
#include <stack>

//RPN::RPN(std::string ln):rpn(infix_to_postfix(ln)),res(RPN_result(rpn)){}


bool RPN::isBalanced(std::string line){

std::stack<char> istack;

	for(int i = 0 ; line[i]!= '\0' ; i++){
		
		if (line[i] == '(' || line[i] == '{' || line[i] == '[')
			{istack.push(line[i]);}
		else if(line[i] == ')' || line[i] == '}' || line[i] == ']')
			{ istack.pop();}
	
	//test lines		
	//std::cout << line[i] << istack.empty() << std::endl;
	}
	
return istack.empty();
}

bool RPN::isValid(std::string line){

int op = 0 ; //operators
int opx = 0; //operands

	for(int i = 0 ; line[i]!= '\0' ; i++){
		
		if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/')
			{ op ++; }
		else if(line[i] >= '0' && line[i] <= '9')
			{ opx++; }
	
	//test lines		
	//std::cout << line[i] << istack.empty() << std::endl;
	}
	
return (opx-op == 1);
}
	
std::string RPN::infix_to_postfix(std::string infix){
	
std::stack<char> istack;
std::string postfix = "";

	for(int i = 0 ; infix[i] != '\0' ; i++){
	
	
		if(infix[i] >= '0' && infix[i] <= '9') //if operand output it
		{ 
			postfix += infix[i];
		}
		else if (infix[i] == '('){
			istack.push(infix[i]);
		}
		else if (infix[i] == '{'){
			istack.push(infix[i]);
		}
		else if (infix[i] == '['){
			istack.push(infix[i]);
		}
		else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/') //if an operator
			{ bool placed = false;
			while(!placed) { //repeat til in stack

					if(istack.empty()){ //if empty push on stack
						istack.push(infix[i]); placed = true;
					}
					else if( istack.top() == '(' || istack.top() == '{' || istack.top() == '[') { //if open parenthesis push on tstack
						istack.push(infix[i]); placed = true;
					}
					else if( (istack.top() == '+' || istack.top() == '-' ) && ( infix[i] == '*' || infix[i] == '/') ) { // high priority on stack
						istack.push(infix[i]); placed = true;
					}
					else if( ( istack.top() == '*' || istack.top() == '/' ) && (infix[i] == '+' || infix[i] == '-' ) ) { // if not high then same priority on stack
						postfix += istack.top();
						istack.pop();
						istack.push(infix[i]); placed = true;
					}
					else { //else pop operatoer and repeate the checks
						postfix += istack.top();
						istack.pop(); //HOW DO I REPEAT ALL THESE STEPS!? ANS - bool of placed?
						//placed = false;                                
					}
				}
			}
			else if (infix[i] == ')' ) //if closing parenthesis ')' pop and output till '(' and discard opening.
			{
				while(istack.top() != '(')
				{
					//std::cout << ">> " << istack.top() << std::endl;	
					
					postfix += istack.top();
					istack.pop();
					
					//std::cout << ":: " << postfix << std::endl;	
				}
				//std::cout << ">> " << istack.top() << std::endl;	
			istack.pop();
			}
		else if (infix[i] == '}' )//if closing parenthesis '}' pop and output till '{' and discard opening.
			{
				while(istack.top() != '{')
				{
					postfix += istack.top();
					istack.pop();
				}
			istack.pop();
			}
		else if (infix[i] == ']' )//if closing parenthesis ']' pop and output till '[' and discard opening.
			{
				while(istack.top() != '[')
				{
					postfix += istack.top();
					istack.pop();
				}
			istack.pop();
			}
	
	//std::cout << ":: " << postfix << std::endl;	
	}

			
	//std::cout << infix[i] << '-' << i << std::endl;
	
		
	
	
	//if no more input output stack into postfix
	while(!istack.empty())
	{
		
		postfix += istack.top();
		istack.pop();
		//std::cout << ":: " << postfix << std::endl;
	}

postfix += '\0';
rpn = postfix;

return postfix;
}
	
	
double RPN::RPN_result(std::string rpn){
std::stack <double> istack;
res = 0; //settign result to zero

	for(int i =0 ; rpn[i] != '\0' ; i++){
		
		if(rpn[i] >= '0' && rpn[i] <= '9') //if operand output it
		{ 
			double val = chartodouble(rpn[i]);
			
			if(val == -1.1)
			{ 
			std::cout << "CONVERSION ERROR" << std::endl;
			break;
			}
			else
			{
				istack.push(val);
			}
		
		}
		else if (rpn[i] == '+'){
			double temp1 = istack.top();
			istack.pop();
			double temp2 = istack.top();
			istack.pop();
			
			istack.push( temp2 + temp1);
			
		}
		else if (rpn[i] == '-'){
			double temp1 = istack.top();
			istack.pop();
			double temp2 = istack.top();
			istack.pop();
			
			istack.push( temp2 - temp1);
			
		}
		else if (rpn[i] == '/'){
			double temp1 = istack.top();
			istack.pop();
			double temp2 = istack.top();
			istack.pop();
			
			istack.push( temp2 / temp1);
			
		}
		else if (rpn[i] == '*'){
			double temp1 = istack.top();
			istack.pop();
			double temp2 = istack.top();
			istack.pop();
			
			istack.push( temp1 * temp2);
			
		}
		
	}

	res = istack.top();
	istack.pop();
	
if(istack.empty()){\
return res;
}
else
{return -1.1111;}
	
}


double RPN::chartodouble(char x){
	
	switch(x){
		
		case '0': return 0.0; break;
		case '1': return 1.0; break;
		case '2': return 2.0; break;
		case '3': return 3.0; break;
		case '4': return 4.0; break;
		case '5': return 5.0; break;
		case '6': return 6.0; break;
		case '7': return 7.0; break;
		case '8': return 8.0; break;
		case '9': return 9.0; break;
		
		default: return -1.1 ;
	}
	
}
