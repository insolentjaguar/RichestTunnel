
#ifndef GLM_GTC_matrix_access
#define GLM_GTC_matrix_access

// Dependency:
#include "../detail/setup.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_matrix_access extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_matrix_access
	/// @{

	/// Get a specific row of a matrix.
	/// @see gtc_matrix_access
	template <typename genType>
	GLM_FUNC_DECL typename genType::row_type row(
		genType const & m, 
		length_t const & index);

	/// Set a specific row to a matrix.
	/// @see gtc_matrix_access
	template <typename genType>
	GLM_FUNC_DECL genType row(
		genType const & m,
		length_t const & index,
		typename genType::row_type const & x);

	/// Get a specific column of a matrix.
	/// @see gtc_matrix_access
	template <typename genType>
	GLM_FUNC_DECL typename genType::col_type column(
		genType const & m,
		length_t const & index);

	/// Set a specific column to a matrix.
	/// @see gtc_matrix_access
	template <typename genType>
	GLM_FUNC_DECL genType column(
		genType const & m,
		length_t const & index,
		typename genType::col_type const & x);

	/// @}
}//namespace glm

#include "matrix_access.inl"

#endif//GLM_GTC_matrix_access
