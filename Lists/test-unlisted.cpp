//-testing lists 

#include <iostream>
#include "list.h"
	using namespace std;
	

int main()
{
	//cout << "hello?" << endl;
	int x = 77 ;
	Node TestNode1;
	Node TestNode2(x , &TestNode1);
	
	cout <<  TestNode1.retrieve()  << "-" << TestNode1.next() << endl; //display test 1 contents
	cout <<  TestNode2.retrieve()  << "-" << TestNode2.next() << endl; //display test 2 contents	
	cout << "--" << TestNode2.next()->retrieve() << endl;  //display test 1 contents by using node of test2
	cout << endl << endl;
	//	cout << "hello?" << endl;
		
	list myList;
	cout << "empty? : = "  << myList.empty() << endl;
	cout << "front val? : = "  << myList.front() << endl;
	
	myList.push_front(1) ;
	cout << "front val? : = " << myList.front() << endl;
	
	myList.push_front(2) ;
	cout << "front val? : = " << myList.front() << endl;
	
	myList.push_front(3) ;	
	cout << "front val? : = " << myList.front() << endl;
	
	cout << "empty? : = " << myList.empty() << endl;
	
cout << endl << endl;
	
	
	cout << "pop-front : " << myList.pop_front() << endl;
	cout << "Size : = " << myList.size() << endl;
	cout << "front val? : = " << myList.front() << endl;
	cout << "count of 2: = " << myList.count(2) << endl;

cout << endl;
	
	cout << "pop-front : " << myList.pop_front() << endl;
	cout << "Size : = " << myList.size() << endl;
	cout << "front val? : = " << myList.front() << endl;
	cout << "count of 2: = " << myList.count(2) << endl;
	
cout << endl;

	cout << "pop-front : " << myList.pop_front() << endl;
	cout << "Size : = " << myList.size() << endl;
	cout << "front val? : = " << myList.front() << endl;
	cout << "count of 2: = " << myList.count(2) << endl;
	
cout << endl;	

	cout << "empty? : = " << myList.empty() << endl;
	
cout << endl;	
cout << endl;		
	
	
	//testing erase(int n);
	
	myList.push_front(5) ;
	myList.push_front(4) ;
	myList.push_front(3) ;
	myList.push_front(2) ;
	myList.push_front(1) ;
		myList.print();
		
	cout << "ereased 3 : " << myList.erase(3) << endl;
	
	myList.push_back(6);
	myList.push_back(7);
	myList.push_back(8);
	
	
	myList.print();

	cout << myList.pop_back() << endl;
	
	
	myList.print();

cout << endl;		

	//testing copy constructors
	
	list copy(myList);
	cout << "copied list : " ;
	copy.print();
	


cout << "\n----------------hello?" << endl;



return 0 ;
}

