#pragma once

typedef unsigned char byte;

class CodeTable {
    byte lbound;
    byte hbound;
    byte *array;

    public:
    CodeTable (byte low, byte high, byte* iniTable = 0);
    CodeTable (const CodeTable &src);

    ~CodeTable();
    byte& operator[](byte i);
}