#include <stdio.h>
#include <stdlib.h>

#include "../utils.h"

#define PRINT_TESTS

#include "src/lib.cpp"

#include "src/math/simple.cpp"
#include "src/math/vec2.cpp"
#include "src/math/vec3.cpp"
#include "src/math/vec4.cpp"
#include "src/math/mat4.cpp"

#include "src/prints.cpp"

int main(){
    test_simple_math();
    test_vec2_math();
    test_vec3_math();
    test_vec4_math();
    
    test_mat4_math();
    
    // test_print();
    
    printf("\nAll %d tests passed succesfully\n", _cnt);
    return 0;
}
