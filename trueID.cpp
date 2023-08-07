#include<iostream>
#include<vector>
using namespace std;
int find_max_prize(vector<int> &array, int number) {
    int max_prize = array[0] + array[1];
    for (int i = 0; i < number - 1; i++) {
        if (max_prize < array[i] + array[i + 1]) {
            max_prize = array[i] + array[i + 1];
        }
    }
    return max_prize;
}
int main(){
    int number_test, vector_size;
    cin >> number_test;
    vector<vector<int> > vectors;
    for(int i = 0; i < number_test; i++){
        cin >> vector_size;
        vector<int> currentVector(vector_size);
        for(int j = 0; j < vector_size; j++){
            cin >> currentVector[j];
        }
        vectors.push_back(currentVector);
    }
    for(int i = 0; i < number_test; i++){
         cout << find_max_prize(vectors[i], vectors[i].size()) <<"\n";
    }
    return 0;
}