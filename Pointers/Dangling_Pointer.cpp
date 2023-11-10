#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *ptr=(int *)malloc(sizeof(int));
    *ptr=10;
    cout << "Value pointed to by 'ptr': " << *ptr << endl;
    free(ptr);//Dangling pointer
    cout << "Value pointed to by 'ptr': " << *ptr << endl; //Garbage Value
    ptr=NULL;
    return 0;
}