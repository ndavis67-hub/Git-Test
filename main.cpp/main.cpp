#include <iostream>
using namespace std;

int sum (int n);
int main(){

  int n;

  cout << "Give me a number: ";
  cin >> n;

  int final = sum(n); 

  cout << "The sum from 1 to " << n << " is " << final << endl;
  return 0;

}

int sum (int n){
  int total = 0;

  for (int i = 1; i <= n; i++){
    total += i;
  }
  return total;
}
