/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

//TODO: include the necessary libraries
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <float> vFloat;
    std :: cout << "vFloat has " << vFloat.size() <<" elements\n";

  //Changing the size of vectorInts to 6
  //TODO: Change the size of vFloat to 10 elements
  vFloat.resize(10);
  std::cout<<"\n\n vFloat now has "<<vFloat.size()<<" elements\n";

  //creating a vector of integers
  vector <int> vectorInts;
  //creating an iterator for the vector
  vector <int> :: iterator it;

  cout << "vectorInts has " << vectorInts.size() << " elements.\n";

  cout << "\n\nAdding four elements to vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.assign(4,3);
  cout << "vectorInts has " << vectorInts.size() << "elements";

  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout << *it << " ";

    cout << endl << endl;
  return 0;
}