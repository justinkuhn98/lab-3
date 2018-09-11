/**********************************************************
 * AUTHOR       : Justin Kuhn, Jordan Miller
 * LAB   #1     : CS 002 Review
 * CLASS        : CS3A
 * SECTION      : MW: 1:00p - 2:25p, TR: 1:00p - 3:05p
 * Due Date     : 9/11/18
*********************************************************/

#include <iostream>
#include <vector>

using namespace std;

/************************************************************
* DEMONSTRATE VECTOR MEMBER FUNCTION
*_________________________________________________________
* This program demonstrates the various useful functions which are members
* of the vector class. We use the basic size() and capacity() to determine
* the size and capacity of the vector after many of the tests. The empty
* function is tested, along with the different constructors defined for a vector.
* at() is used to fetch elements at certain locations. push_back() and pop_back
* are add or remove the most recently added element.front() and back()
* are used to determine the first and last used element. insert() and erase() are
* used to add and delete entries from the desired index, respectively. Resize()
* is used to change the size of the array, but does not remove capacity.assign()
* replaces the current size of the vector and replaces the remaining elements.
* clear() deletes any elements so that the size is 0;
*_________________________________________________________
* INPUT:
*   v : First vector for testing (default constructor)
*   v2: Second vector for testing (one param. contructor)
*   v3: Third vector for testing (two param. contructor)
*   v4: Fourth vector for testing (push_back(), pop_back(),front(), back(),
*                                  insert(),erase(),resize(), assign(), clear())
* OUTPUT:
* The vectors are outputted if approprate for demonstration
*   v2: Second vector for testing (one param. contructor)
*   v3: Third vector for testing (two param. contructor)
*   v4: Fourth vector for testing (push_back(), pop_back(),front(), back(),
*                                  insert(),erase(),resize(), assign(), clear())

***********************************************************/

int main()
{

    cout << "Testing default constructor" << endl;
    vector<int> v;                              // Initialize with default cons.
    cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
    cout << "Testing empty member function" << endl;
    if( v.empty() )                             // Test if empty
    {
        cout << "v is empty" << endl;
    }
    else
    {
        cout << "v is not empty" << endl;
    }


    cout << "\nTesting One parameter constructor" << endl;
    vector<int> v2(5);                          // Initialize with one param. cons.
    cout << "size: " << v2.size() << " capacity: " << v2.capacity() << endl;
    cout << "Testing empty member function" << endl;
    if( v2.empty() )                            // Test if empty
    {
        cout << "v is empty" << endl;
    }
    else
    {
        cout << "v is not empty" << endl;
    }
    cout << "Testing at function by displaying v2\n";
    for( unsigned int i = 0; i < v2.size(); i++ ){
        cout << v2.at(i) << " ";                // Display element at i index
    }


    cout << "\n\nTesting Two parameter constructor" << endl;
    vector<int> v3(5,9);                        // Initialze with two param. cons.
    cout << "size: " << v3.size() << " capacity: " << v3.capacity() << endl;
    cout << "Testing empty member function" << endl;
    if( v3.empty() )                            // Test if empty
    {
        cout << "v is empty" << endl;
    }
    else
    {
        cout << "v is not empty" << endl;
    }
    cout << "Testing at function by displaying v3\n";
    for( unsigned int i = 0; i < v3.size(); i++ ){
        cout << v3.at(i) << " ";                // Display element at i index
    }




    cout << "\n\nTesting push back function" << endl;
    vector<int> v4;                             // Initialize with default cons.
    for ( int i = 0; i < 10;i++)
    {
        v4.push_back(i);                        // put 0 - 10 in vector sequentially
        cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;

    }



    cout << "\nTesting pop back function" << endl;
    for ( int i = 0; i < 2;i++)
    {
        v4.pop_back();                      // remove last two elements
        cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    }

    cout << "\nTesting front and back functions" << endl;
    cout << "front: " << v4.front() << " back: " << v4.back();


    cout << "\n\nTesting insert() function by adding at position 5" << endl;
    v4.insert(v4.begin() + 5, 100);        // Insert 100 at index 5 (0+5)
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";               // Display  edited vector
    }

    cout << "\n\nTesting erase() function by erasing position 6" << endl;
    v4.erase(v4.begin() + 6);              // Erase element in position 6

    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";              // Display edited vector
    }

    cout << "\n\nTesting resize() function (one parameter)" << endl;
    v4.resize(20);                        // Set size to 20 as well
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }
    v4.resize(10);                        // Resize to 10, cap remains
    cout << "\nsize: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }


    cout << "\n\nTesting resize() function (two parameter)" << endl;
    v4.resize(20, 101);                   // Resize to 20, fill new space with 101
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }
    v4.resize(10, 101);                   // Resize back to 10, eliminate the 101's
    cout << "\nsize: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }


    cout << "\n\nTesting assign() function" << endl;
    v4.assign(5, 102);                    // Erase memory and assign 5 102's to vector
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }

    cout << "\n\nTesting clear() function" << endl;
    v4.clear();                           // Erase, sets size to 0
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl << endl;


return 0;
}
