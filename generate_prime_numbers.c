#include <stdio.h>

int* get_prime_numbers(int size){
    int cursor = 0;
    int* primes = (int*) malloc (size*sizeof(int));
    primes[cursor++] = 2;

    for(int i = 3; cursor < size; i+=2){
        char has_divisor = 0;
        for(int j = 0; j < cursor && primes[j]*primes[j] <= i; j++){
            if(i % primes[j] == 0){
                has_divisor = 1;
                break;
            }
        }
        if(!has_divisor)
            primes[cursor++] = i;
    }
    return primes;
}

int main(){
    // 1 000 000 - ~2 seconds
    // 2 000 000 - ~5 seconds
    // 3 000 000 - ~10 seconds
    int* primes = get_prime_numbers(1000);
}
