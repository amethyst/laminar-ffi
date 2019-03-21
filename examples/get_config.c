#include "laminar_ffi.h"
#include <stdio.h>
#include <string.h>

int main (void) {
    printf("Requesting NetworkConfig...");
    int32_t *laminar_config = get_laminar_config();
    return 0;
}
