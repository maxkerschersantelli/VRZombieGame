#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t4202674828;
// CardboardControl
struct CardboardControl_t480265927;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flashlight
struct  Flashlight_t810391366  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Light Flashlight::flashlight
	Light_t4202674828 * ___flashlight_2;
	// System.Double Flashlight::battery
	double ___battery_3;
	// System.Double Flashlight::drainRate
	double ___drainRate_4;
	// System.Double Flashlight::rechargeRate
	double ___rechargeRate_5;
	// System.Double Flashlight::restartAmount
	double ___restartAmount_6;

public:
	inline static int32_t get_offset_of_flashlight_2() { return static_cast<int32_t>(offsetof(Flashlight_t810391366, ___flashlight_2)); }
	inline Light_t4202674828 * get_flashlight_2() const { return ___flashlight_2; }
	inline Light_t4202674828 ** get_address_of_flashlight_2() { return &___flashlight_2; }
	inline void set_flashlight_2(Light_t4202674828 * value)
	{
		___flashlight_2 = value;
		Il2CppCodeGenWriteBarrier(&___flashlight_2, value);
	}

	inline static int32_t get_offset_of_battery_3() { return static_cast<int32_t>(offsetof(Flashlight_t810391366, ___battery_3)); }
	inline double get_battery_3() const { return ___battery_3; }
	inline double* get_address_of_battery_3() { return &___battery_3; }
	inline void set_battery_3(double value)
	{
		___battery_3 = value;
	}

	inline static int32_t get_offset_of_drainRate_4() { return static_cast<int32_t>(offsetof(Flashlight_t810391366, ___drainRate_4)); }
	inline double get_drainRate_4() const { return ___drainRate_4; }
	inline double* get_address_of_drainRate_4() { return &___drainRate_4; }
	inline void set_drainRate_4(double value)
	{
		___drainRate_4 = value;
	}

	inline static int32_t get_offset_of_rechargeRate_5() { return static_cast<int32_t>(offsetof(Flashlight_t810391366, ___rechargeRate_5)); }
	inline double get_rechargeRate_5() const { return ___rechargeRate_5; }
	inline double* get_address_of_rechargeRate_5() { return &___rechargeRate_5; }
	inline void set_rechargeRate_5(double value)
	{
		___rechargeRate_5 = value;
	}

	inline static int32_t get_offset_of_restartAmount_6() { return static_cast<int32_t>(offsetof(Flashlight_t810391366, ___restartAmount_6)); }
	inline double get_restartAmount_6() const { return ___restartAmount_6; }
	inline double* get_address_of_restartAmount_6() { return &___restartAmount_6; }
	inline void set_restartAmount_6(double value)
	{
		___restartAmount_6 = value;
	}
};

struct Flashlight_t810391366_StaticFields
{
public:
	// CardboardControl Flashlight::cardboard
	CardboardControl_t480265927 * ___cardboard_7;

public:
	inline static int32_t get_offset_of_cardboard_7() { return static_cast<int32_t>(offsetof(Flashlight_t810391366_StaticFields, ___cardboard_7)); }
	inline CardboardControl_t480265927 * get_cardboard_7() const { return ___cardboard_7; }
	inline CardboardControl_t480265927 ** get_address_of_cardboard_7() { return &___cardboard_7; }
	inline void set_cardboard_7(CardboardControl_t480265927 * value)
	{
		___cardboard_7 = value;
		Il2CppCodeGenWriteBarrier(&___cardboard_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
