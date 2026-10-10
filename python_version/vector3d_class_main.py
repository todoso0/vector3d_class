#    Vector math class main (python version)
#
#    Steven - svill175
#    10-10-2026
#

from vector3d_class import vector3d

vec1 = vector3d(1, 2, 3)
vec2 = vector3d(0, 3, 4)

vec1.display_vector()
vec2.display_vector()
print("")

print("sum of vec1 + vec2: ", end='')
sum_vec12 = vec1.add_vectors(vec2)
sum_vec12.display_vector()
print("")

print("subtraction of vec1 - vec2: ", end='')
sub_vec12 = vec1.subtract_vectors(vec2)
sub_vec12.display_vector()
print("")

print("Magnitudes/Lengths of vec1 and vec2: ")
print(f"{vec1.get_magnitude()}")
print(f"{vec2.get_magnitude()}\n")

print("Unit vector of vec2: ", end='')
unit_vec2 = vec2.get_unit_vector()
unit_vec2.display_vector()
print("")

print(f"Dot product of vec1 and vec2: {vec1.dot_product(vec2)}\n")

vec4 = vector3d(1, 2, 2)
vec5 = vector3d(2, 3, 5)
vec4.display_vector()
vec5.display_vector()
print("scalar multiplication of vec4 by 3: ", end='')
multiplied_vec4 = vec4.scalar_multiplication(3)
multiplied_vec4.display_vector()
print(f"Angle between vec4 and vec5 (in radians): {vec4.angle_between_vectors(vec5)}")
print("Projection of vec5 onto vec4: ", end='')
proj_vec5_onto_vec4 = vec4.projection(vec5)
proj_vec5_onto_vec4.display_vector()
print("")

print("Cross product of vec1 and vec2: ", end='')
vec3 = vec1.cross_product(vec2)
vec3.display_vector()
print("")

vecA = vector3d(1, 2, 3)
vecB = vector3d(2, 3, 3)
vecC = vector3d(-7, 8, -9)
vecA.display_vector()
vecB.display_vector()
vecC.display_vector()
print(f"scalar triple product of the above three vectors in that order: {vecA.scalar_triple_product(vecB, vecC)}")