/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H

/* USART instance mapping */
#define LPUART0 CM4_0__LPUART
#define LPUART1 CM4_1__LPUART
#define LPUART2 DMA__LPUART0
#define LPUART3 DMA__LPUART1
#define LPUART4 DMA__LPUART2
#define LPUART5 DMA__LPUART3
#define LPUART6 DMA__LPUART4

/* Driver name mapping. */
#define RTE_USART0        0
#define RTE_USART0_DMA_EN 0
#define RTE_USART1        0
#define RTE_USART1_DMA_EN 0
#define RTE_USART2        0
#define RTE_USART2_DMA_EN 0
#define RTE_USART3        0
#define RTE_USART3_DMA_EN 0
#define RTE_USART4        1
#define RTE_USART4_DMA_EN 1
#define RTE_USART5        0
#define RTE_USART5_DMA_EN 0
#define RTE_USART6        0
#define RTE_USART6_DMA_EN 0

/* UART configuration. */
#define USART_RX_BUFFER_LEN     64
#define USART4_RX_BUFFER_ENABLE 1

/* Note: LPUART0, LPUART1 not support DMA mode */
#define RTE_USART2_DMA_TX_CH       13
#define RTE_USART2_DMA_TX_PERI_SEL 13
#define RTE_USART2_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_USART2_DMA_RX_CH       12
#define RTE_USART2_DMA_RX_PERI_SEL 12
#define RTE_USART2_DMA_RX_DMA_BASE DMA__EDMA0

#define RTE_USART3_DMA_TX_CH       15
#define RTE_USART3_DMA_TX_PERI_SEL 15
#define RTE_USART3_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_USART3_DMA_RX_CH       14
#define RTE_USART3_DMA_RX_PERI_SEL 14
#define RTE_USART3_DMA_RX_DMA_BASE DMA__EDMA0

#define RTE_USART4_DMA_TX_CH       17
#define RTE_USART4_DMA_TX_PERI_SEL 17
#define RTE_USART4_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_USART4_DMA_RX_CH       16
#define RTE_USART4_DMA_RX_PERI_SEL 16
#define RTE_USART4_DMA_RX_DMA_BASE DMA__EDMA0

#define RTE_USART5_DMA_TX_CH       19
#define RTE_USART5_DMA_TX_PERI_SEL 19
#define RTE_USART5_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_USART5_DMA_RX_CH       18
#define RTE_USART5_DMA_RX_PERI_SEL 18
#define RTE_USART5_DMA_RX_DMA_BASE DMA__EDMA0

#define RTE_USART6_DMA_TX_CH       21
#define RTE_USART6_DMA_TX_PERI_SEL 21
#define RTE_USART6_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_USART6_DMA_RX_CH       20
#define RTE_USART6_DMA_RX_PERI_SEL 20
#define RTE_USART6_DMA_RX_DMA_BASE DMA__EDMA0

#endif /* __RTE_DEVICE_H */
