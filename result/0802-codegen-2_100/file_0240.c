
#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>

void a() {
    std::vector<char> s(3); // Initialize vector with size 3
    s.insert(s.begin() + 2, 'b');
    std::cout << s.size() << std::endl;
    
    for (std::vector<char>::iterator i = s.begin(); i != s.end(); ++i) {
        *i = toupper(static_cast<int>(*i));
        std::cout << std::setw(5) << *i;
    }
    std::cout << std::endl;
}

int main() {
    a();
    return 0;
}
