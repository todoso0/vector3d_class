/*

    Vector math class definition

    Steven - svill175
    10-09-2026

*/

#include "../header/vector3d.hpp"

vector3d::vector3d(double i, double j, double k) {

    //Initialize the 3d vector with 3 double values

    this->i = i;
    this->j = j;
    this->k = k;

}

void vector3d::display_vector() {

    //Print vector in i-j-k notation to cout

    std::string j_sign = (j >= 0 ? "+" : "");
    std::string k_sign = (k >= 0 ? "+" : "");

    std::cout << i << "i";
    std::cout << j_sign << j << "j";
    std::cout << k_sign << k << "k\n";

}

double vector3d::get_magnitude() {

    //Get the magnitude/length of the vector

    return sqrt(pow(i, 2) + pow(j, 2) + pow(k, 2));

}

vector3d vector3d::get_unit_vector() {

    //Get the unit vector for the current vector
    //Return the result as a new vector3d object

    double magnitude = this->get_magnitude();

    return vector3d(this->i / magnitude, this->j / magnitude, this->k / magnitude);

}

vector3d vector3d::add_vectors(vector3d vector2) {

    //Add the current vector to an input vector
    //Return the result as a new vector3d object

    return vector3d(this->i + vector2.i, this->j + vector2.j, this->k + vector2.k); 

}

vector3d vector3d::subtract_vectors(vector3d vector2) {

    //Subtract the input vector from the current vector
    //Return the result as a new vector3d object

    return vector3d(this->i - vector2.i, this->j - vector2.j, this->k - vector2.k); 

}

double vector3d::dot_product(vector3d vector2) {

    //Get the dot product of the current vector and the input vector returned as a double

    return (this->i * vector2.i + this->j * vector2.j + this->k * vector2.k);

}

vector3d vector3d::cross_product(vector3d vector2) {

    //Get the cross product of the current vector and the input vector
    //Returns the result as a new vector3d object

    double new_i = this->j * vector2.k - this->k * vector2.j;
    double new_j = -(this->i * vector2.k - this->k * vector2.i);
    double new_k = this->i * vector2.j - this->j * vector2.i;

    return vector3d(new_i, new_j, new_k);

}

double vector3d::scalar_triple_product(vector3d vector2, vector3d vector3) {

    //Compute the dot product of the current vector with the cross product of the 2 input vectors
    //Return the resulting scalar value as a double

    vector3d cross_product_vector = vector2.cross_product(vector3);

    return this->dot_product(cross_product_vector);

}