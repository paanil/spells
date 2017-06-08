#ifndef SPELL_COMMON_H
#define SPELL_COMMON_H

#include "pp_utils.h"

#define CASTER_LIST \
Bard, Cleric, Druid, Paladin, Ranger, Sorcerer, Warlock, Wizard

ENUM(Caster, CASTER_LIST);

ENUM(School, Abjuration, Conjuration, Divination, Enchantment,
     Evocation, Illusion, Necromancy, Transmutation);

#endif // SPELL_COMMON_H
