// TOPIC: Array class in C++ (std::array)

// Syntax: std::array<T, N> arrayname;
// where T stands for data type and N stands for array size

// NOTES

// 1. std::array is a container that encapsulates fixed size arrays.
// 2. arraysize is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements
//    a. at()
//    b. []
//    c. get() // get<index>(array)
//    d. front()
//    e. back()
//    f. data() // gives access to the underlying array
// 5. The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages of array class over C-style array are as follows:
//    i. Array classes knows its own size, whereas C-style arrays lack this property. So when passing to functions, we don’t need to pass size of Array as a separate parameter.
//    ii. With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay into pointers
//    iii. Array classes are generally more efficient, light-weight and reliable than C-style arrays.

#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int main()
{
    // Declare the array
    array<int, 5> array1;

    // Initialization using initializer list
    array1 = {1,2,3,4,5};

    // Uniform initialization
    array<int, 5> array2 {1,2,3,4,5};

    // Printing the array elements using at()
    cout << "The array elements are (using at()) ";
    for (int i = 0; i < 5; i++)
        cout << array1.at(i) << " ";
    cout << endl;

    // Printing the array elements are (using at[])
    cout << "The array elements are (using at[]) ";
    for (int i = 0; i < 5; i++)
        cout << array1[i] << " ";
    cout << endl;

    // Printing the array elements using get()
    // This function is not the member of array class but overloaded function from class tuple
    cout << "The array elements are (using get()) ";
    cout << get<0>(array1) << " " << get<1>(array1) << " ";
    cout << get<2>(array1) << " " << get<3>(array1) << " ";
    cout << get<4>(array1);
    cout << endl;

    // Print the first element of the array
    cout << "First element: " << array1.front() << endl;

    // Print the first element of the array
    cout << "Last element: " << array1.back() << endl;;

    // The array::data() is a built-in function in C++ STL which returns an pointer pointing to the first element in the array object
    int *ptr = array1.data(); // First element of the array
    // cout << *ptr << endl;

    // Printing array elements using data()
    cout << "The array elements are (using data()) ";
    for (int i = 0; i < 5; i++)
    {
        cout << "Element: " <<  *ptr << " " << "Address: " << ptr << "\n";
        ptr++;
    }
    cout << endl;

    return 0;
}