
#ifndef GLM_GTC_ulp
#define GLM_GTC_ulp

// Dependencies
#include "../detail/setup.hpp"
#include "../detail/precision.hpp"
#include "../detail/type_int.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_ulp extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_ulp
	/// @{

	/// Return the next ULP value(s) after the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType next_float(genType const & x);

	/// Return the previous ULP value(s) before the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType prev_float(genType const & x);

	/// Return the value(s) ULP distance after the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType next_float(genType const & x, uint const & Distance);

	/// Return the value(s) ULP distance before the input value(s).
	/// @see gtc_ulp
	template <typename genType>
	GLM_FUNC_DECL genType prev_float(genType const & x, uint const & Distance);
	
	/// Return the distance in the number of ULP between 2 scalars.
	/// @see gtc_ulp
	template <typename T>
	GLM_FUNC_DECL uint float_distance(T const & x, T const & y);

	/// Return the distance in the number of ULP between 2 vectors.
	/// @see gtc_ulp
	template<typename T, template<typename> class vecType>
	GLM_FUNC_DECL vecType<uint> float_distance(vecType<T> const & x, vecType<T> const & y);
	
	/// @}
}// namespace glm

#include "ulp.inl"

#endif//GLM_GTC_ulp

