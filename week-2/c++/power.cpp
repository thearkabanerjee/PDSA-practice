# include <iostream>
using namespace std;

int main(){
    int a, b;
    long long multiple = 1;
    cin >> a>> b;

    for (int i = 0; i < b; i++){
        multiple *= a;
    }

    cout << multiple << endl;
    return 0;
}