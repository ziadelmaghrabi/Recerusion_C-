#include <iostream>
using namespace std;

void Even_index(int arr[],int size1)
{
  if(size1<0)
        return;
  if( size1%2==0)
 cout<<arr[size1]<<" ";

  Even_index(arr,size1-1);
}






int main()
{
    int s;
    cout<<"enter size of array?=";
    cin>>s;
    int arr[100];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    Even_index(arr,s-1);

    return 0;
}
