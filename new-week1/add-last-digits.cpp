# include <iostream>
using namespace std;


int main(){
  
  int a, b;

  cin >> a >> b;

  int new_a = a % 10;
  int new_b = b % 10;


  int new_c = new_a + new_b;

  cout << new_c << endl;



  return 0;
}
