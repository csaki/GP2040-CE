/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#pragma once

// Enum for tracking last direction state of Second Input SOCD method
typedef enum
{
	DIRECTION_NONE,
	DIRECTION_UP,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_RIGHT
} DpadDirection;
typedef enum
{
	DIAGONAL_DIRECTION_NONE,
	DIAGONAL_DIRECTION_UP_LEFT,
	DIAGONAL_DIRECTION_UP_RIGHT,
	DIAGONAL_DIRECTION_DOWN_LEFT,
	DIAGONAL_DIRECTION_DOWN_RIGHT
} DpadDiagonalDirection;