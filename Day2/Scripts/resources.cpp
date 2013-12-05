#include "resources.h"

const prog_int8_t lut_sin[] PROGMEM = {
     0,      3,      6,      9,     12,     15,     18,     21, 
    24,     27,     30,     33,     36,     39,     42,     45, 
    48,     51,     54,     57,     59,     62,     65,     67, 
    70,     73,     75,     78,     80,     82,     85,     87, 
    89,     91,     94,     96,     98,    100,    102,    103, 
   105,    107,    108,    110,    112,    113,    114,    116, 
   117,    118,    119,    120,    121,    122,    123,    123, 
   124,    125,    125,    126,    126,    126,    126,    126, 
   127,    126,    126,    126,    126,    126,    125,    125, 
   124,    123,    123,    122,    121,    120,    119,    118, 
   117,    116,    114,    113,    112,    110,    108,    107, 
   105,    103,    102,    100,     98,     96,     94,     91, 
    89,     87,     85,     82,     80,     78,     75,     73, 
    70,     67,     65,     62,     59,     57,     54,     51, 
    48,     45,     42,     39,     36,     33,     30,     27, 
    24,     21,     18,     15,     12,      9,      6,      3, 
     0,     -3,     -6,     -9,    -12,    -15,    -18,    -21, 
   -24,    -27,    -30,    -33,    -36,    -39,    -42,    -45, 
   -48,    -51,    -54,    -57,    -59,    -62,    -65,    -67, 
   -70,    -73,    -75,    -78,    -80,    -82,    -85,    -87, 
   -89,    -91,    -94,    -96,    -98,   -100,   -102,   -103, 
  -105,   -107,   -108,   -110,   -112,   -113,   -114,   -116, 
  -117,   -118,   -119,   -120,   -121,   -122,   -123,   -123, 
  -124,   -125,   -125,   -126,   -126,   -126,   -126,   -126, 
  -127,   -126,   -126,   -126,   -126,   -126,   -125,   -125, 
  -124,   -123,   -123,   -122,   -121,   -120,   -119,   -118, 
  -117,   -116,   -114,   -113,   -112,   -110,   -108,   -107, 
  -105,   -103,   -102,   -100,    -98,    -96,    -94,    -91, 
   -89,    -87,    -85,    -82,    -80,    -78,    -75,    -73, 
   -70,    -67,    -65,    -62,    -59,    -57,    -54,    -51, 
   -48,    -45,    -42,    -39,    -36,    -33,    -30,    -27, 
   -24,    -21,    -18,    -15,    -12,     -9,     -6,     -3, 
};

const prog_int8_t lut_tri[] PROGMEM = {
     0,      1,      3,      5,      7,      9,     11,     13, 
    15,     17,     19,     21,     23,     25,     27,     29, 
    31,     33,     35,     37,     39,     41,     43,     45, 
    47,     49,     51,     53,     55,     57,     59,     61, 
    63,     65,     67,     69,     71,     73,     75,     77, 
    79,     81,     83,     85,     87,     89,     91,     93, 
    95,     97,     99,    101,    103,    105,    107,    109, 
   111,    113,    115,    117,    119,    121,    123,    125, 
   127,    125,    123,    121,    119,    117,    115,    113, 
   111,    109,    107,    105,    103,    101,     99,     97, 
    95,     93,     91,     89,     87,     85,     83,     81, 
    79,     77,     75,     73,     71,     69,     67,     65, 
    63,     61,     59,     57,     55,     53,     51,     49, 
    47,     45,     43,     41,     39,     37,     35,     33, 
    31,     29,     27,     25,     23,     21,     19,     17, 
    15,     13,     11,      9,      7,      5,      3,      1, 
     0,     -1,     -3,     -5,     -7,     -9,    -11,    -13, 
   -15,    -17,    -19,    -21,    -23,    -25,    -27,    -29, 
   -31,    -33,    -35,    -37,    -39,    -41,    -43,    -45, 
   -47,    -49,    -51,    -53,    -55,    -57,    -59,    -61, 
   -63,    -65,    -67,    -69,    -71,    -73,    -75,    -77, 
   -79,    -81,    -83,    -85,    -87,    -89,    -91,    -93, 
   -95,    -97,    -99,   -101,   -103,   -105,   -107,   -109, 
  -111,   -113,   -115,   -117,   -119,   -121,   -123,   -125, 
  -127,   -125,   -123,   -121,   -119,   -117,   -115,   -113, 
  -111,   -109,   -107,   -105,   -103,   -101,    -99,    -97, 
   -95,    -93,    -91,    -89,    -87,    -85,    -83,    -81, 
   -79,    -77,    -75,    -73,    -71,    -69,    -67,    -65, 
   -63,    -61,    -59,    -57,    -55,    -53,    -51,    -49, 
   -47,    -45,    -43,    -41,    -39,    -37,    -35,    -33, 
   -31,    -29,    -27,    -25,    -23,    -21,    -19,    -17, 
   -15,    -13,    -11,     -9,     -7,     -5,     -3,     -1, 
};

const prog_int8_t lut_wave0[] PROGMEM = {
     0,      5,      7,     10,     13,     15,     18,     21, 
    24,     27,     30,     32,     35,     37,     40,     42, 
    44,     46,     48,     49,     51,     52,     53,     55, 
    56,     56,     57,     58,     59,     59,     59,     60, 
    60,     60,     61,     61,     61,     61,     61,     61, 
    61,     61,     61,     61,     61,     62,     63,     64, 
    66,     68,     71,     73,     77,     80,     83,     87, 
    90,     93,     96,     99,    102,    104,    107,    109, 
   111,    113,    115,    116,    118,    120,    121,    122, 
   124,    125,    125,    126,    126,    126,    126,    126, 
   125,    124,    123,    122,    120,    118,    116,    114, 
   111,    108,    105,    102,     98,     95,     92,     88, 
    85,     81,     77,     73,     70,     66,     62,     58, 
    55,     51,     47,     44,     40,     37,     33,     30, 
    27,     24,     20,     18,     15,     12,     10,      7, 
     5,      3,      0,     -2,     -5,     -7,    -10,    -12, 
   -15,    -17,    -20,    -22,    -24,    -26,    -28,    -31, 
   -33,    -35,    -37,    -39,    -41,    -44,    -46,    -48, 
   -51,    -53,    -56,    -58,    -61,    -63,    -66,    -69, 
   -72,    -75,    -78,    -80,    -83,    -86,    -89,    -92, 
   -95,    -98,   -100,   -103,   -105,   -108,   -110,   -112, 
  -114,   -116,   -117,   -119,   -120,   -121,   -122,   -122, 
  -122,   -122,   -122,   -122,   -121,   -120,   -119,   -118, 
  -117,   -115,   -113,   -111,   -109,   -106,   -104,   -102, 
   -99,    -96,    -94,    -91,    -88,    -85,    -83,    -80, 
   -77,    -75,    -72,    -69,    -67,    -64,    -62,    -60, 
   -58,    -56,    -54,    -52,    -50,    -48,    -46,    -45, 
   -43,    -42,    -41,    -39,    -38,    -38,    -37,    -37, 
   -38,    -39,    -40,    -42,    -43,    -45,    -47,    -48, 
   -49,    -50,    -50,    -49,    -48,    -47,    -45,    -43, 
   -41,    -39,    -36,    -33,    -31,    -28,    -25,    -22, 
   -19,    -17,    -14,    -11,     -8,     -5,     -2,     -1, 
};

const prog_uint32_t lut_notes[] PROGMEM = {
912984, 967273, 1024790, 1085727, 1150288, 1218688, 1291155, 1367931, 
1449272, 1535450, 1626753, 1723485, 1825969, 1934546, 2049580, 2171455, 
2300576, 2437376, 2582310, 2735862, 2898545, 3070901, 3253506, 3446970, 
3651938, 3869093, 4099161, 4342910, 4601153, 4874752, 5164620, 5471724, 
5797090, 6141803, 6507013, 6893941, 7303876, 7738187, 8198323, 8685821, 
9202307, 9749504, 10329240, 10943449, 11594180, 12283606, 13014027, 13787882, 
14607752, 15476374, 16396647, 17371642, 18404614, 19499009, 20658481, 21886898, 
23188361, 24567212, 26028055, 27575764, 29215504, 30952748, 32793294, 34743285, 
36809228, 38998019, 41316962, 43773797, 46376722, 49134425, 52056110, 55151528, 
58431008, 61905497, 65586589, 69486571, 73618457, 77996039, 82633925, 87547594, 
92753444, 98268851, 104112221, 110303056, 116862017, 123810994, 131173179, 138973142, 
147236915, 155992078, 165267850, 175095188, 185506889, 196537703, 208224443, 220606113, 
233724035, 247621989, 262346359, 277946285, 294473831, 311984157, 330535700, 350190376, 
371013779, 393075406, 416448886, 441212226, 467448070, 495243979, 524692718, 555892571, 
588947663, 623968314, 661071401, 700380752, 742027559, 786150813, 832897773, 882424452, 
934896141, 990487958, 1049385437, 1111785143, 1177895327, 1247936628, 1322142802, 1400761504, 
};
