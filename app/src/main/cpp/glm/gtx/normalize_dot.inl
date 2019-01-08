
namespace glm
{
	template <typename genType> 
	GLM_FUNC_QUALIFIER genType normalizeDot
	(
		genType const & x, 
		genType const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T normalizeDot
	(
		detail::tvec2<T, P> const & x, 
		detail::tvec2<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T normalizeDot
	(
		detail::tvec3<T, P> const & x, 
		detail::tvec3<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T normalizeDot
	(
		detail::tvec4<T, P> const & x, 
		detail::tvec4<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			glm::inversesqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename genType> 
	GLM_FUNC_QUALIFIER genType fastNormalizeDot
	(
		genType const & x, 
		genType const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T fastNormalizeDot
	(
		detail::tvec2<T, P> const & x, 
		detail::tvec2<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T fastNormalizeDot
	(
		detail::tvec3<T, P> const & x, 
		detail::tvec3<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER T fastNormalizeDot
	(
		detail::tvec4<T, P> const & x, 
		detail::tvec4<T, P> const & y
	)
	{
		return 
			glm::dot(x, y) * 
			fastInverseSqrt(glm::dot(x, x) * 
			glm::dot(y, y));
	}
}//namespace glm
