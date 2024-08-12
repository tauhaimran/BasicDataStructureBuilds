#include "Node.h"

template <typename T>
Node<T>::Node( int e, Node *n ):element( e ),next_node( n ) 
{
    // empty constructor
}

template <typename T>
T Node<T>::retrieve() const {
	return element; 
}

template <typename T>
Node<T>* Node<T>::next() const {
	return next_node;
}
