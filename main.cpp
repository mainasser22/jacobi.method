#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   struct equation
    {
        double x1,x2,x3,b,r1,r2,r3;
    };
    equation *arr=new equation[3];
    int t=0;
     cout<<"Enter Equations:\n \n";

    cout<<"\t X1 \t X2 \t X3 \t b \n";
    for(int i=0; i<3; i++)
    {
        cout<<"E"<<i+1<<"\t";
        cin>>arr[i].x1>>arr[i].x2>>arr[i].x3>>arr[i].b;
    }
      cout<<"\nEnter numbers of iterations\n";
    cin>>t;
    double x1=0.0,x2=0.0,x3=0.0;
     for(int i=0; i<t; i++){
        arr[i].r1=(1/arr[0].x1)*(arr[0].b-arr[0].x2*x2-arr[0].x3*x3);
        cout<<" ** AT N = "<<i<<"\n \n";
        cout<<"==> X1^"<<i+1<<" = ( 1 / "<<arr[0].x1<<" ) * ( "<<arr[0].b<<" - "<<arr[0].x2<<" * "<<x2<<" - "<<arr[0].x3<<" * "<<x3<<" ) = "<<arr[i].r1<<"\n \n";
         arr[i].r2=(1/arr[1].x2)*(arr[1].b-arr[1].x1*x1-arr[1].x3*x3);
        cout<<"==> X2^"<<i+1<<" = ( 1 / "<<arr[1].x2<<" ) * ( "<<arr[1].b<<" - "<<arr[1].x1<<" * "<<x1<<" - "<<arr[1].x3<<" * "<<x3<<" ) = "<<arr[i].r2<<"\n \n";
         arr[i].r3=(1/arr[2].x3)*(arr[2].b-arr[2].x1*x1-arr[2].x2*x2);
        cout<<"==> X3^"<<i+1<<" = ( 1 / "<<arr[2].x3<<" ) * ( "<<arr[2].b<<" - "<<arr[2].x1<<" * "<<x1<<" - "<<arr[2].x2<<" * "<<x2<<" ) = "<<arr[i].r3<<"\n";
        cout<<"===========================================================================================================\n";
         x1=arr[i].r1;
         x2=arr[i].r2;
         x3=arr[i].r3;

     }

    return 0;
}
