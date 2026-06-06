# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    int count = 0;

    for (int i  = 0; i < a; i++){
        long long m;
        cin >> m;

        if ( m!= 0 and 18 % m == 0 || m % 45 == 0){
            count ++;
        }
    }

    cout << count << endl;
    return 0;
}