#pragma once
#include "stdafx.h"


 static BYTE HvPeekPokeExp[] = {
	 0xDD, 0xCD, 0xC5, 0xC7, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x85, 0x95,
	 0xA1, 0x8A, 0x43, 0x4F, 0xBA, 0x5F, 0x3D, 0x82, 0x65, 0xA5, 0x59, 0xD1,
	 0x9F, 0xD4, 0x6F, 0xE9, 0x35, 0x54, 0x68, 0xA6, 0x95, 0x95, 0x95, 0x95,
	 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95,
	 0xEF, 0x97, 0xCC, 0xD6, 0x0B, 0x73, 0x06, 0x40, 0x94, 0x5C, 0xDD, 0xD8,
	 0x27, 0x2A, 0x08, 0x8D, 0x3C, 0x83, 0xCB, 0x6A, 0x8B, 0x40, 0x23, 0x3D,
	 0xEC, 0xF5, 0x3D, 0xBA, 0x54, 0x18, 0xB5, 0x1F, 0x7E, 0xD3, 0x56, 0x94,
	 0x79, 0x51, 0x4E, 0x4A, 0x34, 0x91, 0x44, 0x4A, 0xB6, 0xFC, 0xCB, 0x59,
	 0xC5, 0x56, 0x61, 0x48, 0x31, 0x15, 0xE8, 0x90, 0xB8, 0xC2, 0x6A, 0xF5,
	 0x30, 0xCD, 0xFC, 0xB2, 0x0F, 0xA6, 0xE5, 0x7D, 0x57, 0x17, 0x49, 0x4F,
	 0x77, 0xD8, 0x74, 0x6D, 0x34, 0x47, 0x59, 0x18, 0x0D, 0x90, 0x44, 0x36,
	 0xBB, 0xA2, 0x93, 0x9A, 0x62, 0x7A, 0xE5, 0x7A, 0xBD, 0x42, 0x3B, 0x40,
	 0xCE, 0x8C, 0x8E, 0x86, 0xC5, 0x98, 0x80, 0x95, 0x07, 0x94, 0x7B, 0xAD,
	 0x32, 0xF4, 0x24, 0x34, 0xB2, 0x2A, 0x25, 0xD7, 0x9A, 0x92, 0x56, 0x1A,
	 0xED, 0x38, 0x3A, 0x12, 0x1A, 0xA1, 0x1F, 0x33, 0xFC, 0xE8, 0xD5, 0x23,
	 0xC9, 0x0B, 0x94, 0x79, 0x0A, 0xCB, 0xED, 0xA5, 0x9C, 0xCF, 0xB4, 0x6A,
	 0xA0, 0x19, 0x86, 0x2B, 0x29, 0x07, 0xF2, 0x76, 0x82, 0x9E, 0x9C, 0x89,
	 0x77, 0x08, 0x79, 0x68, 0x6E, 0xF9, 0xDC, 0xAF, 0x59, 0x72, 0x0C, 0x23,
	 0x26, 0x1F, 0x1A, 0x7A, 0x62, 0x35, 0xBD, 0xDA, 0xE7, 0x52, 0xA8, 0x42,
	 0x59, 0x7E, 0x27, 0x8E, 0xE1, 0x06, 0x42, 0x97, 0x90, 0x40, 0x74, 0xB0,
	 0xA0, 0x42, 0x75, 0xC5, 0x7F, 0x5A, 0x17, 0xFC, 0x76, 0xAE, 0xFA, 0x6F,
	 0x86, 0x65, 0xCE, 0x4C, 0x8F, 0x25, 0x46, 0x9E, 0x10, 0xD8, 0xFF, 0x69,
	 0xA4, 0xD0, 0x56, 0x36, 0x6F, 0xEB, 0x4F, 0x06, 0x11, 0x41, 0x72, 0x6F,
	 0x3E, 0xE9, 0xB7, 0x03, 0xC1, 0xFC, 0xEA, 0x5C, 0x6D, 0x51, 0xCF, 0x57,
	 0x17, 0x0C, 0xA1, 0xD3, 0x14, 0xFA, 0x93, 0xA6, 0x8C, 0x01, 0xE1, 0x31,
	 0xE3, 0x97, 0xDA, 0x2C, 0xDD, 0xC3, 0xC5, 0xC5, 0x95, 0x95, 0x95, 0x95,
	 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95,
	 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95,
	 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x94, 0xF5,
	 0x95, 0x95, 0x94, 0x05, 0x95, 0x95, 0x95, 0x85, 0x95, 0x95, 0x95, 0x85,
	 0x95, 0x95, 0x94, 0x15, 0x95, 0x95, 0x95, 0x95, 0xE8, 0x1D, 0x97, 0x33,
	 0x6E, 0x74, 0x6A, 0x65, 0x6C, 0x14, 0x6A, 0x6D, 0x01, 0xB4, 0x6A, 0x95,
	 0xE9, 0x0A, 0xB6, 0xED, 0xB9, 0x8A, 0x95, 0x95, 0xD4, 0x17, 0x95, 0x55,
	 0xB9, 0x8A, 0x95, 0x94, 0xD4, 0x17, 0x95, 0x55, 0xB9, 0x8A, 0x95, 0x97,
	 0xD4, 0x17, 0x95, 0x55, 0xB9, 0x8A, 0x95, 0x96, 0xD4, 0x17, 0x95, 0x55,
	 0xB9, 0x8A, 0x95, 0x9F, 0xD4, 0x17, 0x95, 0xF1, 0xB9, 0x8A, 0x95, 0x90,
	 0xD4, 0x17, 0x95, 0x41, 0xB9, 0x8A, 0x95, 0x93, 0xD4, 0x17, 0x95, 0x41,
	 0xB9, 0x8A, 0x95, 0x92, 0xD4, 0x17, 0x95, 0x41, 0xB9, 0x8A, 0x95, 0x9D,
	 0xD4, 0x17, 0x95, 0x41, 0xB9, 0x8A, 0x95, 0x9E, 0xD5, 0x15, 0x95, 0x95,
	 0x15, 0xF5, 0x95, 0xD9, 0xE9, 0xF7, 0x8F, 0x81, 0x15, 0xF6, 0x95, 0x9D,
	 0xE9, 0xFC, 0x96, 0x33, 0xE9, 0x56, 0xA6, 0xED, 0xAD, 0x15, 0x95, 0x94,
	 0xDB, 0x15, 0x91, 0xB4, 0xE9, 0xF3, 0x8E, 0xED, 0xE9, 0x7C, 0x96, 0x33,
	 0xB9, 0x8A, 0x95, 0x91, 0xD4, 0x17, 0x95, 0xF9, 0xB9, 0x8A, 0x95, 0x9C,
	 0xD4, 0x17, 0x95, 0x35, 0xDD, 0x95, 0x95, 0x95, 0xDD, 0x95, 0x95, 0x90,
	 0xE9, 0x33, 0xBE, 0xED, 0xA9, 0x15, 0xE9, 0xF5, 0xC5, 0x33, 0xC1, 0xFF,
	 0xF5, 0x11, 0x97, 0x33, 0xC5, 0x51, 0xA7, 0x7D, 0xE9, 0xFD, 0x97, 0x33,
	 0xAD, 0xF6, 0x95, 0xA5, 0x05, 0x16, 0x95, 0x95, 0xE9, 0x95, 0x8D, 0xF9,
	 0xE9, 0x95, 0x8A, 0x39, 0xE9, 0x95, 0x91, 0x39, 0xD9, 0x95, 0x94, 0xB9,
	 0xE9, 0xEC, 0xDF, 0x33, 0xDD, 0x95, 0x95, 0x0D, 0x1D, 0xF0, 0x95, 0x95,
	 0xDD, 0x95, 0x95, 0x05, 0x35, 0xF0, 0x95, 0x95, 0xDD, 0x95, 0x95, 0x1D,
	 0x15, 0xF0, 0x95, 0x95, 0xDD, 0x95, 0x95, 0x15, 0x7D, 0xF0, 0x95, 0x95,
	 0xDD, 0x95, 0x95, 0xED, 0x1E, 0x70, 0x95, 0x95, 0x0E, 0x73, 0x95, 0x95,
	 0xAD, 0x30, 0x95, 0x94, 0xAD, 0x53, 0x95, 0x94, 0xD7, 0x95, 0x6A, 0x65,
	 0xAD, 0xF5, 0x95, 0x95, 0xDD, 0x95, 0x95, 0xC9, 0x0D, 0x50, 0x95, 0x95,
	 0xDD, 0x95, 0x95, 0xD5, 0x25, 0x50, 0x95, 0x95, 0xDD, 0x95, 0x95, 0xAD,
	 0x05, 0x50, 0x95, 0x95, 0xDD, 0x95, 0x95, 0xA5, 0x6D, 0x50, 0x95, 0x95,
	 0xDD, 0x95, 0x95, 0xBD, 0x1E, 0x73, 0x95, 0x95, 0x0E, 0x70, 0x95, 0x95,
	 0xE9, 0x95, 0xBD, 0xF9, 0xE9, 0x95, 0xBA, 0x39, 0xE9, 0x95, 0x91, 0x39,
	 0xD9, 0x95, 0x94, 0xB9, 0xAD, 0x30, 0x95, 0x94, 0xAD, 0x53, 0x95, 0x94,
	 0xD7, 0x95, 0x6A, 0x75, 0xAD, 0xF5, 0x95, 0x95, 0xE9, 0x95, 0xBD, 0xF9,
	 0xE9, 0x95, 0xBA, 0x39, 0xE9, 0x95, 0x91, 0x39, 0xD9, 0x95, 0x94, 0xB9,
	 0xAD, 0xB4, 0x94, 0x95, 0x7E, 0x74, 0x6A, 0x65, 0x7C, 0x14, 0x6A, 0x6D,
	 0xE8, 0x1D, 0x96, 0x33, 0xDB, 0x15, 0x95, 0xB5
};

typedef enum _PEEK_POKE_TYPE {
	PEEK_BYTE = 0,
	PEEK_WORD = 1,
	PEEK_DWORD = 2,
	PEEK_QWORD = 3,
	PEEK_BYTES = 4,
	POKE_BYTE = 5,
	POKE_WORD = 6,
	POKE_DWORD = 7,
	POKE_QWORD = 8,
	POKE_BYTES = 9,
	PEEK_SPR = 10
} PEEK_POKE_TYPE;

class HV {
public:

	static DWORD HvPeekPokeExpID;
	static DWORD HvxGetVersions(DWORD Magic, DWORD Mode, QWORD Dest, QWORD Src, DWORD Len, QWORD Arg_r8);

	static BYTE HvPeekBYTE(QWORD Address);

	static WORD HvPeekWORD(QWORD Address);
	static DWORD HvPeekDWORD(QWORD Address);

	static QWORD HvPeekQWORD(QWORD Address);
	static QWORD HvGetFuseLine(BYTE FuseIndex);

	static DWORD SetupHvExpansion();
	static DWORD HvPeekBytes(QWORD Address, void* Buffer, DWORD Size);
	static DWORD HvPokeBYTE(QWORD Address, BYTE Value);
	static DWORD HvPokeWORD(QWORD Address, WORD Value);
	static DWORD HvPokeDWORD(QWORD Address, DWORD Value);
	static DWORD HvPokeQWORD(QWORD Address, QWORD Value);
	static DWORD HvPokeBytes(QWORD Address, CONST void* Buffer, DWORD Size);

	static BYTE FuseLines[];
};

