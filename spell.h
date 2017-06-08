#ifndef SPELL_H
#define SPELL_H

#include "spell_common.h"

BIT_FLAGS(Casters, CASTER_LIST);
#define CASTER(c) |Casters::c
#define CASTERS(...) Casters() MAP(CASTER, __VA_ARGS__)

#define LEVEL(l) l

#define SCHOOL(s) School::s

#define VALUE_UNIT(name, ...) \
struct name {                 \
    enum Unit { __VA_ARGS__ }; \
    int value;                \
    Unit unit;                \
    name() = default;         \
    name(Unit u) : value(), unit(u) {} \
    name(int v, Unit u) : value(v), unit(u) {} \
}

VALUE_UNIT(CastingTime, Action, BonusAction, Reaction, Minutes, Hours);
#define CASTING_TIME(v, u) CastingTime(v, CastingTime::u)

VALUE_UNIT(Range, Feet, Miles, Self, Touch, Sight, Unlimited, Special);
#define RANGE1(u) Range(Range::u)
#define RANGE2(v, u) Range(v, Range::u)
#define RANGE(...) JOIN(RANGE, NUM_VA_ARGS(__VA_ARGS__))(__VA_ARGS__)

BIT_FLAGS(Components, Verbal, Somatic, Material);
#define COMPONENT(c) |Components::c
#define COMPONENTS(...) Components() MAP(COMPONENT, __VA_ARGS__)

VALUE_UNIT(Duration, Rounds, Minutes, Hours, Days, Instantaneous,
           UntilDispelled, UntilDispelledOrTriggered, Special);
#define DURATION1(u) Duration(Duration::u)
#define DURATION2(v, u) Duration(v, Duration::u)
#define DURATION(...) JOIN(DURATION, NUM_VA_ARGS(__VA_ARGS__))(__VA_ARGS__)

BIT_FLAGS(Flags, Ritual, Concentration);
#define FLAG(f) |Flags::f
#define FLAGS(...) Flags() MAP(FLAG, __VA_ARGS__)

struct Spell
{
    const char  *name;
    const char  *notes;
    Casters      casters;
    int          level;
    School::Enum school;
    CastingTime  casting_time;
    Range        range;
    Components   components;
    Duration     duration;
    Flags        flags;
};

#endif // SPELL_H
