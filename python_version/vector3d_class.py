#	Vector math class definition (python)
#
#	Steven - svill175
#	10-10-2026

import math
	
class vector3d:

	def __init__(self, i, j, k):

		#Initialize the 3d vector with 3 values
		
		self.i = i
		self.j = j
		self.k = k

	def display_vector(self):

		#Print vector in i-j-k notation to cout
		
		j_sign = "+" if self.j >= 0 else ""
		k_sign = "+" if self.k >= 0 else ""

		print(f"{self.i}i{j_sign}{self.j}j{k_sign}{self.k}k\n")

	def get_magnitude(self):

		#Get the magnitude/length of the vector

		return math.sqrt(math.pow(self.i, 2) + math.pow(self.j, 2) + math.pow(self.k, 2))

	def get_unit_vector(self):

		#Get the unit vector for the current vector
		#Return the result as a list of vector components

		magnitude = self.get_magnitude()
		return vector3d(self.i / magnitude, self.j / magnitude, self.k / magnitude)

	def add_vectors(self, vector2):

		#Add the current vector to an input vector
		#Return the result as a list of vector components

		return vector3d(self.i + vector2.i, self.j + vector2.j, self.k + vector2.k)

	def subtract_vectors(self, vector2):

		#Subtract the input vector from the current vector
		#Return the result as a list of vector components

		return vector3d(self.i - vector2.i, self.j - vector2.j, self.k - vector2.k)

	def scalar_multiplication(self, scalar):

		#Return a list of vector components that is the current vector multiplied by a scalar value
		
		return vector3d(self.i * scalar, self.j * scalar, self.k * scalar)

	def angle_between_vectors(self, vector2):

		#Return a scalar that is the angle (in radians) between the current vector and the input vector
		
		return math.acos(self.dot_product(vector2) / (self.get_magnitude() * vector2.get_magnitude()))
		
	def projection(self, vector2):

		#Return the projection of vector2 onto the current vector as a list of vector components
		
		scalar = (self.dot_product(vector2) / math.pow(self.get_magnitude(), 2))
		
		multiplied_vector = self.scalar_multiplication(scalar)

		return vector3d(multiplied_vector.i, multiplied_vector.j, multiplied_vector.k)
		
	def dot_product(self, vector2):

		#Get the dot product of the current vector and the input vector returned as a single value
		
		return (self.i * vector2.i + self.j * vector2.j + self.k * vector2.k)

	def cross_product(self, vector2):

		#Get the cross product of the current vector and the input vector
		#Returns the result as a list of vector components
		
		new_i = self.j * vector2.k - self.k * vector2.j
		new_j = -(self.i * vector2.k - self.k * vector2.i)
		new_k = self.i * vector2.j - self.j * vector2.i
		
		return vector3d(new_i, new_j, new_k)

	def scalar_triple_product(self, vector2, vector3):

		#Compute the dot product of the current vector with the cross product of the 2 input vectors
		#Return the resulting scalar value as a single value
		
		cross_product_vector = vector2.cross_product(vector3)
		
		return self.dot_product(cross_product_vector)
