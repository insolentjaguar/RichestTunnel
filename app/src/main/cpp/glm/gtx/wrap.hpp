
#ifndef GLM_GTX_wrap
#define GLM_GTX_wrap

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_wrap extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_wrap
	/// @{

	/// Simulate GL_CLAMP OpenGL wrap mode
	/// @see gtx_wrap extension.
	template <typename genType> 
	GLM_FUNC_DECL genType clamp(genType const & Texcoord);

	/// Simulate GL_REPEAT OpenGL wrap mode
	/// @see gtx_wrap extension.
	template <typename genType> 
	GLM_FUNC_DECL genType repeat(genType const & Texcoord);

	/// Simulate GL_MIRROR_REPEAT OpenGL wrap mode
	/// @see gtx_wrap extension.
	template <typename genType> 
	GLM_FUNC_DECL genType mirrorRepeat(genType const & Texcoord);

	/// @}
}// namespace glm

#include "wrap.inl"

#endif//GLM_GTX_wrap
