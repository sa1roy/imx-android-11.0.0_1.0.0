/*
 * Copyright 2017-2018 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H

/* LPI2C instance mapping */
#define LPI2C0 CM4__LPI2C
#define LPI2C1 ADMA__LPI2C0
#define LPI2C2 ADMA__LPI2C1
#define LPI2C3 ADMA__LPI2C2
#define LPI2C4 ADMA__LPI2C3

/* Driver name mapping. */
#define RTE_I2C0        0
#define RTE_I2C0_DMA_EN 0
#define RTE_I2C1        0
#define RTE_I2C1_DMA_EN 0
#define RTE_I2C2        1
#define RTE_I2C2_DMA_EN 1
#define RTE_I2C3        0
#define RTE_I2C3_DMA_EN 0
#define RTE_I2C4        0
#define RTE_I2C4_DMA_EN 0

/* LPI2C configuration. */
/*Note: LPI2C0 not support DMA */
#define RTE_I2C1_DMA_TX_CH       1
#define RTE_I2C1_DMA_TX_PERI_SEL 1
#define RTE_I2C1_DMA_TX_DMA_BASE ADMA__EDMA3
#define RTE_I2C1_DMA_RX_CH       0
#define RTE_I2C1_DMA_RX_PERI_SEL 0
#define RTE_I2C1_DMA_RX_DMA_BASE ADMA__EDMA3

#define RTE_I2C2_DMA_TX_CH       3
#define RTE_I2C2_DMA_TX_PERI_SEL 3
#define RTE_I2C2_DMA_TX_DMA_BASE ADMA__EDMA3
#define RTE_I2C2_DMA_RX_CH       2
#define RTE_I2C2_DMA_RX_PERI_SEL 2
#define RTE_I2C2_DMA_RX_DMA_BASE ADMA__EDMA3

#define RTE_I2C3_DMA_TX_CH       5
#define RTE_I2C3_DMA_TX_PERI_SEL 5
#define RTE_I2C3_DMA_TX_DMA_BASE ADMA__EDMA3
#define RTE_I2C3_DMA_RX_CH       4
#define RTE_I2C3_DMA_RX_PERI_SEL 4
#define RTE_I2C3_DMA_RX_DMA_BASE ADMA__EDMA3

#define RTE_I2C4_DMA_TX_CH       7
#define RTE_I2C4_DMA_TX_PERI_SEL 7
#define RTE_I2C4_DMA_TX_DMA_BASE ADMA__EDMA3
#define RTE_I2C4_DMA_RX_CH       6
#define RTE_I2C4_DMA_RX_PERI_SEL 6
#define RTE_I2C4_DMA_RX_DMA_BASE ADMA__EDMA3

#endif /* __RTE_DEVICE_H */
