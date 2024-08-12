#include "stack.h"
#include <algorithm>
#include <iostream>
	using namespace std;

template < typename Typ > 
		stack<Typ>::stack(int n ): stack_size(0) , array_capacity( std::max(1,n) ) , array ( new Typ[array_capacity] ){
	//empty constructor 
	std::cout << "constructor called" << std::endl;
}

template < typename Typ > 
		stack<Typ>::~stack( ){
	delete[] array;
	std::cout << "destructor called" << std::endl;
}

template < typename Typ > 
		bool stack<Typ>::empty() const{
			return ( stack_size == 0);
		}
		
template < typename Typ > 
		Typ stack<Typ>::top() const{
			if(empty()){
				//throw underflow;
			}
			return array[stack_size-1];
		}

template < typename Typ > 
		Typ stack<Typ>::pop() {
	    if ( empty() ) {
	        //throw underflow(); 
	        cout << "error";
	        //break;
	    }

	    --stack_size;
	    return array[stack_size];
	}

template < typename Typ > 
		void stack<Typ>::push( Typ const &obj ) {
	    if ( stack_size == array_capacity ) {
	        //throw overflow();  // Best solution?????
	    }

	    array[stack_size] = obj;
	    ++stack_size;
	}

template < typename Typ > 	
void stack<Typ>::display(){
	for(int i = stack_size - 1 ; i>=0 ; i--){
		std::cout << array[i] << endl;
	}
}