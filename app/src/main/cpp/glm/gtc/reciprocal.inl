
#include "../trigonometric.hpp"
#include <limits>

namespace glm
{
	// sec
	template <typename genType>
	GLM_FUNC_QUALIFIER genType sec
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'sec' only accept floating-point values");

		return genType(1) / glm::cos(angle);
	}

	VECTORIZE_VEC(sec)

	// csc
	template <typename genType>
	GLM_FUNC_QUALIFIER genType csc
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'csc' only accept floating-point values");

		return genType(1) / glm::sin(angle);
	}

	VECTORIZE_VEC(csc)

	// cot
	template <typename genType>
	GLM_FUNC_QUALIFIER genType cot
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'cot' only accept floating-point values");

		return genType(1) / glm::tan(angle);
	}

	VECTORIZE_VEC(cot)

	// asec
	template <typename genType>
	GLM_FUNC_QUALIFIER genType asec
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'asec' only accept floating-point values");
	
		return acos(genType(1) / x);
	}

	VECTORIZE_VEC(asec)

	// acsc
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acsc
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acsc' only accept floating-point values");

		return asin(genType(1) / x);
	}

	VECTORIZE_VEC(acsc)

	// acot
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acot
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acot' only accept floating-point values");

		genType const pi_over_2 = genType(3.1415926535897932384626433832795 / 2.0);
		return pi_over_2 - atan(x);
	}

	VECTORIZE_VEC(acot)

	// sech
	template <typename genType>
	GLM_FUNC_QUALIFIER genType sech
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'sech' only accept floating-point values");

		return genType(1) / glm::cosh(angle);
	}

	VECTORIZE_VEC(sech)

	// csch
	template <typename genType>
	GLM_FUNC_QUALIFIER genType csch
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'csch' only accept floating-point values");

		return genType(1) / glm::sinh(angle);
	}

	VECTORIZE_VEC(csch)

	// coth
	template <typename genType>
	GLM_FUNC_QUALIFIER genType coth
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'coth' only accept floating-point values");

		return glm::cosh(angle) / glm::sinh(angle);
	}

	VECTORIZE_VEC(coth)

	// asech
	template <typename genType>
	GLM_FUNC_QUALIFIER genType asech
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'asech' only accept floating-point values");

		return acosh(genType(1) / x);
	}

	VECTORIZE_VEC(asech)

	// acsch
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acsch
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acsch' only accept floating-point values");

		return asinh(genType(1) / x);
	}

	VECTORIZE_VEC(acsch)

	// acoth
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acoth
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acoth' only accept floating-point values");

		return atanh(genType(1) / x);
	}

	VECTORIZE_VEC(acoth)
}//namespace glm
