
#ifndef GLM_GTC_constants
#define GLM_GTC_constants

// Dependencies
#include "../detail/setup.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_constants extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_constants
	/// @{

	/// Return the epsilon constant for floating point types.
	/// @todo Implement epsilon for half-precision floating point type.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType epsilon();

	/// Return 0.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType zero();

	/// Return 1.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType one();

	/// Return the pi constant.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType pi();

	/// Return square root of pi.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType root_pi();

	/// Return pi / 2.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType half_pi();

	/// Return pi / 4.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType quarter_pi();

	/// Return 1 / pi.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType one_over_pi();

	/// Return 2 / pi.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType two_over_pi();

	/// Return 2 / sqrt(pi).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType two_over_root_pi();

	/// Return 1 / sqrt(2).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType one_over_root_two();

	/// Return sqrt(pi / 2).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType root_half_pi();

	/// Return sqrt(2 * pi).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType root_two_pi();

	/// Return sqrt(ln(4)).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType root_ln_four();

	/// Return e constant.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType e();

	/// Return Euler's constant.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType euler();

	/// Return sqrt(2).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType root_two();

	/// Return sqrt(3).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType root_three();

	/// Return sqrt(5).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType root_five();

	/// Return ln(2).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType ln_two();

	/// Return ln(10).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType ln_ten();

	/// Return ln(ln(2)).
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType ln_ln_two();

	/// Return 1 / 3.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType third();

	/// Return 2 / 3.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType two_thirds();

	/// Return the golden ratio constant.
	/// @see gtc_constants
	template <typename genType>
	GLM_FUNC_DECL genType golden_ratio();

	/// @}
} //namespace glm

#include "constants.inl"

#endif//GLM_GTC_constants
