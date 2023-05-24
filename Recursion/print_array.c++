#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void print(vector<int>v,int i)
{
  if (v.size() == i)
  {
    return;
  }
   cout << v[i] << " ";
  print(v,i+1);
  
}
int main()
{
  vector<int>v={1,2,3,4,5};
  int i=0;
  print(v,i);
}