// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

// Declare BT behaviors (required for &bt BT_CLR to work)
#define MIRYOKU_KLUDGE_LAYERS \
  X(Media)

// Map a temporary BT_CLR on the Media layer only
// This does NOT break the core Miryoku mapping
#define MIRYOKU_LAYER_MEDIA \
  &bt BT_CLR

// Optional: also add BT_NXT, BT_PRV if you want profile switching later
// #define MIRYOKU_LAYER_MEDIA \
//   &bt BT_CLR, &bt BT_NXT, &bt BT_PRV
