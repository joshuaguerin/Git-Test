
#include <iostream>

using namespace std;

int sum(int n);
int product(int n);
 
int main() {
  int n=0;
  
  cout << "Please enter a value: ";
  cin >> n;
  
  cout << "Total from 1 to " << n << " is: " << sum(n) << endl;
  cout << "Product from 1 to " << n << " is: " << product(n) << endl;

  return 0;
}

int sum(int n) {
  int sum=0;
  
  for(int i=1; i<=n; i++)
    sum += i;
  
  return sum;
}

int product(int n) {
  int product=1;
  
  for(int i=1; i<=n; i++)
    product *= i;

  return product;
}
