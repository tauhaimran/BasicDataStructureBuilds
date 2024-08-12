#ifndef LIST_H
#define LIST_H

//#include "Node.h"
//#include "Node.cpp"

class Node
{
	
	private :
			int element;
			Node *next_node;
			
	public:
	
		Node( int = 0 , Node* = nullptr);
		
		int retrieve() const;
		Node * next() const;

friend class List;	
};

class List {
	
	private: 
		Node * List_head;
		Node * List_tail;
			
	public:
		
        List();
        List( List const & );
        List( List && );
		~List();
        
		//assignment operators
		List &operator = (List const &);
		List &operator = (List &&);
		
		void swap(List &);
		
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