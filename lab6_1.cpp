#include<iostream>
using namespace std;

int main(){
    int even=0;
    int odd=0;
    int number=0;
    while(true){
        cout << "Enter an integer: ";
        cin >> number;
        if(number == 0){
            break;
        }
        else{
            if(number%2 == 0){
                even++;
            }else
                {
                odd++;
                }
        }
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}