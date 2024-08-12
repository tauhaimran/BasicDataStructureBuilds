#include "stack.h"
#include "stack.cpp"
#include "List_Stack.h"
#include <iostream>
#include <algorithm>

//#include <bits/stdc++.h>

	using namespace std;
	

//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*---***** INT MAIN () *****---*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-//

int main(){

	
	int x = 5;
	//stack<int> T(5);
	List_Stack T;
	cout << "testing stack class" << endl;
	
	T.push(10);
	T.push(9);
	T.push(8);
	T.push(7);
	T.push(6);
	T.push(5);
	
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	
	T.display();
	
	cout << endl << "-*-*-*-*-*-*-"<< endl;
	
	T.pop();
	
	
	
return 0;
}