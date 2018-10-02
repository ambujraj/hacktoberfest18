#include <stdlib.h>
#include <assert.h>


int factorialize(int n) {
    int result = 1;

    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    assert(factorialize(0) == 1);
    assert(factorialize(5) == 120);
    assert(factorialize(7) == 5040);
    assert(factorialize(9) == 362880);
}
