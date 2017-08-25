#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <fstream> 
#include <cstdlib> 


#include"edo_1.h"
#include"edo_2.h"



using namespace std; 

int main(int argc, char** argv) 
{
   

   if (argc ==3)
    {
      string npoints = argv[1];
      string filename =argv[2]; 


      int N = atoi(npoints.c_str()); 
  
      vector<double> x;
      vector<double> y;
      vector<double> z;

  Lorentz(x,y,z,N);
  write(x,y,z,filename);
    }
  else cout<<"erreur arguments"<<endl; 
  

return 0; 

}
