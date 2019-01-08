
#ifndef GLM_GTX_inertia
#define GLM_GTX_inertia

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_inertia extension included")
#endif

namespace glm
{
	/*
	/// @addtogroup gtx_inertia
	/// @{

	//! Build an inertia matrix for a box.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P>
	detail::tmat3x3<T, P> boxInertia3(
		T const & Mass, 
		detail::tvec3<T, P> const & Scale);
		
	//! Build an inertia matrix for a box.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P>
	detail::tmat4x4<T, P> boxInertia4(
		T const & Mass, 
		detail::tvec3<T, P> const & Scale);
		
	//! Build an inertia matrix for a disk.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P>
	detail::tmat3x3<T, P> diskInertia3(
		T const & Mass, 
		T const & Radius);

	//! Build an inertia matrix for a disk.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P>
	detail::tmat4x4<T, P> diskInertia4(
		T const & Mass, 
		T const & Radius);

	//! Build an inertia matrix for a ball.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P>
	detail::tmat3x3<T, P> ballInertia3(
		T const & Mass, 
		T const & Radius);
		
	//! Build an inertia matrix for a ball.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P>
	detail::tmat4x4<T, P> ballInertia4(
		T const & Mass, 
		T const & Radius);

	//! Build an inertia matrix for a sphere.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P>
	detail::tmat3x3<T, P> sphereInertia3(
		T const & Mass, 
		T const & Radius);

	//! Build an inertia matrix for a sphere.
	//! From GLM_GTX_inertia extension.
	template <typename T, precision P> 
	detail::tmat4x4<T, P> sphereInertia4(
		T const & Mass, 
		T const & Radius);
	*/
	/// @}
}// namespace glm

#include "inertia.inl"

#endif//GLM_GTX_inertia
