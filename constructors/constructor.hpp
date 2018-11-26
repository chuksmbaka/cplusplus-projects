#include <iostream>
#include <string>

using namespace std;

class Cats
{
  string name;
  string breed;
  int age;

public:
  Cats();
  ~Cats();
  void setName(string nameIn);
  void setBreed(string breedIn);
  void setAge(int ageIn);
  string getName();
  string getBreed();
  int getAge();

  void printInfo();
};

Cats :: Cats()
{
  name = "Unknown Cat";
  breed = "Unknown Cat";
  age = 0;
}

Cats :: ~Cats()
{
  cout << "Deleting the dog\n\n";
}

void Cats :: setName(string nameIn)
{
  name = nameIn;
}

void Cats :: setBreed(string breedIn)
{
  breed = breedIn;
}

void Cats :: setAge(int ageIn)
{
  age = ageIn;
}

string Cats :: getName()
{
  return name;
}

string Cats :: getBreed()
{
  return breed;
}

int Cats :: getAge()
{
  return age;
}
