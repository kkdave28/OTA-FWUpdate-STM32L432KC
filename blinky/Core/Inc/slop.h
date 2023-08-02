/*
 * slop.h
 *
 *  Created on: Jul 21, 2023
 *      Author: GAMING
 */

#ifndef INC_SLOP_H_
#define INC_SLOP_H_


volatile static unsigned char cond = 0;
#define SLOP \
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");\
    asm(" nop");

#define SLOP_R {asm(" .rept 100 ; nop ; .endr");}


#endif /* INC_SLOP_H_ */
