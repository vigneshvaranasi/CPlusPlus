#include<iostream>
using namespace std;
class product;
class box
{
    private:
        double vol;
    public:
        void setvolume()
        {
            cout<<"Enter Volume:";
            cin>>vol;
        }
        friend bool checksize(box,product);
    
};
class product
{
    private:
        int l,w,d;
    public:
        void setdimensions()
        {
            cout<<"Enter Dimensions:";
            cin>>l>>w>>d;
        }
    friend bool checksize(box,product);
};
bool checksize(box bobj,product pobj)
{
    double cksize;
    cksize=pobj.l*pobj.w*pobj.d;
    if(cksize<=bobj.vol)
        return true;
    else
        return false;
}

int main()
{
    box bobj;
    product pobj;
    bobj.setvolume();
    pobj.setdimensions();

    bool res=checksize(bobj,pobj);

    if(res)
        cout<<"Product Fits into Box";
    else
        cout<<"Product Doesn't Fit into Box";
}