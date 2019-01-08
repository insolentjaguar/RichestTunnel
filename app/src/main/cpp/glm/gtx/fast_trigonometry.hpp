
#ifndef GLM_GTX_fast_trigonometry
#define GLM_GTX_fast_trigonometry

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_fast_trigonometry extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_fast_trigonometry
	/// @{

	//! Faster than the common sin function but less accurate. 
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	GLM_FUNC_DECL T fastSin(const T& angle);

	//! Faster than the common cos function but less accurate.
	//! Defined between -2pi and 2pi.
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	GLM_FUNC_DECL T fastCos(const T& angle);

	//! Faster than the common tan function but less accurate. 
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	GLM_FUNC_DECL T fastTan(const T& angle);

	//! Faster than the common asin function but less accurate. 
	//! Defined between -2pi and 2pi.
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	GLM_FUNC_DECL T fastAsin(const T& angle);

	//! Faster than the common acos function but less accurate. 
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	GLM_FUNC_DECL T fastAcos(const T& angle);

	//! Faster than the common atan function but less accurate.
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	GLM_FUNC_DECL T fastAtan(const T& y, const T& x);

	//! Faster than the common atan function but less accurate. 
	//! Defined between -2pi and 2pi.
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	GLM_FUNC_DECL T fastAtan(const T& angle);

	/// @}
}//namespace glm

#include "fast_trigonometry.inl"

#endif//GLM_GTX_fast_trigonometry
