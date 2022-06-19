#pragma clang diagnostic push
#pragma ide diagnostic ignored "HidingNonVirtualFunction"
#pragma ide diagnostic ignored "google-explicit-constructor"
#pragma once

#include <chr-core>

#define _CHR__MATH_VEC__VEC_S_1(size, type) using Vector##size##type = chr::Vector##size<type>;
#define _CHR__MATH_VEC__VEC_S_2(size, type) using vec##size##_##type = chr::vec##size<type>;

#define _CHR__MATH_VEC__VEC_S(size, type1, type2)                                                                     \
    _CHR__MATH_VEC__VEC_S_1(size, type1)                                                                              \
    _CHR__MATH_VEC__VEC_S_2(size, type2)

#define _CHR__MATH_VEC__VEC(type1, type2)                                                                             \
    _CHR__MATH_VEC__VEC_S(1, type1, type2)                                                                            \
    _CHR__MATH_VEC__VEC_S(2, type1, type2)                                                                            \
    _CHR__MATH_VEC__VEC_S(3, type1, type2)                                                                            \
    _CHR__MATH_VEC__VEC_S(4, type1, type2)

#define _CHR__MATH_VEC__VEC_CUSTOM_S_1(size, type, suffix) using Vector##size##suffix = chr::Vector##size<type>;
#define _CHR__MATH_VEC__VEC_CUSTOM_S_2(size, type, suffix) using vec##size##suffix = chr::vec##size<type>;

#define _CHR__MATH_VEC__VEC_CUSTOM_S(size, type1, type2, suffix1, suffix2)    \
    _CHR__MATH_VEC__VEC_CUSTOM_S_1(size, type1, suffix1)        \
    _CHR__MATH_VEC__VEC_CUSTOM_S_2(size, type2, suffix2)

#define _CHR__MATH_VEC__VEC_CUSTOM(type1, type2, suffix1, suffix2)      \
    _CHR__MATH_VEC__VEC_CUSTOM_S(1, type1, type2, suffix1, suffix2) \
    _CHR__MATH_VEC__VEC_CUSTOM_S(2, type1, type2, suffix1, suffix2) \
    _CHR__MATH_VEC__VEC_CUSTOM_S(3, type1, type2, suffix1, suffix2) \
    _CHR__MATH_VEC__VEC_CUSTOM_S(4, type1, type2, suffix1, suffix2)

namespace chr
{
    template <class T> struct Vector1
    {
        T X = 0;

        constexpr Vector1() = default;
        constexpr Vector1(T x)
            : X(x)
        {
        }

        bool operator==(const Vector1& other) const = default;
        bool operator!=(const Vector1& other) const = default;
        Vector1<T> operator+(const Vector1<T>& other) const { return Vector1<T>(this->X + other.X); }
        Vector1<T> operator-(const Vector1<T>& other) const { return Vector1<T>(this->X - other.X); }
        Vector1<T> operator*(const Vector1<T>& other) const { return Vector1<T>(this->X * other.X); }
        Vector1<T> operator/(const Vector1<T>& other) const { return Vector1<T>(this->X / other.X); }
        Vector1<T>& operator+=(const Vector1<T>& other)
        {
            this->X += other.X;
            return *this;
        }
        Vector1<T>& operator-=(const Vector1<T>& other)
        {
            this->X -= other.X;
            return *this;
        }
        Vector1<T>& operator*=(const Vector1<T>& other)
        {
            this->X *= other.X;
            return *this;
        }
        Vector1<T>& operator/=(const Vector1<T>& other)
        {
            this->X /= other.X;
            return *this;
        }
        Vector1<T> operator+(T other) const { return Vector1<T>(this->X + other); }
        Vector1<T> operator-(T other) const { return Vector1<T>(this->X - other); }
        Vector1<T> operator*(T other) const { return Vector1<T>(this->X * other); }
        Vector1<T> operator/(T other) const { return Vector1<T>(this->X / other); }
        Vector1<T>& operator+=(T other)
        {
            this->X += other;
            return *this;
        }
        Vector1<T>& operator-=(T other)
        {
            this->X -= other;
            return *this;
        }
        Vector1<T>& operator*=(T other)
        {
            this->X *= other;
            return *this;
        }
        Vector1<T>& operator/=(T other)
        {
            this->X /= other;
            return *this;
        }
        T& operator[](int index) { return ((T*)(this))[index]; }
    };
    template <class T> struct Vector2 : public Vector1<T>
    {
        T Y = 0;

        constexpr Vector2() = default;
        constexpr Vector2(T x, T y)
            : Vector1<T>(x)
            , Y(y)
        {
        }
        constexpr Vector2(T v)
            : Vector1<T>(v)
            , Y(v)
        {
        }

        bool operator==(const Vector2& other) const = default;
        bool operator!=(const Vector2& other) const = default;
        Vector2<T> operator+(const Vector2<T>& other) const { return Vector2<T>(this->X + other.X, this->Y + other.Y); }
        Vector2<T> operator-(const Vector2<T>& other) const { return Vector2<T>(this->X - other.X, this->Y - other.Y); }
        Vector2<T> operator*(const Vector2<T>& other) const { return Vector2<T>(this->X * other.X, this->Y * other.Y); }
        Vector2<T> operator/(const Vector2<T>& other) const { return Vector2<T>(this->X / other.X, this->Y / other.Y); }
        Vector2<T>& operator+=(const Vector2<T>& other)
        {
            this->X += other.X;
            this->Y += other.Y;
            return *this;
        }
        Vector2<T>& operator-=(const Vector2<T>& other)
        {
            this->X -= other.X;
            this->Y -= other.Y;
            return *this;
        }
        Vector2<T>& operator*=(const Vector2<T>& other)
        {
            this->X *= other.X;
            this->Y *= other.Y;
            return *this;
        }
        Vector2<T>& operator/=(const Vector2<T>& other)
        {
            this->X /= other.X;
            this->Y /= other.Y;
            return *this;
        }
        Vector2<T> operator+(T other) const { return Vector2<T>(this->X + other, this->Y + other); }
        Vector2<T> operator-(T other) const { return Vector2<T>(this->X - other, this->Y - other); }
        Vector2<T> operator*(T other) const { return Vector2<T>(this->X * other, this->Y * other); }
        Vector2<T> operator/(T other) const { return Vector2<T>(this->X / other, this->Y / other); }
        Vector2<T>& operator+=(T other)
        {
            this->X += other;
            this->Y += other;
            return *this;
        }
        Vector2<T>& operator-=(T other)
        {
            this->X -= other;
            this->Y -= other;
            return *this;
        }
        Vector2<T>& operator*=(T other)
        {
            this->X *= other;
            this->Y *= other;
            return *this;
        }
        Vector2<T>& operator/=(T other)
        {
            this->X /= other;
            this->Y /= other;
            return *this;
        }
        T& operator[](int index) { return ((T*)(this))[index]; }
    };
    template <class T> struct Vector3 : public Vector2<T>
    {
        T Z = 0;

        constexpr Vector3() = default;
        constexpr Vector3(T x, T y, T z)
            : Vector2<T>(x, y)
            , Z(z)
        {
        }
        constexpr Vector3(T v)
            : Vector2<T>(v, v)
            , Z(v)
        {
        }

        bool operator==(const Vector3& other) const = default;
        bool operator!=(const Vector3& other) const = default;

        Vector3<T> operator+(const Vector3<T>& other) const
        {
            return Vector3<T>(this->X + other.X, this->Y + other.Y, this->Z + other.Z);
        }
        Vector3<T> operator-(const Vector3<T>& other) const
        {
            return Vector3<T>(this->X - other.X, this->Y - other.Y, this->Z - other.Z);
        }
        Vector3<T> operator*(const Vector3<T>& other) const
        {
            return Vector3<T>(this->X * other.X, this->Y * other.Y, this->Z * other.Z);
        }
        Vector3<T> operator/(const Vector3<T>& other) const
        {
            return Vector3<T>(this->X / other.X, this->Y / other.Y, this->Z / other.Z);
        }
        Vector3<T>& operator+=(const Vector3<T>& other)
        {
            this->X += other.X;
            this->Y += other.Y;
            this->Z += other.Z;
            return *this;
        }
        Vector3<T>& operator-=(const Vector3<T>& other)
        {
            this->X -= other.X;
            this->Y -= other.Y;
            this->Z -= other.Z;
            return *this;
        }
        Vector3<T>& operator*=(const Vector3<T>& other)
        {
            this->X *= other.X;
            this->Y *= other.Y;
            this->Z *= other.Z;
            return *this;
        }
        Vector3<T>& operator/=(const Vector3<T>& other)
        {
            this->X /= other.X;
            this->Y /= other.Y;
            this->Z /= other.Z;
            return *this;
        }
        Vector3<T> operator+(T other) const { return Vector3<T>(this->X + other, this->Y + other, this->Z + other); }
        Vector3<T> operator-(T other) const { return Vector3<T>(this->X - other, this->Y - other, this->Z - other); }
        Vector3<T> operator*(T other) const { return Vector3<T>(this->X * other, this->Y * other, this->Z * other); }
        Vector3<T> operator/(T other) const { return Vector3<T>(this->X / other, this->Y / other, this->Z / other); }
        Vector3<T>& operator+=(T other)
        {
            this->X += other;
            this->Y += other;
            this->Z += other;
            return *this;
        }
        Vector3<T>& operator-=(T other)
        {
            this->X -= other;
            this->Y -= other;
            this->Z -= other;
            return *this;
        }
        Vector3<T>& operator*=(T other)
        {
            this->X *= other;
            this->Y *= other;
            this->Z *= other;
            return *this;
        }
        Vector3<T>& operator/=(T other)
        {
            this->X /= other;
            this->Y /= other;
            this->Z /= other;
            return *this;
        }
        T& operator[](int index) { return ((T*)(this))[index]; }
    };
    template <class T> struct Vector4 : public Vector3<T>
    {
        T W = 0;

        constexpr Vector4() = default;
        constexpr Vector4(T x, T y, T z, T w)
            : Vector3<T>(x, y, z)
            , W(w)
        {
        }
        constexpr Vector4(T v)
            : Vector3<T>(v, v, v)
            , W(v)
        {
        }
        constexpr Vector4(T h, T v)
            : Vector3<T>(h, v, h)
            , W(v)
        {
        }
        constexpr Vector4(Vector2<T> hv)
            : Vector3<T>(hv.X, hv.Y, hv.X)
            , W(hv.Y)
        {
        }
        constexpr Vector4(Vector2<T> xy, Vector2<T> zw)
            : Vector3<T>(xy.X, xy.Y, zw.X)
            , W(zw.Y)
        {
        }

        bool operator==(const Vector4& other) const = default;
        bool operator!=(const Vector4& other) const = default;

        Vector4<T> operator+(const Vector4<T>& other) const
        {
            return Vector4(this->X + other.X, this->Y + other.Y, this->Z + other.Z, this->W + other.W);
        }
        Vector4<T> operator-(const Vector4<T>& other) const
        {
            return Vector4(this->X - other.X, this->Y - other.Y, this->Z - other.Z, this->W - other.W);
        }
        Vector4<T> operator*(const Vector4<T>& other) const
        {
            return Vector4(this->X * other.X, this->Y * other.Y, this->Z * other.Z, this->W * other.W);
        }
        Vector4<T> operator/(const Vector4<T>& other) const
        {
            return Vector4(this->X / other.X, this->Y / other.Y, this->Z / other.Z, this->W / other.W);
        }
        Vector4<T>& operator+=(const Vector4<T>& other)
        {
            this->X += other.X;
            this->Y += other.Y;
            this->Z += other.Z;
            this->W += other.W;
            return *this;
        }
        Vector4<T>& operator-=(const Vector4<T>& other)
        {
            this->X -= other.X;
            this->Y -= other.Y;
            this->Z -= other.Z;
            this->W -= other.W;
            return *this;
        }
        Vector4<T>& operator*=(const Vector4<T>& other)
        {
            this->X *= other.X;
            this->Y *= other.Y;
            this->Z *= other.Z;
            this->W *= other.W;
            return *this;
        }
        Vector4<T>& operator/=(const Vector4<T>& other)
        {
            this->X /= other.X;
            this->Y /= other.Y;
            this->Z /= other.Z;
            this->W /= other.W;
            return *this;
        }
        Vector4<T> operator+(T other) const
        {
            return Vector4<T>(this->X + other, this->Y + other, this->Z + other, this->W + other);
        }
        Vector4<T> operator-(T other) const
        {
            return Vector4<T>(this->X - other, this->Y - other, this->Z - other, this->W - other);
        }
        Vector4<T> operator*(T other) const
        {
            return Vector4<T>(this->X * other, this->Y * other, this->Z * other, this->W * other);
        }
        Vector4<T> operator/(T other) const
        {
            return Vector4<T>(this->X / other, this->Y / other, this->Z / other, this->W / other);
        }
        Vector4<T>& operator+=(T other)
        {
            this->X += other;
            this->Y += other;
            this->Z += other;
            this->W += other;
            return *this;
        }
        Vector4<T>& operator-=(T other)
        {
            this->X -= other;
            this->Y -= other;
            this->Z -= other;
            this->W -= other;
            return *this;
        }
        Vector4<T>& operator*=(T other)
        {
            this->X *= other;
            this->Y *= other;
            this->Z *= other;
            this->W *= other;
            return *this;
        }
        Vector4<T>& operator/=(T other)
        {
            this->X /= other;
            this->Y /= other;
            this->Z /= other;
            this->W /= other;
            return *this;
        }
        T& operator[](int index) { return ((T*)(this))[index]; }
    };

    template <class T> using vec1 = Vector1<T>;
    template <class T> using vec2 = Vector2<T>;
    template <class T> using vec3 = Vector3<T>;
    template <class T> using vec4 = Vector4<T>;

    _CHR__MATH_VEC__VEC(Int8, i8)
    _CHR__MATH_VEC__VEC(Int16, i16)
    _CHR__MATH_VEC__VEC(Int32, i32)
    _CHR__MATH_VEC__VEC(Int64, i64)

    _CHR__MATH_VEC__VEC(UInt8, u8)
    _CHR__MATH_VEC__VEC(UInt16, u16)
    _CHR__MATH_VEC__VEC(UInt32, u32)
    _CHR__MATH_VEC__VEC(UInt64, u64)

    _CHR__MATH_VEC__VEC(Byte, byte)
    _CHR__MATH_VEC__VEC(SByte, sbyte)

    _CHR__MATH_VEC__VEC(Float32, f32)
    _CHR__MATH_VEC__VEC(Float64, f64)

    _CHR__MATH_VEC__VEC(Bool, bl)

    _CHR__MATH_VEC__VEC_CUSTOM(Int32, i32, I, i)

    _CHR__MATH_VEC__VEC_CUSTOM(Float32, f32, F, f)
    _CHR__MATH_VEC__VEC_CUSTOM(Float64, f64, D, d)

    _CHR__MATH_VEC__VEC_CUSTOM(Byte, byte, B, b)
}

#pragma clang diagnostic pop