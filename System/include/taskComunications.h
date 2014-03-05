/**
 * @file  taskComunications.h
 * @author Tomas Opazo T - tomas.opazo.t@gmail.com
 * @author Carlos Gonzalez C - carlgonz@ug.uchile.cl
 * @date 2012
 * @copyright GNU GPL v3
 *
 * @id 0x1101
 *
 * This task implements a listener, that send commands at periodical times.
 */

#ifndef T_COMUNICATIONS_H
#define T_COMUNICATIONS_H

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

#include "cmdIncludes.h"
#include "cmdRepository.h"

void taskComunications(void *param);
void com_doOnRSSI(xQueueHandle cmdQueue);

#endif //T_COMUNICATIONS_H
