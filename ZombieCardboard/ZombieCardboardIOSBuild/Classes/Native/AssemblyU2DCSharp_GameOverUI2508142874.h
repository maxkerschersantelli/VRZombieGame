#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// CardboardControl
struct CardboardControl_t480265927;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverUI
struct  GameOverUI_t2508142874  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera GameOverUI::cam
	Camera_t2727095145 * ___cam_2;
	// UnityEngine.GameObject GameOverUI::zombie
	GameObject_t3674682005 * ___zombie_4;
	// System.Boolean GameOverUI::gameOver
	bool ___gameOver_5;
	// UnityEngine.CanvasGroup GameOverUI::group
	CanvasGroup_t3702418109 * ___group_6;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(GameOverUI_t2508142874, ___cam_2)); }
	inline Camera_t2727095145 * get_cam_2() const { return ___cam_2; }
	inline Camera_t2727095145 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t2727095145 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}

	inline static int32_t get_offset_of_zombie_4() { return static_cast<int32_t>(offsetof(GameOverUI_t2508142874, ___zombie_4)); }
	inline GameObject_t3674682005 * get_zombie_4() const { return ___zombie_4; }
	inline GameObject_t3674682005 ** get_address_of_zombie_4() { return &___zombie_4; }
	inline void set_zombie_4(GameObject_t3674682005 * value)
	{
		___zombie_4 = value;
		Il2CppCodeGenWriteBarrier(&___zombie_4, value);
	}

	inline static int32_t get_offset_of_gameOver_5() { return static_cast<int32_t>(offsetof(GameOverUI_t2508142874, ___gameOver_5)); }
	inline bool get_gameOver_5() const { return ___gameOver_5; }
	inline bool* get_address_of_gameOver_5() { return &___gameOver_5; }
	inline void set_gameOver_5(bool value)
	{
		___gameOver_5 = value;
	}

	inline static int32_t get_offset_of_group_6() { return static_cast<int32_t>(offsetof(GameOverUI_t2508142874, ___group_6)); }
	inline CanvasGroup_t3702418109 * get_group_6() const { return ___group_6; }
	inline CanvasGroup_t3702418109 ** get_address_of_group_6() { return &___group_6; }
	inline void set_group_6(CanvasGroup_t3702418109 * value)
	{
		___group_6 = value;
		Il2CppCodeGenWriteBarrier(&___group_6, value);
	}
};

struct GameOverUI_t2508142874_StaticFields
{
public:
	// CardboardControl GameOverUI::cardboard
	CardboardControl_t480265927 * ___cardboard_3;

public:
	inline static int32_t get_offset_of_cardboard_3() { return static_cast<int32_t>(offsetof(GameOverUI_t2508142874_StaticFields, ___cardboard_3)); }
	inline CardboardControl_t480265927 * get_cardboard_3() const { return ___cardboard_3; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_3() { return &___cardboard_3; }
	inline void set_cardboard_3(CardboardControl_t480265927 * value)
	{
		___cardboard_3 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
