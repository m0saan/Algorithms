
#include <vector>


void shiftItems(std::vector<int> &input, int &index, int &j) {
    int current = 0;
    if (input[index] < input[j]){
        current = input[j];
        input[j] = input[index];
        input[index] = current;
        index--;
    }
}

void insertion_sort(std::vector<int>& input){
    int current = 0;
    for (int i = 1; i < input.size(); ++i) {
        auto index = i;
        for (int j = i - 1; j >= 0; j--) shiftItems(input, index, j);
    }
}

