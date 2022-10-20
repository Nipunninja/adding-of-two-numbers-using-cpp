#include<iostream>
using namespace std;
int main(){

    int firstnumber, secondnumber, sum;
    cout << "Enter two integers:";
    cin >> firstnumber >> secondnumber;
    sum = firstnumber + secondnumber;
    cout << firstnumber << " + " << secondnumber << " = " << sum;
    return 0;
}