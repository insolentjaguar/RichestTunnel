
#ifndef GLM_GTC_random
#define GLM_GTC_random

// Dependency:
#include "../vec2.hpp"
#include "../vec3.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_random extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_random
	/// @{
	
	/// Generate random numbers in the interval [Min, Max], according a linear distribution 
	/// 
	/// @param Min 
	/// @param Max 
	/// @tparam genType Value type. Currently supported: half (not recommanded), float or double scalars and vectors.
	/// @see gtc_random
	template <typename genType>
	GLM_FUNC_DECL genType linearRand(
		genType const & Min,
		genType const & Max);

	/// Generate random numbers in the interval [Min, Max], according a gaussian distribution 
	/// 
	/// @param Mean
	/// @param Deviation
	/// @see gtc_random
	template <typename genType>
	GLM_FUNC_DECL genType gaussRand(
		genType const & Mean,
		genType const & Deviation);
	
	/// Generate a random 2D vector which coordinates are regulary distributed on a circle of a given radius
	/// 
	/// @param Radius 
	/// @see gtc_random
	template <typename T>
	GLM_FUNC_DECL detail::tvec2<T, defaultp> circularRand(
		T const & Radius);
	
	/// Generate a random 3D vector which coordinates are regulary distributed on a sphere of a given radius
	/// 
	/// @param Radius
	/// @see gtc_random
	template <typename T>
	GLM_FUNC_DECL detail::tvec3<T, defaultp> sphericalRand(
		T const & Radius);
	
	/// Generate a random 2D vector which coordinates are regulary distributed within the area of a disk of a given radius
	/// 
	/// @param Radius
	/// @see gtc_random
	template <typename T>
	GLM_FUNC_DECL detail::tvec2<T, defaultp> diskRand(
		T const & Radius);
	
	/// Generate a random 3D vector which coordinates are regulary distributed within the volume of a ball of a given radius
	/// 
	/// @param Radius
	/// @see gtc_random
	template <typename T>
	GLM_FUNC_DECL detail::tvec3<T, defaultp> ballRand(
		T const & Radius);
	
	/// @}
}//namespace glm

#include "random.inl"

#endif//GLM_GTC_random
