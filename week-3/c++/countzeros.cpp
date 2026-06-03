# include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;

    int count = 0;

    for (int i = 0; i < a.size(); i++){
        if (a[i] == '0'){
            count += 1;
        }
    }
    // write rest here


    cout << count << endl;

    return 0;
}