#ifndef NODE_H
#define NODE_H

class Node
{
	
	private :
			int element;
			Node *next_node;
			
	public:
	
		Node( int = 0 , Node* = nullptr);
		
		int retrieve() const;
		Node * next() const;

friend class list;	
};
#endif