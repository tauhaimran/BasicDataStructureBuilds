#ifndef LIST_H
#define LIST_H

#include "Node.h"

class list {
	
	private: 
		Node * list_head;
		Node * list_tail;
			
	public:
		
        list();
        list( list const & );
        list( list && );
		~list();
        
		//assignment operators
		list &operator = (list const &);
		list &operator = (list &&);
		
		void swap(list &);
		
		// Accessors
        bool empty() const;
        int size() const;
        int front() const;
        Node *head() const;
        int count( int ) const;

        // Mutators
        void push_front( int ); //adds new value in front
        void push_back( int ); //adds new value in back
        int pop_front(); //removes value from the front
        int pop_back(); //removes value from the back
        int erase( int );
        
        void print();

};


#endif