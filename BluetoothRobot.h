/*
             Bluetooth Robot
     Copyright (C) Dean Camera, 2011.

  dean [at] fourwalledcubicle [dot] com
        www.fourwalledcubicle.org
*/

/*
  Copyright 2011  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, distribute, and sell this
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaim all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

#ifndef _BLUETOOTH_ROBOT_H_
#define _BLUETOOTH_ROBOT_H_

	/* Includes: */
		#include <avr/io.h>
		#include <avr/wdt.h>
		#include <avr/power.h>
		#include <avr/interrupt.h>
		#include <avr/pgmspace.h>
		#include <util/delay.h>
		#include <stdbool.h>
		
		#include <LUFA/Drivers/USB/USB.h>
		#include <LUFA/Drivers/Peripheral/TWI.h>
		
		#include "JoystickControl.h"

		#include "Buttons.h"
		#include "Headlights.h"
		#include "LCD.h"
		#include "Motors.h"
		#include "RGB.h"
		#include "Speaker.h"

	/* Function Prototypes: */
		void SetupHardware(void);

		void EVENT_USB_Host_HostError(const uint8_t ErrorCode);
		void EVENT_USB_Host_DeviceAttached(void);
		void EVENT_USB_Host_DeviceUnattached(void);
		void EVENT_USB_Host_DeviceEnumerationFailed(const uint8_t ErrorCode,
		                                            const uint8_t SubErrorCode);
		void EVENT_USB_Host_DeviceEnumerationComplete(void);

#endif

