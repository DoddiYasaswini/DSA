/*Given an integer N, print N rows of right half pyramid pattern. 
In right half pattern of N rows, the first row has 1 star,
second row has 2 stars and so on till the Nth row which has N stars. All the stars are left aligned.

Input: 3
Output: 
*
**
***

*/
#include<iostream>
using namespace std;
int main()
{
  int n;
cout<<"Enter n value:";
cin>>n;
for(int i=0;i<n;i++)
{
  for(int j=0;j<=i;j++)
{
  cout<<"* ";
}
cout<<endl;
}
return 0;
}
