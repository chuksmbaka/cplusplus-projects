#include "headerfile1.hpp"

int main() {
  /* code */
  string name;
  cout<<"\nHello, I use header files!\n\n";
  cout<<"Type your full name: ";
  cin>>name;
  cout<<"\nName: "<<name<<"\n\n";
  cout<<"NB: cin will cut the name once it encounters space.\n";
  return 0;
}
