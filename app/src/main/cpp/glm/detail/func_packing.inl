
#include "func_common.hpp"
#include "type_half.hpp"
#include "../fwd.hpp"

namespace glm
{
	GLM_FUNC_QUALIFIER uint packUnorm2x16(vec2 const & v)
	{
		u16vec2 Topack(round(clamp(v, 0.0f, 1.0f) * 65535.0f));
		return reinterpret_cast<uint&>(Topack);
	}

	GLM_FUNC_QUALIFIER vec2 unpackUnorm2x16(uint const & p)
	{
		vec2 Unpack(reinterpret_cast<u16vec2 const &>(p));
		return Unpack * float(1.5259021896696421759365224689097e-5); // 1.0 / 65535.0
	}

	GLM_FUNC_QUALIFIER uint packSnorm2x16(vec2 const & v)
	{
		i16vec2 Topack(round(clamp(v ,-1.0f, 1.0f) * 32767.0f));
		return reinterpret_cast<uint32&>(Topack);
	}

	GLM_FUNC_QUALIFIER vec2 unpackSnorm2x16(uint const & p)
	{
		vec2 Unpack(reinterpret_cast<i16vec2 const &>(p));
		return clamp(
			Unpack * 3.0518509475997192297128208258309e-5f, //1.0f / 32767.0f,
			-1.0f, 1.0f);
	}

	GLM_FUNC_QUALIFIER uint packUnorm4x8(vec4 const & v)
	{
		u8vec4 Topack(round(clamp(v, 0.0f, 1.0f) * 255.0f));
		return reinterpret_cast<uint&>(Topack);
	}

	GLM_FUNC_QUALIFIER vec4 unpackUnorm4x8(uint const & p)
	{
		vec4 Unpack(reinterpret_cast<u8vec4 const&>(p));
		return Unpack * float(0.0039215686274509803921568627451); // 1 / 255
	}
	
	GLM_FUNC_QUALIFIER uint packSnorm4x8(vec4 const & v)
	{
		i8vec4 Topack(round(clamp(v ,-1.0f, 1.0f) * 127.0f));
		return reinterpret_cast<uint&>(Topack);
	}
	
	GLM_FUNC_QUALIFIER glm::vec4 unpackSnorm4x8(uint const & p)
	{
		vec4 Unpack(reinterpret_cast<i8vec4 const &>(p));
		return clamp(
			Unpack * 0.0078740157480315f, // 1.0f / 127.0f
			-1.0f, 1.0f);
	}

	GLM_FUNC_QUALIFIER double packDouble2x32(uvec2 const & v)
	{
		return reinterpret_cast<double const &>(v);
	}

	GLM_FUNC_QUALIFIER uvec2 unpackDouble2x32(double const & v)
	{
		return reinterpret_cast<uvec2 const &>(v);
	}

	GLM_FUNC_QUALIFIER uint packHalf2x16(vec2 const & v)
	{
		i16vec2 Unpack(
			detail::toFloat16(v.x),
			detail::toFloat16(v.y));

		uint * Result = reinterpret_cast<uint*>(&Unpack);
		return *Result;
	}

	GLM_FUNC_QUALIFIER vec2 unpackHalf2x16(uint const & v)
	{
		i16vec2 Unpack(reinterpret_cast<i16vec2 const &>(v));
	
		return vec2(
			detail::toFloat32(Unpack.x), 
			detail::toFloat32(Unpack.y));
	}
}//namespace glm

