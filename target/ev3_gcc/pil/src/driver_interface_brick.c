#include "platform_interface_layer.h"

/**
 * Route extended service calls to actual functions.
 */

ER_UINT extsvc_button_set_on_clicked(intptr_t button, intptr_t handler, intptr_t exinf, intptr_t par4, intptr_t par5, ID cdmid) {
	return  _button_set_on_clicked((brickbtn_t)button, (ISR)handler, (intptr_t)exinf);
}

ER_UINT extsvc_fetch_brick_info(intptr_t p_brickinfo, intptr_t par2, intptr_t par3, intptr_t par4, intptr_t par5, ID cdmid) {
	return _fetch_brick_info((brickinfo_t*)p_brickinfo, cdmid);
}

ER_UINT extsvc_brick_misc_command(intptr_t misccmd, intptr_t exinf, intptr_t par3, intptr_t par4, intptr_t par5, ID cdmid) {
	return _brick_misc_command((misccmd_t)misccmd, exinf);
}

ER_UINT extsvc_start_i2c_transaction(intptr_t port, intptr_t addr, intptr_t writebuf, intptr_t writelen, intptr_t readlen, ID cdmid) {
	return _start_i2c_transaction((int)port,(uint_t)addr, (uint8_t*)writebuf, (uint_t)writelen, (uint_t)readlen, cdmid);
}
