#include <iostream>
#include <vector>

using namespace std;

int main()
{

    cout << "Testing default constructor..." << endl;
    vector<int> v;
    cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
    cout << "Testing empty member function" << endl;
    if( v.empty() )
    {
        cout << "v is empty" << endl;
    }
    else
    {
        cout << "v is not empty" << endl;
    }


    cout << "\n\n\nTesting one parameter constructor" << endl;
    vector<int> v2(5);
    cout << "size: " << v2.size() << " capacity: " << v2.capacity() << endl;
    cout << "Testing empty member function" << endl;
    if( v2.empty() )
    {
        cout << "v is empty" << endl;
    }
    else
    {
        cout << "v is not empty" << endl;
    }
    cout << "Testing at function by displaying contents of v2\n";
    for( unsigned int i = 0; i < v2.size(); i++ ){
        cout << v2.at(i) << " ";
    }


    cout << "\n\n\nTesting two parameter constructor" << endl;
    vector<int> v3(5,9);
    cout << "size: " << v3.size() << " capacity: " << v3.capacity() << endl;
    cout << "Testing empty member function" << endl;
    if( v3.empty() )
    {
        cout << "v is empty" << endl;
    }
    else
    {
        cout << "v is not empty" << endl;
    }


    cout << "Testing at function by displaying contents of v2\n";
    for( unsigned int i = 0; i < v3.size(); i++ ){
        cout << v3.at(i) << " ";
    }
    cout << endl << endl;



    cout << "\n\n\nTesting push_back() function" << endl;
    vector<int> v4;
    for ( int i = 0; i < 10;i++)
    {
        v4.push_back(i);
        cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    }



    cout << "\n\n\nTesting pop_back() function" << endl;
    for ( int i = 0; i < 2;i++)
    {
        v4.pop_back();
        cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    }

    cout << "\n\n\nTesting front and back functions" << endl;
    cout << "front: " << v4.front() << " back: " << v4.back() << endl;


    cout << "\n\n\nTesting insert() function by inserting at position 5" << endl;
    v4.insert(v4.begin() + 5, 100);
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }

    cout << "\n\n\nTesting erase() function by erasing at position 6" << endl;
    v4.erase(v4.begin() + 6);

    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }

    cout << "\n\n\nTesting resize() function (one parameter)" << endl;
    v4.reserve(20);
    v4.resize(20);
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }
    v4.resize(10);
    cout << "\nsize: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }



    cout << "\n\n\nTesting resize() function (two parameters)" << endl;
    v4.resize(20, 101);
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }
    v4.resize(10, 101);
    cout << "\nsize: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }


    cout << "\n\n\nTesting assign() function" << endl;
    v4.assign(5, 102);
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl;
    for ( unsigned int i = 0; i < v4.size() ;i++)
    {
       cout << v4[i] << " ";
    }

    cout << "\n\n\nTesting clear() function" << endl;
    v4.clear();
    cout << "size: " << v4.size() << " capacity: " << v4.capacity() << endl << endl;


return 0;
}
