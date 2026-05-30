# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;

    long long multiple = 1;

    for (int i = 1; i <= a; i++){
        multiple *= i;
    }
    cout  << multiple << endl;
    return 0;
}