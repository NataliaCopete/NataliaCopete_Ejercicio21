#include <iostream>

using std::cout;
using std::endl;

int main(){

double c=1.0;
double T=0.5;
double dx=0.001;
double dt=0.001;
double xmin=0.0;
double xmax=2.0;
int N=(xmax-xmin)/dx;
 double * u;
double *u1;
double *u2;

double t=0;
 
u=new double[N];
u1=new double[N];
u2=new double[N];


for(int i=0;i<N;i++){
   if(dx*i>=0.75 && dx*i<=1.25){
     
     u1[i]=1;
     u2[i]=1;
    
     
}
   else{
      
      u1[i]=0;
      u2[i]=0;
      
      
}  
}
for (int j=0;j<T/dt;j++)
{

for(int i=1;i<N-1;i++){
 
  u[i]= (-c*(u1[i]-u1[i-1])/dx)*dt+u1[i];
  
}
for (int i=1;i<N-1;i++)
{
u1[i]=u[i];
}

}

for(int i=0;i<N;i++)
{
cout<<i*dx<<" "<<u[i]<<" "<<u2[i]<<endl;
}
return 0;
}


