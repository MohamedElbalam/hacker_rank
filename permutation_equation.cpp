#include <iostream>
#include <vector>
using namespace std;


int find_index(int num, vector<int>arr){
    int i;
    for (i = 0; i < arr.size(); i++){
        if(num == arr[i]){
            break;
        }
    }
    return i + 1;
}

vector<int> permutationEquation(vector<int> p) {

    vector<int> result;

    for (int i = 0; i<p.size(); i++){
        int index = find_index(i+1, p);
        result.push_back(find_index(index, p));
        
    }
    return result;
}

int main(){

    vector<int> result = permutationEquation({4, 3, 5, 1 ,2});
    for(int i: result){
        cout << i << " ";
    }
    return 0;
}