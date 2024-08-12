#ifndef STACK_H
#define STACK_H
#include <algorithm>



template < typename Typ > class stack {
	
	private:
		
		int stack_size;
		int array_capacity;
		Typ* array;
		
	public:
		
		//construcstors & destructors
		stack(int n = 10 );
		~stack();
		
		//functions
		bool empty() const;
		Typ top() const;
		void push (Typ const & );
		Typ pop();
		void display();
		
		

};


#endif