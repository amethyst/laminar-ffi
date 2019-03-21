#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * Frees an allocated config struct
 */
void free_laminar_config(int32_t *ptr);

/**
 * Generates a default NetworkConfig to be used via FFI
 */
int32_t *get_laminar_config(void);
