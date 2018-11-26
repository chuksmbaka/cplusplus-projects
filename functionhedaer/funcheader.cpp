
#include "funcheader.hpp"

int main()
{
  int mm1 = 29;
  int mm2 = 30;
  int numberToIncreament = 34;
  int product;
  int additions;

  product = mm1 * mm2;
  printProduct (mm1, mm2, product);

  additions  = calculateSum (mm1, mm2);
  cout << "sum: " << additions <<endl;

  cout << "\n\nBefore increament: " << numberToIncreament << "\n";
  //cout << "Within increament function: " <<
  increament(numberToIncreament);
  cout << "After increament: " << numberToIncreament << "\n\n";
  return 0;
}
