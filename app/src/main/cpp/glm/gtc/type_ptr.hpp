
#ifndef GLM_GTC_type_ptr
#define GLM_GTC_type_ptr

// Dependency:
#include "../gtc/quaternion.hpp"
#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include "../mat2x2.hpp"
#include "../mat2x3.hpp"
#include "../mat2x4.hpp"
#include "../mat3x2.hpp"
#include "../mat3x3.hpp"
#include "../mat3x4.hpp"
#include "../mat4x2.hpp"
#include "../mat4x3.hpp"
#include "../mat4x4.hpp"
#include <cstring>

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_type_ptr extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_type_ptr
	/// @{

	/// Return the constant address to the data of the input parameter.
	/// @see gtc_type_ptr
	template<typename genType>
	GLM_FUNC_DECL typename genType::value_type const * value_ptr(genType const & vec);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tvec2<T, defaultp> make_vec2(T const * const ptr);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tvec3<T, defaultp> make_vec3(T const * const ptr);

	/// Build a vector from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tvec4<T, defaultp> make_vec4(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat2x2<T, defaultp> make_mat2x2(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat2x3<T, defaultp> make_mat2x3(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat2x4<T, defaultp> make_mat2x4(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat3x2<T, defaultp> make_mat3x2(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat3x3<T, defaultp> make_mat3x3(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat3x4<T, defaultp> make_mat3x4(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat4x2<T, defaultp> make_mat4x2(
		T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat4x3<T, defaultp> make_mat4x3(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat4x4<T, defaultp> make_mat4x4(T const * const ptr);
	
	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat2x2<T, defaultp> make_mat2(T const * const ptr);

	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat3x3<T, defaultp> make_mat3(T const * const ptr);
		
	/// Build a matrix from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tmat4x4<T, defaultp> make_mat4(T const * const ptr);

	/// Build a quaternion from a pointer.
	/// @see gtc_type_ptr
	template<typename T>
	GLM_FUNC_DECL detail::tquat<T, defaultp> make_quat(T const * const ptr);

	/// @}
}//namespace glm

#include "type_ptr.inl"

#endif//GLM_GTC_type_ptr

