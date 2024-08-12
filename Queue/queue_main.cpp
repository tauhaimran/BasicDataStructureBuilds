#include<iostream>
#include "Queue.h"
#include "Queue.cpp"
	using namespace std;
	
	
int main(){
	
	Queue<int> queue(10);
	
	cout << "Empty? :" << queue.empty() << endl;
	
	queue.enqueue(9);
	queue.enqueue(8);
	queue.enqueue(7);
	queue.enqueue(6);
	queue.enqueue(5);
	queue.enqueue(4);
	
	//cout << "top value:" << queue.front() << endl;
	
	queue.display();
	
	queue.enqueue(3);
	queue.enqueue(2);
	queue.enqueue(1);
	queue.enqueue(0);
	
	cout << "full? : " << queue.full() << endl;
	
	queue.display();
	
	cout << ">> dequeueing process " << endl;
	
	queue.dequeue();	
	queue.display();
	
	queue.dequeue();	
	queue.display();
	
	queue.dequeue();	
	queue.display();
	
	queue.dequeue();	
	queue.display();
	
	queue.dequeue();	
	queue.display();
	
	queue.dequeue();	
	queue.display();
	cout << "queue testing" << endl;	
	return 0;
}