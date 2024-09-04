#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
    int size=5,n;
    double x[size], y[size],xp,yp=0.0,p;
    for (int i=0; i<size; i++)
    {
        cout<<"enter x data points" ;
        cin>>x[i];
    }
   
    for(int i=0; i<size; i++ )
    {
        cout<<"enter y data points" ;
        cin>>y[i];
    }
    cout<<"order of interpolation and interpolation point xp"<<endl;
    cin>>n>>xp;
    for (int i=1;i<n; i++)
    {
        p=1;
        for (int j=1;j<n;j++)
        {
            if (i!=j)
            {
            p=p*(xp-x[j]/(x[i]-x[j]));
            }
        }
        yp=yp+p*y[i];
    }
    
   cout<<"value of interpolated point at xp is"<<yp<<endl;
   return 0;
}