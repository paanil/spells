g++ -Wall -o json2c json2c.cpp json_spell_parser.cpp spell_iterator.cpp utils.cpp

@rem json2c spells.json
json2c spells.json spells.autogen.inl

g++ -Wall -o spells2csv spells2csv.cpp

spells2csv all
