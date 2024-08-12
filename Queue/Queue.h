#ifndef QUEUE_H
#define QUEUE_H

template <typename T> 
class Queue {
	
	private:
		int queue_size;
		int ifront;
		int iback;
		int array_capacity;
		T *array;
	
	public:
		Queue(int = 10);
		~Queue();
		bool empty() const;
		bool full() const;
		T front() const;
		void enqueue(T const&);
		void dequeue();
		T pop();
		void display();
		
		
};

#endif