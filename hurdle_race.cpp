#include <iostream>
#include <vector>
#include <climits>
using namespace std;
/*
each player need to have a certain height to jump all the hurdels 
giving k as height and n for the heights
each player needs a potion to jump all the hurdels
potion is calculated by max n- k
if the player does not need a potion then return 0

*/

int hurdleRace(int k, vector<int> height) {

    int max = INT_MIN;
    for (int heights: height){
        if(heights > max){
            max = heights;
        }
    }
    if(k>max){
        return 0;
    }
    return max - k;
}



int main(){

    cout << hurdleRace(4, {1, 6, 3 ,5 ,2});
    return 0;
}