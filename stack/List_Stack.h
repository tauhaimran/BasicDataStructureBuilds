#ifndef LIST_STACK_H
#define LIST_STACK_H

#include "List.h"

class List_Stack {	


	private:
	  List list;

		
	public:
		
		//construcstors & destructors
	 /*---we don't need them here---*/
				
		//functions
		bool empty() const;
		int top() const;
		void push (int const & );
		int pop();
		void display();

};

#endif