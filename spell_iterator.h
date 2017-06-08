#ifndef SPELL_ITERATOR_H
#define SPELL_ITERATOR_H

struct SpellIterator
{
    const int *current;
    inline bool IsEnd() { return (*current < 0); }
    inline void Next() { if (IsEnd()) return; ++current; }
    inline int GetID() { return *current; }
};

SpellIterator IterateCasterSpells(int caster);

#endif // SPELL_ITERATOR_H
