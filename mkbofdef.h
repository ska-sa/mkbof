/*
 * Generates a temporary PPC ELF file that does nothing but sleep
 */
unsigned char default_elf_bin[] = {
 127, 69, 76, 70,  1,  2,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  2,  0, 20,  0,  0,  0,  1, 16,  0,  3,164,  0,  0,  0, 52,
   0,  0, 11,120,  0,  0,  0,  0,  0, 52,  0, 32,  0,  7,  0, 40,
   0, 29,  0, 28,  0,  0,  0,  6,  0,  0,  0, 52, 16,  0,  0, 52,
  16,  0,  0, 52,  0,  0,  0,224,  0,  0,  0,224,  0,  0,  0,  5,
   0,  0,  0,  4,  0,  0,  0,  3,  0,  0,  1, 52, 16,  0,  1, 52,
  16,  0,  1, 52,  0,  0,  0, 13,  0,  0,  0, 13,  0,  0,  0,  4,
   0,  0,  0,  1,  0,  0,  0,  1,  0,  0,  0,  0, 16,  0,  0,  0,
  16,  0,  0,  0,  0,  0,  8,252,  0,  0,  8,252,  0,  0,  0,  5,
   0,  1,  0,  0,  0,  0,  0,  1,  0,  0,  8,252, 16,  1,  8,252,
  16,  1,  8,252,  0,  0,  1, 32,  0,  0,  1,144,  0,  0,  0,  7,
   0,  1,  0,  0,  0,  0,  0,  2,  0,  0,  9, 28, 16,  1,  9, 28,
  16,  1,  9, 28,  0,  0,  0,200,  0,  0,  0,200,  0,  0,  0,  6,
   0,  0,  0,  4,  0,  0,  0,  4,  0,  0,  1, 68, 16,  0,  1, 68,
  16,  0,  1, 68,  0,  0,  0, 32,  0,  0,  0, 32,  0,  0,  0,  4,
   0,  0,  0,  4,100,116,229, 81,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0, 47,108,105, 98, 47,108,100, 46,115,111, 46, 49,
   0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0, 16,  0,  0,  0,  1,
  71, 78, 85,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  4,
   0,  0,  0,  3,  0,  0,  0,  3,  0,  0,  0, 10,  0,  0,  0,  9,
   0,  0,  0,  6,  0,  0,  0,  7,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  1,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  3,
   0,  0,  0,  4,  0,  0,  0,  5,  0,  0,  0,  0,  0,  0,  0,  8,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0, 85, 16,  1,  8,252,  0,  0,  0,  0, 16,  0,255,241,
   0,  0,  0, 46, 16,  1, 10,100,  0,  0,  0,108, 18,  0,  0,  0,
   0,  0,  0,102, 16,  1,  8,252,  0,  0,  0,  0, 16,  0,255,241,
   0,  0,  0, 67, 16,  1, 10,108,  0,  0,  1,176, 18,  0,  0,  0,
   0,  0,  0,121, 16,  1,  8,252,  0,  0,  0,  0, 16,  0,255,241,
   0,  0,  0,138, 16,  1,  8,252,  0,  0,  0,  0, 16,  0,255,241,
   0,  0,  0, 52, 16,  0,  8,248,  0,  0,  0,  4, 17,  0,  0, 13,
   0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0,  0,  0,
   0,  0,  0, 21,  0,  0,  0,  0,  0,  0,  0,  0, 32,  0,  0,  0,
   0, 95, 74,118, 95, 82,101,103,105,115,116,101,114, 67,108, 97,
 115,115,101,115,  0, 95, 95,103,109,111,110, 95,115,116, 97,114,
 116, 95, 95,  0,108,105, 98, 99, 46,115,111, 46, 54,  0,112, 97,
 117,115,101,  0, 95, 73, 79, 95,115,116,100,105,110, 95,117,115,
 101,100,  0, 95, 95,108,105, 98, 99, 95,115,116, 97,114,116, 95,
 109, 97,105,110,  0, 95, 95,102,105,110,105, 95, 97,114,114, 97,
 121, 95,101,110,100,  0, 95, 95,102,105,110,105, 95, 97,114,114,
  97,121, 95,115,116, 97,114,116,  0, 95, 95,105,110,105,116, 95,
  97,114,114, 97,121, 95,101,110,100,  0, 95, 95,105,110,105,116,
  95, 97,114,114, 97,121, 95,115,116, 97,114,116,  0, 71, 76, 73,
  66, 67, 95, 50, 46, 48,  0,  0,  0,  0,  0,  1,  0,  2,  0,  1,
   0,  2,  0,  1,  0,  1,  0,  1,  0,  0,  0,  0,  0,  1,  0,  1,
   0,  0,  0, 36,  0,  0,  0, 16,  0,  0,  0,  0, 13,105,105, 16,
   0,  0,  0,  2,  0,  0,  0,157,  0,  0,  0,  0, 16,  1, 10,  8,
   0,  0,  1, 20,  0,  0,  0,  0, 16,  1, 10, 12,  0,  0,  3, 20,
   0,  0,  0,  0, 16,  1, 10, 16,  0,  0,  5, 20,  0,  0,  0,  0,
  16,  1, 10, 20,  0,  0,  6, 20,  0,  0,  0,  0, 16,  1, 10, 24,
   0,  0,  9, 20,  0,  0,  0,  0, 16,  1, 10,100,  0,  0,  2, 21,
   0,  0,  0,  0, 16,  1, 10,108,  0,  0,  4, 21,  0,  0,  0,  0,
  16,  1, 10,116,  0,  0,  8, 21,  0,  0,  0,  0,148, 33,255,240,
 124,  8,  2,166,144,  1,  0, 20, 72,  0,  0, 65, 72,  0,  1, 45,
  72,  0,  4,189,128,  1,  0, 20,124,  8,  3,166, 56, 33,  0, 16,
  78,128,  0, 32,124, 41, 11,120, 84, 33,  0, 54, 56,  0,  0,  0,
 148, 33,255,240,124,  8,  3,166,144,  1,  0,  0, 61,  0, 16,  0,
 133,168,  8,232, 72,  1,  6,168,148, 33,255,240,124,  8,  2,166,
 147,193,  0,  8,144,  1,  0, 20, 72,  1,  6, 33,127,200,  2,166,
 128, 30,  0, 28, 47,128,  0,  0, 65,158,  0, 12,124,  8,  3,166,
  78,128,  0, 33,128,  1,  0, 20,124,  8,  3,166,131,193,  0,  8,
  56, 33,  0, 16, 78,128,  0, 32,  0,  1,132,240,148, 33,255,240,
 124,  8,  2,166, 66,159,  0,  5,147,193,  0,  8,127,200,  2,166,
 144,  1,  0, 20,128, 30,255,240,147,225,  0, 12,127,192,242, 20,
 129, 94,128,  0,136, 10,  0,  0, 47,128,  0,  0, 64,158,  0, 68,
 131,254,128,  4,129, 63,  0,  0,129,105,  0,  0, 47,139,  0,  0,
  65,158,  0, 40, 56,  9,  0,  4,125,104,  3,166,144, 31,  0,  0,
  78,128,  0, 33,129, 63,  0,  0,129,105,  0,  0, 47,139,  0,  0,
  64,158,255,228,129, 94,128,  0, 56,  0,  0,  1,152, 10,  0,  0,
 128,  1,  0, 20,131,193,  0,  8,131,225,  0, 12,124,  8,  3,166,
  56, 33,  0, 16, 78,128,  0, 32,124,  8,  2,166,148, 33,255,240,
 144,  1,  0, 20,128,  1,  0, 20, 56, 33,  0, 16,124,  8,  3,166,
  78,128,  0, 32,  0,  1,132, 68,148, 33,255,240,124,  8,  2,166,
  66,159,  0,  5,147,193,  0,  8,127,200,  2,166,144,  1,  0, 20,
 128, 30,255,240,127,192,242, 20,128,126,128,  8,128,  3,  0,  0,
  47,128,  0,  0, 65,158,  0, 20,128, 30,128, 12, 47,128,  0,  0,
  65,158,  0,  8, 72,  1,  5,129,128,  1,  0, 20,131,193,  0,  8,
 124,  8,  3,166, 56, 33,  0, 16, 78,128,  0, 32,124,  8,  2,166,
 148, 33,255,240,144,  1,  0, 20,128,  1,  0, 20, 56, 33,  0, 16,
 124,  8,  3,166, 78,128,  0, 32,148, 33,255,240,124,  8,  2,166,
 147,225,  0, 12,144,  1,  0, 20,124, 63, 11,120, 72,  1,  5, 41,
  56,  0,  0,  0,124,  3,  3,120,129, 97,  0,  0,128, 11,  0,  4,
 124,  8,  3,166,131,235,255,252,125, 97, 91,120, 78,128,  0, 32,
 148, 33,255,224,124,  8,  2,166,147,129,  0, 16,147,161,  0, 20,
 147,193,  0, 24,147,225,  0, 28,144,  1,  0, 36, 72,  1,  4,125,
 127,200,  2,166, 75,255,253,249,128, 30,  0, 20,129, 62,  0, 24,
 124,  9,  0, 80, 59,224,  0,  0, 84,  9,240,191, 65,130,  0, 48,
 131,158,  0, 24,128, 30,  0, 20,124, 28,  0, 80,124, 29, 22,112,
  87,224, 16, 58,124, 28,  0, 46,124,  9,  3,166, 78,128,  4, 33,
  59,255,  0,  1,127,159,232, 64, 65,156,255,232,128,  1,  0, 36,
 124,  8,  3,166,131,129,  0, 16,131,161,  0, 20,131,193,  0, 24,
 131,225,  0, 28, 56, 33,  0, 32, 78,128,  0, 32,148, 33,255,224,
 124,  8,  2,166,147,161,  0, 20,147,193,  0, 24,147,225,  0, 28,
 144,  1,  0, 36, 72,  1,  3,245,127,200,  2,166,128, 30,  0, 12,
 129, 62,  0, 16,127,233,  0, 80,127,255, 22,112, 47,159,  0,  0,
  59,255,255,255, 65,158,  0, 36,125, 61, 75,120, 87,224, 16, 58,
 124, 29,  0, 46,124,  9,  3,166, 78,128,  4, 33, 47,159,  0,  0,
  59,255,255,255, 64,158,255,232, 72,  0,  2,129,128,  1,  0, 36,
 124,  8,  3,166,131,161,  0, 20,131,193,  0, 24,131,225,  0, 28,
  56, 33,  0, 32, 78,128,  0, 32,217,203,255,112,217,235,255,120,
 218, 11,255,128,218, 43,255,136,218, 75,255,144,218,107,255,152,
 218,139,255,160,218,171,255,168,218,203,255,176,218,235,255,184,
 219, 11,255,192,219, 43,255,200,219, 75,255,208,219,107,255,216,
 219,139,255,224,219,171,255,232,219,203,255,240,219,235,255,248,
  78,128,  0, 32,145,203,255,184,145,235,255,188,146, 11,255,192,
 146, 43,255,196,146, 75,255,200,146,107,255,204,146,139,255,208,
 146,171,255,212,146,203,255,216,146,235,255,220,147, 11,255,224,
 147, 43,255,228,147, 75,255,232,147,107,255,236,147,139,255,240,
 147,171,255,244,147,203,255,248,147,235,255,252, 78,128,  0, 32,
 201,203,255,112,201,235,255,120,202, 11,255,128,202, 43,255,136,
 202, 75,255,144,202,107,255,152,202,139,255,160,202,171,255,168,
 202,203,255,176,202,235,255,184,203, 11,255,192,203, 43,255,200,
 203, 75,255,208,203,107,255,216,203,139,255,224,203,171,255,232,
 203,203,255,240,203,235,255,248, 78,128,  0, 32,129,203,255,184,
 129,235,255,188,130, 11,255,192,130, 43,255,196,130, 75,255,200,
 130,107,255,204,130,139,255,208,130,171,255,212,130,203,255,216,
 130,235,255,220,131, 11,255,224,131, 43,255,228,131, 75,255,232,
 131,107,255,236,131,139,255,240,131,171,255,244,131,203,255,248,
 131,235,255,252, 78,128,  0, 32,201,203,255,112,201,235,255,120,
 202, 11,255,128,202, 43,255,136,202, 75,255,144,202,107,255,152,
 202,139,255,160,202,171,255,168,202,203,255,176,202,235,255,184,
 203, 11,255,192,203, 43,255,200,203, 75,255,208,203,107,255,216,
 203,139,255,224,203,171,255,232,203,203,255,240,128, 11,  0,  4,
 203,235,255,248,124,  8,  3,166,125, 97, 91,120, 78,128,  0, 32,
 129,203,255,184,129,235,255,188,130, 11,255,192,130, 43,255,196,
 130, 75,255,200,130,107,255,204,130,139,255,208,130,171,255,212,
 130,203,255,216,130,235,255,220,131, 11,255,224,131, 43,255,228,
 131, 75,255,232,131,107,255,236,131,139,255,240,131,171,255,244,
 131,203,255,248,128, 11,  0,  4,131,235,255,252,124,  8,  3,166,
 125, 97, 91,120, 78,128,  0, 32,  0,  1,128,192,148, 33,255,240,
 124,  8,  2,166, 66,159,  0,  5,147,193,  0,  8,127,200,  2,166,
 144,  1,  0, 20,128, 30,255,240,147,225,  0, 12,127,192,242, 20,
 129, 62,128,  0,128,  9,255,252, 59,233,255,252, 72,  0,  0, 16,
 124,  8,  3,166, 78,128,  0, 33,132, 31,255,252, 47,128,255,255,
  64,158,255,240,128,  1,  0, 20,131,193,  0,  8,131,225,  0, 12,
 124,  8,  3,166, 56, 33,  0, 16, 78,128,  0, 32,124,  8,  2,166,
 148, 33,255,240,144,  1,  0, 20,128,  1,  0, 20, 56, 33,  0, 16,
 124,  8,  3,166, 78,128,  0, 32,148, 33,255,240,124,  8,  2,166,
 144,  1,  0, 20, 75,255,251, 57,128,  1,  0, 20,124,  8,  3,166,
  56, 33,  0, 16, 78,128,  0, 32, 16,  1,138, 28, 16,  0,  5, 40,
  16,  0,  5, 96, 16,  0,  5,236,  0,  2,  0,  1,  0,  0,  0,  0,
  16,  1,  9,240,  0,  0,  0,  0, 16,  1, 10,136, 16,  1,  9,  0,
  16,  1,  9,244,  0,  0,  0,  0, 16,  1,  9,232,  0,  0,  0,  1,
   0,  0,  0, 36,  0,  0,  0, 12, 16,  0,  3,124,  0,  0,  0, 13,
  16,  0,  8,200,  0,  0,  0,  4, 16,  0,  1,100,  0,  0,  0,  5,
  16,  0,  2, 64,  0,  0,  0,  6, 16,  0,  1,160,  0,  0,  0, 10,
   0,  0,  0,167,  0,  0,  0, 11,  0,  0,  0, 16,  0,  0,  0, 21,
   0,  0,  0,  0,  0,  0,  0,  3, 16,  1, 10, 28,  0,  0,  0,  2,
   0,  0,  0, 36,  0,  0,  0, 20,  0,  0,  0,  7,  0,  0,  0, 23,
  16,  0,  3, 88,  0,  0,  0,  7, 16,  0,  3, 28,  0,  0,  0,  8,
   0,  0,  0, 96,  0,  0,  0,  9,  0,  0,  0, 12,111,255,255,254,
  16,  0,  2,252,111,255,255,255,  0,  0,  0,  1,111,255,255,240,
  16,  0,  2,232,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,255,255,255,255,  0,  0,  0,  0,255,255,255,255,
   0,  0,  0,  0,  0,  0,  0,  0, 78,128,  0, 33, 16,  1,  9, 28,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 71, 67, 67,
  58, 32, 40, 71, 78, 85, 41, 32, 51, 46, 52, 46, 52,  0,  0, 71,
  67, 67, 58, 32, 40, 71, 78, 85, 41, 32, 51, 46, 52, 46, 52,  0,
   0, 71, 67, 67, 58, 32, 40, 71, 78, 85, 41, 32, 51, 46, 52, 46,
  52,  0,  0, 71, 67, 67, 58, 32, 40, 71, 78, 85, 41, 32, 51, 46,
  52, 46, 52,  0,  0, 71, 67, 67, 58, 32, 40, 71, 78, 85, 41, 32,
  51, 46, 52, 46, 52,  0,  0, 71, 67, 67, 58, 32, 40, 71, 78, 85,
  41, 32, 51, 46, 52, 46, 52,  0,  0, 71, 67, 67, 58, 32, 40, 71,
  78, 85, 41, 32, 51, 46, 52, 46, 52,  0,  0, 46,115,104,115,116,
 114,116, 97, 98,  0, 46,105,110,116,101,114,112,  0, 46,110,111,
 116,101, 46, 65, 66, 73, 45,116, 97,103,  0, 46,104, 97,115,104,
   0, 46,100,121,110,115,121,109,  0, 46,100,121,110,115,116,114,
   0, 46,103,110,117, 46,118,101,114,115,105,111,110,  0, 46,103,
 110,117, 46,118,101,114,115,105,111,110, 95,114,  0, 46,114,101,
 108, 97, 46,100,121,110,  0, 46,114,101,108, 97, 46,112,108,116,
   0, 46,105,110,105,116,  0, 46,116,101,120,116,  0, 46,102,105,
 110,105,  0, 46,114,111,100, 97,116, 97,  0, 46,115,100, 97,116,
  97, 50,  0, 46,100, 97,116, 97,  0, 46,101,104, 95,102,114, 97,
 109,101,  0, 46,103,111,116, 50,  0, 46,100,121,110, 97,109,105,
  99,  0, 46, 99,116,111,114,115,  0, 46,100,116,111,114,115,  0,
  46,106, 99,114,  0, 46,103,111,116,  0, 46,115,100, 97,116, 97,
   0, 46,115, 98,115,115,  0, 46, 98,115,115,  0, 46, 99,111,109,
 109,101,110,116,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0, 11,  0,  0,  0,  1,  0,  0,  0,  2, 16,  0,  1, 52,
   0,  0,  1, 52,  0,  0,  0, 13,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0, 19,  0,  0,  0,  7,
   0,  0,  0,  2, 16,  0,  1, 68,  0,  0,  1, 68,  0,  0,  0, 32,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,
   0,  0,  0, 33,  0,  0,  0,  5,  0,  0,  0,  2, 16,  0,  1,100,
   0,  0,  1,100,  0,  0,  0, 60,  0,  0,  0,  4,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  4,  0,  0,  0, 39,  0,  0,  0, 11,
   0,  0,  0,  2, 16,  0,  1,160,  0,  0,  1,160,  0,  0,  0,160,
   0,  0,  0,  5,  0,  0,  0,  1,  0,  0,  0,  4,  0,  0,  0, 16,
   0,  0,  0, 47,  0,  0,  0,  3,  0,  0,  0,  2, 16,  0,  2, 64,
   0,  0,  2, 64,  0,  0,  0,167,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0, 55,111,255,255,255,
   0,  0,  0,  2, 16,  0,  2,232,  0,  0,  2,232,  0,  0,  0, 20,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  2,
   0,  0,  0, 68,111,255,255,254,  0,  0,  0,  2, 16,  0,  2,252,
   0,  0,  2,252,  0,  0,  0, 32,  0,  0,  0,  5,  0,  0,  0,  1,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0, 83,  0,  0,  0,  4,
   0,  0,  0,  2, 16,  0,  3, 28,  0,  0,  3, 28,  0,  0,  0, 60,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0, 12,
   0,  0,  0, 93,  0,  0,  0,  4,  0,  0,  0,  2, 16,  0,  3, 88,
   0,  0,  3, 88,  0,  0,  0, 36,  0,  0,  0,  4,  0,  0,  0, 25,
   0,  0,  0,  4,  0,  0,  0, 12,  0,  0,  0,103,  0,  0,  0,  1,
   0,  0,  0,  6, 16,  0,  3,124,  0,  0,  3,124,  0,  0,  0, 40,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,
   0,  0,  0,109,  0,  0,  0,  1,  0,  0,  0,  6, 16,  0,  3,164,
   0,  0,  3,164,  0,  0,  5, 36,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,115,  0,  0,  0,  1,
   0,  0,  0,  6, 16,  0,  8,200,  0,  0,  8,200,  0,  0,  0, 32,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,
   0,  0,  0,121,  0,  0,  0,  1,  0,  0,  0,  2, 16,  0,  8,232,
   0,  0,  8,232,  0,  0,  0, 20,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,129,  0,  0,  0,  1,
   0,  0,  0,  2, 16,  0,  8,252,  0,  0,  8,252,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,
   0,  0,  0,137,  0,  0,  0,  1,  0,  0,  0,  3, 16,  1,  8,252,
   0,  0,  8,252,  0,  0,  0,  8,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,143,  0,  0,  0,  1,
   0,  0,  0,  2, 16,  1,  9,  4,  0,  0,  9,  4,  0,  0,  0,  4,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,
   0,  0,  0,153,  0,  0,  0,  1,  0,  0,  0,  3, 16,  1,  9,  8,
   0,  0,  9,  8,  0,  0,  0, 20,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,159,  0,  0,  0,  6,
   0,  0,  0,  3, 16,  1,  9, 28,  0,  0,  9, 28,  0,  0,  0,200,
   0,  0,  0,  5,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  8,
   0,  0,  0,168,  0,  0,  0,  1,  0,  0,  0,  3, 16,  1,  9,228,
   0,  0,  9,228,  0,  0,  0,  8,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,175,  0,  0,  0,  1,
   0,  0,  0,  3, 16,  1,  9,236,  0,  0,  9,236,  0,  0,  0,  8,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,
   0,  0,  0,182,  0,  0,  0,  1,  0,  0,  0,  3, 16,  1,  9,244,
   0,  0,  9,244,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,187,  0,  0,  0,  1,
   0,  0,  0,  7, 16,  1,  9,248,  0,  0,  9,248,  0,  0,  0, 36,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  4,
   0,  0,  0,192,  0,  0,  0,  1,  0,  0,  0,  3, 16,  1, 10, 28,
   0,  0, 10, 28,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,199,  0,  0,  0,  8,
   0,  0,  0,  3, 16,  1, 10, 28,  0,  0, 10, 28,  0,  0,  0,  0,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,
   0,  0,  0, 98,  0,  0,  0,  8,  0,  0,  0,  7, 16,  1, 10, 28,
   0,  0, 10, 28,  0,  0,  0,108,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,205,  0,  0,  0,  8,
   0,  0,  0,  3, 16,  1, 10,136,  0,  0, 10, 28,  0,  0,  0,  4,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,
   0,  0,  0,210,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0, 10, 28,  0,  0,  0,126,  0,  0,  0,  0,  0,  0,  0,  0,
   0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  3,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 10,154,  0,  0,  0,219,
   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,
};

#define DEFAULT_ELF_BIN_SIZE 4096
