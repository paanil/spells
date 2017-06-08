g++ -Wall jsonspells2c.cpp json_spell_parser.cpp spell_iterator.cpp utils.cpp -o jsonspells2c 

@rem jsonspells2c spells.json
jsonspells2c spells.json spells.autogen.inl

g++ -Wall spells2csv.cpp -o spells2csv 

spells2csv all
