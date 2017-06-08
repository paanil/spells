#ifndef PP_UTILS_H
#define PP_UTILS_H

#define JOIN__(a, b) a##b
#define JOIN_(a, b) JOIN__(a, b)
#define JOIN(a, b) JOIN_(a, b)

#define NUM_VA_ARGS_(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, N, ...) N
#define NUM_VA_ARGS(...) NUM_VA_ARGS_(__VA_ARGS__, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)

#define MAP1(f, x) f(x)
#define MAP2(f, x, ...) MAP1(f, x) MAP1(f, __VA_ARGS__)
#define MAP3(f, x, ...) MAP1(f, x) MAP2(f, __VA_ARGS__)
#define MAP4(f, x, ...) MAP1(f, x) MAP3(f, __VA_ARGS__)
#define MAP5(f, x, ...) MAP1(f, x) MAP4(f, __VA_ARGS__)
#define MAP6(f, x, ...) MAP1(f, x) MAP5(f, __VA_ARGS__)
#define MAP7(f, x, ...) MAP1(f, x) MAP6(f, __VA_ARGS__)
#define MAP8(f, x, ...) MAP1(f, x) MAP7(f, __VA_ARGS__)
#define MAP9(f, x, ...) MAP1(f, x) MAP8(f, __VA_ARGS__)
#define MAP10(f, x, ...) MAP1(f, x) MAP9(f, __VA_ARGS__)
#define MAP11(f, x, ...) MAP1(f, x) MAP10(f, __VA_ARGS__)
#define MAP12(f, x, ...) MAP1(f, x) MAP11(f, __VA_ARGS__)
#define MAP(f, ...) JOIN(MAP, NUM_VA_ARGS(__VA_ARGS__))(f, __VA_ARGS__)

#define MAP_IDX1(f, i, x) f(x, (i-1))
#define MAP_IDX2(f, i, x, ...) MAP_IDX1(f, i-1, x) MAP_IDX1(f, i, __VA_ARGS__)
#define MAP_IDX3(f, i, x, ...) MAP_IDX1(f, i-2, x) MAP_IDX2(f, i, __VA_ARGS__)
#define MAP_IDX4(f, i, x, ...) MAP_IDX1(f, i-3, x) MAP_IDX3(f, i, __VA_ARGS__)
#define MAP_IDX5(f, i, x, ...) MAP_IDX1(f, i-4, x) MAP_IDX4(f, i, __VA_ARGS__)
#define MAP_IDX6(f, i, x, ...) MAP_IDX1(f, i-5, x) MAP_IDX5(f, i, __VA_ARGS__)
#define MAP_IDX7(f, i, x, ...) MAP_IDX1(f, i-6, x) MAP_IDX6(f, i, __VA_ARGS__)
#define MAP_IDX8(f, i, x, ...) MAP_IDX1(f, i-7, x) MAP_IDX7(f, i, __VA_ARGS__)
#define MAP_IDX9(f, i, x, ...) MAP_IDX1(f, i-8, x) MAP_IDX8(f, i, __VA_ARGS__)
#define MAP_IDX10(f, i, x, ...) MAP_IDX1(f, i-9, x) MAP_IDX9(f, i, __VA_ARGS__)
#define MAP_IDX11(f, i, x, ...) MAP_IDX1(f, i-10, x) MAP_IDX10(f, i, __VA_ARGS__)
#define MAP_IDX12(f, i, x, ...) MAP_IDX1(f, i-11, x) MAP_IDX11(f, i, __VA_ARGS__)
#define MAP_IDX(f, ...) JOIN(MAP_IDX, NUM_VA_ARGS(__VA_ARGS__))(f, NUM_VA_ARGS(__VA_ARGS__), __VA_ARGS__)

#define ENUM_CASE(x) case x: return #x;
#define ENUM(name, ...) \
struct name {           \
    enum Enum { __VA_ARGS__ }; \
    static const int Count = NUM_VA_ARGS(__VA_ARGS__); \
    static const char *ToString(int e) { \
        switch (e) {    \
            MAP(ENUM_CASE, __VA_ARGS__); \
            default: return ""; \
        }               \
    }                   \
}

#define BIT_FLAG(flag, i) flag = (1 << i),
#define BIT_FLAGS(name, ...) \
struct name {                \
    enum Enum { MAP_IDX(BIT_FLAG, __VA_ARGS__) }; \
    int value;               \
    name() : value() {}      \
    name operator|(Enum flag) { name r; r.value = value|flag; return r; } \
    void operator|=(Enum flag) { value |= flag; } \
    int operator&(Enum flag) { return (value & flag); } \
    int operator&(name flags) { return (value & flags.value); } \
    void SetAllBits() { value = (1 << NUM_VA_ARGS(__VA_ARGS__)) - 1; } \
}

#endif // PP_UTILS_H
