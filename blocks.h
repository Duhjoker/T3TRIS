
#define PIX 12
#define FIELD_WIDTH 12
#define FIELD_HIGHT 16

#define FIELD_X  (120+20-FIELD_WIDTH*PIX/2)
#define FIELD_Y  (256-10-FIELD_HIGHT*PIX)
#define FIELD_XW (FIELD_X + FIELD_WIDTH*PIX)
#define FIELD_YW (FIELD_Y + FIELD_HIGHT*PIX)

#define BLOCKWIDTH(blocknum, rotation) block[rotation][blocknum][0]
#define BLOCKHIGHT(blocknum, rotation) block[rotation][blocknum][1]

const uint16_t color[] = {BLACK, RED, ORANGE, YELLOW, GREEN, BLUE, MAGENTA};
#define NUMCOLORS (sizeof(color)/sizeof(color[0]))

#define NUMBLOCKS 8
const char block[4][NUMBLOCKS][2+16] =
{4,1,
 1,1,1,1,
 0,0,0,0,
 0,0,0,0,
 0,0,0,0,

 3,1,
 1,1,1,0,
 0,0,0,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 1,0,0,0,
 1,1,1,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 0,1,0,0,
 1,1,1,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 0,0,1,0,
 1,1,1,0,
 0,0,0,0,
 0,0,0,0,

 2,2,
 1,1,0,0,
 1,1,0,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 0,1,1,0,
 1,1,0,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 1,1,0,0,
 0,1,1,0,
 0,0,0,0,
 0,0,0,0,

 //-------
 1,4,
 1,0,0,0,
 1,0,0,0,
 1,0,0,0,
 1,0,0,0,

 1,3,
 1,0,0,0,
 1,0,0,0,
 1,0,0,0,
 0,0,0,0,

 2,3,
 1,1,0,0,
 1,0,0,0,
 1,0,0,0,
 0,0,0,0,

 2,3,
 1,0,0,0,
 1,1,0,0,
 1,0,0,0,
 0,0,0,0,

 2,3,
 1,0,0,0,
 1,0,0,0,
 1,1,0,0,
 0,0,0,0,

 2,2,
 1,1,0,0,
 1,1,0,0,
 0,0,0,0,
 0,0,0,0,

 2,3,
 1,0,0,0,
 1,1,0,0,
 0,1,0,0,
 0,0,0,0,

 2,3,
 0,1,0,0,
 1,1,0,0,
 1,0,0,0,
 0,0,0,0,

 //-------
 4,1,
 1,1,1,1,
 0,0,0,0,
 0,0,0,0,
 0,0,0,0,

 3,1,
 1,1,1,0,
 0,0,0,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 1,1,1,0,
 0,0,1,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 1,1,1,0,
 0,1,0,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 1,1,1,0,
 1,0,0,0,
 0,0,0,0,
 0,0,0,0,

 2,2,
 1,1,0,0,
 1,1,0,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 0,1,1,0,
 1,1,0,0,
 0,0,0,0,
 0,0,0,0,

 3,2,
 1,1,0,0,
 0,1,1,0,
 0,0,0,0,
 0,0,0,0,
 //-------
 1,4,
 1,0,0,0,
 1,0,0,0,
 1,0,0,0,
 1,0,0,0,

 1,3,
 1,0,0,0,
 1,0,0,0,
 1,0,0,0,
 0,0,0,0,

 2,3,
 0,1,0,0,
 0,1,0,0,
 1,1,0,0,
 0,0,0,0,

 2,3,
 0,1,0,0,
 1,1,0,0,
 0,1,0,0,
 0,0,0,0,

 2,3,
 1,1,0,0,
 0,1,0,0,
 0,1,0,0,
 0,0,0,0,

 2,2,
 1,1,0,0,
 1,1,0,0,
 0,0,0,0,
 0,0,0,0,

 2,3,
 1,0,0,0,
 1,1,0,0,
 0,1,0,0,
 0,0,0,0,

 2,3,
 0,1,0,0,
 1,1,0,0,
 1,0,0,0,
 0,0,0,0,
 };

