#include <iostream>
using namespace std;
void SortDesc(int num)
{
    if(num==0)
        return;
    cout<<num<<endl;

    SortDesc(num-1);
}
int main()
{
    SortDesc(5);

     return 0;
}
