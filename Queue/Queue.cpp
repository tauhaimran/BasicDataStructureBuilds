#include "Queue.h"
#include <algorithm>
#include <iostream>

template <typename T>
Queue<T>::Queue (int n ) : queue_size(0) ,iback(-1),ifront(0),array_capacity(std::max(1,n)),array( new T[array_capacity]){
	//empty constructor
}

template <typename T>
Queue<T>::~Queue(){
	delete [] array;
}

template <typename T>
bool Queue<T>::empty() const{
	return (queue_size == 0);
}

template <typename T>
bool Queue<T>::full() const{
	return (queue_size == array_capacity);
}

template <typename T>
T Queue<T>::front() const{
	if(empty()){
		//throw underflow()
		std::cout << ">> empty queue! " << std::endl;
		}
	else{
		return array[ifront];	
	}
}


template <typename T>
void Queue<T>::enqueue(T const& obj){
	if ( queue_size == array_capacity ) {
        //throw overflow();
        std::cout << ">> Full queue! " << std::endl;
    }
    else {
    ++iback;
    array[iback] = obj;
    ++queue_size;
    	
	}

}


template <typename T>
T Queue<T>::pop(){
	if(empty()){
		//throw underflow()
		std::cout << ">> empty queue! " << std::endl;
		}
	else{
		--queue_size; ++ifront;
		return array[ifront-1];	
	}
}


template <typename T>
void Queue<T>::dequeue(){
	if(empty()){
		//throw underflow()
		std::cout << ">> empty queue! " << std::endl;
		}
	else{
		--queue_size; ++ifront;
		//return array[ifront-1];	
	}
}

template <typename T>
void Queue<T>::display(){
	if(empty()){

		std::cout << "inside queue ::  " ;
		for(int i = 0 ; i<array_capacity && i<= queue_size ; i++){
			std::cout <<  array[i] << " - ";
		}
		std::cout << std::endl;
	}
}