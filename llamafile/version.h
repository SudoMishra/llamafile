#pragma once

#define LLAMAFILE_MAJOR 0
#define LLAMAFILE_MINOR 8
#define LLAMAFILE_PATCH 1
#define LLAMAFILE_VERSION \
    (100000000 * LLAMAFILE_MAJOR + 1000000 * LLAMAFILE_MINOR + LLAMAFILE_PATCH)

#define MKVERSION__(x, y, z) #x "." #y "." #z
#define MKVERSION_(x, y, z) MKVERSION__(x, y, z)
#define LLAMAFILE_VERSION_STRING MKVERSION_(LLAMAFILE_MAJOR, LLAMAFILE_MINOR, LLAMAFILE_PATCH)
