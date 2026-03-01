#include <iostream>
using namespace std;

void Convert_Binary(int num)
{
  if(num==0)
        return;

  Convert_Binary(num/2);
  cout<<num%2;


}



int main()
{
     int n;
     cout<<"what would you count number ConvToBinary?=";
     cin>>n;

     while(n--)
     {
         int num;
         cin>>num;

            Convert_Binary(num);
            cout<<endl;
     }

    return 0;
}
