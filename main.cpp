#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {2, 7, 11, 15};
  int result;
  std::cout << "Enter the result: ";
  std::cin >> result;
  for(int i = 0; i < numbers.size(); ++i) {
    for(int j = 1; j < numbers.size(); ++j) {
      if (numbers[i] + numbers[j] == result) {
        std::cout << numbers[i] << " and " << numbers[j] << std::endl;
        i = numbers.size();
      }
    }
  }
}

/*
Вам даётся массив целых чисел и одно число -- результат. Необходимо найти в массиве 2 числа, сумма которых будет давать результат, и вывести их на экран. Гарантируется, что только одна пара чисел в массиве даёт в сумме результат.
Пример:
a = {2, 7, 11, 15}. Результат = 9
2 + 7 = 9, так что надо вывести числа 2 и 7
*/