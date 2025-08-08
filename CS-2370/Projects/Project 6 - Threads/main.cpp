#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>

using namespace std;

ofstream outputFile;
mutex fileLock;
mutex counterLock;
int currentNumber = 2;
int totalPrimesFound = 0;

bool isPrime(int n) {
    if (n == 2) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i <= n / 2; i = i + 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void threadWork(int threadNumber, int* myPrimeCount) {
    *myPrimeCount = 0;

    while (true) {
        int numberToCheck;

        counterLock.lock();

        if (currentNumber > 1000000) {
            counterLock.unlock();
            break;
        }

        numberToCheck = currentNumber;
        currentNumber++;

        counterLock.unlock();

        if (isPrime(numberToCheck)) {
            fileLock.lock();
            outputFile << numberToCheck << endl;
            totalPrimesFound++;
            (*myPrimeCount)++;
            fileLock.unlock();
        }
    }
}

int main() {
    outputFile.open("primes.dat");

    thread threads[4];
    int primeCounts[4];

    for (int i = 0; i < 4; i++) {
        threads[i] = thread(threadWork, i, &primeCounts[i]);
    }

    for (int i = 0; i < 4; i++) {
        threads[i].join();
    }

    outputFile.close();

    cout << "Total number of primes found: " << totalPrimesFound << endl;
    cout << "Primes found by each thread:" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Thread " << i + 1 << ": " << primeCounts[i] << " primes" << endl;
    }

    return 0;
}
