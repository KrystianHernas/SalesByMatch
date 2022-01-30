#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> inputSocks();
int sockMerchant(int, std::vector<int>);

int main()
{
    auto pileOfSocks = inputSocks();
    std::cout << "Amount of pairs: " << sockMerchant(pileOfSocks.size(), pileOfSocks) << std::endl;
    return 0;
}

std::vector<int> inputSocks() {
    int amountOfSocks, temp; std::vector<int> pileOfSocks;
    std::cout << "Input amount of Socks" << std::endl; std::cin >> amountOfSocks;
    for (int i = 0; i < amountOfSocks; i++) {
        std::cout << "Input " << i + 1 << " element: " << std::endl; std::cin >> temp; pileOfSocks.push_back(temp);
    }
    return pileOfSocks;
};

int sockMerchant(int n, std::vector<int> ar) {
    int numberOfPairs = 0, i = 0; std::sort(ar.begin(), ar.end());
    if (ar.size() < 2) return numberOfPairs;
    do{
        if (ar[i] == ar[i + 1]) {
            numberOfPairs++; i += 2;
        }
        else  i++;
    }while (i < ar.size() - 1);
    return numberOfPairs;
}
