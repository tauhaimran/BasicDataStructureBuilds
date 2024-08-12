#include "Node.h"

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