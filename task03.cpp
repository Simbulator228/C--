#include <iostream>
using namespace std;

void swap_pointers(int *a, int *b) {
    int swap = *a;
    *a = *b;
    *b = swap;
}

void swap_links(int& a,int& b){
    int swap = a;
    a = b;
    b = swap;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    printf("%d - %p\n", a, &a);
    printf("%d - %p\n", b, &b);
    swap_pointers(&a, &b);
    swap_links(a,b);
    printf("%d - %p\n", a, &a);
    printf("%d - %p\n", b, &b);
}

