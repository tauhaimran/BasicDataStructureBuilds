#include "list.h"
#include "Node.h"

#include <iostream>

list::list():list_head( nullptr ),list_tail(nullptr) {
	//empty constructor
}


list::list( list const & L ):list_head( nullptr ),list_tail(nullptr) {
	int s = 0;
	
	if(L.empty())
		{return;}
	
	for ( Node* ptr = L.head() ; ptr != nullptr ;ptr = ptr->next() ){
		 
	push_back(ptr->retrieve());
	s++;
	
	}
	
	
	std::cout << "count = " << s << std::endl;	
}

list::~list(){
	while(!empty()){
		pop_front();
	}
}


//List::

bool list::empty() const{
	return (list_head == nullptr);
}

int list::front() const {
    if (empty() ) {
        //throw underflow();  
		//std::cout << "empty list" << std::endl;
		return -9999;
		}
	else {
	return list_head->retrieve();
	}
    
}

Node* list::head() const{
	return list_head;
}

void list:: push_front( int n ){
	
	if(empty()){
		list_head = new Node (n , list_head);
		list_tail = list_head;
	}
	else{
		list_head = new Node (n , list_head);
	}
}

void list::push_back( int n ){ //adds new value in front
	
	Node* ptr = new Node(n, nullptr);
	
	if(list_tail == nullptr){
			
			list_head = list_tail = ptr ;
	}
	else{
		list_tail->next_node = ptr;
		list_tail = ptr;
	}

}

int list::pop_front(){
	
	if(empty())
	{
		return -9999;
	}
	
	if(size()==1)
	{ 
		list_tail = nullptr;
	}
	
	int e = front();
	
	Node* ptr = list_head;
	list_head = head()->next();
	delete ptr;
	
	return e;
}

int list::pop_back(){ //removes value from the back

	int e ;
	
	if(empty())
	{
		return -9999;
	}
	
	if(list_head == list_tail)
	{ 
		
		e = front();
		
		delete list_head;
		list_head = list_tail = nullptr;
		
	}
	else{
		
		Node * ptr ;
		
		for( ptr = head() ; ptr->next()->next() != nullptr ; ptr = ptr->next());
		ptr->next_node = nullptr;
		e = list_tail->retrieve();
		list_tail = ptr;
		
	}
	
	
	return e;
}


int list::size() const{
	int s = 0;
	
	for ( Node* ptr = head() ; ptr != nullptr ; ptr = ptr->next()){
		s++;
	}
	
return s;
}

int list::count(int n ) const{
	int s = 0;
	
	for ( Node* ptr = head() ; ptr != nullptr ; ptr = ptr->next()){
		
		if( ptr->retrieve() == n ) 
		{s++;}
	}
	
return s;
}

int list::erase(int n ) {
	int s = 0;
	
	for ( Node* ptr = head() ; ptr->next() != nullptr ; ptr = ptr->next()){
		//std::cout << ptr->retrieve();
		
		if( ptr->next()->retrieve() == n  ) {
			
			if(ptr->next()==list_tail)
			{
				list_tail = ptr;
			}
			
			Node* pt = ptr->next();
			
			ptr->next_node	= ptr->next()->next();
			
			
			delete pt;
			pt = nullptr;
			
			
			
		s++; }
		
		//std::cout << "YES" << std::endl;
		
		//std::cout << s << std::endl;
	}
	
return s;
}

void list::print(){
	int s = 0;
	for ( Node* ptr = head() ; ptr != nullptr ; ptr = ptr->next()){
		std::cout << ptr->retrieve() << "," ;  s++;
	}
	
	std::cout << std::endl;
	
	std::cout << "count = " << s << std::endl;	
	
}