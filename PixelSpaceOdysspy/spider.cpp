#include <avr/pgmspace.h>
#include "spider.h"

PROGMEM static const unsigned char attack_0[] =
{
  2, 1, 22, 15,
  0x80, 0x60, 0x10, 0x8, 0x6, 0x1, 0x6, 0xf8, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xf3, 0xf0, 0xec, 0xc6, 0xfe, 0x80, 0x80, 0x40, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0x7, 0x6e, 0x1f, 0x6, 0x7, 0x7, 0x7, 0xf, 0xf, 0x7f, 0xf, 0xf, 0x1, 0x78, 0x7
};

PROGMEM static const unsigned char attack_1[] =
{
  0, 0, 23, 16,
  0x0, 0x0, 0xc0, 0xa0, 0xd0, 0xec, 0xe2, 0xe3, 0xfc, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xb0, 0xf8, 0x80, 0x0, 0x0, 0x80, 0x0, 0x0, 0x0, 0x2, 0x1, 0x17, 0x1d, 0xf, 0xd, 0xf, 0x1f, 0x1f, 0x1f, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3d, 0xc1, 0x0, 0x7, 0x18, 0xe0
};

static const FrameData attack_frames[] =
{
  attack_0,
  attack_1,
};

PROGMEM static const unsigned char walk_0[] =
{
  0, 2, 24, 14,
  0x0, 0x0, 0x80, 0x60, 0x1c, 0x4, 0x8, 0xf0, 0xe0, 0xf8, 0xfe, 0xf0, 0xf0, 0xf8, 0xf8, 0xfe, 0xf3, 0xff, 0xf0, 0x80, 0x80, 0xc0, 0x0, 0x0, 0x18, 0x6, 0x1, 0x0, 0x0, 0x0, 0x18, 0xf, 0x1d, 0x7, 0x5, 0xf, 0x37, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3f, 0x0, 0x0, 0x7, 0x38
};

PROGMEM static const unsigned char walk_1[] =
{
  0, 1, 24, 15,
  0x0, 0x0, 0x0, 0xc0, 0x70, 0x60, 0x40, 0xc0, 0xe0, 0xf8, 0xfe, 0xf0, 0xf0, 0xe0, 0xf0, 0xec, 0xc3, 0xfe, 0x80, 0x80, 0xc0, 0x0, 0x0, 0x0, 0x60, 0x18, 0x7, 0x0, 0x0, 0x0, 0x18, 0xf, 0x1d, 0x7, 0x5, 0x7, 0x1f, 0x6f, 0xf, 0xf, 0xf, 0xf, 0x3f, 0xf, 0x1, 0x3, 0xc, 0x70
};

PROGMEM static const unsigned char walk_2[] =
{
  1, 3, 23, 13,
  0x0, 0x80, 0x70, 0x1c, 0x30, 0x20, 0xe0, 0xf0, 0xfc, 0xff, 0xf8, 0xf8, 0xf0, 0xf8, 0xf8, 0xfe, 0xff, 0xe0, 0xe0, 0x74, 0x18, 0x20, 0x40, 0x18, 0x7, 0x0, 0x0, 0x0, 0xc, 0x7, 0xe, 0x3, 0x2, 0x3, 0x7, 0x7, 0x1f, 0x3, 0x3, 0x3, 0x1f, 0x3, 0x0, 0x0, 0x0, 0x0
};

PROGMEM static const unsigned char walk_3[] =
{
  3, 2, 20, 14,
  0x0, 0xf8, 0x60, 0x20, 0xe0, 0xf0, 0xfc, 0xff, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xfc, 0xfe, 0xc0, 0xc0, 0xf8, 0xf0, 0x0, 0x3e, 0x1, 0x0, 0xc, 0x7, 0xe, 0x3, 0x2, 0x1f, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0xf, 0x30, 0x7, 0x38
};

PROGMEM static const unsigned char walk_4[] =
{
  4, 3, 19, 13,
  0x3c, 0xf0, 0x10, 0xe0, 0xf0, 0xfc, 0xfe, 0xf8, 0xf8, 0xf8, 0xf8, 0xff, 0xfe, 0xf8, 0xe0, 0xe0, 0x70, 0xf8, 0x0, 0x0, 0x1f, 0xc, 0x7, 0xe, 0x3, 0x2, 0x1f, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x0, 0x1, 0x1e
};

static const FrameData walk_frames[] =
{
  walk_0,
  walk_1,
  walk_2,
  walk_3,
  walk_4,
};

PROGMEM static const unsigned char rise_0[] =
{
  6, 5, 17, 11,
  0xc0, 0x20, 0xf8, 0xfe, 0xf8, 0xf8, 0xfe, 0xff, 0xe0, 0xff, 0xe6, 0xd8, 0xe0, 0xc0, 0xc0, 0x60, 0xf0, 0x7, 0x0, 0x7, 0x5, 0x7, 0x5, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x6, 0x0, 0x7
};

PROGMEM static const unsigned char rise_1[] =
{
  5, 3, 18, 13,
  0x0, 0xe0, 0x1c, 0xf0, 0xc0, 0xfc, 0xff, 0xec, 0xe0, 0xf0, 0xf0, 0xff, 0xc6, 0xd8, 0x98, 0xe0, 0x80, 0x80, 0x1c, 0x3, 0x10, 0x1f, 0x1b, 0xf, 0x1b, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0x1f, 0xf, 0xf, 0x0, 0x1f
};

PROGMEM static const unsigned char rise_2[] =
{
  5, 2, 18, 14,
  0xf8, 0x10, 0x20, 0xc0, 0xe0, 0xf8, 0xfe, 0xf0, 0xf0, 0xf0, 0xf8, 0xf6, 0xe3, 0xff, 0xc0, 0x40, 0x20, 0xe0, 0x3f, 0x0, 0x18, 0xf, 0x1d, 0x7, 0x3d, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x3f, 0x7, 0x7, 0x0, 0x3f
};

static const FrameData rise_frames[] =
{
  rise_0,
  rise_1,
  rise_2,
};

PROGMEM static const unsigned char awaken_0[] =
{
  6, 5, 15, 11,
  0x0, 0x80, 0xc0, 0xf0, 0xf8, 0xe6, 0xff, 0xc0, 0xff, 0xfc, 0xf0, 0xc0, 0xc0, 0x0, 0x0, 0x4, 0x7, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x4
};

static const FrameData awaken_frames[] =
{
  awaken_0,
};

PROGMEM static const unsigned char sleep_0[] =
{
  6, 5, 15, 11,
  0x0, 0x80, 0xc0, 0xf0, 0xf8, 0xe6, 0xff, 0xc0, 0xff, 0xfc, 0xf0, 0xc0, 0xc0, 0x0, 0x0, 0x4, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x4
};

static const FrameData sleep_frames[] =
{
  sleep_0,
};

const Animation spider_animations[] = 
{
  CreateAnimation(attack_frames, 2),
  CreateAnimation(walk_frames, 5),
  CreateAnimation(rise_frames, 3),
  CreateAnimation(awaken_frames, 1),
  CreateAnimation(sleep_frames, 1),
};
