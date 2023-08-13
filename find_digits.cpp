#include <iostream>
using namespace std;

/*
return the digits that can be divisor for given digit n

*/

int findDigits(int n) {

    int counter = 0;
    int digit = n;
    while(digit>0){
        int reminder = digit % 10;
        //make sure divisoris not 0
        if(reminder > 0  && n % reminder==0){
            counter++;
        }

        digit /= 10;
        }
    return counter;
}

int main(){
    int arr[] = {11, 123456789, 114108089, 110110015, 121, 33, 44, 55, 66, 77, 88 ,106108048};

    int answers[] = {3, 3, 6, 2, 2, 2, 2, 2, 2, 2, 5};
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
    //     if(findDigits(arr[i]) != answers[i]){
    //         cout << arr[i] << " mysolution: " << findDigits(arr[i]) << " answer: " << answers[i]<< endl;
    //     }
       
    
    // }

    //cout << findDigits(11);
    //cout << 121 / 10;
    return 0;
}