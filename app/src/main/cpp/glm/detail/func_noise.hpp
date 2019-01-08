
#ifndef glm_core_func_noise
#define glm_core_func_noise

#include "type_vec1.hpp"
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "setup.hpp"

namespace glm
{
	/// @addtogroup core_func_noise
	/// @{

	/// Returns a 1D noise value based on the input value x.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/noise1.xml">GLSL noise1 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.13 Noise Functions</a>
	template <typename genType>
	GLM_FUNC_DECL typename genType::value_type noise1(genType const & x);

	/// Returns a 2D noise value based on the input value x.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/noise2.xml">GLSL noise2 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.13 Noise Functions</a>
	template <typename genType>
	GLM_FUNC_DECL detail::tvec2<typename genType::value_type, defaultp> noise2(genType const & x);

	/// Returns a 3D noise value based on the input value x.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/noise3.xml">GLSL noise3 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.13 Noise Functions</a>
	template <typename genType>
	GLM_FUNC_DECL detail::tvec3<typename genType::value_type, defaultp> noise3(genType const & x);

	/// Returns a 4D noise value based on the input value x.
	///
	/// @tparam genType Floating-point scalar or vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/noise4.xml">GLSL noise4 man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.13 Noise Functions</a>
	template <typename genType>
	GLM_FUNC_DECL detail::tvec4<typename genType::value_type, defaultp> noise4(genType const & x);

	/// @}
}//namespace glm

#include "func_noise.inl"

#endif//glm_core_func_noise
