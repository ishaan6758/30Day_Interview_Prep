//Q1)Find Duplicates in an array

//Elements remain  between size of array 
//find_duplicates work if only  a element has a single copy and fails if
// we have occurence of a number more than 2 ,find_duplicates2 handel all 
 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find_duplicates(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
   if(arr[abs(arr[i])]>=0)
   arr[abs(arr[i])]=-arr[abs(arr[i])];
   else
   cout<<abs(arr[i])<<" "; 
  }
  cout<<endl;
}

void find_duplicates2(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int index=arr[i]%n;
    arr[index]+=n;
  }

  for(int i=0;i<n;i++)
  {
    //cout<<arr[i]<<" ";
    if((arr[i]/n)>1)
      cout<<i<<" ";
  }
}
int main()
{
int arr[]={1,2,2,3,4,2};

int n=sizeof(arr)/sizeof(arr[0]);
find_duplicates(arr,n);

int arr2[]={1,2,2,3,4,2};
find_duplicates2(arr2,n);
}
