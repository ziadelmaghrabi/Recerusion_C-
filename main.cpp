#include <iostream>
using namespace std;

void PrintString(int num)
{
    if(num==0)
        return;
    cout<<"I LOVE RECERUSION"<<endl;
    PrintString(num-1);
}

int main()
{
    PrintString(3);

    return 0;
}
