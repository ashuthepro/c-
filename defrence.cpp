#include<iostream>
using namespace std;
int main()
{
    int a[]={1,23,3,4,6,};
    int size= sizeof(a)/sizeof(a[0]);
    for(int i=0; i<size; i+=1)
    {
        cout<<*(a+i)<<endl;
        //*a=*a+i;
    }
return 0;
}
