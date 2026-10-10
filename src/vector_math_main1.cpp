/*

    Vector math class main

    Steven - svill175
    10-09-2026

*/

#include "../header/vector3d.hpp"

int main() {

    vector3d vec1(1, 2, 3);
    vector3d vec2(0, 3, 4);

    vec1.display_vector();
    vec2.display_vector();
    std::cout << "\n";

	std::cout << "sum of vec1 + vec2: ";
	vector3d sum_vec12 = vec1.add_vectors(vec2);
	sum_vec12.display_vector();
	std::cout << "\n";

	std::cout << "subtraction of vec1 - vec2: ";
	vector3d sub_vec12 = vec1.subtract_vectors(vec2);
	sub_vec12.display_vector();
	std::cout << "\n";	

	std::cout << "Magnitudes/Lengths of vec1 and vec2: \n";
    std::cout << vec1.get_magnitude() << "\n";
    std::cout << vec2.get_magnitude() << "\n";
    std::cout << "\n";

	std::cout << "Unit vector of vec2: ";
	vector3d unit_vec2 = vec2.get_unit_vector();
	unit_vec2.display_vector();
	std::cout << "\n";

	std::cout << "Dot product of vec1 and vec2: " << vec1.dot_product(vec2) << "\n\n";

    vector3d vec4(1, 2, 2);
    vector3d vec5(2, 3, 5);
    vec4.display_vector();
    vec5.display_vector();
    std::cout << "scalar multiplication of vec4 by 3: \n";
    vector3d multiplied_vec4 = vec4.scalar_multiplication(3);
    multiplied_vec4.display_vector();
    std::cout << "Angle between vec4 and vec5 (in radians): " << vec4.angle_between_vectors(vec5) << "\n";
    std::cout << "Projection of vec5 onto vec4: \n";
    vector3d proj_vec5_onto_vec4 = vec4.projection(vec5);
    proj_vec5_onto_vec4.display_vector();
    std::cout << "\n";

	std::cout << "Cross product of vec1 and vec2: ";
    vector3d vec3 = vec1.cross_product(vec2);
    vec3.display_vector();
	std::cout << "\n";

    vector3d vecA(1, 2, 3);
    vector3d vecB(2, 3, 3);
    vector3d vecC(-7, 8, -9);
    vecA.display_vector();
    vecB.display_vector();
    vecC.display_vector();
    std::cout << "scalar triple product of the above three vectors in that order: " << vecA.scalar_triple_product(vecB, vecC) << "\n";

    return 0;

}