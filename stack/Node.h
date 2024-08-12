#ifndef NODE_H
#define NODE_H

template <typename T> class Node{
	
	private :
			T element;
			Node *next_node;
			
	public:
	
		Node( int = 0 , Node* = nullptr);
		
		T retrieve() const;
		Node * next() const;

friend class List;	
};


#endif
