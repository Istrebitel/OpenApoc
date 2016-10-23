#pragma once
#define WIN32_MEAN_AND_LEAN

#include "library/colour.h"
#include "library/line.h"
#include "library/rect.h"
#include "library/resource.h"
#include "library/strings.h"
#include "library/strings_format.h"
#include "library/vec.h"
#include "library/vector_remove.h"
#include "library/voxel.h"
#include "library/xorshift.h"

#include <SDL.h>
#include <SDL_audio.h>
#include <SDL_endian.h>
#include <SDL_keycode.h>
#include <SDL_messagebox.h>
#include <SDL_mouse.h>
#include <SDL_syswm.h>
#include <algorithm>
#include <array>
#include <boost/filesystem.hpp>
#include <boost/locale.hpp>
#include <chrono>
#include <condition_variable>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <functional>
#include <future>
#include <glm/glm.hpp>
#include <glm/gtx/rotate_vector.hpp>
#include <iostream>
#include <istream>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <ostream>
#include <physfs.h>
#include <queue>
#include <set>
#include <sstream>
#include <string.h>
#include <string>
#include <sys/types.h>
#include <thread>
#include <tinyxml2.h>
#include <utility>
#include <vector>

#undef max
#undef min
