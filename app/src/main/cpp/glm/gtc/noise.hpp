
#ifndef GLM_GTC_noise
#define GLM_GTC_noise

// Dependencies
#include "../detail/setup.hpp"
#include "../detail/precision.hpp"

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_noise extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_noise
	/// @{

	/// Classic perlin noise.
	/// @see gtc_noise
	template <typename T, precision P, template<typename, precision> class vecType>
	GLM_FUNC_DECL T perlin(
		vecType<T, P> const & p);
		
	/// Periodic perlin noise.
	/// @see gtc_noise
	template <typename T, precision P, template<typename, precision> class vecType>
	GLM_FUNC_DECL T perlin(
		vecType<T, P> const & p,
		vecType<T, P> const & rep);

	/// Simplex noise.
	/// @see gtc_noise
	template <typename T, precision P, template<typename, precision> class vecType>
	GLM_FUNC_DECL T simplex(
		vecType<T, P> const & p);

	/// @}
}//namespace glm

#include "noise.inl"

#endif//GLM_GTC_noise
