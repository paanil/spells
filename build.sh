g++ -Wall -std=c++11 jsonspells2c.cpp json_spell_parser.cpp spell_iterator.cpp utils.cpp -o jsonspells2c 

./jsonspells2c example.json spells.autogen.inl

g++ -Wall -std=c++11 spells2csv.cpp -o spells2csv 

./spells2csv all
