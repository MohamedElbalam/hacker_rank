#include <iostream>
using namespace std;

/*
each cycle we alternate between spring and summer
during the spring it doubles the height of 1 
during the summer it add 1 to the height

*/

int utopianTree(int n) {

    //int i=1;
    int growth = 1;
    
    // if(n==1){
    //     return growth * 2;
    // }
    // while(n>0){

    //     if(i%2==0){
    //         growth = growth *2;
           
    //     }
    //     else{
    //          growth++;

    //     }
    //     i++;
    //     n--;
    // }

    for (int i = 1; i <= n; i++){
        //for spring 
        if(i%2 == 1 ){
            growth *=2;
        }
        //for summer and when we have one season 
        if(i%2==0 && n != 1){
          growth ++;
        }
    }

        return growth;
}



int main(){

    cout << utopianTree(0);
    return 0;
}