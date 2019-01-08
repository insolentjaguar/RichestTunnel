
#include <limits>

namespace glm
{
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER typename vecType<T, P>::bool_type lessThan
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer,
			"Invalid template instantiation of 'lessThan', GLM vector types required floating-point or integer value types vectors");
		assert(x.length() == y.length());

		typename vecType<bool, P>::bool_type Result(vecType<bool, P>::_null);
		for(int i = 0; i < x.length(); ++i)
			Result[i] = x[i] < y[i];

		return Result;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER typename vecType<T, P>::bool_type lessThanEqual
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer,
			"Invalid template instantiation of 'lessThanEqual', GLM vector types required floating-point or integer value types vectors");
		assert(x.length() == y.length());

		typename vecType<bool, P>::bool_type Result(vecType<bool, P>::_null);
		for(int i = 0; i < x.length(); ++i)
			Result[i] = x[i] <= y[i];
		return Result;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER typename vecType<T, P>::bool_type greaterThan
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer,
			"Invalid template instantiation of 'greaterThan', GLM vector types required floating-point or integer value types vectors");
		assert(x.length() == y.length());

		typename vecType<bool, P>::bool_type Result(vecType<bool, P>::_null);
		for(int i = 0; i < x.length(); ++i)
			Result[i] = x[i] > y[i];
		return Result;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER typename vecType<T, P>::bool_type greaterThanEqual
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
	{
		GLM_STATIC_ASSERT(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer,
			"Invalid template instantiation of 'greaterThanEqual', GLM vector types required floating-point or integer value types vectors");
		assert(x.length() == y.length());

		typename vecType<bool, P>::bool_type Result(vecType<bool, P>::_null);
		for(int i = 0; i < x.length(); ++i)
			Result[i] = x[i] >= y[i];
		return Result;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER typename vecType<T, P>::bool_type equal
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
	{
		assert(x.length() == y.length());

		typename vecType<bool, P>::bool_type Result(vecType<bool, P>::_null);
		for(int i = 0; i < x.length(); ++i)
			Result[i] = x[i] == y[i];
		return Result;
	}

	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER typename vecType<T, P>::bool_type notEqual
	(
		vecType<T, P> const & x,
		vecType<T, P> const & y
	)
	{
		assert(x.length() == y.length());

		typename vecType<bool, P>::bool_type Result(vecType<bool, P>::_null);
		for(int i = 0; i < x.length(); ++i)
			Result[i] = x[i] != y[i];
		return Result;
	}

	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER bool any(vecType<bool, P> const & v)
	{
		bool Result = false;
		for(int i = 0; i < v.length(); ++i)
			Result = Result || v[i];
		return Result;
	}

	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER bool all(vecType<bool, P> const & v)
	{
		bool Result = true;
		for(int i = 0; i < v.length(); ++i)
			Result = Result && v[i];
		return Result;
	}

	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_QUALIFIER vecType<bool, P> not_(vecType<bool, P> const & v)
	{
		typename vecType<bool, P>::bool_type Result(vecType<bool, P>::_null);
		for(int i = 0; i < v.length(); ++i)
			Result[i] = !v[i];
		return Result;
	}
}//namespace glm

