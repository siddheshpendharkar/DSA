#include<iostream>
using namespace std;
int main(){


    int Arry[]={1,2,3,4,5,6};
    int Target=5;
    int Size=sizeof(Arry) / sizeof(Arry[0]);
     int Add=0;
     int j=0;

    for(int i=0;i<Size;i++){
        j=i+1;

        Add=Arry[i]+Arry[j];

        if(Add==Target){


            cout<<i<<" "<<j;
        }
        
        
        
        }
    
      

    return 0;

}