#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int maxi = -1;
int print(vector<int> v, int i)
{
    if (v.size() == i)
    {
        return maxi;
    }
    maxi=max(maxi,v[i]);
    print(v, i + 1);
    // maxi=max(maxi,v[i]);

}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int i = 0;
    print(v, i);
    cout << maxi;
}