
#ifndef GLM_GTC_reciprocal
#define GLM_GTC_reciprocal

// Dependencies
#include "../detail/setup.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_reciprocal extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_reciprocal
	/// @{

	/// Secant function. 
	/// hypotenuse / adjacent or 1 / cos(x)
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType sec(genType const & angle);

	/// Cosecant function. 
	/// hypotenuse / opposite or 1 / sin(x)
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType csc(genType const & angle);
		
	/// Cotangent function. 
	/// adjacent / opposite or 1 / tan(x)
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType cot(genType const & angle);

	/// Inverse secant function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType asec(genType const & x);

	/// Inverse cosecant function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType acsc(genType const & x);
		
	/// Inverse cotangent function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType acot(genType const & x);

	/// Secant hyperbolic function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType sech(genType const & angle);

	/// Cosecant hyperbolic function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType csch(genType const & angle);
		
	/// Cotangent hyperbolic function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType coth(genType const & angle);

	/// Inverse secant hyperbolic function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType asech(genType const & x);

	/// Inverse cosecant hyperbolic function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType acsch(genType const & x);
		
	/// Inverse cotangent hyperbolic function. 
	/// 
	/// @see gtc_reciprocal
	template <typename genType> 
	GLM_FUNC_DECL genType acoth(genType const & x);

	/// @}
}//namespace glm

#include "reciprocal.inl"

#endif//GLM_GTC_reciprocal
