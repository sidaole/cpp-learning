#include <iostream>
using namespace std;
int* findMax(int* arr, int n) {
    int* p1;
    int* p2;
    p1=arr;
    p2=arr;
    for (p1;p1<arr+n;p1++) {
        if (*p1>*p2) {
            p2=p1;
        }
    }
    return p2;
}

int main() {
    int array[5]={10,20,30,40,50};
    int* p=array;
    for (int i=0;i<5;i++) {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
}
