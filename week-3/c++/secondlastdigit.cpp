# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int number = 0;
    
    for (int i = 0 ; i < 2; i ++){
        number = a % 10;
        a /= 10;
    }
    

    cout << number << endl;
    return 0;
}