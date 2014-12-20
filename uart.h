#ifndef _UART_H
#define _UART_H

#include "utils.h"

void USART_open(USART_TypeDef* USARTx, uint32_t baud);
void USART_DMA_send(USART_TypeDef* USARTx, DMA_Channel_TypeDef* DMAy_Channelx, char *buf, uint8_t len);
void USART_close(USART_TypeDef* USARTx);
void USART_print(USART_TypeDef* USARTx, char *buf, uint8_t len);
int uart_putc(int c, USART_TypeDef* USARTx);
int uart_getc(USART_TypeDef* USARTx);

#endif
