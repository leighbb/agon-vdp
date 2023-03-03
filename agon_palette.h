//
// Title:	        Agon Video BIOS - Palette data
// Author:        	Dean Belfield
// Created:       	25/02/2023
// Last Updated:	25/02/2023
//
// Modinfo:

#pragma once

// Colour lookup table
//
const RGB888 colourLookup[80] = {
    //
    // First a standard set of half and full bright colours in BBC BASIC ordering for backwards compatibility
    //
	RGB888(0x00, 0x00, 0x00), // Black
	RGB888(0x80, 0x00, 0x00), // Red
	RGB888(0x00, 0x80, 0x00), // Green
	RGB888(0x80, 0x80, 0x00), // Yellow
	RGB888(0x00, 0x00, 0x80), // Blue
	RGB888(0x80, 0x00, 0x80), // Magenta
	RGB888(0x00, 0x80, 0x80), // Cyan
	RGB888(0x80, 0x80, 0x80), // White 
	RGB888(0x40, 0x40, 0x40), // Bright Black (Grey)
	RGB888(0xC0, 0x00, 0x00), // Bright Red
	RGB888(0x00, 0xC0, 0x00), // Bright Green
	RGB888(0xC0, 0xC0, 0x00), // Bright Yellow
	RGB888(0x00, 0x00, 0xC0), // Bright Blue
	RGB888(0xC0, 0x00, 0xC0), // Bright Magenta
	RGB888(0x00, 0xC0, 0xC0), // Bright Cyan
	RGB888(0xC0, 0xC0, 0xC0), // Bright White
	//
    // Then the full set of colours available to FabGL
    //
	RGB888(0x00, 0x00, 0x00), RGB888(0x00, 0x00, 0x40), RGB888(0x00, 0x00, 0x80), RGB888(0x00, 0x00, 0xC0),
	RGB888(0x00, 0x40, 0x00), RGB888(0x00, 0x40, 0x40), RGB888(0x00, 0x40, 0x80), RGB888(0x00, 0x40, 0xC0),
	RGB888(0x00, 0x80, 0x00), RGB888(0x00, 0x80, 0x40), RGB888(0x00, 0x80, 0x80), RGB888(0x00, 0x80, 0xC0),
	RGB888(0x00, 0xC0, 0x00), RGB888(0x00, 0xC0, 0x40), RGB888(0x00, 0xC0, 0x80), RGB888(0x00, 0xC0, 0xC0),
	RGB888(0x40, 0x00, 0x00), RGB888(0x40, 0x00, 0x40), RGB888(0x40, 0x00, 0x80), RGB888(0x40, 0x00, 0xC0),
	RGB888(0x40, 0x40, 0x00), RGB888(0x40, 0x40, 0x40), RGB888(0x40, 0x40, 0x80), RGB888(0x40, 0x40, 0xC0),
	RGB888(0x40, 0x80, 0x00), RGB888(0x40, 0x80, 0x40), RGB888(0x40, 0x80, 0x80), RGB888(0x40, 0x80, 0xC0),
	RGB888(0x40, 0xC0, 0x00), RGB888(0x40, 0xC0, 0x40), RGB888(0x40, 0xC0, 0x80), RGB888(0x40, 0xC0, 0xC0),
	RGB888(0x80, 0x00, 0x00), RGB888(0x80, 0x00, 0x40), RGB888(0x80, 0x00, 0x80), RGB888(0x80, 0x00, 0xC0),
	RGB888(0x80, 0x40, 0x00), RGB888(0x80, 0x40, 0x40), RGB888(0x80, 0x40, 0x80), RGB888(0x80, 0x40, 0xC0),
	RGB888(0x80, 0x80, 0x00), RGB888(0x80, 0x80, 0x40), RGB888(0x80, 0x80, 0x80), RGB888(0x80, 0x80, 0xC0),
	RGB888(0x80, 0xC0, 0x00), RGB888(0x80, 0xC0, 0x40), RGB888(0x80, 0xC0, 0x80), RGB888(0x80, 0xC0, 0xC0),
	RGB888(0xC0, 0x00, 0x00), RGB888(0xC0, 0x00, 0x40), RGB888(0xC0, 0x00, 0x80), RGB888(0xC0, 0x00, 0xC0),
	RGB888(0xC0, 0x40, 0x00), RGB888(0xC0, 0x40, 0x40), RGB888(0xC0, 0x40, 0x80), RGB888(0xC0, 0x40, 0xC0),
	RGB888(0xC0, 0x80, 0x00), RGB888(0xC0, 0x80, 0x40), RGB888(0xC0, 0x80, 0x80), RGB888(0xC0, 0x80, 0xC0),
	RGB888(0xC0, 0xC0, 0x00), RGB888(0xC0, 0xC0, 0x40), RGB888(0xC0, 0xC0, 0x80), RGB888(0xC0, 0xC0, 0xC0),	
};