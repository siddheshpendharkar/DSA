#include<iostream>
using namespace std;
int main(){
    
    int a[]={1,2,3,4,6,7,8,9};
    int TotalCount=0;
    int Formule;
    int MissingNumber;
    int Large=a[0];
    int Size= sizeof(a)/sizeof(a[0]);

    for(int i = 0;i<Size;i++){
        if(a[i]>Large){

            Large=a[i];
        }


    }
    cout<<"\n\t "<<Large;

    Formule = (Large * (Large+1))/2;
    cout<<"\n\t "<<Formule;
    // a[0];
    for(int i=0;i<Size;i++){
        a[i];
        TotalCount=TotalCount+a[i];
    

    }
    
cout<<"\n\t "<<TotalCount;

    MissingNumber=Formule-TotalCount;


    cout<<"\n\t missing = "<<MissingNumber;




return 0;
}