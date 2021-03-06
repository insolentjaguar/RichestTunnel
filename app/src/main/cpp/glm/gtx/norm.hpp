
#ifndef GLM_GTX_norm
#define GLM_GTX_norm

// Dependency:
#include "../glm.hpp"
#include "../gtx/quaternion.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_norm extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_norm
	/// @{

	//! Returns the squared length of x.
	//! From GLM_GTX_norm extension.
	template <typename T>
	GLM_FUNC_DECL T length2(
		T const & x);

	//! Returns the squared length of x.
	//! From GLM_GTX_norm extension.
	template <typename genType>
	GLM_FUNC_DECL typename genType::value_type length2(
		genType const & x);
		
	//! Returns the squared distance between p0 and p1, i.e., length(p0 - p1).
	//! From GLM_GTX_norm extension.
	template <typename T>
	GLM_FUNC_DECL T distance2(
		T const & p0,
		T const & p1);
		
	//! Returns the squared distance between p0 and p1, i.e., length(p0 - p1).
	//! From GLM_GTX_norm extension.
	template <typename genType>
	GLM_FUNC_DECL typename genType::value_type distance2(
		genType const & p0,
		genType const & p1);

	//! Returns the L1 norm between x and y.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l1Norm(
		detail::tvec3<T, P> const & x,
		detail::tvec3<T, P> const & y);
		
	//! Returns the L1 norm of v.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l1Norm(
		detail::tvec3<T, P> const & v);
		
	//! Returns the L2 norm between x and y.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l2Norm(
		detail::tvec3<T, P> const & x,
		detail::tvec3<T, P> const & y);
		
	//! Returns the L2 norm of v.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T l2Norm(
		detail::tvec3<T, P> const & x);
		
	//! Returns the L norm between x and y.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T lxNorm(
		detail::tvec3<T, P> const & x,
		detail::tvec3<T, P> const & y,
		unsigned int Depth);

	//! Returns the L norm of v.
	//! From GLM_GTX_norm extension.
	template <typename T, precision P>
	GLM_FUNC_DECL T lxNorm(
		detail::tvec3<T, P> const & x,
		unsigned int Depth);

	/// @}
}//namespace glm

#include "norm.inl"

#endif//GLM_GTX_norm
