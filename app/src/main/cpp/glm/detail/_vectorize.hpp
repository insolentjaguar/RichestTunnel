
#ifndef GLM_CORE_DETAIL_INCLUDED
#define GLM_CORE_DETAIL_INCLUDED

#include "type_vec1.hpp"
#include "type_vec2.hpp"
#include "type_vec3.hpp"
#include "type_vec4.hpp"

#define VECTORIZE1_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER detail::tvec1<T, P> func(	\
		detail::tvec1<T, P> const & v)				\
	{												\
		return detail::tvec1<T, P>(					\
			func(v.x));								\
	}

#define VECTORIZE2_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER detail::tvec2<T, P> func(	\
		detail::tvec2<T, P> const & v)				\
	{												\
		return detail::tvec2<T, P>(					\
			func(v.x),								\
			func(v.y));								\
	}

#define VECTORIZE3_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER detail::tvec3<T, P> func(	\
		detail::tvec3<T, P> const & v)				\
	{												\
		return detail::tvec3<T, P>(					\
			func(v.x),								\
			func(v.y),								\
			func(v.z));								\
	}

#define VECTORIZE4_VEC(func)						\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER detail::tvec4<T, P> func(	\
		detail::tvec4<T, P> const & v)				\
	{												\
		return detail::tvec4<T, P>(					\
			func(v.x),								\
			func(v.y),								\
			func(v.z),								\
			func(v.w));								\
	}

#define VECTORIZE_VEC(func)		\
	VECTORIZE1_VEC(func)		\
	VECTORIZE2_VEC(func)		\
	VECTORIZE3_VEC(func)		\
	VECTORIZE4_VEC(func)

#define VECTORIZE1_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER detail::tvec1<T, P> func				\
	(														\
		detail::tvec1<T, P> const & x,						\
		T const & y											\
	)														\
	{														\
		return detail::tvec1<T, P>(							\
			func(x.x, y));									\
	}

#define VECTORIZE2_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER detail::tvec2<T, P> func				\
	(														\
		detail::tvec2<T, P> const & x,						\
		T const & y	\
	)														\
	{														\
		return detail::tvec2<T, P>(							\
			func(x.x, y),									\
			func(x.y, y));									\
	}

#define VECTORIZE3_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER detail::tvec3<T, P> func				\
	(														\
		detail::tvec3<T, P> const & x,						\
		T const & y	\
	)														\
	{														\
		return detail::tvec3<T, P>(							\
			func(x.x, y),									\
			func(x.y, y),									\
			func(x.z, y));									\
	}

#define VECTORIZE4_VEC_SCA(func)							\
	template <typename T, precision P>						\
	GLM_FUNC_QUALIFIER detail::tvec4<T, P> func				\
	(														\
		detail::tvec4<T, P> const & x,						\
		T const & y	\
	)														\
	{														\
		return detail::tvec4<T, P>(							\
			func(x.x, y),									\
			func(x.y, y),									\
			func(x.z, y),									\
			func(x.w, y));									\
	}

#define VECTORIZE_VEC_SCA(func)		\
	VECTORIZE1_VEC_SCA(func)		\
	VECTORIZE2_VEC_SCA(func)		\
	VECTORIZE3_VEC_SCA(func)		\
	VECTORIZE4_VEC_SCA(func)

#define VECTORIZE2_VEC_VEC(func)					\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER detail::tvec2<T, P> func		\
	(												\
		detail::tvec2<T, P> const & x,				\
		detail::tvec2<T, P> const & y				\
	)												\
	{												\
		return detail::tvec2<T, P>(					\
			func(x.x, y.x),							\
			func(x.y, y.y));						\
	}

#define VECTORIZE3_VEC_VEC(func)					\
	template <typename T, precision P>				\
	GLM_FUNC_QUALIFIER detail::tvec3<T, P> func		\
	(												\
		detail::tvec3<T, P> const & x,				\
		detail::tvec3<T, P> const & y				\
	)												\
	{												\
		return detail::tvec3<T, P>(					\
			func(x.x, y.x),							\
			func(x.y, y.y),							\
			func(x.z, y.z));						\
	}

#define VECTORIZE4_VEC_VEC(func)				\
	template <typename T, precision P>			\
	GLM_FUNC_QUALIFIER detail::tvec4<T, P> func	\
	(											\
		detail::tvec4<T, P> const & x,			\
		detail::tvec4<T, P> const & y			\
	)											\
	{											\
		return detail::tvec4<T, P>(				\
			func(x.x, y.x),						\
			func(x.y, y.y),						\
			func(x.z, y.z),						\
			func(x.w, y.w));					\
	}

#define VECTORIZE_VEC_VEC(func)		\
	VECTORIZE2_VEC_VEC(func)		\
	VECTORIZE3_VEC_VEC(func)		\
	VECTORIZE4_VEC_VEC(func)

namespace glm{
namespace detail
{
	template<bool C>
	struct If
	{
		template<typename F, typename T>
		static GLM_FUNC_QUALIFIER T apply(F functor, const T& val)
		{
			return functor(val);
		}
	};

	template<>
	struct If<false>
	{
		template<typename F, typename T>
		static GLM_FUNC_QUALIFIER T apply(F, const T& val)
		{
			return val;
		}
	};
}//namespace detail
}//namespace glm

#endif//GLM_CORE_DETAIL_INCLUDED
