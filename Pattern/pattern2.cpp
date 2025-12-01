/*
Given an integer N, print N rows of inverted right half pyramid pattern. 
In inverted right half pattern of N rows, the first row has N number of stars, 
second row has (N - 1) number of stars and so on till the Nth row which has only 1 star.

Input: n = 5
Output:
*****
****
***
**
*

*/
#include<iostream>
using namespace std;
int main()
{
  int n;
cin>>n;
for(int i=n;i>=1;i--)
{
  for(int j=1;j<=i;j++){
cout<<"* ";
}
cout<<endl;
}
return 0;
}
