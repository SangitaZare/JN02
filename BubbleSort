#include<iostream>
using namespace std;
int main()
{
    int num, i, arr[50], j, temp;
    cout<<"Enter the Size (max. 50): ";
    cin>>num;
    cout<<"Enter "<<num<<" Numbers: ";
    for(i=0; i<num; i++)
        cin>>arr[i];
    cout<<"\nSorting the Array using Bubble Sort Technique..\n";
    for(i=0; i<(num-1); i++)
    {
        for(j=0; j<(num-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\nArray Sorted Successfully!\n";
    cout<<"\nThe New Array is: \n";
    for(i=0; i<num; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
