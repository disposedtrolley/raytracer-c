#pragma once

typedef struct {
    double x, y, z, w;
} Tuple;

typedef Tuple Vector;
typedef Tuple Point;

Tuple new_tuple(double x, double y, double z, double w);
Point new_point(double x, double y, double z);
Vector new_vector(double x, double y, double z);