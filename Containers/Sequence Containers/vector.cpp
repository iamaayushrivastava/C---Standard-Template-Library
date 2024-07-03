// TOPIC: Vector in C++ (std::vector) 

// Syntax: std::vector<T> vectorname;
// where T stands for data type

// NOTES

// 1. std::vector is a sequence container and also known as Dynamic Array or Array List.
// 2. Its size can grow and shrink dynamically, no need to provide size at compile time.
// 3. They possesses the ability to resize themselves automatically when an element is inserted or deleted.
// 4. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
// 5. In vectors, data is inserted at the end.

// TIME COMPLEXITY

// Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

// Access Elements
// at(), [], front(), back(), data()

// Iterators
// begin(), end(), rbegin(), rend(), cbegin(), cend()

// Modifiers
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear(), assign()

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    // Declaration
    vector<int> v1;

    //Initalisation with a single value
    // vector<datatype> name(size, value);
    vector<int> v2 (5, 20);

    // Initialisation using initializer list 
    vector<int> v3 = { 1, 2, 3, 4, 5 };

    // Uniform initialization
    vector<int> v4 { 1, 2, 3, 4, 5 };

    // Initialisation using list
    vector<int> v5 ({ 1, 2, 3, 4, 5 });

    // Printing the elements of vector
    // cout << "The v2 elements are ";
    // for (int i = 0; i < 1; i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    cout << "The v3 elements are ";
    for (int i = 0; i < 5; i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // Printing the elements of vector
    // for(const auto &v:v3)
    // {
    //     cout << v << endl;
    // }

    // Modifying Elements
    v3[3] = 10;
    v3.at(3) = 10;

    // cout << "The modified v3 elements are ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v3[i] << " ";
    // }
    // cout << endl;

    // Modifiers

    // Assign vector 
    vector<int> v;

    // Fill the vector with 10 five times 
    v.assign(5, 10);

    cout << "The vector elements are "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << endl;
    
    // Size of the vector v
    int n = v.size();
    cout << "The size of the vector is " << n;

    // Insert 15 to the last position 
    v.push_back(15); 
    cout << "\nThe last element is " << v[v.size() - 1] << endl;

    // Remove the last element 
    v.pop_back();

    cout << "The vector elements are "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";

    // Insert 5 at the beginning 
    v.insert(v.begin(), 5); 
  
    cout << "\nThe first element after inserting 5 is " << v[0]; 
  
    // erase() - It is used to remove elements from a container from the specified position or range
    // vectorname.erase(position); for deletion at specific position
    // vectorname.erase(startingposition, endingposition); // for deletion in range
    v.erase(v.begin()); // Remove the first element 
  
    cout << "\nThe first element after erase is " << v[0];
    
    // emplace() - The function returns an iterator that points to the newly inserted element
    auto itr = v.emplace(v.begin(), 5); 
    cout << "\nThe first element is " << v[0]; // Insert at the beginning

    cout << "\nIterator returned by emplace() points to " << &(*itr) << endl;

    cout << "Element pointed by emplace() iterator " << (*itr);

    // Inserts 20 at the end 
    v.emplace_back(20); 
    n = v.size(); 
    cout << "\nThe last element is " << v[v.size()-1]; 
  
    // Erases the vector 
    v.clear(); 
    cout << "\nVector size after clear() operation is " << v.size();
    cout << "\n";

    // Clear the vector v1 and v2
    v1.clear();
    v2.clear();

    // swap() - It is used to swap the contents of one vector with another vector of same type. Sizes may differ

    // Two vector v1 and v2 to perform swap
    v1.push_back(1); 
    v1.push_back(2);
    v1.push_back(3); 
    v2.push_back(3); 
    v2.push_back(4);

    // Size of the vector v1 and v2
    cout << "The size of the vector v1 and v2 is " << v1.size() << " and " << v2.size() << " respectively";
  
    cout << "\nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 

    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    // Swaps v1 and v2 
    v1.swap(v2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " ";

    // Capacity

    vector<int> v6 = {1, 2, 3, 4, 5};

    // empty() - Returns T/F whether the container is empty
    cout << "\nempty() returns " << v6.empty();

    // max_size() - Returns the maximum number of elements that the vector can hold
    cout << "\nMaximum size: " << v6.max_size();

    // capacity() - Returns the size of the storage space currently allocated to the vector expressed as number of elements
    cout << "\nCapacity of the vector is " << v6.capacity();

    // resize(n) – Resizes the container so that it contains ‘n’ elements. It changes the size of the vector but does not destroys the elements
    v6.resize(10);
    cout << "\nSize of vector v6 after resize is " << v6.size();

    // Add elements to vector v2
    v6.push_back(11);
    v6.push_back(12);
    v6.push_back(13);
    v6.push_back(16);

    v6.resize(4); // Resize the vector

    // Even after resize, the elements are accessible
    // Printing the elements of vector v6
    cout << "\nVector elements after shrink_to_fit() are ";
    for(int i = 0; i < 10; i++)
        cout << v6[i] << " ";

    // shrink_to_fit() - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    v6.shrink_to_fit(); // Shrink the size till which elements are valid
 
    cout << "\nVector size after shrink_to_fit() is "
    << v6.size();
 
    cout << "\nVector elements after shrink_to_fit() are ";
    for (int i = 0; i < 10; i++)
        cout << v6[i] << " ";

    return 0;
}