#ifndef H_EDO_2
#define H_EDO_2 


#include<vector>

double f(double x, double y);
double g(double x, double y,double z);
double p(double x, double y,double z);
void Lorentz(std::vector<double>& x, std::vector<double>& y,std::vector<double>& z, int N);
void write(std::vector<double> const& x, std::vector<double> const& y,std::vector<double> const& z, std::string filename);


#endif 
