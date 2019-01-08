
#include "_vectorize.hpp"
#include <cmath>
#include <limits>

namespace glm
{
	// radians
	template <typename genType>
	GLM_FUNC_QUALIFIER genType radians
	(
		genType const & degrees
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'radians' only accept floating-point input");

		return degrees * genType(0.01745329251994329576923690768489);
	}

	VECTORIZE_VEC(radians)
	
	// degrees
	template <typename genType>
	GLM_FUNC_QUALIFIER genType degrees
	(
		genType const & radians
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'degrees' only accept floating-point input");

		return radians * genType(57.295779513082320876798154814105);
	}

	VECTORIZE_VEC(degrees)

	// sin
	template <typename genType>
	GLM_FUNC_QUALIFIER genType sin
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'sin' only accept floating-point input");

		return genType(::std::sin(angle));
	}

	VECTORIZE_VEC(sin)

	// cos
	template <typename genType>
	GLM_FUNC_QUALIFIER genType cos(genType const & angle)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'cos' only accept floating-point input");

		return genType(::std::cos(angle));
	}

	VECTORIZE_VEC(cos)

	// tan
	template <typename genType>
	GLM_FUNC_QUALIFIER genType tan
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'tan' only accept floating-point input");

		return genType(::std::tan(angle));
	}

	VECTORIZE_VEC(tan)

	// asin
	template <typename genType>
	GLM_FUNC_QUALIFIER genType asin
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'asin' only accept floating-point input");

		return genType(::std::asin(x));
	}

	VECTORIZE_VEC(asin)

	// acos
	template <typename genType>
	GLM_FUNC_QUALIFIER genType acos
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acos' only accept floating-point input");

		return genType(::std::acos(x));
	}

	VECTORIZE_VEC(acos)

	// atan
	template <typename genType>
	GLM_FUNC_QUALIFIER genType atan
	(
		genType const & y, 
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'atan' only accept floating-point input");

		return genType(::std::atan2(y, x));
	}

	VECTORIZE_VEC_VEC(atan)

	template <typename genType>
	GLM_FUNC_QUALIFIER genType atan
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'atan' only accept floating-point input");

		return genType(::std::atan(x));
	}

	VECTORIZE_VEC(atan)

	// sinh
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType sinh
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'sinh' only accept floating-point input");

		return genType(std::sinh(angle));
	}

	VECTORIZE_VEC(sinh)

	// cosh
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType cosh
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'cosh' only accept floating-point input");

		return genType(std::cosh(angle));
	}

	VECTORIZE_VEC(cosh)

	// tanh
	template <typename genType>
	GLM_FUNC_QUALIFIER genType tanh
	(
		genType const & angle
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'tanh' only accept floating-point input");

		return genType(std::tanh(angle));
	}

	VECTORIZE_VEC(tanh)

	// asinh
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType asinh
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'asinh' only accept floating-point input");
		
		return (x < genType(0) ? genType(-1) : (x > genType(0) ? genType(1) : genType(0))) * log(abs(x) + sqrt(genType(1) + x * x));
	}

	VECTORIZE_VEC(asinh)

	// acosh
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType acosh
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'acosh' only accept floating-point input");

		if(x < genType(1))
			return genType(0);
		return log(x + sqrt(x * x - genType(1)));
	}

	VECTORIZE_VEC(acosh)

	// atanh
	template <typename genType>
	GLM_FUNC_QUALIFIER genType atanh
	(
		genType const & x
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<genType>::is_iec559, "'atanh' only accept floating-point input");
		
		if(abs(x) >= genType(1))
			return 0;
		return genType(0.5) * log((genType(1) + x) / (genType(1) - x));
	}

	VECTORIZE_VEC(atanh)

}//namespace glm
