#include<iostream>
using namespace std;
int main(){

    int a[]={1,1,2,3,4};
    int Dubli;

    int size=sizeof(a)/sizeof(0);

        for(int i=0;i<size;i++){

            if(a[i]!=a[i+1])
            {
                
                Dubli=a[i];
                cout<<"\n\t "<<Dubli;

            }
        }
        




    return 0;
}