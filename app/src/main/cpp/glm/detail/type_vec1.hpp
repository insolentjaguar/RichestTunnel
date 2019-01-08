
#ifndef glm_core_type_gentype1
#define glm_core_type_gentype1

#include "../fwd.hpp"
#include "type_vec.hpp"
#ifdef GLM_SWIZZLE
#	if GLM_HAS_ANONYMOUS_UNION
#		include "_swizzle.hpp"
#	else
#		include "_swizzle_func.hpp"
#	endif
#endif //GLM_SWIZZLE
#include <cstddef>

namespace glm{
namespace detail
{
	template <typename T, precision P>
	struct tvec1
	{
		//////////////////////////////////////
		// Implementation detail

		enum ctor{_null};

		typedef tvec1<T, P> type;
		typedef tvec1<bool, P> bool_type;
		typedef T value_type;

		//////////////////////////////////////
		// Helper

		GLM_FUNC_DECL GLM_CONSTEXPR length_t length() const;

		//////////////////////////////////////
		// Data

		union {T x, r, s;};

		//////////////////////////////////////
		// Accesses

		GLM_FUNC_DECL T & operator[](length_t i);
		GLM_FUNC_DECL T const & operator[](length_t i) const;

		//////////////////////////////////////
		// Implicit basic constructors

		GLM_FUNC_DECL tvec1();
		GLM_FUNC_DECL tvec1(tvec1<T, P> const & v);
		template <precision Q>
		GLM_FUNC_DECL tvec1(tvec1<T, Q> const & v);

		//////////////////////////////////////
		// Explicit basic constructors

		GLM_FUNC_DECL explicit tvec1(
			ctor);
		GLM_FUNC_DECL tvec1(
			T const & s);

		//////////////////////////////////////
		// Conversion vector constructors
		
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL explicit tvec1(tvec1<U, Q> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL explicit tvec1(tvec2<U, Q> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL explicit tvec1(tvec3<U, Q> const & v);
		//! Explicit conversions (From section 5.4.1 Conversion and scalar constructors of GLSL 1.30.08 specification)
		template <typename U, precision Q>
		GLM_FUNC_DECL explicit tvec1(tvec4<U, Q> const & v);

		//////////////////////////////////////
		// Unary arithmetic operators

		GLM_FUNC_DECL tvec1<T, P> & operator= (tvec1<T, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator= (tvec1<U, P> const & v);

		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator+=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator+=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator-=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator-=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator*=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator*=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator/=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator/=(tvec1<U, P> const & v);

		//////////////////////////////////////
		// Increment and decrement operators

		GLM_FUNC_DECL tvec1<T, P> & operator++();
		GLM_FUNC_DECL tvec1<T, P> & operator--();
		GLM_FUNC_DECL tvec1<T, P> operator++(int);
		GLM_FUNC_DECL tvec1<T, P> operator--(int);

		//////////////////////////////////////
		// Unary bit operators

		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator%=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator%=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator&=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator&=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator|=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator|=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator^=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator^=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator<<=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator<<=(tvec1<U, P> const & v);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator>>=(U const & s);
		template <typename U> 
		GLM_FUNC_DECL tvec1<T, P> & operator>>=(tvec1<U, P> const & v);
	};


	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator+(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator+(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator+(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator-(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator-(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator-	(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator*(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator*(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator*(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator/(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator/(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator/(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator-(tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator==(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL bool operator!=(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator%(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator%(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator%(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator&(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator&(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator&(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator|(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator|(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator|(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator^(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator^(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator^(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator<<(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator<<(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator<<(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator>>(tvec1<T, P> const & v, T const & s);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator>>(T const & s, tvec1<T, P> const & v);

	template <typename T, precision P>
	GLM_FUNC_DECL tvec1<T, P> operator>>(tvec1<T, P> const & v1, tvec1<T, P> const & v2);

	template <typename T, precision P> 
	GLM_FUNC_DECL tvec1<T, P> operator~(tvec1<T, P> const & v);

}//namespace detail
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_vec1.inl"
#endif//GLM_EXTERNAL_TEMPLATE

#endif//glm_core_type_gentype1
