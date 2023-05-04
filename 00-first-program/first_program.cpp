#include <cstdlib>
#include <iostream>

int main() {

    int x, y;
    std::cout << "Please enter two integer numbers: ";
    std::cin >> x >> y;     // input x and y

    int sum = x + y;        // compute sum
    std::cout << "Their sum is " << sum << std::endl;

    return EXIT_SUCCESS;    // terminate successfully
}
