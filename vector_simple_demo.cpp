#include<vector>
#include<iostream>
using namespace std;

auto square(auto x) { return x * x; }


int main()
{
    vector v = { 1, 2 }; // Init a vector of ints
    v.push_back(4); // Add an element on to the end

    for (int j = 0; j < v.size(); j++)
        cout << square(v[j]) << ", ";
    return 0;
}
