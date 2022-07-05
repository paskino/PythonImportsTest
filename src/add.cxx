#include "add.h"

void add(*int in1, *int in2, *int out, int N){

    for (int i=0; i<N; i++){
        *(out + i) = *(in1 + i) + *(in2 + i);
    }

}