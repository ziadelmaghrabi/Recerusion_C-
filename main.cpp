#include <iostream>
using namespace std;
void DrawPyramid(int currentRow,int h)
{
    if (currentRow>h)
        return;

    for(int i=0;i<h-currentRow;i++)
        cout<<" ";

    for(int i=0;i<2*currentRow-1;i++)
        cout<<"*";

    cout<<endl;

    DrawPyramid(currentRow+1,h);


}




int main()
{
    int h;
    cout<<"enter the Heighet of pyramids?=";
    cin>>h;
     DrawPyramid(0,h);
    return 0;
}
