/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*! @name PORTC6 (number 78), U8[11]/SW2
  @{ */
#define BOOT_PIN_SW2_GPIO GPIOC /*!<@brief GPIO device name: GPIOC */
#define BOOT_PIN_SW2_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOOT_PIN_SW2_PIN 6U     /*!<@brief PORTC pin index: 6 */
                                /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitBootPin(void);

/*! @name PORTB16 (number 62), UART0_RX_GPIO
  @{ */
#define UART0_POLLFORACTIVITY_RX_GPIO_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define UART0_POLLFORACTIVITY_RX_GPIO_PORT PORTB /*!<@brief PORT device name: PORTB */
#define UART0_POLLFORACTIVITY_RX_GPIO_PIN 16U    /*!<@brief PORTB pin index: 16 */
                                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void UART0_PollForActivity(void);

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*! @name PORTB16 (number 62), UART0_RX_GPIO
  @{ */
#define UART0_RX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define UART0_RX_PIN 16U    /*!<@brief PORTB pin index: 16 */
                            /* @} */

/*! @name PORTB17 (number 63), U10[1]/UART0_TX
  @{ */
#define UART0_TX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define UART0_TX_PIN 17U    /*!<@brief PORTB pin index: 17 */
                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void UART0_InitPins(void);

/*! @name PORTB16 (number 62), UART0_RX_GPIO
  @{ */
#define UART0_RESTOREDEFAULT_RX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define UART0_RESTOREDEFAULT_RX_PIN 16U    /*!<@brief PORTB pin index: 16 */
                                           /* @} */

/*! @name PORTB17 (number 63), U10[1]/UART0_TX
  @{ */
#define UART0_RESTOREDEFAULT_TX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define UART0_RESTOREDEFAULT_TX_PIN 17U    /*!<@brief PORTB pin index: 17 */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void UART0_RestoreDefault(void);

/*! @name PORTC10 (number 82), J4[12]
  @{ */
#define I2C1_SCL_PORT PORTC /*!<@brief PORT device name: PORTC */
#define I2C1_SCL_PIN 10U    /*!<@brief PORTC pin index: 10 */
                            /* @} */

/*! @name PORTC11 (number 83), J4[10]
  @{ */
#define I2C1_SDA_PORT PORTC /*!<@brief PORT device name: PORTC */
#define I2C1_SDA_PIN 11U    /*!<@brief PORTC pin index: 11 */
                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void I2C1_InitPins(void);

/*! @name PORTC10 (number 82), J4[12]
  @{ */
#define I2C1_RESTOREDEFAULT_SCL_PORT PORTC /*!<@brief PORT device name: PORTC */
#define I2C1_RESTOREDEFAULT_SCL_PIN 10U    /*!<@brief PORTC pin index: 10 */
                                           /* @} */

/*! @name PORTC11 (number 83), J4[10]
  @{ */
#define I2C1_RESTOREDEFAULT_SDA_PORT PORTC /*!<@brief PORT device name: PORTC */
#define I2C1_RESTOREDEFAULT_SDA_PIN 11U    /*!<@brief PORTC pin index: 11 */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void I2C1_RestoreDefault(void);

/*! @name PORTD0 (number 93), J2[6]
  @{ */
#define SPI0_PCS_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_PCS_PIN 0U     /*!<@brief PORTD pin index: 0 */
                            /* @} */

/*! @name PORTD1 (number 94), J2[12]
  @{ */
#define SPI0_SCK_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_SCK_PIN 1U     /*!<@brief PORTD pin index: 1 */
                            /* @} */

/*! @name PORTD3 (number 96), J2[10]
  @{ */
#define SPI0_SIN_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_SIN_PIN 3U     /*!<@brief PORTD pin index: 3 */
                            /* @} */

/*! @name PORTD2 (number 95), J2[8]
  @{ */
#define SPI0_SOUT_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_SOUT_PIN 2U     /*!<@brief PORTD pin index: 2 */
                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void SPI0_InitPins(void);

/*! @name PORTD0 (number 93), J2[6]
  @{ */
#define SPI0_RESTOREDEFAULT_PCS_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_RESTOREDEFAULT_PCS_PIN 0U     /*!<@brief PORTD pin index: 0 */
                                           /* @} */

/*! @name PORTD1 (number 94), J2[12]
  @{ */
#define SPI0_RESTOREDEFAULT_SCK_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_RESTOREDEFAULT_SCK_PIN 1U     /*!<@brief PORTD pin index: 1 */
                                           /* @} */

/*! @name PORTD2 (number 95), J2[8]
  @{ */
#define SPI0_RESTOREDEFAULT_SOUT_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_RESTOREDEFAULT_SOUT_PIN 2U     /*!<@brief PORTD pin index: 2 */
                                            /* @} */

/*! @name PORTD3 (number 96), J2[10]
  @{ */
#define SPI0_RESTOREDEFAULT_SIN_PORT PORTD /*!<@brief PORT device name: PORTD */
#define SPI0_RESTOREDEFAULT_SIN_PIN 3U     /*!<@brief PORTD pin index: 3 */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void SPI0_RestoreDefault(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
