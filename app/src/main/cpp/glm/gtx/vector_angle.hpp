
#ifndef GLM_GTX_vector_angle
#define GLM_GTX_vector_angle

// Dependency:
#include "../glm.hpp"
#include "../gtc/epsilon.hpp"
#include "../gtx/quaternion.hpp"
#include "../gtx/rotate_vector.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_vector_angle extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_vector_angle
	/// @{

	//! Returns the absolute angle between two vectors
	//! Parameters need to be normalized.
	/// @see gtx_vector_angle extension
	template <typename vecType>
	GLM_FUNC_DECL typename vecType::value_type angle(
		vecType const & x, 
		vecType const & y);

	//! Returns the oriented angle between two 2d vectors 
	//! Parameters need to be normalized.
	/// @see gtx_vector_angle extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T orientedAngle(
		detail::tvec2<T, P> const & x,
		detail::tvec2<T, P> const & y);

	//! Returns the oriented angle between two 3d vectors based from a reference axis.
	//! Parameters need to be normalized.
	/// @see gtx_vector_angle extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T orientedAngle(
		detail::tvec3<T, P> const & x,
		detail::tvec3<T, P> const & y,
		detail::tvec3<T, P> const & ref);

	/// @}
}// namespace glm

#include "vector_angle.inl"

#endif//GLM_GTX_vector_angle
