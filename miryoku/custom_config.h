// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

// Minimal BT‑clear key on the Media layer
#define MIRYOKU_KLUDGE_LAYERS \
  X(Media)

#define MIRYOKU_LAYER_MEDIA \
  &bt BT_CLR
