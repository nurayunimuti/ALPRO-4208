#include <iostream>
#include <vector>

bool isOdd(int number) {
    return number % 2 != 0;
}

void printSmallestEven(const std::vector<int>& numbers) {
    int smallest_even = 0;
    int smallest_even_index = -1;
    bool found_smallest_even = false;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            if (!found_smallest_even || numbers[i] < smallest_even) {
                smallest_even = numbers[i];
                smallest_even_index = i;
                found_smallest_even = true;
            }
        }
    }

    if (found_smallest_even) {
        std::cout << "Nilai genap terkecil: " << smallest_even << std::endl;
        std::cout << "Index: " << smallest_even_index << std::endl;
    } else {
        std::cout << "Tidak ada bilangan genap dalam deret." << std::endl;
    }
}

int main() {
    std::vector<int> numbers = {6, 7, 4, 3, 2};

    printSmallestEven(numbers);

    return 0;
}
