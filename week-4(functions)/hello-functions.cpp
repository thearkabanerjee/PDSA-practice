# include <iostream>
using namespace std;

void printer(int a){
    for (int i = 0; i < a; i++){
        cout << "I am learning functions"<< endl;
    }
}

int main(){
    int a;
    cin >> a;
    
    printer(a);
    return 0;
}