#include<iostream>

#include<vector>

#include<fstream>

#include <algorithm>
using namespace std;

int main()

{
  int n ,i ,b,a,result=0;
  ifstream in("file.in.txt",ios::in);
  in >> n;
  
  vector<int>v(n); 
  
  for( i=0;i<n;i++)
  {
  	in >> v.at(i);
  } 
  sort(v.begin(),v.end());
  
   for(a=n-1;a>n-6;a--)
  {
    result=result+v.at(a);
   
  }
   cout << result << endl;
  
    return 0;
}

