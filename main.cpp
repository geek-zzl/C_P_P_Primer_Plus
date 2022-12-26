#include <iostream>
#include <vector>

std::vector<int> a;

int main() {
    for (int i = 0; i < 100; i ++) {
        a.push_back(i);
    }
    std::cout << "Hello, World!" << std::endl;
    while (!a.empty()) {
        std::cout << a.back() << std::endl;
        a.pop_back();
    }
    return 0;
}
