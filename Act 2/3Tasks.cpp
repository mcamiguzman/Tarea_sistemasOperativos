#include <iostream>
#include <vector>

class PrimeChecker {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2 || num == 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false;
        }
        return true;
    }

    std::vector<int> findPrimesInList(const std::vector<int>& numbers) {
        std::vector<int> primes;
        for (int num : numbers) {
            if (isPrime(num)) {
                primes.push_back(num);
            }
        }
        return primes;
    }

    std::vector<int> findPrimesInRange(int start, int end) {
        std::vector<int> primes;
        for (int i = start; i <= end; i++) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }
        return primes;
    }
};

void checkSinglePrime(PrimeChecker& primeChecker) {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (primeChecker.isPrime(num)) {
        std::cout << num << " is a prime number.\n";
    } else {
        std::cout << num << " is not a prime number.\n";
    }
}

void findPrimesInList(PrimeChecker& primeChecker) {
    int size;
    std::cout << "Enter the size of the list: ";
    std::cin >> size;
    std::vector<int> numbers(size);
    std::cout << "Enter the numbers:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }
    std::vector<int> primes = primeChecker.findPrimesInList(numbers);
    std::cout << "Prime numbers in the list are: ";
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << "\n";
}

void findPrimesInRange(PrimeChecker& primeChecker) {
    int start, end;
    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;
    std::vector<int> primes = primeChecker.findPrimesInRange(start, end);
    std::cout << "Prime numbers in the range are: ";
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << "\n";
}

int main() {
    PrimeChecker primeChecker;
    checkSinglePrime(primeChecker);
    findPrimesInList(primeChecker);
    findPrimesInRange(primeChecker);
    return 0;
}
