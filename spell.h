#ifndef SPELL_H
#define SPELL_H

#include <cassert>

typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;

#define Bard     0x01
#define Cleric   0x02
#define Druid    0x04
#define Paladin  0x08
#define Ranger   0x10
#define Sorcerer 0x20
#define Warlock  0x40
#define Wizard   0x80

#define Level(x) x

enum
{
    Abjuration,
    Conjuration,
    Divination,
    Enchantment,
    Evocation,
    Illusion,
    Necromancy,
    Transmutation,
};

enum
{
    Action,
    BonusAction,
    Reaction,
    Rounds,
    Minutes,
    Hours,
    Days,
    Instantaneous,
    UntilDispelled,
    UntilDispelledOrTriggered,
    Special_,
};

#define CastingTime(t, unit) {t, unit}

#define Range(x) x
#define Self      0x0000
#define Touch     0x1000
#define Sight     0x2000
#define Unlimited 0x3000
#define Special   0x4000
#define Feet_     0x5000
#define Miles_    0x6000
#define Feet     |Feet_
#define Miles    |Miles_
#define RangeUnit(x) ((x) & 0xf000)
#define RangeValue(x) ((x) & 0x0fff)

#define Verbal   0x1
#define Somatic  0x2
#define Material 0x4

#define Duration(t, unit) {t, unit}
#define Duration_Instantaneous {0, Instantaneous}
#define Duration_UntilDispelled {0, UntilDispelled}
#define Duration_UntilDispelledOrTriggered {0, UntilDispelledOrTriggered}
#define Duration_Special {0, Special_}

#define Ritual        0x1
#define Concentration 0x2

struct Spell
{
    const char *name;
    const char *notes;
    u8 caster;
    u8 level;
    u8 school;
    u8 casting_time[2];
    u16 range;
    u8 components;
    u8 duration[2];
    u8 flags;
};

#endif // SPELL_H
