#include<iostream>
using namespace std;
class matrix
{
    public:
        int a[2][2];
        void read()
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                    cin>>a[i][j];
            }
        }
        void display()
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
        matrix operator +(matrix m2)
        {
            matrix res;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                    res.a[i][j]=a[i][j]+m2.a[i][j];
            }
            return res;
        }
};
int main()
{
    matrix m1,m2,m3;
    m1.read();
    m2.read();
    m3=m1+m2;
    m3.display();
}