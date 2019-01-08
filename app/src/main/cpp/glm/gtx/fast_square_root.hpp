
#ifndef GLM_GTX_fast_square_root
#define GLM_GTX_fast_square_root

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_fast_square_root extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_fast_square_root
	/// @{

	//! Faster than the common sqrt function but less accurate.
	//! From GLM_GTX_fast_square_root extension.
	template <typename genType> 
	GLM_FUNC_DECL genType fastSqrt(genType const & x);

	//! Faster than the common inversesqrt function but less accurate.
	//! From GLM_GTX_fast_square_root extension.
	template <typename genType> 
	GLM_FUNC_DECL genType fastInverseSqrt(genType const & x);

	//! Faster than the common inversesqrt function but less accurate.
	//! From GLM_GTX_fast_square_root extension.
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> fastInverseSqrt(vecType<T, P> const & x);

	//! Faster than the common length function but less accurate.
	//! From GLM_GTX_fast_square_root extension.
	template <typename genType> 
	GLM_FUNC_DECL typename genType::value_type fastLength(genType const & x);

	//! Faster than the common distance function but less accurate.
	//! From GLM_GTX_fast_square_root extension.
	template <typename genType> 
	GLM_FUNC_DECL typename genType::value_type fastDistance(genType const & x, genType const & y);

	//! Faster than the common normalize function but less accurate.
	//! From GLM_GTX_fast_square_root extension.
	template <typename genType> 
	GLM_FUNC_DECL genType fastNormalize(genType const & x);

	/// @}
}// namespace glm

#include "fast_square_root.inl"

#endif//GLM_GTX_fast_square_root
