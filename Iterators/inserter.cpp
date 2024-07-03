// inserter() - This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.

#include<iostream> 
#include<iterator> 
#include<vector>

using namespace std;

int main() 
{ 
	vector<int> v1 = { 1, 2, 3, 4, 5 }; 
	vector<int> v2 = {10, 20, 30}; 
	
	// Declaring an iterator to a vector 
	vector<int>::iterator ptr = v1.begin(); 
	
	// Using advance to set position 
	advance(ptr, 3); 
	
	// copying one vector elements in other vector using inserter()
	// inserts v2 after 3rd position in v1
	copy(v2.begin(), v2.end(), inserter(v1,ptr)); 
	
	// Displaying the new vector elements 
	cout << "The new vector after inserting the elements is "; 
	for (int &x : v1) 
		cout << x << " ";

    // copy function is used to perform the operation
    // copy function requires three argument

	return 0;	 
} 
