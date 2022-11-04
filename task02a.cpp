#include <iostream> // cout, cin
#include <cmath> // sqrt, pow, abs

int main() {
    int size;
    float a=0, dev=0;
    std::cin >> size;
    int *govno = new int[size];
    for (int i = 0; i < size; i++){
        float num;
        std::cin >> num;
        govno[i] = num;
        a += num;
    }
    a = a/size;
    for (int i = 0; i < size; i++){
        dev += (govno[i]-a);
    }
    printf("%4.2f\t",a);
    printf("%5.1f", sqrt(abs(dev)));
    delete [] govno;
    return 0;
}

