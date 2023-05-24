#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int sum = 0;
int print(vector<int> v, int i)
{
    if (v.size() == i)
    {
        return sum;
    }
    sum += v[i];
    print(v, i + 1);
    // sum += v[i];
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int i = 0;
    print(v, i);
    cout << sum;
}