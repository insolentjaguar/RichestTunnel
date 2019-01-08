
#ifndef glm_detail_intrinsic_vector_relational
#define glm_detail_intrinsic_vector_relational

#include "setup.hpp"

#if(!(GLM_ARCH & GLM_ARCH_SSE2))
#	error "SSE2 instructions not supported or enabled"
#else

namespace glm{
namespace detail
{

}//namespace detail
}//namespace glm

#include "intrinsic_vector_relational.inl"

#endif//GLM_ARCH
#endif//glm_detail_intrinsic_vector_relational
