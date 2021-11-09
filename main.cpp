#include <iostream>
using namespace std;


int main() {
    int n=0;
    int fibonacci_p= 1, fibonacci=1;
    cin >> n;
    if(n>=2) {
        cout << fibonacci << endl;
        cout << fibonacci_p << endl;
        for (int i = 1; i < n - 1; i++) {
            int temp = fibonacci;
            fibonacci += fibonacci_p;
            fibonacci_p = temp;
            cout << fibonacci << endl;
        }
    }else{
        cout << "errore"<<endl;
    }
    return 0;
}
