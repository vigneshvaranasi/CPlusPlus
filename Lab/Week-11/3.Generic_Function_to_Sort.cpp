#include<iostream>
#include<algorithm>
using namespace std;
template<class t>
void fsort(t a,int n)
{
    sort(a,a+n);
    cout<<"Sorted Elements are:"<<endl;
    for(int i=0;i<n;++i)    
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    int a[]={1,5,3,2,9,4};
    n=sizeof(a)/sizeof(a[0]);
    fsort(a,n);

    string str[]={"hello","all","good","morning"};
    n=sizeof(str)/sizeof(str[0]);
    fsort(str,n);

    char ch[]={'h','e','l','l','o'};
    n=sizeof(ch)/sizeof(ch[0]);
    fsort(ch,n);

}