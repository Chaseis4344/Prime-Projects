#include <iostream>
using namespace std;

//Sieve of Sundaram
int main() 
{
  

  int comp[100000];
  
for(int i=1;i<100000;i++)
  {
  comp[i] = 1;
  }
for(int i = 2 ; i<100000; i++)
{
  for(int j = 2; j<4999 && j*i<100000;j++)
  {

    comp[j*i] = 0;
  }
 if(comp[i] == 1)
 {
   cout << i <<endl;
 } 

}

  return 0;
}