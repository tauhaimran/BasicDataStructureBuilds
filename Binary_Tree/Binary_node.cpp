#include "Binary_node.h"

template <typename Type>
Binary_node<Type>::Binary_node(Type const& obj) :element(obj), left_tree(nullptr), right_tree(nullptr) {
	//empty constructor
}


template <typename Type>
Type Binary_node<Type>::retrieve() const{
	return element;
}


template <typename Type>
Binary_node<Type> * Binary_node<Type>::left() const{
	return left_tree;
}


template <typename Type>
Binary_node<Type> * Binary_node<Type>::right() const{
	return right_tree;
}


template <typename Type>
bool Binary_node<Type>::empty() const{
	return (this == nullptr);
}

template <typename Type>
bool Binary_node<Type>::is_leaf() const{
	return !empty() && left->empty() && right->empty();
}

template <typename Type>
int Binary_node<Type>::size() const{
	return empty ? 0 :
			1 + left()->size() + right()->size();
}

template <typename Type>
int Binary_node<Type>::height() const{
	return empty ? -1 :
			1 + std::max( left()->size() , right()->size() ) ;
} 

template <typename Type>
void Binary_node<Type>::clear(Binary_node * &ptr_to_this ) {

	if(empty())	{
		return;
	}
	
	left()->clear(  left() );
	right()->clear( right() );
	
	delete this;
	ptr_to_this = nullptr;
	
return;
}

