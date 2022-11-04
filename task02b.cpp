#include <iostream> // cout, cin
#include <cmath> // sqrt, pow

//все случаи учтены

int main() {
    int step, size,  size_real;
    float a=0, dev;
    std::cin >> step >> size;
    size_real = size/step;
    int *govno = new int[size_real];
    for (int i = 0; i < size_real; i++){
        float num;
        std::cin >> num;
        govno[i] = num;
        a += num;
        size -= 1;
        for (int c = 1; c < step; c++ ){
            float sym;
            std::cin >> sym;
            size -=1;
        }
    }
    if (size%step!=0){
        float num;
        std::cin >> num;
        a += num;
        size -= 1;
    }
    while (size !=0){
        float sym;
        std::cin >> sym;
        size -=1;
    }
    for (int i = 0; i < size_real; i++) {
        dev += (govno[i] - a);
    }
    printf("%4.2f\t",a/size_real);
    printf("%4.2f", dev);
    delete [] govno;
    return 0;

}

