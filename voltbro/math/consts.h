#pragma once

// Single-precision constants for motor-control calculations; no runtime sqrt/division.
inline constexpr float SQRT2 = 1.4142135623730951f;       // sqrt(2)
inline constexpr float INV_SQRT2 = 0.7071067811865475f;   // 1 / sqrt(2)
inline constexpr float SQRT3 = 1.7320508075688773f;       // sqrt(3)
inline constexpr float INV_SQRT3 = 0.5773502691896258f;   // 1 / sqrt(3)
inline constexpr float HALF_SQRT3 = SQRT3 * 0.5f;        // sqrt(3) / 2
inline constexpr float TWO_THIRDS = 2.0f / 3.0f;

// PI_F avoids the PI macro provided by CMSIS-DSP.
inline constexpr float PI_F = 3.1415926535897932f;
inline constexpr float TWO_PI = 2.0f * PI_F;
inline constexpr float HALF_PI = 0.5f * PI_F;
inline constexpr float INV_PI = 0.3183098861837907f;

