/*
 * main.h
 *
 *  Created on: Feb 7, 2026
 *      Author: matthew
 */
#include <stdbool.h>

#ifndef SRC_MAIN_H_
#define SRC_MAIN_H_


typedef struct {
	bool btn_pressed;
	uint32_t timestamp;
	uint32_t last_valid_timestamp;
} btn_evt_ctx_t;

typedef enum {
	IDLE = 0,
	AWAITING_SECOND_PRESS,
} btn_state_t;

typedef struct {
	uint32_t time_down;
	bool debouncing;
	btn_state_t state;
} btn_ctx_t;

typedef struct {
	uint32_t blink_period;
} led_state_t;


#endif /* SRC_MAIN_H_ */
