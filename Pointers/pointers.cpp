#include<iostream>
#include<string>
using namespace std;

int main(){
  int a = 54;
  int * pointerToA = &a; //Pointer points to the address of a.
  cout<< "\nAddress of a: " << &a << endl; // display address of a.
  cout<< "pointerToA stores: " << pointerToA <<"\n";
  cout<< "pointerToA points to: " << * pointerToA <<"\n\n"; //pointer dereferencing
  return 0;
}
