#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrAudioSource[]
struct GvrAudioSourceU5BU5D_t3340679355;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieSounds
struct  ZombieSounds_t389765930  : public MonoBehaviour_t667441552
{
public:
	// System.Single ZombieSounds::footStepRate
	float ___footStepRate_2;
	// GvrAudioSource[] ZombieSounds::sounds
	GvrAudioSourceU5BU5D_t3340679355* ___sounds_3;
	// System.Boolean ZombieSounds::x
	bool ___x_4;

public:
	inline static int32_t get_offset_of_footStepRate_2() { return static_cast<int32_t>(offsetof(ZombieSounds_t389765930, ___footStepRate_2)); }
	inline float get_footStepRate_2() const { return ___footStepRate_2; }
	inline float* get_address_of_footStepRate_2() { return &___footStepRate_2; }
	inline void set_footStepRate_2(float value)
	{
		___footStepRate_2 = value;
	}

	inline static int32_t get_offset_of_sounds_3() { return static_cast<int32_t>(offsetof(ZombieSounds_t389765930, ___sounds_3)); }
	inline GvrAudioSourceU5BU5D_t3340679355* get_sounds_3() const { return ___sounds_3; }
	inline GvrAudioSourceU5BU5D_t3340679355** get_address_of_sounds_3() { return &___sounds_3; }
	inline void set_sounds_3(GvrAudioSourceU5BU5D_t3340679355* value)
	{
		___sounds_3 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_3, value);
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(ZombieSounds_t389765930, ___x_4)); }
	inline bool get_x_4() const { return ___x_4; }
	inline bool* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(bool value)
	{
		___x_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
