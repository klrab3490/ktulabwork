MOV DI, 1018
MOV CL, 04
MOV AL, [DI]
OUT C0, AL
MOV DX, 1010
DEC DX
JNZ 100F
INC DI
LOOP 1007
JMP 1000
HLT
TABLE 09 05 06 0A
