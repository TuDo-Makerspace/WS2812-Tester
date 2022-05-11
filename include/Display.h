/*
 * Copyright (C) 2022 Patrick Pedersen, TU-DO Makerspace

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 */

#pragma once

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#include <screensaver.h>

class Display
{
private:
	bool show_screensaver = false;
	String title_text;
	unsigned long n_leds = 0;
	uint8_t r = 0, g = 0, b = 0;
	Adafruit_SSD1306 *display;

	void screensaver();

public:
	Display(String title_text);
	void start_screensaver();
	void stop_screensaver();
	void set_n_leds(unsigned long n);
	void set_rgb(uint8_t r, uint8_t g, uint8_t b);
	void update();
};