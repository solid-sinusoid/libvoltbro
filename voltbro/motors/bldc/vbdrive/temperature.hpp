#pragma once

#include <cstdint>

// STM32G431VBx3 in STSPIN32G4: DS12589 Table 17, operating junction range.
inline constexpr float MCU_MIN_TEMPERATURE_K = 233.15f;
inline constexpr float MCU_MAX_TEMPERATURE_K = 403.15f;
inline constexpr float DEFAULT_MAX_STATOR_TEMPERATURE_K = 363.15f;
inline constexpr float DEFAULT_RESTART_STATOR_TEMPERATURE_K = 333.15f;

enum class VBDriveStatus : uint8_t { NOMINAL = 0, COOLING_DOWN = 1 };
enum class ThermalState : uint8_t { NOMINAL = 0, ADVISORY = 1, CAUTION = 2 };
