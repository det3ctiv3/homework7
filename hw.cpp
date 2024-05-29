//
// Created by urokov on 5/29/2024.
//

#include <iostream>
using namespace std;

int tugadi(int a, int b){
if (a == 0 or b ==0){
    return 0;
}
else if (b>0){
    return a + tugadi(a, b-1);

}
else {
    return -tugadi(a, -b);
}
}


int sum_of_digits(int n){
    int sum = 0;
if (n < 10){
    return n;

}



else{

    return (n%10) + sum_of_digits(n / 10);




}
}




void decimal_bin(int r){
    if(r >1){
        decimal_bin(r /2);
    }
    cout << r %2;
}

int main(){
int a, b;
cin >> a >> b;
int result = tugadi(a,b);
cout << result << endl;

int n;
cin >> n;
int result_2 = sum_of_digits(n);
cout << result_2 << endl;


int r;
    cin >> r;

    decimal_bin(r);
    cout << endl;
    return 0;
}
