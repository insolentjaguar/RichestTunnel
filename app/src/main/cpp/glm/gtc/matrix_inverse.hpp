
#ifndef GLM_GTC_matrix_inverse
#define GLM_GTC_matrix_inverse

// Dependencies
#include "../detail/setup.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_matrix_inverse extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_matrix_inverse
	/// @{

	/// Fast matrix inverse for affine matrix.
	/// 
	/// @param m Input matrix to invert.
	/// @tparam genType Squared floating-point matrix: half, float or double. Inverse of matrix based of half-precision floating point value is highly innacurate.
	/// @see gtc_matrix_inverse
	template <typename genType> 
	GLM_FUNC_DECL genType affineInverse(genType const & m);

	/// Compute the inverse transpose of a matrix.
	/// 
	/// @param m Input matrix to invert transpose.
	/// @tparam genType Squared floating-point matrix: half, float or double. Inverse of matrix based of half-precision floating point value is highly innacurate.
	/// @see gtc_matrix_inverse
	template <typename genType> 
	GLM_FUNC_DECL typename genType::value_type inverseTranspose(
		genType const & m);

	/// @}
}//namespace glm

#include "matrix_inverse.inl"

#endif//GLM_GTC_matrix_inverse
