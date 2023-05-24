#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void print(vector<int>v,int i)
{
  if (v.size() == i)
  {
    return;
  }
   
  print(v,i+1);
  cout << v[i] << " ";
  
}
int main()
{
  vector<int>v={1,2,3,4,5};
  int i=0;
  print(v,i);
}