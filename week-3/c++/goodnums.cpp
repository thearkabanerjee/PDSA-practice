// good number if
// x is a factor of 18
// or x is a multiple of 45


# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;

    int goodnums = 0;

    for (int i = 0; i < a; i++){
        long long b;
        cin >> b;

        if ((b != 0 && 18 % b == 0) || (b % 45 == 0)){
            goodnums += 1;
        }
    }

    cout << goodnums << endl;
    return 0;
}