/* include/linux/bln.h */

#ifndef _LINUX_BLN_H
#define _LINUX_BLN_H

struct bln_implementation {
	int (*enable)(int led_mask);
	int (*disable)(int led_mask);
	int (*power_on)(void);
	int (*power_off)(void);
	unsigned int led_count;
};

void register_bln_implementation(struct bln_implementation *imp);
bool bln_is_ongoing(void);
#endif
