#ifndef TIMERS_H
#define TIMERS_H
#include "Arduino.h"
void limit_count(int count,int prescaler);
void timer_mode(char mode[]);
void timer_interruption(char module);

#endif
