#include<iostream>
using namespace std;
int main()
{

    int a[]={1,2,3,4,13,4,5,67,9};
    int size = sizeof(a) / sizeof(a[0]);  // sizeof() give the size in bytes so a divided by 1 number of array in byts so ans is size
    int Large=a[0];
    
   for(int i=0;i<size;i++){

    if(a[i]>Large){
        Large=a[i];
    }

   

    
   }

    cout<<"\n\t Largest = "<<Large;

    return 0;
}