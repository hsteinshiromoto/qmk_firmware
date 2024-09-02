
/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k2O, k0P, k0O, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k1Q, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N, k2Q, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3N, k1P, k4A, k4C, k4D, k4E, k4F, k4G, k4H, k4I, k4J, k4K, k4L, k4N, k4O, k2P, k5A, k5B, k5C, k5G, k5J, k5K, k3O, k5N, k5O, k5P \
) { \
	{k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, XXX, k0O, k0P, XXX}, \
	{k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, XXX, k1P, k1Q}, \
	{k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N, k2O, k2P, k2Q}, \
	{k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, XXX, k3N, k3O, XXX, XXX}, \
	{k4A, XXX, k4C, k4D, k4E, k4F, k4G, k4H, k4I, k4J, k4K, k4L, XXX, k4N, k4O, XXX, XXX}, \
	{k5A, k5B, k5C, XXX, XXX, XXX, k5G, XXX, XXX, k5J, k5K, XXX, XXX, k5N, k5O, k5P, XXX} \
}
