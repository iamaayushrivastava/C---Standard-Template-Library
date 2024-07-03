// advance() - This function is used to increment the iterator position till the specified number mentioned in its arguments.

#include<iostream> 
#include<iterator> 
#include<vector>

using namespace std;

int main() 
{ 
	vector<int> v = { 1, 2, 3, 4, 5 }; 
	
	// Declaring an iterator to a vector 
	vector<int>::iterator ptr = v.begin(); 
	
	// Using advance() to increment the iterator position
	advance(ptr, 1); // points to element 2
	
	// Displaying the iterator position 
	cout << "The position of iterator after advancing is "; 
	cout << *ptr << " "; 
	
	return 0; 
} 
