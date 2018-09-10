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



    cout << "\n\n\nTesting one parameter..." << endl;
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
    for( int i = 0; i < v2.size(); i++ ){
        cout << v2.at(i) << " ";
    }




    cout << "\n\n\nTesting tow parameters..." << endl;
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
    for( int i = 0; i < v2.size(); i++ ){
        cout << v2.at(i) << " ";
    }
    cout << endl << endl;

return 0;
}
