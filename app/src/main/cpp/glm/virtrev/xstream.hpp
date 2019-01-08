
#ifndef GLM_VIRTREV_xstream
#define GLM_VIRTREV_xstream GLM_VERSION

#include "../glm.hpp"
#include "../gtc/matrix_access.hpp"
#include <iostream>

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_VIRTREV_xstream extension included")
#endif
/*
namespace glm{
namespace detail
{
	template<typename T>
	std::ostream & operator << (std::ostream & stream, glm::detail::tvec2<T, P> const & vec)
	{
		stream << "<glm_vec2 ";
		stream << "x=\"" << vec.x << "\" ";
		stream << "y=\"" << vec.y << "\" ";
		stream << "/>";

		return stream;
	}

	template<typename T>
	std::ostream & operator << (std::ostream & stream, glm::detail::tvec3<T, P> const & vec)
	{
		stream << "<glm_vec3 ";
		stream << "x=\"" << vec.x << "\" ";
		stream << "y=\"" << vec.y << "\" ";
		stream << "z=\"" << vec.z << "\" ";
		stream << "/>";

		return stream;
	}

	template<typename T>
	std::ostream & operator << (std::ostream & stream, glm::detail::tvec4<T, P> const & vec)
	{
		stream << "<glm_vec4 ";
		stream << "x=\"" << vec.x << "\" ";
		stream << "y=\"" << vec.y << "\" ";
		stream << "z=\"" << vec.z << "\" ";
		stream << "w=\"" << vec.w << "\" ";
		stream << "/>";

		return stream;
	}

	template<typename T>
	std::ostream & operator << (std::ostream & stream, glm::detail::tmat2x2<T, P> const & mat)
	{
		stream << "<glm_mat2>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 0)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 0)[1] << "\" ";
		stream << "/>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 1)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 1)[1] << "\" ";
		stream << "/>" << std::endl;
		stream << "</glm_mat2>";

		return stream;
	}

	template<typename T>
	std::ostream & operator << (std::ostream & stream, glm::detail::tmat3x3<T, P> const & mat)
	{
		stream << "<glm_mat3>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 0)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 0)[1] << "\" ";
		stream << "z=\"" << glm::row(mat, 0)[2] << "\" ";
		stream << "/>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 1)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 1)[1] << "\" ";
		stream << "z=\"" << glm::row(mat, 1)[2] << "\" ";
		stream << "/>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 2)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 2)[1] << "\" ";
		stream << "z=\"" << glm::row(mat, 2)[2] << "\" ";
		stream << "/>" << std::endl;
		stream << "</glm_mat3>";

		return stream;
	}

	template<typename T>
	std::ostream & operator << (std::ostream & stream, glm::detail::tmat4x4<T, P> const & mat)
	{
		stream << "<glm_mat4>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 0)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 0)[1] << "\" ";
		stream << "z=\"" << glm::row(mat, 0)[2] << "\" ";
		stream << "w=\"" << glm::row(mat, 0)[3] << "\" ";
		stream << "/>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 1)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 1)[1] << "\" ";
		stream << "z=\"" << glm::row(mat, 1)[2] << "\" ";
		stream << "w=\"" << glm::row(mat, 1)[3] << "\" ";
		stream << "/>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 2)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 2)[1] << "\" ";
		stream << "z=\"" << glm::row(mat, 2)[2] << "\" ";
		stream << "w=\"" << glm::row(mat, 2)[3] << "\" ";
		stream << "/>" << std::endl;
		stream << "<row ";
		stream << "x=\"" << glm::row(mat, 3)[0] << "\" ";
		stream << "y=\"" << glm::row(mat, 3)[1] << "\" ";
		stream << "z=\"" << glm::row(mat, 3)[2] << "\" ";
		stream << "w=\"" << glm::row(mat, 3)[3] << "\" ";
		stream << "/>" << std::endl;
		stream << "</glm_mat4>";
			
		return stream;
	}

}//namespace detail
}//namespace glm
*/
#endif//GLM_VIRTREV_xstream
