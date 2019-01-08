
namespace glm
{
	template <typename T, precision P> 
	GLM_FUNC_QUALIFIER detail::tvec3<T, P> triangleNormal
	(
		detail::tvec3<T, P> const & p1, 
		detail::tvec3<T, P> const & p2, 
		detail::tvec3<T, P> const & p3
	)
	{
		return normalize(cross(p1 - p2, p1 - p3));
	}
}//namespace glm
