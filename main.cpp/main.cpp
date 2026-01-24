#include <iostream>
using namespace std;

int sum (int n);
int product (int n);

int main(){

  int n;

  cout << "Give me a number: ";
  cin >> n;

  int final = sum(n);

  int prod = product(n);

  cout << "The sum from 1 to " << n << " is " << final << endl;

  cout << "The product from 1 to " << n << " is " << prod << endl;
  return 0;

}

int sum (int n){
  
  int total = 0;

  for (int i = 1; i <= n; i++){
    total += i;
  }
  return total;
}

int product (int n){
  
  int result = 1;

  for (int i = 1; i<= n; i++){
    result *= i;
  }

  return result;
}
