{
  "Acid Splash",
  "1-2 targets; dex save or 1d6/acid; scale 1d6 (5/11/17)",
  0|Sorcerer|Wizard,
  Level(0),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Aid",
  "",
  0|Cleric|Paladin,
  Level(2),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a tiny strip of white cloth)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Alarm",
  "",
  0|Ranger|Wizard,
  Level(1),
  Abjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a tiny bell and a piece of fine silver wire)
  Duration(8, Hours), // 8 hours
  0|Ritual
},

{
  "Alter Self",
  "",
  0|Sorcerer|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Animal Friendship",
  "",
  0|Bard|Druid|Ranger,
  Level(1),
  Enchantment,
  CastingTime(1, Minutes), // 1 minute
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a morsel of food)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Animal Messenger",
  "",
  0|Bard|Druid|Ranger,
  Level(2),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a morsel of food)
  Duration(24, Hours), // 24 hours
  0|Ritual
},

{
  "Animal Shapes",
  "",
  0|Druid,
  Level(8),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(24, Hours), // Concentration, up to 24 hours
  0|Concentration
},

{
  "Animate Dead",
  "",
  0|Cleric|Wizard,
  Level(3),
  Necromancy,
  CastingTime(1, Minutes), // 1 minute
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic|Material, // V, S, M (a drop of blood, a piece of flesh, and a pinch of bone dust)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Animate Objects",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(5),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Antilife Shell",
  "10ft radius",
  0|Druid,
  Level(5),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (10-foot radius)
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Antimagic Field",
  "10ft-radius sphere",
  0|Cleric|Wizard,
  Level(8),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (10-foot-radius sphere)
  0|Verbal|Somatic|Material, // V, S, M (a pinch of powdered iron or iron filings)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Antipathy/Sympathy",
  "",
  0|Druid|Wizard,
  Level(8),
  Enchantment,
  CastingTime(1, Hours), // 1 hour
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (either a lump of alum soaked in vinegar for the antipathy effect or a drop of honey for the sympathy effect)
  Duration(10, Days), // 10 days
  0
},

{
  "Arcane Eye",
  "",
  0|Wizard,
  Level(4),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of bat fur)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Arcane Gate",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(6),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(500 Feet), // 500 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Arcane Lock",
  "material cost (consumed)",
  0|Wizard,
  Level(2),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (gold dust worth at least 25 gp, which the spell consumes)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Armor of Agathys",
  "",
  0|Warlock,
  Level(1),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a cup o f water)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Arms of Hadar",
  "10ft radius",
  0|Warlock,
  Level(1),
  Conjuration,
  CastingTime(1, Action), // 1 Action
  Range(Self), // Self (10-foot radius)
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Astral Projection",
  "material cost (consumed)",
  0|Cleric|Warlock|Wizard,
  Level(9),
  Necromancy,
  CastingTime(1, Hours), // 1 hour
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic|Material, // V, S, M (for each creature you affect with this spell, you must provide one jacinth worth at least 1,000 gp and one ornately carved bar of silver worth at least 100 gp, all of which the spell consumes)
  Duration_Special, // Special
  0
},

{
  "Augury",
  "material cost",
  0|Cleric,
  Level(2),
  Divination,
  CastingTime(1, Minutes), // 1 minute
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (specially marked sticks, bones, or similar tokens worth at least 25 gp)
  Duration_Instantaneous, // Instantaneous
  0|Ritual
},

{
  "Aura of Life",
  "30ft radius",
  0|Paladin,
  Level(4),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot radius)
  0|Verbal, // V
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Aura of Purity",
  "30ft radius",
  0|Paladin,
  Level(4),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot radius)
  0|Verbal, // V
  Duration(10, Minutes), // Concentration, up to 10 minute
  0|Concentration
},

{
  "Aura of Vitality",
  "30ft radius",
  0|Paladin,
  Level(3),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot radius)
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Awaken",
  "material cost (consumed)",
  0|Bard|Druid,
  Level(5),
  Transmutation,
  CastingTime(8, Hours), // 8 hours
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (an agate worth at least 1,000 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Bane",
  "",
  0|Bard|Cleric,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a drop of blood)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Banishing Smite",
  "",
  0|Paladin,
  Level(5),
  Abjuration,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Banishment",
  "",
  0|Cleric|Paladin|Sorcerer|Warlock|Wizard,
  Level(4),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (an item distasteful to the target)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Barkskin",
  "",
  0|Druid|Ranger,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a handful of oak bark)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Beacon of Hope",
  "",
  0|Cleric,
  Level(3),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Beast Sense",
  "",
  0|Druid|Ranger,
  Level(2),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Somatic, // S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Ritual|Concentration
},

{
  "Bestow Curse",
  "",
  0|Bard|Cleric|Wizard,
  Level(3),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Bigby's Hand",
  "",
  0|Wizard,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (an eggshell and a snakeskin glove)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Blade Barrier",
  "",
  0|Cleric,
  Level(6),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Blade Ward",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(0),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Rounds), // 1 round
  0
},

{
  "Bless",
  "",
  0|Cleric|Paladin,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a sprinkling of holy water)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Blight",
  "",
  0|Druid|Sorcerer|Warlock|Wizard,
  Level(4),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Blinding Smite",
  "",
  0|Paladin,
  Level(3),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Blindness/Deafness",
  "",
  0|Bard|Cleric|Sorcerer|Wizard,
  Level(2),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal, // V
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Blink",
  "",
  0|Sorcerer|Wizard,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Blur",
  "",
  0|Sorcerer|Wizard,
  Level(2),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Branding Smite",
  "",
  0|Paladin,
  Level(2),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Burning Hands",
  "15ft cone",
  0|Sorcerer|Wizard,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (15-foot cone)
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Call Lightning",
  "",
  0|Druid,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Calm Emotions",
  "",
  0|Bard|Cleric,
  Level(2),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Chain Lightning",
  "",
  0|Sorcerer|Wizard,
  Level(6),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of fur; a piece of amber, glass, or a crystal rod; and three silver pins)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Charm Person",
  "",
  0|Bard|Druid|Sorcerer|Warlock|Wizard,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // 1 hour
  0
},

{
  "Chill Touch",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(0),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Rounds), // 1 round
  0
},

{
  "Chromatic Orb",
  "material cost",
  0|Sorcerer|Wizard,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (a diamond worth at least 50 gp)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Circle of Death",
  "material cost",
  0|Sorcerer|Warlock|Wizard,
  Level(6),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (the powder of a crushed black pearl worth at least 500 gp)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Circle of Power",
  "30ft radius",
  0|Paladin,
  Level(5),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot radius)
  0|Verbal, // V
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Clairvoyance",
  "material cost",
  0|Bard|Cleric|Sorcerer|Wizard,
  Level(3),
  Divination,
  CastingTime(10, Minutes), // 10 minutes
  Range(1 Miles), // 1 mile
  0|Verbal|Somatic|Material, // V, S, M (a focus worth at least 100 gp, either a jeweled horn for hearing or a glass eye for seeing)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Clone",
  "material cost (consumed)",
  0|Wizard,
  Level(8),
  Necromancy,
  CastingTime(1, Hours), // 1 hour
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a diamond worth at least 1,000 gp and at least 1 cubic inch of flesh of the creature that is to be cloned, which the spell consumes, and a vessel worth at least 2,000 gp that has a sealable lid and is large enough to hold a Medium creature, such as a huge urn, coffin, mud-filled cyst in the ground, or crystal container filled with salt water)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Cloud of Daggers",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(2),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a sliver of glass)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Cloudkill",
  "",
  0|Sorcerer|Wizard,
  Level(5),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Color Spray",
  "15ft cone",
  0|Sorcerer|Wizard,
  Level(1),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (15-foot cone)
  0|Verbal|Somatic|Material, // V, S, M (a pinch of powder or sand that is colored red, yellow, and blue)
  Duration(1, Rounds), // 1 round
  0
},

{
  "Command",
  "",
  0|Cleric|Paladin,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration(1, Rounds), // 1 round
  0
},

{
  "Commune",
  "",
  0|Cleric,
  Level(5),
  Divination,
  CastingTime(1, Minutes), // 1 minute
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (incense and a vial of holy or unholy water)
  Duration(1, Minutes), // 1 minute
  0|Ritual
},

{
  "Commune with Nature",
  "",
  0|Druid|Ranger,
  Level(5),
  Divination,
  CastingTime(1, Minutes), // 1 minute
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0|Ritual
},

{
  "Compelled Duel",
  "",
  0|Paladin,
  Level(1),
  Enchantment,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(30 Feet), // 30 feet
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Comprehend Languages",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(1),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a pinch of soot and salt)
  Duration(1, Hours), // 1 hour
  0|Ritual
},

{
  "Compulsion",
  "",
  0|Bard,
  Level(4),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Cone of Cold",
  "60ft cone",
  0|Sorcerer|Wizard,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (60-foot cone)
  0|Verbal|Somatic|Material, // V, S, M (a small crystal or glass cone)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Confusion",
  "",
  0|Bard|Druid|Sorcerer|Wizard,
  Level(4),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (three nut shells)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Conjure Animals",
  "",
  0|Druid|Ranger,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Conjure Barrage",
  "60ft cone",
  0|Ranger,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (60-foot cone)
  0|Verbal|Somatic|Material, // V, S, M (one piece of ammunition or a thrown weapon)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Conjure Celestial",
  "",
  0|Cleric,
  Level(7),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Conjure Elemental",
  "",
  0|Druid|Wizard,
  Level(5),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (burning incense for air, soft clay for earth, sulfur and phosphorus for fire, or water and sand for water)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Conjure Fey",
  "",
  0|Druid|Warlock,
  Level(6),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Conjure Minor Elementals",
  "",
  0|Druid|Wizard,
  Level(4),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Conjure Volley",
  "",
  0|Ranger,
  Level(5),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (one piece of ammunition or one thrown weapon)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Conjure Woodland Beings",
  "",
  0|Druid|Ranger,
  Level(4),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (one holly berry per creature summoned)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Contact Other Plane",
  "",
  0|Warlock|Wizard,
  Level(5),
  Divination,
  CastingTime(1, Minutes), // 1 minute
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // 1 minute
  0|Ritual
},

{
  "Contagion",
  "",
  0|Cleric|Druid,
  Level(5),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(7, Days), // 7 days
  0
},

{
  "Contingency",
  "material cost",
  0|Wizard,
  Level(6),
  Evocation,
  CastingTime(10, Minutes), // 10 minutes
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a statuette o f yourself carved from ivory and decorated with gems worth at least 1,500 gp)
  Duration(10, Days), // 10 days
  0
},

{
  "Continual Flame",
  "material cost (consumed)",
  0|Cleric|Wizard,
  Level(2),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (ruby dust worth 50 gp, which the spell consumes)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Control Water",
  "",
  0|Cleric|Druid|Wizard,
  Level(4),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(300 Feet), // 300 feet
  0|Verbal|Somatic|Material, // V, S, M (a drop of water and a pinch of dust)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Control Weather",
  "5mi radius",
  0|Cleric|Druid|Wizard,
  Level(8),
  Transmutation,
  CastingTime(10, Minutes), // 10 minutes
  Range(Self), // Self (5-mile radius)
  0|Verbal|Somatic|Material, // V, S, M (burning incense and bits of earth and wood mixed in water)
  Duration(8, Hours), // Concentration, up to 8 hours
  0|Concentration
},

{
  "Cordon of Arrows",
  "",
  0|Ranger,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(5 Feet), // 5 feet
  0|Verbal|Somatic|Material, // V, S, M (four or more arrows or bolts)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Counterspell",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(3),
  Abjuration,
  CastingTime(1, Reaction), // 1 reaction, which you take when you see a creature within 60 feet of you casting a spell
  Range(60 Feet), // 60 feet
  0|Somatic, // S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Create Food and Water",
  "",
  0|Cleric|Paladin,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Create or Destroy Water",
  "",
  0|Cleric|Druid,
  Level(1),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a drop of water if creating water or a few grains of sand if destroying it)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Create Undead",
  "material cost",
  0|Cleric|Warlock|Wizard,
  Level(6),
  Necromancy,
  CastingTime(1, Minutes), // 1 minute
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic|Material, // V, S, M (one clay pot filled with grave dirt, one clay pot filled with brackish water, and one 150 gp black onyx stone for each corpse)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Creation",
  "",
  0|Sorcerer|Wizard,
  Level(5),
  Illusion,
  CastingTime(1, Minutes), // 1 minute
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a tiny piece of matter of the same type of the item you plan to create)
  Duration_Special, // Special
  0
},

{
  "Crown of Madness",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(2),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Crusader's Mantle",
  "",
  0|Paladin,
  Level(3),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Cure Wounds",
  "",
  0|Bard|Cleric|Druid|Paladin|Ranger,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Dancing Lights",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(0),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of phosphorus or wychwood, or a glowworm)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Darkness",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(2),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Material, // V, M (bat fur and a drop of pitch or piece of coal)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Darkvision",
  "",
  0|Druid|Ranger|Sorcerer|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (either a pinch of dried carrot or an agate)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Daylight",
  "",
  0|Cleric|Druid|Paladin|Ranger|Sorcerer,
  Level(3),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // 1 hour
  0
},

{
  "Death Ward",
  "",
  0|Cleric|Paladin,
  Level(4),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(8, Hours), // 8 hours
  0
},

{
  "Delayed Blast Fireball",
  "",
  0|Sorcerer|Wizard,
  Level(7),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (a tiny ball of bat guano and sulfur)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Demiplane",
  "",
  0|Warlock|Wizard,
  Level(8),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Somatic, // S
  Duration(1, Hours), // 1 hour
  0
},

{
  "Destructive Wave",
  "30ft radius",
  0|Paladin,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot radius)
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Detect Evil and Good",
  "",
  0|Cleric|Paladin,
  Level(1),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Detect Magic",
  "",
  0|Bard|Cleric|Druid|Paladin|Ranger|Sorcerer|Wizard,
  Level(1),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Ritual|Concentration
},

{
  "Detect Poison and Disease",
  "",
  0|Cleric|Druid|Paladin|Ranger,
  Level(1),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a yew leaf)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Ritual|Concentration
},

{
  "Detect Thoughts",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(2),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a copper piece)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Dimension Door",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(4),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(500 Feet), // 500 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Disguise Self",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(1),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // 1 hour
  0
},

{
  "Disintegrate",
  "",
  0|Sorcerer|Wizard,
  Level(6),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a lodestone and a pinch of dust)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Dispel Evil and Good",
  "",
  0|Cleric|Paladin,
  Level(5),
  Abjuration,
  CastingTime(1, Action), // 1 Action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (holy water or powdered silver and iron)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Dispel Magic",
  "",
  0|Bard|Cleric|Druid|Paladin|Sorcerer|Warlock|Wizard,
  Level(3),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Dissonant Whispers",
  "",
  0|Bard,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Divination",
  "material cost (consumed)",
  0|Cleric,
  Level(4),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (incense and a sacrificial offering appropriate to your religion, together worth at least 25 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0|Ritual
},

{
  "Divine Favor",
  "",
  0|Paladin,
  Level(1),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Divine Word",
  "",
  0|Cleric,
  Level(7),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(30 Feet), // 30 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Dominate Beast",
  "",
  0|Druid|Sorcerer,
  Level(4),
  Enchantment,
  CastingTime(1, Action), // 1 Action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Dominate Monster",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(8),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Dominate Person",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(5),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Drawmij's Instant Summons",
  "material cost",
  0|Wizard,
  Level(6),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a sapphire w orth 1,000 gp)
  Duration_UntilDispelled, // Until dispelled
  0|Ritual
},

{
  "Dream",
  "",
  0|Bard|Warlock|Wizard,
  Level(5),
  Illusion,
  CastingTime(1, Minutes), // 1 minute
  Range(Special), // Special
  0|Verbal|Somatic|Material, // V, S, M (a handful of sand, a dab of ink, and a writing quill plucked from a sleeping bird)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Druidcraft",
  "",
  0|Druid,
  Level(0),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Earthquake",
  "",
  0|Cleric|Druid|Sorcerer,
  Level(8),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(500 Feet), // 500 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch of dirt, a piece of rock, and a lump of clay)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Eldritch Blast",
  "",
  0|Warlock,
  Level(0),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Elemental Weapon",
  "",
  0|Paladin,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Enhance Ability",
  "",
  0|Bard|Cleric|Druid|Sorcerer,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (fur or a feather from a beast)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Enlarge/Reduce",
  "",
  0|Sorcerer|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch of powdered iron)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Ensnaring Strike",
  "",
  0|Ranger,
  Level(1),
  Conjuration,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Entangle",
  "",
  0|Druid,
  Level(1),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Enthrall",
  "",
  0|Bard|Warlock,
  Level(2),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Etherealness",
  "",
  0|Bard|Cleric|Sorcerer|Warlock|Wizard,
  Level(7),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(8, Hours), // Up to 8 hours
  0
},

{
  "Evard's Black Tentacles",
  "",
  0|Wizard,
  Level(4),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (a piece of tentacle from a giant octopus or a giant squid)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Expeditious Retreat",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(1),
  Transmutation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Eyebite",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(6),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Fabricate",
  "",
  0|Wizard,
  Level(4),
  Transmutation,
  CastingTime(10, Minutes), // 10 minutes
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Faerie Fire",
  "",
  0|Bard|Druid,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "False Life",
  "",
  0|Sorcerer|Wizard,
  Level(1),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a small amount of alcohol ordistilled spirits)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Fear",
  "30ft cone",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(3),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot cone)
  0|Verbal|Somatic|Material, // V, S, M (a white feather or the heart of a hen)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Feather Fall",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(1),
  Transmutation,
  CastingTime(1, Reaction), // 1 reaction, which you take when you or a creature within 60 feet of you falls
  Range(60 Feet), // 60 feet
  0|Verbal|Material, // V, M (a small feather or piece of down)
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Feeblemind",
  "",
  0|Bard|Druid|Warlock|Wizard,
  Level(8),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (a handful of clay, crystal, glass, or mineral spheres)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Feign Death",
  "",
  0|Bard|Cleric|Druid|Wizard,
  Level(3),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a pinch of graveyard dirt)
  Duration(1, Hours), // 1 hour
  0|Ritual
},

{
  "Find Familiar",
  "material cost",
  0|Wizard,
  Level(1),
  Conjuration,
  CastingTime(1, Hours), // 1 hour
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic|Material, // V, S, M (10 gp worth of charcoal, incense, and herbs that must be consumed by fire in a brass brazier)
  Duration_Instantaneous, // Instantaneous
  0|Ritual
},

{
  "Find Steed",
  "",
  0|Paladin,
  Level(2),
  Conjuration,
  CastingTime(10, Minutes), // 10 minutes
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Find the Path",
  "material cost",
  0|Bard|Cleric|Druid,
  Level(6),
  Divination,
  CastingTime(1, Minutes), // 1 minute
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a set of divinatory tools--such as bones, ivory sticks, cards, teeth, or carved runes--worth 100 gp and an object from the location you wish to find)
  Duration(1, Days), // Concentration, up to 1 day
  0|Concentration
},

{
  "Find Traps",
  "",
  0|Cleric|Druid|Ranger,
  Level(2),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Finger of Death",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(7),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Fireball",
  "",
  0|Sorcerer|Wizard,
  Level(3),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (a tiny ball of bat guano and sulfur)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Fire Bolt",
  "",
  0|Sorcerer|Wizard,
  Level(0),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Fire Shield",
  "",
  0|Wizard,
  Level(4),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a bit of phosphorus or a firefly)
  Duration(10, Minutes), // 10 minutes
  0
},

{
  "Fire Storm",
  "",
  0|Cleric|Druid|Sorcerer,
  Level(7),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Flame Blade",
  "",
  0|Druid,
  Level(2),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (leaf of sumac)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Flame Strike",
  "",
  0|Cleric,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (pinch of sulfur)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Flaming Sphere",
  "",
  0|Druid|Wizard,
  Level(2),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of tallow, a pinch of brimstone, and a dusting of powdered iron)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Flesh to Stone",
  "",
  0|Warlock|Wizard,
  Level(6),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch of lime, water, and earth)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Fly",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a wing feather from any bird)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Fog Cloud",
  "",
  0|Druid|Ranger|Sorcerer|Wizard,
  Level(1),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Forbiddance",
  "material cost",
  0|Cleric,
  Level(6),
  Abjuration,
  CastingTime(10, Minutes), // 10 minutes
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a sprinkling o f holy water, rare incense, and powdered ruby worth at least 1,000 gp)
  Duration(1, Days), // 1 day
  0|Ritual
},

{
  "Forcecage",
  "material cost",
  0|Bard|Warlock|Wizard,
  Level(7),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(100 Feet), // 100 feet
  0|Verbal|Somatic|Material, // V, S, M (ruby dust worth 1,500 gp)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Foresight",
  "",
  0|Bard|Druid|Warlock|Wizard,
  Level(9),
  Divination,
  CastingTime(1, Minutes), // 1 minute
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a hummingbird feather)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Freedom of Movement",
  "",
  0|Bard|Cleric|Druid|Ranger,
  Level(4),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a leather strap, bound around the arm or a similar appendage)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Friends",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(0),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Somatic|Material, // S, M (a small amount of makeup applied to the face as this spell is cast)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Gaseous Form",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a bit of gauze and a wisp of smoke)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Gate",
  "material cost",
  0|Cleric|Sorcerer|Wizard,
  Level(9),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a diamond worth at least 5,000 gp)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Geas",
  "",
  0|Bard|Cleric|Druid|Paladin|Wizard,
  Level(5),
  Enchantment,
  CastingTime(1, Minutes), // 1 minute
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration(30, Days), // 30 days
  0
},

{
  "Gentle Repose",
  "",
  0|Cleric|Wizard,
  Level(2),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a pinch of salt and one copper piece placed on each of the corpse's eyes, which must remain there for the duration)
  Duration(10, Days), // 10 days
  0|Ritual
},

{
  "Giant Insect",
  "",
  0|Druid,
  Level(4),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Glibness",
  "",
  0|Bard|Warlock,
  Level(8),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Hours), // 1 hour
  0
},

{
  "Globe of Invulnerability",
  "10ft radius",
  0|Sorcerer|Wizard,
  Level(6),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (10-foot radius)
  0|Verbal|Somatic|Material, // V, S, M (a glass or crystal bead that shatters when the spell ends)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Glyph of Warding",
  "material cost (consumed)",
  0|Bard|Cleric|Wizard,
  Level(3),
  Abjuration,
  CastingTime(1, Hours), // 1 hour
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (incense and powdered diamond worth at least 200 gp, which the spell consumes)
  Duration_UntilDispelledOrTriggered, // Until dispelled or triggered
  0
},

{
  "Goodberry",
  "",
  0|Druid|Ranger,
  Level(1),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a sprig of mistletoe)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Grasping Vine",
  "",
  0|Druid|Ranger,
  Level(4),
  Conjuration,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Grease",
  "",
  0|Wizard,
  Level(1),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of pork rind or butter)
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Greater Invisibility",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(4),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Greater Restoration",
  "material cost (consumed)",
  0|Bard|Cleric|Druid,
  Level(5),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (diamond dust worth at least 100 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Guardian of Faith",
  "",
  0|Cleric,
  Level(4),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal, // V
  Duration(8, Hours), // 8 hours
  0
},

{
  "Guards and Wards",
  "material cost",
  0|Bard|Wizard,
  Level(6),
  Abjuration,
  CastingTime(10, Minutes), // 10 minutes
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (burning incense, a small measure of brimstone and oil, a knotted string, a small amount of umber hulk blood, and a small silver rod worth at least 10 gp)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Guidance",
  "",
  0|Cleric|Druid,
  Level(0),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Guiding Bolt",
  "",
  0|Cleric,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Rounds), // 1 round
  0
},

{
  "Gust of Wind",
  "60ft line",
  0|Druid|Sorcerer|Wizard,
  Level(2),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (60-foot line)
  0|Verbal|Somatic|Material, // V, S, M (a legume seed)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Hail of Thorns",
  "",
  0|Ranger,
  Level(1),
  Conjuration,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Hallow",
  "material cost (consumed)",
  0|Cleric,
  Level(5),
  Evocation,
  CastingTime(24, Hours), // 24 hours
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (herbs, oils, and incense worth at least 1000 gp, which the spell consumes)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Hallucinatory Terrain",
  "",
  0|Bard|Druid|Warlock|Wizard,
  Level(4),
  Illusion,
  CastingTime(10, Minutes), // 10 minutes
  Range(300 Feet), // 300 feet
  0|Verbal|Somatic|Material, // V, S, M (a stone, a twig, and a bit of green plant)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Harm",
  "",
  0|Cleric,
  Level(6),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Haste",
  "",
  0|Sorcerer|Wizard,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a shaving of licorice root)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Heal",
  "",
  0|Cleric|Druid,
  Level(6),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Healing Word",
  "",
  0|Bard|Cleric|Druid,
  Level(1),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Heat Metal",
  "",
  0|Bard|Druid,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a piece of iron and a flame)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Hellish Rebuke",
  "",
  0|Warlock,
  Level(1),
  Evocation,
  CastingTime(1, Reaction), // 1 reaction, which you take in response to being damaged by a creature within 60 feet of you that you can see
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Heroes' Feast",
  "material cost (consumed)",
  0|Cleric|Druid,
  Level(6),
  Conjuration,
  CastingTime(10, Minutes), // 10 minutes
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a gem-encrusted bowl worth at least 1,000 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Heroism",
  "",
  0|Bard|Paladin,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Hex",
  "",
  0|Warlock,
  Level(1),
  Enchantment,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (the petrified eye of a newt)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Hold Monster",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(5),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (a small, straight piece of iron)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Hold Person",
  "",
  0|Bard|Cleric|Druid|Sorcerer|Warlock|Wizard,
  Level(2),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a small, straight piece of iron)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Holy Aura",
  "material cost",
  0|Cleric,
  Level(8),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a tiny reliquary worth at least 1,000 gp containing a sacred relic, such as a scrap of cloth from a saint's robe or a piece of parchment from a religious text)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Hunger of Hadar",
  "",
  0|Warlock,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (a pickled octopus tentacle)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Hunter's Mark",
  "",
  0|Ranger,
  Level(1),
  Divination,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(90 Feet), // 90 feet
  0|Verbal, // V
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Hypnotic Pattern",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(3),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Somatic|Material, // S, M (a glowing stick of incense or a crystal vial filled with phosphorescent material)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Ice Storm",
  "",
  0|Druid|Sorcerer|Wizard,
  Level(4),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(300 Feet), // 300 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch of dust and a few drops of water)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Identify",
  "material cost",
  0|Bard|Wizard,
  Level(1),
  Divination,
  CastingTime(1, Minutes), // 1 minute
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a pearl worth at least 100 gp and an owl feather)
  Duration_Instantaneous, // Instantaneous
  0|Ritual
},

{
  "Illusory Script",
  "material cost (consumed)",
  0|Bard|Warlock|Wizard,
  Level(1),
  Illusion,
  CastingTime(1, Minutes), // 1 minute
  Range(Touch), // Touch
  0|Somatic|Material, // S, M (a lead-based ink worth at least 10 gp, which the spell consumes)
  Duration(10, Days), // 10 days
  0|Ritual
},

{
  "Immolation",
  "",
  0|Sorcerer,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Imprisonment",
  "material cost",
  0|Warlock|Wizard,
  Level(9),
  Abjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a vellum depiction or a carved statuette in the likeness of the target, and a special component that varies according to the version of the spell you choose, worth at least 500 gp per Hit Die of the target)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Incendiary Cloud",
  "",
  0|Sorcerer|Wizard,
  Level(8),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Inflict Wounds",
  "",
  0|Cleric,
  Level(1),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Insect Plague",
  "",
  0|Cleric|Druid|Sorcerer,
  Level(5),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(300 Feet), // 300 feet
  0|Verbal|Somatic|Material, // V, S, M (a few grains of sugar, some kernels of grain, and a smear of fat)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Invisibility",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(2),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (an eyelash encased in gum arabic)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Jump",
  "",
  0|Druid|Ranger|Sorcerer|Wizard,
  Level(1),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a grasshopper's hind leg)
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Knock",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Legend Lore",
  "material cost (consumed)",
  0|Bard|Cleric|Wizard,
  Level(5),
  Divination,
  CastingTime(10, Minutes), // 10 Minutes
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (incense worth at least 250 gp, which the spell consumes, and four ivory strips worth at least 50 gp each)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Leomund's Secret Chest",
  "material cost",
  0|Wizard,
  Level(4),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (an exquisite chest, 3 feet by 2 feet by 2 feet, constructed from rare materials worth at least 5,000 gp, and a Tiny replica made from the same materials worth at least 50 gp)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Leomund's Tiny Hut",
  "10ft-radius hemisphere",
  0|Bard|Wizard,
  Level(3),
  Evocation,
  CastingTime(1, Minutes), // 1 minute
  Range(Self), // Self (10-foot-radius hemisphere)
  0|Verbal|Somatic|Material, // V, S, M (a small crystal bead)
  Duration(8, Hours), // 8 hours
  0|Ritual
},

{
  "Lesser Restoration",
  "",
  0|Bard|Cleric|Druid|Paladin|Ranger,
  Level(2),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Levitate",
  "",
  0|Sorcerer|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (either a small leather loop or a piece of golden wire bent into a cup shape with a long shank on one end)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Light",
  "",
  0|Bard|Cleric|Sorcerer|Wizard,
  Level(0),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Material, // V, M (a firefly or phosphorescent moss)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Lightning Arrow",
  "",
  0|Ranger,
  Level(3),
  Transmutation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Lightning Bolt",
  "100ft line",
  0|Sorcerer|Wizard,
  Level(3),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (100-foot line)
  0|Verbal|Somatic|Material, // V, S, M (a bit of fur and a rod of amber, crystal, or glass)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Locate Animals or Plants",
  "",
  0|Bard|Druid|Ranger,
  Level(2),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a bit of fur from a bloodhound)
  Duration_Instantaneous, // Instantaneous
  0|Ritual
},

{
  "Locate Creature",
  "",
  0|Bard|Cleric|Druid|Paladin|Ranger|Wizard,
  Level(4),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a bit of fur from a bloodhound)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Locate Object",
  "",
  0|Bard|Cleric|Druid|Paladin|Ranger|Wizard,
  Level(2),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a forked twig)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Longstrider",
  "",
  0|Bard|Druid|Ranger|Wizard,
  Level(1),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a pinch of dirt)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Mage Armor",
  "",
  0|Sorcerer|Wizard,
  Level(1),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a piece of cured leather)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Mage Hand",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(0),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Magic Circle",
  "material cost (consumed)",
  0|Cleric|Paladin|Warlock|Wizard,
  Level(3),
  Abjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic|Material, // V, S, M (holywater or powdered silver and iron worth at least 100 gp,which the spell consumes)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Magic Jar",
  "material cost",
  0|Wizard,
  Level(6),
  Necromancy,
  CastingTime(1, Minutes), // 1 minute
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a gem, crystal, reliquary, or some other ornamental container worth at least 500 gp)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Magic Missile",
  "",
  0|Sorcerer|Wizard,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Magic Mouth",
  "material cost (consumed)",
  0|Bard|Wizard,
  Level(2),
  Illusion,
  CastingTime(1, Minutes), // 1 minute
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (A small bit of honeycomb, a jade dust worth at least 10gp which the spell consumes)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Magic Weapon",
  "",
  0|Paladin|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Major Image",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(3),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of fleece)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Mass Cure Wounds",
  "",
  0|Bard|Cleric|Druid,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Mass Heal",
  "",
  0|Cleric,
  Level(9),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Mass Healing Word",
  "",
  0|Cleric,
  Level(3),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Mass Suggestion",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(6),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Material, // V, M (a snake's tongue and either a bit of honeycomb or a drop of sweet oil)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Maze",
  "",
  0|Wizard,
  Level(8),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Meld into Stone",
  "",
  0|Cleric|Druid,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(8, Hours), // 8 hours
  0|Ritual
},

{
  "Melf's Acid Arrow",
  "",
  0|Wizard,
  Level(2),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (powered rhubarb leaf and an adder's stomach)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Mending",
  "",
  0|Bard|Cleric|Druid|Sorcerer|Wizard,
  Level(0),
  Transmutation,
  CastingTime(1, Minutes), // 1 minute
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (two lodestones)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Message",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(0),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a short piece of copper wire)
  Duration(1, Rounds), // 1 round
  0
},

{
  "Meteor Swarm",
  "",
  0|Sorcerer|Wizard,
  Level(9),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(1 Miles), // 1 mile
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Mind Blank",
  "",
  0|Bard|Wizard,
  Level(8),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Minor Illusion",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(0),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Somatic|Material, // S, M (a bit of fleece)
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Mirage Arcane",
  "",
  0|Bard|Druid|Wizard,
  Level(7),
  Illusion,
  CastingTime(10, Minutes), // 10 minutes
  Range(Sight), // Sight
  0|Verbal|Somatic, // V, S
  Duration(10, Days), // 10 days
  0
},

{
  "Mirror Image",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(2),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Mislead",
  "",
  0|Bard|Wizard,
  Level(5),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Somatic, // S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Misty Step",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(2),
  Conjuration,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Modify Memory",
  "",
  0|Bard|Wizard,
  Level(5),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Moonbeam",
  "",
  0|Druid,
  Level(2),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (several seeds of any moonseed plant and a piece of opalescent feldspar)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Mordenkainen's Faithful Hound",
  "",
  0|Wizard,
  Level(4),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a tiny silver whistle, a piece of bone, and a thread)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Mordenkainen's Magnificent Mansion",
  "material cost",
  0|Bard|Wizard,
  Level(7),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(300 Feet), // 300 feet
  0|Verbal|Somatic|Material, // V, S, M (a miniature portal carved from ivory, a small piece of polished marble, and a tiny silver spoon, each item worth at least 5 gp)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Mordenkainen's Private Sanctum",
  "",
  0|Wizard,
  Level(4),
  Abjuration,
  CastingTime(10, Minutes), // 10 minutes
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a thin sheet of lead, a piece of opaque glass, a wad of cotton or cloth, and powdered chrysolite)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Mordenkainen's Sword",
  "material cost",
  0|Bard|Wizard,
  Level(7),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a miniature platinum sword with a grip and pommel of copper and zinc, worth 250 gp)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Move Earth",
  "",
  0|Druid|Sorcerer|Wizard,
  Level(6),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (an iron blade and a small bag containing a mixture of soils--clay, loam, and sand)
  Duration(2, Hours), // Concentration, up to 2 hours
  0|Concentration
},

{
  "Nondetection",
  "material cost (consumed)",
  0|Bard|Ranger|Wizard,
  Level(3),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a pinch of diamond dust worth 25 gp sprinkled over the target, which the spell consumes)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Nystul's Magic Aura",
  "",
  0|Wizard,
  Level(2),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a small square of silk)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Otiluke's Freezing Sphere",
  "",
  0|Wizard,
  Level(6),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(300 Feet), // 300 feet
  0|Verbal|Somatic|Material, // V, S, M (a small crystal sphere)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Otiluke's Resilient Sphere",
  "",
  0|Wizard,
  Level(4),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a hemispherical piece of clear crystal and a matching hemispherical piece o f gum arabic)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Otto's Irresistible Dance",
  "",
  0|Bard|Wizard,
  Level(6),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Pass without Trace",
  "30ft radius",
  0|Druid|Ranger,
  Level(2),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot radius)
  0|Verbal|Somatic|Material, // V, S, M (ashes from a burned leaf of mistletoe and a sprig of spruce)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Passwall",
  "",
  0|Wizard,
  Level(5),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch of sesame seeds)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Phantasmal Force",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(2),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of fleece)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Phantasmal Killer",
  "",
  0|Wizard,
  Level(4),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Phantom Steed",
  "",
  0|Wizard,
  Level(3),
  Illusion,
  CastingTime(1, Minutes), // 1 minute
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // 1 hour
  0|Ritual
},

{
  "Planar Ally",
  "",
  0|Cleric,
  Level(6),
  Conjuration,
  CastingTime(10, Minutes), // 10 minutes
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Planar Binding",
  "material cost (consumed)",
  0|Bard|Cleric|Druid|Wizard,
  Level(5),
  Abjuration,
  CastingTime(1, Hours), // 1 hour
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a jewel worth at least 1,000 gp, which the spell consumes)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Plane Shift",
  "material cost",
  0|Cleric|Druid|Sorcerer|Warlock|Wizard,
  Level(7),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a forked, metal rod worth at least 250 gp, attuned to a particular plane of existence)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Plant Growth",
  "",
  0|Bard|Druid|Ranger,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action or 8 hours
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Poison Spray",
  "",
  0|Druid|Sorcerer|Warlock|Wizard,
  Level(0),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Polymorph",
  "",
  0|Bard|Druid|Sorcerer|Wizard,
  Level(4),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a caterpillar cocoon)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Power Word Heal",
  "",
  0|Bard,
  Level(9),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Power Word Kill",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(9),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Power Word Stun",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(8),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Prayer of Healing",
  "",
  0|Cleric,
  Level(2),
  Evocation,
  CastingTime(10, Minutes), // 10 minutes
  Range(30 Feet), // 30 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Prestidigitation",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(0),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Up to 1 hour
  0
},

{
  "Prismatic Spray",
  "60ft cone",
  0|Sorcerer|Wizard,
  Level(7),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (60-foot cone)
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Prismatic Wall",
  "",
  0|Wizard,
  Level(9),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // 10 minutes
  0
},

{
  "Produce Flame",
  "",
  0|Druid,
  Level(0),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // 10 minutes
  0
},

{
  "Programmed Illusion",
  "material cost",
  0|Bard|Wizard,
  Level(6),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of fleece and jade dust worth at least 25 gp)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Project Image",
  "material cost",
  0|Bard|Wizard,
  Level(7),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(500 Miles), // 500 miles
  0|Verbal|Somatic|Material, // V, S, M (a small replica of you made from materials worth at least 5 gp)
  Duration(1, Days), // Concentration, up to 1 day
  0|Concentration
},

{
  "Protection from Energy",
  "",
  0|Cleric|Druid|Ranger|Sorcerer|Wizard,
  Level(3),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Protection from Evil and Good",
  "",
  0|Cleric|Paladin|Warlock|Wizard,
  Level(1),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (holy water or powdered silver and iron, which the spell consumes)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Protection from Poison",
  "",
  0|Cleric|Druid|Paladin|Ranger,
  Level(2),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration(1, Hours), // 1 hour
  0
},

{
  "Purify Food and Drink",
  "",
  0|Cleric|Druid|Paladin,
  Level(1),
  Transmutation,
  CastingTime(1, Action), // 1 Action
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0|Ritual
},

{
  "Raise Dead",
  "material cost (consumed)",
  0|Bard|Cleric|Paladin,
  Level(5),
  Necromancy,
  CastingTime(1, Hours), // 1 hour
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a diamond worth at least 500 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Rary's Telepathic Bond",
  "",
  0|Wizard,
  Level(5),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (pieces o f eggshell from two different kinds o f creatures)
  Duration(1, Hours), // 1 hour
  0|Ritual
},

{
  "Ray of Enfeeblement",
  "",
  0|Warlock|Wizard,
  Level(2),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Ray of Frost",
  "",
  0|Sorcerer|Wizard,
  Level(0),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Ray of Sickness",
  "",
  0|Sorcerer|Wizard,
  Level(1),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Regenerate",
  "",
  0|Bard|Cleric|Druid,
  Level(7),
  Transmutation,
  CastingTime(1, Minutes), // 1 minute
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a prayer wheel and holy water)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Reincarnate",
  "material cost (consumed)",
  0|Druid,
  Level(5),
  Transmutation,
  CastingTime(1, Hours), // 1 hour
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (rare oils and unguents worth at least 1,000 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Remove Curse",
  "",
  0|Cleric|Paladin|Warlock|Wizard,
  Level(3),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Resistance",
  "",
  0|Cleric|Druid,
  Level(0),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a miniature cloak)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Resurrection",
  "material cost (consumed)",
  0|Bard|Cleric,
  Level(7),
  Necromancy,
  CastingTime(1, Hours), // 1 hour
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a diamond worth at least 1,000 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Reverse Gravity",
  "",
  0|Druid|Sorcerer|Wizard,
  Level(7),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(100 Feet), // 100 feet
  0|Verbal|Somatic|Material, // V, S, M (a lodestone and iron filings)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Revivify",
  "material cost (consumed)",
  0|Cleric|Paladin,
  Level(3),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (diamonds worth 300 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Rope Trick",
  "",
  0|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (powdered corn extract and a twisted loop of parchment)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Sacred Flame",
  "",
  0|Cleric,
  Level(0),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Sanctuary",
  "",
  0|Cleric,
  Level(1),
  Abjuration,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a small silver mirror)
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Scorching Ray",
  "",
  0|Sorcerer|Wizard,
  Level(2),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Scrying",
  "material cost",
  0|Bard|Cleric|Druid|Warlock|Wizard,
  Level(5),
  Divination,
  CastingTime(10, Minutes), // 10 minutes
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a focus worth at least 1,000 gp, such as a crystal ball, a silver mirror, or a font filled with holy water)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Searing Smite",
  "",
  0|Paladin,
  Level(1),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "See Invisibility",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(2),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a pinch of talc and a small sprinkling of powdered silver)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Seeming",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(5),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic, // V, S
  Duration(8, Hours), // 8 hours
  0
},

{
  "Sending",
  "",
  0|Bard|Cleric|Wizard,
  Level(3),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Unlimited), // Unlimited
  0|Verbal|Somatic|Material, // V, S, M (a short piece of fine copper wire)
  Duration(1, Rounds), // 1 round
  0
},

{
  "Sequester",
  "material cost (consumed)",
  0|Wizard,
  Level(7),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a powder composed of diamond, emerald, ruby, and sapphire dust worth at least 5,000 gp, which the spell consumes)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Shapechange",
  "material cost",
  0|Druid|Wizard,
  Level(9),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic|Material, // V, S, M (a jade circlet worth at least 1,500 gp, which you must place on your head before you cast the spell)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Shatter",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(2),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a chip of mica)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Shield",
  "",
  0|Sorcerer|Wizard,
  Level(1),
  Abjuration,
  CastingTime(1, Reaction), // 1 reaction, which you take when you are hit by an attack or targeted by the magic missile spell
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Rounds), // 1 round
  0
},

{
  "Shield of Faith",
  "",
  0|Cleric|Paladin,
  Level(1),
  Abjuration,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a small parchment with a bit of holy text written on it)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Shillelagh",
  "",
  0|Druid,
  Level(0),
  Transmutation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (mistletoe, a shamrock leaf, and a club or quarterstaff)
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Shocking Grasp",
  "",
  0|Sorcerer|Wizard,
  Level(0),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Silence",
  "",
  0|Bard|Cleric|Ranger,
  Level(2),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Ritual|Concentration
},

{
  "Silent Image",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(1),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of fleece)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Simulacrum",
  "material cost",
  0|Wizard,
  Level(7),
  Illusion,
  CastingTime(12, Hours), // 12 hours
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (snow or ice in quantities sufficient to made a life-size copy of the duplicated creature; some hair, fingernail clippings, or other piece o f that creature's body placed inside the snow or ice; and powdered ruby worth 1,500 gp, sprinkled over the duplicate and consumed by the spell)
  Duration_UntilDispelled, // Until dispelled
  0
},

{
  "Sleep",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch of fine sand, rose petals, or a cricket)
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Sleet Storm",
  "",
  0|Druid|Sorcerer|Wizard,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch o f dust and a few drops of water)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Slow",
  "",
  0|Sorcerer|Wizard,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a drop of molasses)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Spare the Dying",
  "",
  0|Cleric,
  Level(0),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Speak with Animals",
  "",
  0|Bard|Druid|Ranger,
  Level(1),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // 10 minutes
  0|Ritual
},

{
  "Speak with Dead",
  "",
  0|Bard|Cleric,
  Level(3),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic|Material, // V, S, M (burning incense)
  Duration(10, Minutes), // 10 minutes
  0
},

{
  "Speak with Plants",
  "30ft radius",
  0|Bard|Druid|Ranger,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (30-foot radius)
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // 10 minutes
  0
},

{
  "Spider Climb",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a drop of bitumen and a spider)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Spike Growth",
  "",
  0|Druid|Ranger,
  Level(2),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (seven sharp thorns or seven small twigs, each sharpened to a point)
  Duration(10, Minutes), // Concentration, Up to 10 minutes
  0|Concentration
},

{
  "Spirit Guardians",
  "15ft radius",
  0|Cleric,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (15-foot radius)
  0|Verbal|Somatic|Material, // V, S, M (a holy symbol)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Spiritual Weapon",
  "",
  0|Cleric,
  Level(2),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // 1 minute
  0
},

{
  "Staggering Smite",
  "",
  0|Paladin,
  Level(4),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Stinking Cloud",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(3),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(90 Feet), // 90 feet
  0|Verbal|Somatic|Material, // V, S, M (a rotten egg or several skunk cabbage leaves)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Stone Shape",
  "",
  0|Cleric|Druid|Wizard,
  Level(4),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (soft clay, which must be worked into roughly the desired shape of the stone object)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Stoneskin",
  "material cost (consumed)",
  0|Druid|Ranger|Sorcerer|Wizard,
  Level(4),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (diamond dust worth 100 gp, which the spell consumes)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Storm of Vengeance",
  "",
  0|Druid,
  Level(9),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Sight), // Sight
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Suggestion",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(2),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Material, // V, M (a snake's tongue and either a bit of honeycomb or a drop of sweet oil)
  Duration(8, Hours), // Concentration, up to 8 hours
  0|Concentration
},

{
  "Sunbeam",
  "60ft line",
  0|Druid|Sorcerer|Wizard,
  Level(6),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (60-foot line)
  0|Verbal|Somatic|Material, // V, S, M (a magnifying glass)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Sunburst",
  "",
  0|Druid|Sorcerer|Wizard,
  Level(8),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(150 Feet), // 150 feet
  0|Verbal|Somatic|Material, // V, S, M (fire and a piece of sunstone)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Swift Quiver",
  "",
  0|Ranger,
  Level(5),
  Transmutation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a quiver containing at least one piece of ammunition)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Symbol",
  "material cost (consumed)",
  0|Bard|Cleric|Wizard,
  Level(7),
  Abjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (mercury, phosphorus, and powdered diamond and opal with a total value of at least 1,000 gp, which the spell consumes)
  Duration_UntilDispelledOrTriggered, // Until dispelled or triggered
  0
},

{
  "Tasha's Hideous Laughter",
  "",
  0|Bard|Wizard,
  Level(1),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (tiny tarts and a feather that is waved in the air)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Telekinesis",
  "",
  0|Sorcerer|Wizard,
  Level(5),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Telepathy",
  "",
  0|Wizard,
  Level(8),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Unlimited), // Unlimited
  0|Verbal|Somatic|Material, // V, S, M (a pair of linked silver rings)
  Duration(24, Hours), // 24 hours
  0
},

{
  "Teleport",
  "",
  0|Bard|Sorcerer|Wizard,
  Level(7),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(10 Feet), // 10 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Teleportation Circle",
  "material cost (consumed)",
  0|Bard|Sorcerer|Wizard,
  Level(5),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(10 Feet), // 10 feet
  0|Verbal|Material, // V, M (rare chalks and inks infused with precious gems with 50 gp, which the spell consumes)
  Duration(1, Rounds), // 1 round
  0
},

{
  "Tenser's Floating Disk",
  "",
  0|Wizard,
  Level(1),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a drop o f mercury)
  Duration(1, Hours), // 1 hour
  0|Ritual
},

{
  "Thaumaturgy",
  "",
  0|Cleric,
  Level(0),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal, // V
  Duration(1, Minutes), // Up to 1 minute
  0
},

{
  "Thorn Whip",
  "",
  0|Druid,
  Level(0),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (the stem of a plant with thorns)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Thunderous Smite",
  "",
  0|Paladin,
  Level(1),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Thunderwave",
  "15ft cube",
  0|Bard|Druid|Sorcerer|Wizard,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self (15-foot cube)
  0|Verbal|Somatic, // V, S
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Time Stop",
  "",
  0|Sorcerer|Wizard,
  Level(9),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Tongues",
  "",
  0|Bard|Cleric|Sorcerer|Warlock|Wizard,
  Level(3),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Material, // V, M (a small clay model of a ziggurat)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Transport via Plants",
  "",
  0|Druid,
  Level(6),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(10 Feet), // 10 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Rounds), // 1 round
  0
},

{
  "Tree Stride",
  "",
  0|Druid|Ranger,
  Level(5),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "True Polymorph",
  "",
  0|Bard|Warlock|Wizard,
  Level(9),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a drop of mercury, a dollop of gum arabic, and a wisp of smoke)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "True Resurrection",
  "material cost (consumed)",
  0|Cleric|Druid,
  Level(9),
  Necromancy,
  CastingTime(1, Hours), // 1 hour
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a sprinkle of holy water and diamonds worth at least 25,000 gp, which the spell consumes)
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "True Seeing",
  "material cost",
  0|Bard|Cleric|Sorcerer|Warlock|Wizard,
  Level(6),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (an ointment for the eyes that costs 25 gp; is made from mushroom powder, saffron, and fat; and is consumed by the spell)
  Duration(1, Hours), // 1 hour
  0
},

{
  "True Strike",
  "",
  0|Bard|Sorcerer|Warlock|Wizard,
  Level(0),
  Divination,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Somatic, // S
  Duration(1, Rounds), // Concentration, up to 1 round
  0|Concentration
},

{
  "Tsunami",
  "",
  0|Druid,
  Level(8),
  Conjuration,
  CastingTime(1, Minutes), // 1 minute
  Range(Sight), // Sight
  0|Verbal|Somatic, // V, S
  Duration(6, Rounds), // Concentration, up to 6 rounds
  0|Concentration
},

{
  "Unseen Servant",
  "",
  0|Bard|Warlock|Wizard,
  Level(1),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a piece o f string and a bit o f wood)
  Duration(1, Hours), // 1 hour
  0|Ritual
},

{
  "Vampiric Touch",
  "",
  0|Warlock|Wizard,
  Level(3),
  Necromancy,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Vicious Mockery",
  "",
  0|Bard,
  Level(0),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Wall of Fire",
  "",
  0|Druid|Sorcerer|Wizard,
  Level(4),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a small piece of phosphorus)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Wall of Force",
  "",
  0|Wizard,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a pinch of powder made by crushing a clear gemstone)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Wall of Ice",
  "",
  0|Wizard,
  Level(6),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a small piece of quartz)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Wall of Stone",
  "",
  0|Druid|Sorcerer|Wizard,
  Level(5),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a small block of granite)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Wall of Thorns",
  "",
  0|Druid,
  Level(6),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a handful of thorns)
  Duration(10, Minutes), // Concentration, up to 10 minutes
  0|Concentration
},

{
  "Warding Bond",
  "material cost",
  0|Cleric,
  Level(2),
  Abjuration,
  CastingTime(1, Action), // 1 action
  Range(Touch), // Touch
  0|Verbal|Somatic|Material, // V, S, M (a pair of platinum rings worth at least 50 gp each, which you and the target must wear for the duration)
  Duration(1, Hours), // 1 hour
  0
},

{
  "Water Breathing",
  "",
  0|Druid|Ranger|Sorcerer|Wizard,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a short reed or piece of straw)
  Duration(24, Hours), // 24 hours
  0|Ritual
},

{
  "Water Walk",
  "",
  0|Cleric|Druid|Ranger|Sorcerer,
  Level(3),
  Transmutation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a piece of cork)
  Duration(1, Hours), // 1 hour
  0|Ritual
},

{
  "Web",
  "",
  0|Sorcerer|Wizard,
  Level(2),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic|Material, // V, S, M (a bit of spiderweb)
  Duration(1, Hours), // Concentration, up to 1 hour
  0|Concentration
},

{
  "Weird",
  "",
  0|Wizard,
  Level(9),
  Illusion,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic, // V, S
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Wind Walk",
  "",
  0|Druid,
  Level(6),
  Transmutation,
  CastingTime(1, Minutes), // 1 minute
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (fire and holy water)
  Duration(8, Hours), // 8 hours
  0
},

{
  "Wind Wall",
  "",
  0|Druid|Ranger,
  Level(3),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(120 Feet), // 120 feet
  0|Verbal|Somatic|Material, // V, S, M (a tiny fan and a feather of exotic origin)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Wish",
  "",
  0|Sorcerer|Wizard,
  Level(9),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(Self), // Self
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Witch Bolt",
  "",
  0|Sorcerer|Warlock|Wizard,
  Level(1),
  Evocation,
  CastingTime(1, Action), // 1 action
  Range(30 Feet), // 30 feet
  0|Verbal|Somatic|Material, // V, S, M (a twig from a tree that has been struck by lightning)
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Word of Recall",
  "",
  0|Cleric,
  Level(6),
  Conjuration,
  CastingTime(1, Action), // 1 action
  Range(5 Feet), // 5 feet
  0|Verbal, // V
  Duration_Instantaneous, // Instantaneous
  0
},

{
  "Wrathful Smite",
  "",
  0|Paladin,
  Level(1),
  Evocation,
  CastingTime(1, BonusAction), // 1 bonus action
  Range(Self), // Self
  0|Verbal, // V
  Duration(1, Minutes), // Concentration, up to 1 minute
  0|Concentration
},

{
  "Zone of Truth",
  "",
  0|Bard|Cleric|Paladin,
  Level(2),
  Enchantment,
  CastingTime(1, Action), // 1 action
  Range(60 Feet), // 60 feet
  0|Verbal|Somatic, // V, S
  Duration(10, Minutes), // 10 minutes
  0
},

