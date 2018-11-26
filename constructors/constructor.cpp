#include "constructor.hpp"

int main()
{
  Cats cat1;

  cat1.setName("Buggy");
  cat1.setBreed("German Shepherd");
  cat1.setAge(15);
  //cat1.~Cats();

  cout <<"\nCat1 information: \n";
  cout << cat1.getName() << " a " << cat1.getBreed() <<
       ", " << cat1.getAge() << " years old.\n";
  return 0;
}
