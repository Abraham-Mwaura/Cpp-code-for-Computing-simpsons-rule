#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
float h=0.1, b=4.0,a=0, xK=0.0;

int main()
{
    int n=((b-a)/h);
    float *Fk = new float(n);
    for (int i=1;i<=n;i++){
        Fk[i]=(float)(16/(16+(float)pow(xK,2)));
        xK=xK+h; 
    }
    float sum_oddFk=0;
    float sum_evenFk=0;
    for (int j=2;j<n;j++){
    if(j%2!=0)
      {
          sum_oddFk = sum_oddFk+Fk[j];
      }
      else{
        sum_evenFk = sum_evenFk+Fk[j];
      }
    } 
    float soltn=h/3*(Fk[1] +(4*sum_oddFk) +(2*sum_evenFk)+ Fk[n]);
    cout<<setprecision(5)<<soltn;
}
