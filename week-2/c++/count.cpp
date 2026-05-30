# include <iostream>
using namespace std;

int main(){
    int a;
    long long m;
    cin >> a;
    int positive = 0;
    int negative = 0;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < a; i++){
        cin >> m;
        if (m > 0){
            positive += 1;
        }
        else if (m < 0){
            negative += 1;
        }
        if (m % 2 == 0){
            even += 1;
        }
        else {
            odd += 1;
        }
    }

    cout << positive << endl << negative << endl << even << endl << odd << endl;
    return 0;
}