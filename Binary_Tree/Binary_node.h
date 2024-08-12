#ifndef BINARY_NODE_H
#define BINARY_NODE_H

#include<algorithm>
	
template <typename Type>
class Binary_node {
	
	protected:
		Type element;
		Binary_node *left_tree;	
		Binary_node *right_tree;
		
	public:
		
		Binary_node(Type const &);
		Type retrieve() const;
		Binary_node *left() const;	
		Binary_node *right() const;
		bool empty() const;
		bool is_leaf() const;
		int size() const;
		int height() const;
		void clear(Binary_node *&ptr_to_this );
		
};

#endif