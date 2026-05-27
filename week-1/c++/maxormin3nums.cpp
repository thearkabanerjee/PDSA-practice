# include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a>> b >> c;

    int minimum, maximum;

    if (a >= max(b,c)){
        maximum = a;
    }else if (b >= max(a, c)){
        maximum = b;
    }
    else{
        maximum = c;
    }


    if (a <= min(b,c)){
        minimum = a;
    }else if (b <= min(a, c)){
        minimum = b;
    }
    else{
        minimum = c;
    }

    cout << "Min = "<< minimum << endl;
    cout << "Max = "<< maximum << endl;
    return 0;
}