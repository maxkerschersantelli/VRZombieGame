#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t588466745;
// Flashlight
struct Flashlight_t810391366;
// GvrAudioSource[]
struct GvrAudioSourceU5BU5D_t3340679355;
// CardboardControl
struct CardboardControl_t480265927;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieBehavior
struct  ZombieBehavior_t671142584  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ZombieBehavior::target
	GameObject_t3674682005 * ___target_2;
	// UnityEngine.NavMeshAgent ZombieBehavior::agent
	NavMeshAgent_t588466745 * ___agent_3;
	// UnityEngine.GameObject ZombieBehavior::flashlight
	GameObject_t3674682005 * ___flashlight_4;
	// Flashlight ZombieBehavior::f
	Flashlight_t810391366 * ___f_5;
	// UnityEngine.GameObject ZombieBehavior::spawners
	GameObject_t3674682005 * ___spawners_6;
	// GvrAudioSource[] ZombieBehavior::sounds
	GvrAudioSourceU5BU5D_t3340679355* ___sounds_7;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ZombieBehavior_t671142584, ___target_2)); }
	inline GameObject_t3674682005 * get_target_2() const { return ___target_2; }
	inline GameObject_t3674682005 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t3674682005 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_agent_3() { return static_cast<int32_t>(offsetof(ZombieBehavior_t671142584, ___agent_3)); }
	inline NavMeshAgent_t588466745 * get_agent_3() const { return ___agent_3; }
	inline NavMeshAgent_t588466745 ** get_address_of_agent_3() { return &___agent_3; }
	inline void set_agent_3(NavMeshAgent_t588466745 * value)
	{
		___agent_3 = value;
		Il2CppCodeGenWriteBarrier(&___agent_3, value);
	}

	inline static int32_t get_offset_of_flashlight_4() { return static_cast<int32_t>(offsetof(ZombieBehavior_t671142584, ___flashlight_4)); }
	inline GameObject_t3674682005 * get_flashlight_4() const { return ___flashlight_4; }
	inline GameObject_t3674682005 ** get_address_of_flashlight_4() { return &___flashlight_4; }
	inline void set_flashlight_4(GameObject_t3674682005 * value)
	{
		___flashlight_4 = value;
		Il2CppCodeGenWriteBarrier(&___flashlight_4, value);
	}

	inline static int32_t get_offset_of_f_5() { return static_cast<int32_t>(offsetof(ZombieBehavior_t671142584, ___f_5)); }
	inline Flashlight_t810391366 * get_f_5() const { return ___f_5; }
	inline Flashlight_t810391366 ** get_address_of_f_5() { return &___f_5; }
	inline void set_f_5(Flashlight_t810391366 * value)
	{
		___f_5 = value;
		Il2CppCodeGenWriteBarrier(&___f_5, value);
	}

	inline static int32_t get_offset_of_spawners_6() { return static_cast<int32_t>(offsetof(ZombieBehavior_t671142584, ___spawners_6)); }
	inline GameObject_t3674682005 * get_spawners_6() const { return ___spawners_6; }
	inline GameObject_t3674682005 ** get_address_of_spawners_6() { return &___spawners_6; }
	inline void set_spawners_6(GameObject_t3674682005 * value)
	{
		___spawners_6 = value;
		Il2CppCodeGenWriteBarrier(&___spawners_6, value);
	}

	inline static int32_t get_offset_of_sounds_7() { return static_cast<int32_t>(offsetof(ZombieBehavior_t671142584, ___sounds_7)); }
	inline GvrAudioSourceU5BU5D_t3340679355* get_sounds_7() const { return ___sounds_7; }
	inline GvrAudioSourceU5BU5D_t3340679355** get_address_of_sounds_7() { return &___sounds_7; }
	inline void set_sounds_7(GvrAudioSourceU5BU5D_t3340679355* value)
	{
		___sounds_7 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_7, value);
	}
};

struct ZombieBehavior_t671142584_StaticFields
{
public:
	// CardboardControl ZombieBehavior::cardboard
	CardboardControl_t480265927 * ___cardboard_8;

public:
	inline static int32_t get_offset_of_cardboard_8() { return static_cast<int32_t>(offsetof(ZombieBehavior_t671142584_StaticFields, ___cardboard_8)); }
	inline CardboardControl_t480265927 * get_cardboard_8() const { return ___cardboard_8; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_8() { return &___cardboard_8; }
	inline void set_cardboard_8(CardboardControl_t480265927 * value)
	{
		___cardboard_8 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
