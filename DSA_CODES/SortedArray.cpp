#include<iostream>
using namespace std;
int main()
{

    int a[]={1,2,3,10,5,6};
    int size = sizeof(a) / sizeof(a[0]);  // sizeof() give the size in bytes so a divided by 1 number of array in byts so ans is size
    
    int count=0;
    
   for(int i=1;i<size;i++){

    if(a[i]>a[i-1]){
        // Large=a[i];
        
        count++;
        // cout<<"\n\t yes";
        
        
       

    }
    
   }
   cout<<"\n\t "<<count;
   

   

    return 0;
}