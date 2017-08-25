#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <fstream>
#include<iomanip>




#include"edo_2.h"


double f(double x, double y)
{

  double sigma=10.0; 

  return sigma*(y-x); 

}


double g(double x, double y,double z)
{

  double rho=28.0; 

  return rho*x - y -x*z;  

}


double p(double x,double y, double z)
{

  
  double beta=8.0/3.0; 

  return x*y -beta*z; 
  

}


void Lorentz(std::vector<double>& x, std::vector<double>& y,std::vector<double>& z, int N)
{
 
  double a1,a2,a3,a4;
  double b1,b2,b3,b4;
  double c1,c2,c3,c4;
  
  double x_tmp, y_tmp, z_tmp;
  double h=0.001; 
  
  x.push_back(10.0);
  y.push_back(10.0);
  z.push_back(20.0);

  for (int i=1;i<N;i++)
    {
      a1=h*f(x[i-1], y[i-1]);
      b1=h*g(x[i-1], y[i-1],z[i-1]);
      c1=h*p(x[i-1],y[i-1],z[i-1]);

      a2=h*f(x[i-1] +a1/2.0, y[i-1] + a1/2.0);
      b2=h*g(x[i-1] +b1/2.0, y[i-1] + b1/2.0,z[i-1] + b1/2.0 );
      c2=h*p(x[i-1] +c1/2.0,y[i-1] +c1/2.0, z[i-1] + c1/2.0);

      a3=h*f(x[i-1] +a2/2.0, y[i-1] + a2/2.0);
      b3=h*g(x[i-1] +b2/2.0, y[i-1] + b2/2.0,z[i-1] + b2/2.0);
      c3=h*p(x[i-1] +c2/2.0,y[i-1] +c2/2.0, z[i-1] + c2/2.0);

      a4=h*f(x[i-1] +a3, y[i-1] + a3);
      b4=h*g(x[i-1] +b3, y[i-1] + b3,z[i-1] + b3 );
      c4=h*p(x[i-1] +c3/2.0,y[i-1] +c3, z[i-1] + c3);

      x_tmp=x[i-1] + a1 +2*a2+ 2*a3 +a4; 
      y_tmp=y[i-1] + b1 +2*b2+ 2*b3 +b4; 
      z_tmp=z[i-1] + c1 +2*c2+ 2*c3 +c4; 


      x.push_back(x_tmp);
      y.push_back(y_tmp);
      z.push_back(z_tmp);
      
      


    }


}


void write(std::vector<double> const& x, std::vector<double> const& y,std::vector<double> const& z, std::string filename)
{

  std::ofstream file(filename.c_str());

  if(file)

    {
  

  for (int i=0;i<x.size();i++)
    {
      file << x[i] <<"  " <<  y[i] << " " << z[i] <<std::endl;
    }
  
  file.close();

    }

  else  std::cout<<"imposible d'ouvrir le fichier"<<std::endl;
  
  
}
