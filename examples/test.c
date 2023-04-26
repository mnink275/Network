#include <iostream>
#include <unistd.h>

int main() {
    const size_t len = 30;
    char name[len];
    gethostname(name, len);
    for (int i = 0; i < len; ++i) {
        std::cout << name[i];
    }
    std::cout << "\n";

    return 0;
}