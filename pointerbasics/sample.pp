#include <iostream>

using namespace std;

int main()
{

  int* ptr = new int(5);

  cout<<"start 1.0 "<<endl;
  cout<<"pointer value of ptr = "<<*ptr<<endl;
  cout<<"value of ptr = "<<ptr<<endl;
  cout<<"address of ptr = "<<&ptr<<endl;
  cout<<"end 1.0 "<<endl;

  delete ptr;
  ptr = nullptr;

  cout<<"start 2.0 "<<endl;
 // cout<<"pointer value of ptr = "<<*ptr<<endl; // dereferencing null pointer undefined behaviour
  cout<<"value of ptr = "<<ptr<<endl;
  cout<<"address of ptr = "<<&ptr<<endl;
  cout<<"end 2.0 "<<endl;

  return 0;
}

