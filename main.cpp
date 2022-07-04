#include <iostream>

using namespace std;

int factorial(int num){
  int total = 1;
  if(num == 1)
    return 1;
  if(num == 0)
    return 0;
  else{
    for(int i = 1; i <= num; i++){
      total *= i;
    }
  }
  return total;
}

int main() {
  int n1;
  cout << "Please enter a number" << endl;
  cin >> n1;
  cout << n1 << "! = " << factorial(n1) << endl;
} 