
#ifndef GLM_GTX_gradient_paint
#define GLM_GTX_gradient_paint

// Dependency:
#include "../glm.hpp"
#include "../gtx/optimum_pow.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTX_gradient_paint extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_gradient_paint
	/// @{

	/// Return a color from a radial gradient.
	/// @see - gtx_gradient_paint
	template <typename T, precision P>
	GLM_FUNC_DECL T radialGradient(
		detail::tvec2<T, P> const & Center,
		T const & Radius,
		detail::tvec2<T, P> const & Focal,
		detail::tvec2<T, P> const & Position);

	/// Return a color from a linear gradient.
	/// @see - gtx_gradient_paint
	template <typename T, precision P>
	GLM_FUNC_DECL T linearGradient(
		detail::tvec2<T, P> const & Point0,
		detail::tvec2<T, P> const & Point1,
		detail::tvec2<T, P> const & Position);

	/// @}
}// namespace glm

#include "gradient_paint.inl"

#endif//GLM_GTX_gradient_paint
