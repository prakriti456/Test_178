#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList = { 30, 20, 10, 50, 40 };
    auto maxi = max_element(myList.begin(), myList.end());

    // Printing the maximum element of the list
    cout << "The maximum element in the list is : " << *maxi
         << endl;

    return 0;
}