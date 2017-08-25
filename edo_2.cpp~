#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <fstream>
#include<iomanip>




#include"edo_1.h"


double derivee (double x) 
{

  double dx;
  double lambda = 1.8e-3;
  dx = -lambda*x;
  return dx; 
	
}




void euler(std::vector<double>& x, std::vector<double>& y, int N,double a, double b)
{

  
  double h =fabs(b-a)/(double)N; 
   
  double y_tmp, x_tmp; 
  
  x.push_back(0.0);
  y.push_back(6.0e20);

  for (int i=0; i<N-1;i++)
    {
       y_tmp= y[i] + derivee(y[i])*h;
       x_tmp = x[i] + h; 
      
      x.push_back(x_tmp);
      y.push_back(y_tmp);
      
    }
  
  //for (int i=0; i<N;i++) 
  //  std::cout<< i << " x:"<<x[i]<<" "<<"y :"<<y[i]<<std::endl; 


}


void RK2(std::vector<double>& x, std::vector<double>& y, int N,double a, double b)
{
 
  double k1,k2,y_tmp, x_tmp; 
  double h =fabs(b-a)/(double)N; 

  std::cout<<h<<std::endl; 
  x.push_back(0.0);
  y.push_back(6.0e20);

  for (int i=1;i<N;i++)
    {

      k1=y[i-1] + h*derivee(y[i-1])/2.0;
       k2=derivee(k1);
       
      y_tmp= y[i-1] + h*k2;  
      x_tmp = x[i-1] + h;

      x.push_back(x_tmp);
      y.push_back(y_tmp);

      
      // std::cout<<k1<<" "<<k2<<" "<<y[i]<<std::endl;


    }

}

  

void RK4(std::vector<double>& x, std::vector<double>& y, int N,double a, double b)
{
 
  double k1,k2,k3,k4,y_tmp, x_tmp; 
  double h =fabs(b-a)/(double)N; 

  std::cout<<h<<std::endl; 
  x.push_back(0.0);
  y.push_back(6.0e20);

  for (int i=1;i<N;i++)
    {

      k1=derivee(y[i-1]);
      k2=derivee(y[i-1] + h*k1/2.0);
      k3=derivee(y[i-1] + h*k2/2.0);
      k4=derivee(y[i-1] + h*k3);
      y_tmp= y[i-1] + h*(k1+2*k2+2*k3+k4)/6.0;  
      x_tmp = x[i-1] + h;

      x.push_back(x_tmp);
      y.push_back(y_tmp);

      
      // std::cout<<k1<<" "<<k2<<" "<<y[i]<<std::endl;


    }


}


void write(std::vector<double> const& x, std::vector<double> const& y, std::string filename)
{

  std::ofstream file(filename.c_str());

  if(file)

    {
  

  for (int i=0;i<x.size();i++)
    {
      file << x[i] <<"  " <<  y[i] <<std::endl;
    }
  
  file.close();

    }

  else  std::cout<<"imposible d'ouvrir le fichier"<<std::endl;
  
  
}
