#include "List.h"

#include <iostream>


Node::Node( int e, Node *n ):element( e ),next_node( n ) 
{
    // empty constructor
}

int Node::retrieve() const {
	return element; 
}

Node* Node::next() const {
	return next_node;
}
List::List():List_head( nullptr ),List_tail(nullptr) {
	//empty constructor
}


List::List( List const & L ):List_head( nullptr ),List_tail(nullptr) {
	int s = 0;
	
	if(L.empty())
		{return;}
	
	for ( Node* ptr = L.head() ; ptr != nullptr ;ptr = ptr->next() ){
		 
	push_back(ptr->retrieve());
	s++;
	
	}
	
	
	std::cout << "count = " << s << std::endl;	
}

List::~List(){
	while(!empty()){
		pop_front();
	}
}


//List::

bool List::empty() const{
	return (List_head == nullptr);
}

int List::front() const {
    if (empty() ) {
        //throw underflow();  
		//std::cout << "empty List" << std::endl;
		return -9999;
		}
	else {
	return List_head->retrieve();
	}
    
}

Node* List::head() const{
	return List_head;
}

void List:: push_front( int n ){
	
	if(empty()){
		List_head = new Node (n , List_head);
		List_tail = List_head;
	}
	else{
		List_head = new Node (n , List_head);
	}
}

void List::push_back( int n ){ //adds new value in front
	
	Node* ptr = new Node(n, nullptr);
	
	if(List_tail == nullptr){
			
			List_head = List_tail = ptr ;
	}
	else{
		List_tail->next_node = ptr;
		List_tail = ptr;
	}

}

int List::pop_front(){
	
	if(empty())
	{
		return -9999;
	}
	
	if(size()==1)
	{ 
		List_tail = nullptr;
	}
	
	int e = front();
	
	Node* ptr = List_head;
	List_head = head()->next();
	delete ptr;
	
	return e;
}

int List::pop_back(){ //removes value from the back

	int e ;
	
	if(empty())
	{
		return -9999;
	}
	
	if(List_head == List_tail)
	{ 
		
		e = front();
		
		delete List_head;
		List_head = List_tail = nullptr;
		
	}
	else{
		
		Node * ptr ;
		
		for( ptr = head() ; ptr->next()->next() != nullptr ; ptr = ptr->next());
		ptr->next_node = nullptr;
		e = List_tail->retrieve();
		List_tail = ptr;
		
	}
	
	
	return e;
}


int List::size() const{
	int s = 0;
	
	for ( Node* ptr = head() ; ptr != nullptr ; ptr = ptr->next()){
		s++;
	}
	
return s;
}

int List::count(int n ) const{
	int s = 0;
	
	for ( Node* ptr = head() ; ptr != nullptr ; ptr = ptr->next()){
		
		if( ptr->retrieve() == n ) 
		{s++;}
	}
	
return s;
}

int List::erase(int n ) {
	int s = 0;
	
	for ( Node* ptr = head() ; ptr->next() != nullptr ; ptr = ptr->next()){
		//std::cout << ptr->retrieve();
		
		if( ptr->next()->retrieve() == n  ) {
			
			if(ptr->next()==List_tail)
			{
				List_tail = ptr;
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

void List::print(){
	int s = 0;
	for ( Node* ptr = head() ; ptr != nullptr ; ptr = ptr->next()){
		std::cout << ptr->retrieve() << "," ;  s++;
	}
	
	std::cout << std::endl;
	
	std::cout << "count = " << s << std::endl;	
	
}