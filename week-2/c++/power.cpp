# include <iostream>
using namespace std;

int main(){
    int a, b;
    long long multiple = 1;
    cin >> a>> b;

    if (b == 0){
        multiple = 1;
    }else {
        for (int i = 1; i <= b; i++){
        multiple *= a;
        }
    }
    

    cout << multiple << endl;
    return 0;
}