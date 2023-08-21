#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    size_t length = strlen(b);
    unsigned int result = 0;

    for (size_t i = 0; i < length; i++) {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        result = (result << 1) + (b[i] - '0');
    }

    return result;
}
