
#ifndef GLM_GTX_normal
#define GLM_GTX_normal

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_normal extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_normal
	/// @{

	//! Computes triangle normal from triangle points. 
	//! From GLM_GTX_normal extension.
	template <typename T, precision P> 
	GLM_FUNC_DECL detail::tvec3<T, P> triangleNormal(
		detail::tvec3<T, P> const & p1, 
		detail::tvec3<T, P> const & p2, 
		detail::tvec3<T, P> const & p3);

	/// @}
}//namespace glm

#include "normal.inl"

#endif//GLM_GTX_normal
