# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    if (a >90){
        cout << "Excellent" << endl;
    }
    else if (a > 80 and a<= 90){
        cout  << "Good" << endl;
    }
    else if(a > 70 and a <= 80){
        cout  <<"Fair" << endl;
    }
    else if(a >60 and a<= 70){
        cout  << "Meets Expectations" << endl;
    }
    else if(a <= 60){
        cout  << "Below Par" << endl;
    }

    return 0;
}