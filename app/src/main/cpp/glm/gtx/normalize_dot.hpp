
#ifndef GLM_GTX_normalize_dot
#define GLM_GTX_normalize_dot

// Dependency:
#include "../glm.hpp"
#include "../gtx/fast_square_root.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_normalize_dot extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_normalize_dot
	/// @{

	//! Normalize parameters and returns the dot product of x and y.
	//! It's faster that dot(normalize(x), normalize(y)).
	//! From GLM_GTX_normalize_dot extension.
	template <typename genType> 
	GLM_FUNC_DECL typename genType::value_type normalizeDot(
		genType const & x, 
		genType const & y);

	//! Normalize parameters and returns the dot product of x and y.
	//! Faster that dot(fastNormalize(x), fastNormalize(y)).
	//! From GLM_GTX_normalize_dot extension.
	template <typename genType> 
	GLM_FUNC_DECL typename genType::value_type fastNormalizeDot(
		genType const & x, 
		genType const & y);

	/// @}
}//namespace glm

#include "normalize_dot.inl"

#endif//GLM_GTX_normalize_dot
