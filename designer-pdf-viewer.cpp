#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

/*
When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently.

so basically we need to find the height of each letter index in the given array and whatever number is the greater then
        multiply it by the length of the string to give the rectangle area

*/


int designerPdfViewer(vector<int> h, string word) {

    int max = INT_MIN;
    for (int i = 0; i < word.length(); i++){
        //this will get each letter height index in the 26 letter array
         int letter_height = int(word[i]) - 'a';

         //get the max letter hight
        if(h[letter_height] > max){
            max = h[letter_height];
        }
    }
    return max * word.length();
}


int main(){

    //cout << int('a')-'a' << endl;
    cout << designerPdfViewer({1, 3, 1, 3 ,1, 4, 1, 3, 2 ,5, 5 ,5, 5, 5, 5, 5 ,5, 5, 5, 5, 5, 5, 5, 5 ,5, 7}, "zaba");

    return 0;
}