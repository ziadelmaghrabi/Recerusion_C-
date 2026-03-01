#include <iostream>
using namespace std;
void SortASC(int num)
{
    if(num==0)
        return;

    SortASC(num-1);
    cout<<num<<endl;

}
int main()
{
    SortASC(5);

     return 0;
}
