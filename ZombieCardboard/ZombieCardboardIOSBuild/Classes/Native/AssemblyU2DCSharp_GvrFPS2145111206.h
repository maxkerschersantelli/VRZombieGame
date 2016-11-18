#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrFPS
struct  GvrFPS_t2145111206  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GvrFPS::flashlight
	GameObject_t3674682005 * ___flashlight_5;
	// UnityEngine.UI.Text GvrFPS::textField
	Text_t9039225 * ___textField_6;
	// System.Single GvrFPS::fps
	float ___fps_7;
	// UnityEngine.Camera GvrFPS::cam
	Camera_t2727095145 * ___cam_8;

public:
	inline static int32_t get_offset_of_flashlight_5() { return static_cast<int32_t>(offsetof(GvrFPS_t2145111206, ___flashlight_5)); }
	inline GameObject_t3674682005 * get_flashlight_5() const { return ___flashlight_5; }
	inline GameObject_t3674682005 ** get_address_of_flashlight_5() { return &___flashlight_5; }
	inline void set_flashlight_5(GameObject_t3674682005 * value)
	{
		___flashlight_5 = value;
		Il2CppCodeGenWriteBarrier(&___flashlight_5, value);
	}

	inline static int32_t get_offset_of_textField_6() { return static_cast<int32_t>(offsetof(GvrFPS_t2145111206, ___textField_6)); }
	inline Text_t9039225 * get_textField_6() const { return ___textField_6; }
	inline Text_t9039225 ** get_address_of_textField_6() { return &___textField_6; }
	inline void set_textField_6(Text_t9039225 * value)
	{
		___textField_6 = value;
		Il2CppCodeGenWriteBarrier(&___textField_6, value);
	}

	inline static int32_t get_offset_of_fps_7() { return static_cast<int32_t>(offsetof(GvrFPS_t2145111206, ___fps_7)); }
	inline float get_fps_7() const { return ___fps_7; }
	inline float* get_address_of_fps_7() { return &___fps_7; }
	inline void set_fps_7(float value)
	{
		___fps_7 = value;
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(GvrFPS_t2145111206, ___cam_8)); }
	inline Camera_t2727095145 * get_cam_8() const { return ___cam_8; }
	inline Camera_t2727095145 ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Camera_t2727095145 * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier(&___cam_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
