#ifndef H_ESSAI
#define H_ESSAI 


#include<vector>

double derivee (double x); 
void euler(std::vector<double>& x,std::vector<double>& y, int N, double a, double b);
void write(std::vector<double> const& x, std::vector<double> const& y, std::string filename); 
void RK2(std::vector<double>& x, std::vector<double>& y, int N,double a, double b);
void RK4(std::vector<double>& x, std::vector<double>& y, int N,double a, double b); 

#endif 
