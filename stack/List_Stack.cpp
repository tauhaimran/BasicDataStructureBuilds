#include "List_Stack.h"
#include <iostream>

bool List_Stack::empty() const{
		return list.empty();
}


void List_Stack::push(int const &obj){
	list.push_front(obj);
}


void List_Stack::display(){
	list.print();
}


int List_Stack::top() const{
	if( empty() )
	{
		std::cout << "error" << std::endl;
	}
	else {
		return list.front();
	}
}


int List_Stack::pop(){
	
	if( empty() )
	{
		std::cout << "error" << std::endl;
	}
	else {
		return list.pop_front();
	}
}