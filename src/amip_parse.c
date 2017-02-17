/* Generated by re2c 0.16 on Fri Feb 17 08:44:39 2017 */
#line 1 "amip_parse.re"
/**
 * libamip -- Library with functions for read/create AMI packets
 * Copyright (C) 2016, Stas Kobzar <staskobzar@modulis.ca>
 *
 * This file is part of libamip.
 *
 * libamip is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libamip is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libamip.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file amip_parse.c
 * @brief AMI (Asterisk Management Interface) packet parser.
 *
 * @author Stas Kobzar <stas.kobzar@modulis.ca>
 */

#include <stdio.h>
#include "amip.h"

// re2c definitions
#line 39 "amip_parse.re"


// introducing types:re2c for prompt packet
enum yycond_prompt {
  yycinit,
  yycminor,
  yycpatch,
  yycmajor,
};

enum yycond_pack {
	yyckey,
	yycvalue,
};

int amiparse_prompt (const char *packet, AMIVer *ver)
{
  // init version structure
  ver->major = 0;
  ver->minor = 0;
  ver->patch = 0;

  const char *cur = packet;
  int c = yycinit;


#line 62 "amip_parse.c"
{
	unsigned char yych;
	switch (c) {
	case yycinit: goto yyc_init;
	case yycmajor: goto yyc_major;
	case yycminor: goto yyc_minor;
	case yycpatch: goto yyc_patch;
	}
/* *********************************** */
yyc_init:
	yych = *cur;
	switch (yych) {
	case 'A':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++cur;
yy4:
#line 75 "amip_parse.re"
	{ return RV_FAIL; }
#line 83 "amip_parse.c"
yy5:
	yych = *(packet = ++cur);
	switch (yych) {
	case 's':	goto yy6;
	default:	goto yy4;
	}
yy6:
	yych = *++cur;
	switch (yych) {
	case 't':	goto yy8;
	default:	goto yy7;
	}
yy7:
	cur = packet;
	goto yy4;
yy8:
	yych = *++cur;
	switch (yych) {
	case 'e':	goto yy9;
	default:	goto yy7;
	}
yy9:
	yych = *++cur;
	switch (yych) {
	case 'r':	goto yy10;
	default:	goto yy7;
	}
yy10:
	yych = *++cur;
	switch (yych) {
	case 'i':	goto yy11;
	default:	goto yy7;
	}
yy11:
	yych = *++cur;
	switch (yych) {
	case 's':	goto yy12;
	default:	goto yy7;
	}
yy12:
	yych = *++cur;
	switch (yych) {
	case 'k':	goto yy13;
	default:	goto yy7;
	}
yy13:
	yych = *++cur;
	switch (yych) {
	case ' ':	goto yy14;
	default:	goto yy7;
	}
yy14:
	yych = *++cur;
	switch (yych) {
	case 'C':	goto yy15;
	default:	goto yy7;
	}
yy15:
	yych = *++cur;
	switch (yych) {
	case 'a':	goto yy16;
	default:	goto yy7;
	}
yy16:
	yych = *++cur;
	switch (yych) {
	case 'l':	goto yy17;
	default:	goto yy7;
	}
yy17:
	yych = *++cur;
	switch (yych) {
	case 'l':	goto yy18;
	default:	goto yy7;
	}
yy18:
	yych = *++cur;
	switch (yych) {
	case ' ':	goto yy19;
	default:	goto yy7;
	}
yy19:
	yych = *++cur;
	switch (yych) {
	case 'M':	goto yy20;
	default:	goto yy7;
	}
yy20:
	yych = *++cur;
	switch (yych) {
	case 'a':	goto yy21;
	default:	goto yy7;
	}
yy21:
	yych = *++cur;
	switch (yych) {
	case 'n':	goto yy22;
	default:	goto yy7;
	}
yy22:
	yych = *++cur;
	switch (yych) {
	case 'a':	goto yy23;
	default:	goto yy7;
	}
yy23:
	yych = *++cur;
	switch (yych) {
	case 'g':	goto yy24;
	default:	goto yy7;
	}
yy24:
	yych = *++cur;
	switch (yych) {
	case 'e':	goto yy25;
	default:	goto yy7;
	}
yy25:
	yych = *++cur;
	switch (yych) {
	case 'r':	goto yy26;
	default:	goto yy7;
	}
yy26:
	yych = *++cur;
	switch (yych) {
	case '/':	goto yy27;
	default:	goto yy7;
	}
yy27:
	++cur;
	c = yycmajor;
	goto yyc_major;
/* *********************************** */
yyc_major:
	yych = *cur;
	switch (yych) {
	case '.':	goto yy33;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy35;
	default:	goto yy31;
	}
yy31:
	++cur;
#line 75 "amip_parse.re"
	{ return RV_FAIL; }
#line 238 "amip_parse.c"
yy33:
	++cur;
#line 81 "amip_parse.re"
	{ goto yyc_minor; }
#line 243 "amip_parse.c"
yy35:
	++cur;
#line 80 "amip_parse.re"
	{ ver->major = ver->major * 10 + (yych - '0'); goto yyc_major; }
#line 248 "amip_parse.c"
/* *********************************** */
yyc_minor:
	yych = *cur;
	switch (yych) {
	case '\r':	goto yy41;
	case '.':	goto yy42;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy44;
	default:	goto yy39;
	}
yy39:
	++cur;
yy40:
#line 75 "amip_parse.re"
	{ return RV_FAIL; }
#line 272 "amip_parse.c"
yy41:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy46;
	default:	goto yy40;
	}
yy42:
	++cur;
#line 84 "amip_parse.re"
	{ goto yyc_patch; }
#line 283 "amip_parse.c"
yy44:
	++cur;
#line 83 "amip_parse.re"
	{ ver->minor = ver->minor * 10 + (yych - '0'); goto yyc_minor; }
#line 288 "amip_parse.c"
yy46:
	++cur;
#line 78 "amip_parse.re"
	{ goto done; }
#line 293 "amip_parse.c"
/* *********************************** */
yyc_patch:
	yych = *cur;
	switch (yych) {
	case '\r':	goto yy52;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy53;
	default:	goto yy50;
	}
yy50:
	++cur;
yy51:
#line 75 "amip_parse.re"
	{ return RV_FAIL; }
#line 316 "amip_parse.c"
yy52:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy55;
	default:	goto yy51;
	}
yy53:
	++cur;
#line 86 "amip_parse.re"
	{ ver->patch = ver->patch * 10 + (yych - '0'); goto yyc_patch; }
#line 327 "amip_parse.c"
yy55:
	++cur;
#line 78 "amip_parse.re"
	{ goto done; }
#line 332 "amip_parse.c"
}
#line 87 "amip_parse.re"


done:
  return RV_SUCCESS;
}

enum pack_type amiparse_pack (const char *pack_str,
                              AMIPacket *pack)
{
  enum pack_type rv = AMI_UNKNOWN;
  const char *marker = pack_str;
  const char *cur = marker;
  const char *ctxmarker;
  int c = yyckey;
  int len = 0;

  const char *tok = marker;

/* *********************************** */
yyc_init:
yych = *cur;
switch (yych) {
case 'A':	goto yy61;
default:	goto yy59;
}
yy59:
++cur;
yy60:
#line 75 "amip_parse.re"
{ return RV_FAIL; }
#line 365 "amip_parse.c"
yy61:
yych = *(marker = ++cur);
switch (yych) {
case 's':	goto yy62;
default:	goto yy60;
}
yy62:
yych = *++cur;
switch (yych) {
case 't':	goto yy64;
default:	goto yy63;
}
yy63:
cur = marker;
goto yy60;
yy64:
yych = *++cur;
switch (yych) {
case 'e':	goto yy65;
default:	goto yy63;
}
yy65:
yych = *++cur;
switch (yych) {
case 'r':	goto yy66;
default:	goto yy63;
}
yy66:
yych = *++cur;
switch (yych) {
case 'i':	goto yy67;
default:	goto yy63;
}
yy67:
yych = *++cur;
switch (yych) {
case 's':	goto yy68;
default:	goto yy63;
}
yy68:
yych = *++cur;
switch (yych) {
case 'k':	goto yy69;
default:	goto yy63;
}
yy69:
yych = *++cur;
switch (yych) {
case ' ':	goto yy70;
default:	goto yy63;
}
yy70:
yych = *++cur;
switch (yych) {
case 'C':	goto yy71;
default:	goto yy63;
}
yy71:
yych = *++cur;
switch (yych) {
case 'a':	goto yy72;
default:	goto yy63;
}
yy72:
yych = *++cur;
switch (yych) {
case 'l':	goto yy73;
default:	goto yy63;
}
yy73:
yych = *++cur;
switch (yych) {
case 'l':	goto yy74;
default:	goto yy63;
}
yy74:
yych = *++cur;
switch (yych) {
case ' ':	goto yy75;
default:	goto yy63;
}
yy75:
yych = *++cur;
switch (yych) {
case 'M':	goto yy76;
default:	goto yy63;
}
yy76:
yych = *++cur;
switch (yych) {
case 'a':	goto yy77;
default:	goto yy63;
}
yy77:
yych = *++cur;
switch (yych) {
case 'n':	goto yy78;
default:	goto yy63;
}
yy78:
yych = *++cur;
switch (yych) {
case 'a':	goto yy79;
default:	goto yy63;
}
yy79:
yych = *++cur;
switch (yych) {
case 'g':	goto yy80;
default:	goto yy63;
}
yy80:
yych = *++cur;
switch (yych) {
case 'e':	goto yy81;
default:	goto yy63;
}
yy81:
yych = *++cur;
switch (yych) {
case 'r':	goto yy82;
default:	goto yy63;
}
yy82:
yych = *++cur;
switch (yych) {
case '/':	goto yy83;
default:	goto yy63;
}
yy83:
++cur;
c = yycmajor;
goto yyc_major;
/* *********************************** */
yyc_key:
yych = *cur;
switch (yych) {
case '\r':	goto yy90;
case ' ':	goto yy91;
case ':':	goto yy93;
case 'A':
case 'a':	goto yy94;
case 'D':
case 'd':	goto yy95;
default:	goto yy87;
}
yy87:
++cur;
yych = *cur;
yy88:
switch (yych) {
case ' ':
case ':':	goto yy89;
default:	goto yy87;
}
yy89:
#line 127 "amip_parse.re"
{ len = cur - tok;
                 printf("KEY (flex): %.*s\n", len, tok);
                 goto yyc_key; }
#line 526 "amip_parse.c"
yy90:
yych = *++cur;
switch (yych) {
case '\n':	goto yy96;
default:	goto yy88;
}
yy91:
++cur;
yy92:
#line 117 "amip_parse.re"
{ printf("FAILED.\n"); return 1; }
#line 538 "amip_parse.c"
yy93:
yych = *++cur;
switch (yych) {
case ' ':	goto yy97;
default:	goto yy92;
}
yy94:
yych = *++cur;
switch (yych) {
case 'C':
case 'c':	goto yy99;
default:	goto yy88;
}
yy95:
yych = *++cur;
switch (yych) {
case 'A':
case 'a':	goto yy100;
default:	goto yy88;
}
yy96:
yych = *++cur;
switch (yych) {
case '\r':	goto yy101;
default:	goto yy88;
}
yy97:
++cur;
#line 120 "amip_parse.re"
{ tok = cur;goto yyc_value; }
#line 569 "amip_parse.c"
yy99:
yych = *++cur;
switch (yych) {
case 'T':
case 't':	goto yy102;
default:	goto yy88;
}
yy100:
yych = *++cur;
switch (yych) {
case 'T':
case 't':	goto yy103;
default:	goto yy88;
}
yy101:
yych = *++cur;
switch (yych) {
case '\n':	goto yy104;
default:	goto yy88;
}
yy102:
yych = *++cur;
switch (yych) {
case 'I':
case 'i':	goto yy106;
default:	goto yy88;
}
yy103:
yych = *++cur;
switch (yych) {
case 'E':
case 'e':	goto yy107;
default:	goto yy88;
}
yy104:
++cur;
switch ((yych = *cur)) {
case ' ':
case ':':	goto yy105;
default:	goto yy87;
}
yy105:
#line 118 "amip_parse.re"
{ printf("Packet parsed.\n"); goto done; }
#line 614 "amip_parse.c"
yy106:
yych = *++cur;
switch (yych) {
case 'O':
case 'o':	goto yy109;
default:	goto yy88;
}
yy107:
++cur;
switch ((yych = *cur)) {
case ' ':
case ':':	goto yy108;
default:	goto yy87;
}
yy108:
#line 124 "amip_parse.re"
{ len = cur - tok;
                 printf("KEY (fixed): %.*s\n", len, tok);
                 goto yyc_key; }
#line 634 "amip_parse.c"
yy109:
yych = *++cur;
switch (yych) {
case 'N':
case 'n':	goto yy110;
default:	goto yy88;
}
yy110:
++cur;
switch ((yych = *cur)) {
case ' ':
case ':':	goto yy111;
default:	goto yy87;
}
yy111:
#line 121 "amip_parse.re"
{ len = cur - tok;
                 printf("KEY (fixed): %.*s\n", len, tok);
                 goto yyc_key; }
#line 654 "amip_parse.c"
/* *********************************** */
yyc_major:
yych = *cur;
switch (yych) {
case '.':	goto yy116;
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':	goto yy118;
default:	goto yy114;
}
yy114:
++cur;
#line 75 "amip_parse.re"
{ return RV_FAIL; }
#line 676 "amip_parse.c"
yy116:
++cur;
#line 81 "amip_parse.re"
{ goto yyc_minor; }
#line 681 "amip_parse.c"
yy118:
++cur;
#line 80 "amip_parse.re"
{ ver->major = ver->major * 10 + (yych - '0'); goto yyc_major; }
#line 686 "amip_parse.c"
/* *********************************** */
yyc_minor:
yych = *cur;
switch (yych) {
case '\r':	goto yy124;
case '.':	goto yy125;
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':	goto yy127;
default:	goto yy122;
}
yy122:
++cur;
yy123:
#line 75 "amip_parse.re"
{ return RV_FAIL; }
#line 710 "amip_parse.c"
yy124:
yych = *++cur;
switch (yych) {
case '\n':	goto yy129;
default:	goto yy123;
}
yy125:
++cur;
#line 84 "amip_parse.re"
{ goto yyc_patch; }
#line 721 "amip_parse.c"
yy127:
++cur;
#line 83 "amip_parse.re"
{ ver->minor = ver->minor * 10 + (yych - '0'); goto yyc_minor; }
#line 726 "amip_parse.c"
yy129:
++cur;
#line 78 "amip_parse.re"
{ goto done; }
#line 731 "amip_parse.c"
/* *********************************** */
yyc_patch:
yych = *cur;
switch (yych) {
case '\r':	goto yy135;
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':	goto yy136;
default:	goto yy133;
}
yy133:
++cur;
yy134:
#line 75 "amip_parse.re"
{ return RV_FAIL; }
#line 754 "amip_parse.c"
yy135:
yych = *++cur;
switch (yych) {
case '\n':	goto yy138;
default:	goto yy134;
}
yy136:
++cur;
#line 86 "amip_parse.re"
{ ver->patch = ver->patch * 10 + (yych - '0'); goto yyc_patch; }
#line 765 "amip_parse.c"
yy138:
++cur;
#line 78 "amip_parse.re"
{ goto done; }
#line 770 "amip_parse.c"
/* *********************************** */
yyc_value:
yych = *cur;
switch (yych) {
case '\n':	goto yy145;
case '\r':	goto yy147;
default:	goto yy143;
}
yy142:
#line 132 "amip_parse.re"
{ len = cur - tok;
                     printf("VAL: %.*s\n", len, tok);
                     goto yyc_value;}
#line 784 "amip_parse.c"
yy143:
++cur;
yych = *cur;
switch (yych) {
case '\n':
case '\r':	goto yy142;
default:	goto yy143;
}
yy145:
++cur;
yy146:
#line 117 "amip_parse.re"
{ printf("FAILED.\n"); return 1; }
#line 798 "amip_parse.c"
yy147:
yych = *(marker = ++cur);
switch (yych) {
case '\n':	goto yy148;
default:	goto yy146;
}
yy148:
yych = *++cur;
ctxmarker = cur;
switch (yych) {
case '\r':	goto yy150;
case 'A':
case 'B':
case 'C':
case 'D':
case 'E':
case 'F':
case 'G':
case 'H':
case 'I':
case 'J':
case 'K':
case 'L':
case 'M':
case 'N':
case 'O':
case 'P':
case 'Q':
case 'R':
case 'S':
case 'T':
case 'U':
case 'V':
case 'W':
case 'X':
case 'Y':
case 'Z':
case 'a':
case 'b':
case 'c':
case 'd':
case 'e':
case 'f':
case 'g':
case 'h':
case 'i':
case 'j':
case 'k':
case 'l':
case 'm':
case 'n':
case 'o':
case 'p':
case 'q':
case 'r':
case 's':
case 't':
case 'u':
case 'v':
case 'w':
case 'x':
case 'y':
case 'z':	goto yy151;
default:	goto yy149;
}
yy149:
cur = marker;
goto yy146;
yy150:
yych = *++cur;
switch (yych) {
case '\n':	goto yy153;
default:	goto yy149;
}
yy151:
++cur;
cur = ctxmarker;
#line 131 "amip_parse.re"
{ tok = cur;goto yyc_key; }
#line 878 "amip_parse.c"
yy153:
++cur;
#line 118 "amip_parse.re"
{ printf("Packet parsed.\n"); goto done; }
#line 883 "amip_parse.c"
#line 136 "amip_parse.re"


done:
  return rv;
}
