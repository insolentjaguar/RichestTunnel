
#ifndef GLM_CORE_func_vector_relational
#define GLM_CORE_func_vector_relational

#include "precision.hpp"
#include "setup.hpp"

#if !((GLM_COMPILER & GLM_COMPILER_VC) && (GLM_COMPILER <= GLM_COMPILER_VC10)) // Workaround a Visual C++ bug

namespace glm
{
	/// @addtogroup core_func_vector_relational
	/// @{

	/// Returns the component-wise comparison result of x < y.
	/// 
	/// @tparam vecType Floating-point or integer vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/lessThan.xml">GLSL lessThan man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	// TODO: Mismatched 
	//template <typename T, precision P, template <typename, precision> class vecType>
	//GLM_FUNC_DECL typename vecType<T, P>::bool_type lessThan(vecType<T, P> const & x, vecType<T, P> const & y);

	/// Returns the component-wise comparison of result x <= y.
	///
	/// @tparam vecType Floating-point or integer vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/lessThanEqual.xml">GLSL lessThanEqual man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL typename vecType<T, P>::bool_type lessThanEqual(vecType<T, P> const & x, vecType<T, P> const & y);

	/// Returns the component-wise comparison of result x > y.
	///
	/// @tparam vecType Floating-point or integer vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/greaterThan.xml">GLSL greaterThan man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL typename vecType<T, P>::bool_type greaterThan(vecType<T, P> const & x, vecType<T, P> const & y);

	/// Returns the component-wise comparison of result x >= y.
	///
	/// @tparam vecType Floating-point or integer vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/greaterThanEqual.xml">GLSL greaterThanEqual man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL typename vecType<T, P>::bool_type greaterThanEqual(vecType<T, P> const & x, vecType<T, P> const & y);

	/// Returns the component-wise comparison of result x == y.
	///
	/// @tparam vecType Floating-point, integer or boolean vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/equal.xml">GLSL equal man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	//TODO: conflicts with definision
	//template <typename T, precision P, template <typename, precision> class vecType>
	//GLM_FUNC_DECL typename vecType<T, P>::bool_type equal(vecType<T, P> const & x, vecType<T, P> const & y);

	/// Returns the component-wise comparison of result x != y.
	/// 
	/// @tparam vecType Floating-point, integer or boolean vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/notEqual.xml">GLSL notEqual man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL typename vecType<T, P>::bool_type notEqual(vecType<T, P> const & x, vecType<T, P> const & y);

	/// Returns true if any component of x is true.
	///
	/// @tparam vecType Boolean vector types.
	/// 
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/any.xml">GLSL any man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL bool any(vecType<bool, P> const & v);

	/// Returns true if all components of x are true.
	///
	/// @tparam vecType Boolean vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/all.xml">GLSL all man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL bool all(vecType<bool, P> const & v);

	/// Returns the component-wise logical complement of x.
	/// /!\ Because of language incompatibilities between C++ and GLSL, GLM defines the function not but not_ instead.
	///
	/// @tparam vecType Boolean vector types.
	///
	/// @see <a href="http://www.opengl.org/sdk/docs/manglsl/xhtml/not.xml">GLSL not man page</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 8.7 Vector Relational Functions</a>
	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<bool, P> not_(vecType<bool, P> const & v);

	/// @}
}//namespace glm

#endif

#include "func_vector_relational.inl"

#endif//GLM_CORE_func_vector_relational
