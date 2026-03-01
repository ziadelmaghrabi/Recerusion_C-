#include <iostream>
using namespace std;

void Seperate(int num)
{
  if(num==0)
        return;
  Seperate(num/10);
  cout<<num%10<<" ";

}



int main()
{
   Seperate(534);
   cout<<endl;
   Seperate(12346);
    return 0;
}
