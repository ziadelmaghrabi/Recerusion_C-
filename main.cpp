 #include <iostream>
using namespace std;

int maxnum(int arr[], int index)
{
    if(index == 0)  // Base case
        return arr[0];

    int localMax = maxnum(arr, index - 1);

    if(arr[index] > localMax)
        return arr[index];
    else
        return localMax;
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

 cout<<maxnum(arr,n-1);
    return 0;
}
