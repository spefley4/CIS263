#include <iostream>

template<typename T>

class Stack2 {

	public:
		// Constructor
		Stack2() {
			data = new T[initSize];
		}
		// Destructor
		~Stack2() {
			delete[] ourData;
		}
	
	private:	
		int initSize = 100;
		int size = 0;
		T* ourData;
};
