#include <iostream>
#include <vector>

// Fungsi untuk mencetak vektor
void printVector(const std::vector<int>& numbers) {
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}

// Metode Bubble Sort
void bubbleSort(std::vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

// Metode Selection Sort
void selectionSort(std::vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 0; i < n - 1; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (numbers[j] > numbers[max_index]) {
                max_index = j;
            }
        }
        std::swap(numbers[i], numbers[max_index]);
    }
}

int main() {
    std::vector<int> numbers = {5, 4, 3, 2, 2, 1, 1};

    std::cout << "Vektor awal: ";
    printVector(numbers);

    std::cout << "Hasil Bubble Sort: ";
    bubbleSort(numbers);
    printVector(numbers);

    std::cout << "Hasil Selection Sort: ";
    selectionSort(numbers);
    printVector(numbers);

    return 0;
}
