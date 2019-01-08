
#ifndef glm_core_literals
#define glm_core_literals

namespace glm
{
#define GLM_CXX11_USER_LITERALS
#ifdef GLM_CXX11_USER_LITERALS
/*
	GLM_FUNC_QUALIFIER detail::half operator "" _h(long double const s)
	{
		return detail::half(s);
	}

	GLM_FUNC_QUALIFIER float operator "" _f(long double const s)
	{
		return static_cast<float>(s);
	}
*/
#endif//GLM_CXX11_USER_LITERALS

}//namespace glm

#endif//glm_core_literals
