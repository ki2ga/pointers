#include <iostream>
#include "slist.cpp"

int main() {
    SList list;
    list.prepend(5);
    list.prepend(8);
    list.prepend(11);
    list.prepend('a');
    std::cout << list.show();
}
