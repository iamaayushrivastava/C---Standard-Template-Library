// TOPIC: Iterators

// NOTES

// 1. Iterators are used to point at the memory addresses of STL containers.
// 2. They are primarily used in sequences of numbers, characters etc.
// 3. They reduce the complexity and execution time of the program.

#include<iostream> 
#include<iterator> // include this for iterators 
#include<vector>

using namespace std; 

int main() 
{ 
	vector<int> v = { 1, 2, 3, 4, 5 }; 
	
	// Declaring an iterator to a vector 
	vector<int>::iterator ptr; 
	
	// Displaying the vector elements using begin() and end() 
	cout << "The vector elements are : "; 
	for (ptr = v.begin(); ptr < v.end(); ptr++)
    { 
		cout << *ptr << " ";
        // cout << typeid(ptr).name() << endl; // Print the type of iterator
    }

    cout << endl;

    // Displaying the address of vector elements
	for (ptr = v.begin(); ptr < v.end(); ptr++)
    {
	// 	cout << (ptr) << " "; // Invalid operation, ptr shows the address of the iterator object
        cout << &(*ptr) << " " << endl;
        // When iterating over a std::vector and you want to print the addresses of the elements where the iterator points, you need to dereference the iterator and then use the address-of operator (&). Printing the iterator itself directly won't show the address of the element it points to, but rather the address of the iterator object.
    }
	return 0;	 
}