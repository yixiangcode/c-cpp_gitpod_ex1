#include <iostream>
using namespace std;

struct Distance{
    int m;
    float cm;
};

typedef struct Distance_t{
    int m;
    float cm;
} distance_t;

distances add(distances d1, distances v2){
    distances dd;
    int temp;
    dd.cm = d1.cm + d2.cm;
    if (dd.cm > 100){
        //temp = dd.cm % 100.0f;
        temp = dd.cm - (dd.m * 100.0f);
        dd.cm = temp;
    }
    dd.m = dd.m + d1.m + d2.m;

    return dd;
}

int main(){
    struct Distance d1, d2;
    distance_t d3, d4;
    distances* p_d;
    d1.m = 1;
    d1.cm = 78.5;
    d2.m = 1;
    d2.cm = 77.5;
    p_d = &d1;
    *p_d = add(*p_d, d2);
    d1 = add(d1, d2);
    printf("Your height = %d m %f cm \n", p_d->m, p_d->cm);
    return 0;
}