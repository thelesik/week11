// ConsoleApplication28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include "Header.h"
using namespace std;


int main()
{
    //RandomVector(vector<int>& v, int size) // size //100//1000//5000//10000//50000
    vector<int> v;
    int count = 0;
    RandomVector(v, 50000);

}

/*    for (int i = 0; i < 50000; i++) {
        cout << v[i] << endl;
        count++;
        cout << count << endl;
    }*/
/*    int size = 50000;
    int count = 0;
    vector<int> v(size, 0);
  //  srand(time(0));
    generate(v.begin(), v.end(), rand);
    for (int i = 0; i < size; i++) {
        cout << "v.push_back(" << v[i] << ");" << endl;
        count++;
    }
    cout << count;
    return 0;
    
    
    
    */
/*1.  Rewrite the Bubble sort to use recursion.

2.  Use the time(0) function to determine how many seconds it takes to sort a vector using the recursive method.

3.  Use the time(0) function to determine how many seconds it takes to sort a vector using the non-recursive method described in the videos.

Run the sort test on vectors containing random integers.  You should sort vectors of the following sizes: 100 elements, 1000 elements, 5,000 elements, 10,000 elements and 50,000 elements.

Was the recursive method able to work on vectors of each of those sizes?  If not, explain why it errored.




I need vector with 100 elements, 1000 elements, 5,000 elements, 10,000 elements and 50,000 elements
*/

