#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

/*

    Vector math class header

    Steven - svill175
    10-09-2026

*/

#include <iostream>
#include <cmath>

class vector3d {

    double i, j, k;

    public:

        vector3d(double i, double j, double k);
        void display_vector();

        double get_magnitude();
        vector3d get_unit_vector();

        vector3d add_vectors(vector3d vector2);
        vector3d subtract_vectors(vector3d vector2);
        vector3d scalar_multiplication(double scalar);
        double angle_between_vectors(vector3d vector2);

        vector3d projection(vector3d vector2);
		double dot_product(vector3d vector2);
        vector3d cross_product(vector3d vector2);
        double scalar_triple_product(vector3d vector2, vector3d vector3);

};

#endif