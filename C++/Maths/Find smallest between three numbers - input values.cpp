#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;
    cout << "Enter the 3rd number: ";
    cin >> num3;

    if(num1 < num2 && num1 < num3){
        cout << "Smallest number is: " << num1;
    }else if(num2 < num1 && num2 < num3){
        cout << "Smallest number is: " << num2;
    }else if(num3 < num1 && num3 < num2){
        cout << "Smallest number is: " << num3;
    }else{
        cout << "Something wrong! Entered 2 smallest or more numbers are equal.";
    }
}