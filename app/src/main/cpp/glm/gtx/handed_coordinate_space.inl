
namespace glm
{
	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool rightHanded
	(
		detail::tvec3<T, P> const & tangent,
		detail::tvec3<T, P> const & binormal,
		detail::tvec3<T, P> const & normal
	)
	{
		return dot(cross(normal, tangent), binormal) > T(0);
	}

	template <typename T, precision P>
	GLM_FUNC_QUALIFIER bool leftHanded
	(
		detail::tvec3<T, P> const & tangent,
		detail::tvec3<T, P> const & binormal,
		detail::tvec3<T, P> const & normal
	)
	{
		return dot(cross(normal, tangent), binormal) < T(0);
	}
}//namespace glm
