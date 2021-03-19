#include "tuples.h"

Tuple new_tuple(double x, double y, double z, double w) {
    Tuple t = {
            .x = x,
            .y = y,
            .z = z,
            .w = w
    };

    return t;
}

Point new_point(double x, double y, double z) {
    return new_tuple(x, y, z, 1.0);
}

Vector new_vector(double x, double y, double z) {
    return new_tuple(x, y, z, 0.0);
}