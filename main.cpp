#include <iostream>
using namespace std;

#include <iostream>
#include <string>

bool isPrime(int n) {
        for (int i=2;i*i<=n;i++) {
            if (n%i==0) {
                return false;
                break;
            }
        }
        return true;
}
