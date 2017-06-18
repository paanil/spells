g++ -Wall -std=c++11 jsonspells2c.cpp json_parser.cpp spell_iterator.cpp -o jsonspells2c

@rem jsonspells2c spells.json
@rem jsonspells2c spells.json spells.autogen.inl
jsonspells2c example.json spells.autogen.inl

g++ -Wall -std=c++11 spells2csv.cpp -o spells2csv

spells2csv all
