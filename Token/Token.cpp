//Token.cpp
// Copyright @ Mangoz( c )

#include <string>

/*Tokens*/
const std::string& Token[23]()const{
     "{"[0], "}"[1], ":"[2], "::"[3],
     "("[4], ")"[5], "(("[6], "\"[7], "/"[8], 
     "/$"[9], "'"[10], "&"[11], "f#"[12],
     "="[13], "+"[14], "-"[15], "%"[16],
     "*"[17], ";"[18], "<"[19], ">"[20],
     "?"[21], "^"[22];
};

/*Addresses*/
const std::string& TAddress[6]()const{
    "@C"[0],//cpu address
    "@MB"[1],//memory bus address
    "@R"[2],//ram address
    "@D?:STRING"[3],//directory address
    "@F"[4],//file address
    "@SFAXX"[5];//set file address
};

/*Keywords*/
const std::string& Keyword[31]()const{
"return"[0], 
  "numeric"[1], 
  "boolean"[2],
"decimal"[3], 
  "numeric_f"[4], 
  "buffer"[5], //static
"free"[6], //delete
  "unfree"[7], 
  "if"[8], 
  "for"[9], 
  "cast"[10],
"defunc"[11], 
  "movto"[12], 
  "debug"[13], 
  "swap"[14], 
"unvaled"[15], 
  "inf"[16], 
  "char"[17], 
  "waitif"[18],
"size"[19],
  "store"[20], 
  "infexpr"[21],
  "arraytabtype"[22],
"defbyte"[23], 
  "end"[24], 
  "newdef"[25], 
  "moduleblock"[26], // class
"locked"[27], 
  "unlocked"[28], 
  "plocked"[29], 
  "blocklean"[30];
};
