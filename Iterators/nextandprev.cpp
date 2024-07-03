// next() - This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.

// prev() - This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments.

#include<iostream> 
#include<iterator> 
#include<vector>

using namespace std;

int main() 
{ 
	vector<int> v = { 1, 2, 3, 4, 5 }; 
	
	// Declaring iterators to a vector 
	vector<int>::iterator ptr = v.begin(); 
	vector<int>::iterator ftr = v.end(); 
	
	// Using next() to return new iterator 
	auto itr1 = next(ptr, 3); 	// points to element 4 
	
	// Using prev() to return new iterator 
	auto itr2 = prev(ftr, 3); 	// points to element 3 
	
	// Displaying the iterator position 
	cout << "The position of new iterator using next() is "; 
	cout << *itr1 << " "; 
	cout << endl; 
	
	// Displaying the iterator position 
	cout << "The position of new iterator using prev() is "; 
	cout << *itr2 << " "; 
	cout << endl; 
	
	return 0; 
} 
