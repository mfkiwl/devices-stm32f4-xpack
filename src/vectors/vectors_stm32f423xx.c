/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2020 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * The list of external handlers was automatically generated by 
 * processing the files available in the CubeMX packages, the folder:
 * `/Drivers/CMSIS/Device/ST/STM32F?xx/Source/Templates/arm`
 */

// ----------------------------------------------------------------------------

#include <micro-os-plus/architecture.h>
#include <micro-os-plus/architecture-cortexm/exception-handlers.h>

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

/*
 * Forward declaration of the specific IRQ handlers. These are aliased
 * to the Default_Handler, which is a 'forever' loop. When the application
 * defines an actual handler (with the same name), it will automatically
 * take precedence over these weak definitions.
 */

void __attribute__ ((weak, alias ("Default_Handler")))
WWDG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PVD_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TAMP_STAMP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RTC_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RCC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_TX_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_SCE_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI9_5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_BRK_TIM9_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_UP_TIM10_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_TRG_COM_TIM11_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_CC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI15_10_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RTC_Alarm_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_FS_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_BRK_TIM12_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_UP_TIM13_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_TRG_COM_TIM14_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_CC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FSMC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SDIO_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM6_DAC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_TX_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_SCE_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_FS_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN3_TX_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN3_RX0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN3_RX1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN3_SCE_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
AES_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RNG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FPU_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART8_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SAI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART9_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART10_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
QUADSPI_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FMPI2C1_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FMPI2C1_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM2_FLT0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM2_FLT1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM2_FLT2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM2_FLT3_IRQHandler(void);

// ----------------------------------------------------------------------------

extern uint32_t _initial_main_stack_pointer;

typedef void
(* const handler_ptr_t)(void);

// ----------------------------------------------------------------------------

/**
 * The table of interrupt handlers. It has an explicit section name
 * and relies on the linker script to place it at the correct location
 * in memory, usually at the very beginning of the flash bank.
 */
__attribute__ ((section(".interrupt_vectors"),used))
handler_ptr_t _interrupt_vectors[] =
  {
    // Cortex-M Core Handlers
    (handler_ptr_t) &_initial_main_stack_pointer, // MSP
    Reset_Handler,                     // The reset handler

    NMI_Handler,                       // The NMI handler
    HardFault_Handler,                 // The hard fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    MemManage_Handler,                 // The MPU fault handler
    BusFault_Handler,                  // The bus fault handler
    UsageFault_Handler,                // The usage fault handler
#else
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
#endif
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    SVC_Handler,                       // SVCall handler
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    DebugMon_Handler,                  // Debug monitor handler
#else
    0,                                 // Reserved
#endif
    0,                                 // Reserved
    PendSV_Handler,                    // The PendSV handler
    SysTick_Handler,                   // The SysTick handler

    // ----------------------------------------------------------------------
    // External Interrupts
    WWDG_IRQHandler,                   // Window WatchDog
    PVD_IRQHandler,                    // PVD through EXTI Line detection
    TAMP_STAMP_IRQHandler,             // Tamper and TimeStamps through the EXTI line
    RTC_WKUP_IRQHandler,               // RTC Wakeup through the EXTI line
    FLASH_IRQHandler,                  // FLASH
    RCC_IRQHandler,                    // RCC
    EXTI0_IRQHandler,                  // EXTI Line0
    EXTI1_IRQHandler,                  // EXTI Line1
    EXTI2_IRQHandler,                  // EXTI Line2
    EXTI3_IRQHandler,                  // EXTI Line3
    EXTI4_IRQHandler,                  // EXTI Line4
    DMA1_Stream0_IRQHandler,           // DMA1 Stream 0
    DMA1_Stream1_IRQHandler,           // DMA1 Stream 1
    DMA1_Stream2_IRQHandler,           // DMA1 Stream 2
    DMA1_Stream3_IRQHandler,           // DMA1 Stream 3
    DMA1_Stream4_IRQHandler,           // DMA1 Stream 4
    DMA1_Stream5_IRQHandler,           // DMA1 Stream 5
    DMA1_Stream6_IRQHandler,           // DMA1 Stream 6
    ADC_IRQHandler,                    // ADC1, ADC2 and ADC3s
    CAN1_TX_IRQHandler,                // CAN1 TX
    CAN1_RX0_IRQHandler,               // CAN1 RX0
    CAN1_RX1_IRQHandler,               // CAN1 RX1
    CAN1_SCE_IRQHandler,               // CAN1 SCE
    EXTI9_5_IRQHandler,                // External Line[9:5]s
    TIM1_BRK_TIM9_IRQHandler,          // TIM1 Break and TIM9
    TIM1_UP_TIM10_IRQHandler,          // TIM1 Update and TIM10
    TIM1_TRG_COM_TIM11_IRQHandler,     // TIM1 Trigger and Commutation and TIM11
    TIM1_CC_IRQHandler,                // TIM1 Capture Compare
    TIM2_IRQHandler,                   // TIM2
    TIM3_IRQHandler,                   // TIM3
    TIM4_IRQHandler,                   // TIM4
    I2C1_EV_IRQHandler,                // I2C1 Event
    I2C1_ER_IRQHandler,                // I2C1 Error
    I2C2_EV_IRQHandler,                // I2C2 Event
    I2C2_ER_IRQHandler,                // I2C2 Error
    SPI1_IRQHandler,                   // SPI1
    SPI2_IRQHandler,                   // SPI2
    USART1_IRQHandler,                 // USART1
    USART2_IRQHandler,                 // USART2
    USART3_IRQHandler,                 // USART3
    EXTI15_10_IRQHandler,              // External Line[15:10]s
    RTC_Alarm_IRQHandler,              // RTC Alarm (A and B) through EXTI Line
    OTG_FS_WKUP_IRQHandler,            // USB OTG FS Wakeup through EXTI line
    TIM8_BRK_TIM12_IRQHandler,         // TIM8 Break and TIM12
    TIM8_UP_TIM13_IRQHandler,          // TIM8 Update and TIM13
    TIM8_TRG_COM_TIM14_IRQHandler,     // TIM8 Trigger and Commutation and TIM14
    TIM8_CC_IRQHandler,                // TIM8 Capture Compare
    DMA1_Stream7_IRQHandler,           // DMA1 Stream7
    FSMC_IRQHandler,                   // FSMC
    SDIO_IRQHandler,                   // SDIO
    TIM5_IRQHandler,                   // TIM5
    SPI3_IRQHandler,                   // SPI3
    UART4_IRQHandler,                  // UART4
    UART5_IRQHandler,                  // UART5
    TIM6_DAC_IRQHandler,               // TIM6, DAC1 and DAC2
    TIM7_IRQHandler,                   // TIM7
    DMA2_Stream0_IRQHandler,           // DMA2 Stream 0
    DMA2_Stream1_IRQHandler,           // DMA2 Stream 1
    DMA2_Stream2_IRQHandler,           // DMA2 Stream 2
    DMA2_Stream3_IRQHandler,           // DMA2 Stream 3
    DMA2_Stream4_IRQHandler,           // DMA2 Stream 4
    DFSDM1_FLT0_IRQHandler,            // DFSDM1 Filter 0 global interrupt
    DFSDM1_FLT1_IRQHandler,            // DFSDM1 Filter 1 global interrupt
    CAN2_TX_IRQHandler,                // CAN2 TX
    CAN2_RX0_IRQHandler,               // CAN2 RX0
    CAN2_RX1_IRQHandler,               // CAN2 RX1
    CAN2_SCE_IRQHandler,               // CAN2 SCE
    OTG_FS_IRQHandler,                 // USB OTG FS
    DMA2_Stream5_IRQHandler,           // DMA2 Stream 5
    DMA2_Stream6_IRQHandler,           // DMA2 Stream 6
    DMA2_Stream7_IRQHandler,           // DMA2 Stream 7
    USART6_IRQHandler,                 // USART6
    I2C3_EV_IRQHandler,                // I2C3 event
    I2C3_ER_IRQHandler,                // I2C3 error
    CAN3_TX_IRQHandler,                // CAN3 TX
    CAN3_RX0_IRQHandler,               // CAN3 RX0
    CAN3_RX1_IRQHandler,               // CAN3 RX1
    CAN3_SCE_IRQHandler,               // CAN3 SCE
    0,                                 // Reserved
    AES_IRQHandler,                    // AES
    RNG_IRQHandler,                    // RNG
    FPU_IRQHandler,                    // FPU
    UART7_IRQHandler,                  // UART7
    UART8_IRQHandler,                  // UART8
    SPI4_IRQHandler,                   // SPI4
    SPI5_IRQHandler,                   // SPI5
    0,                                 // Reserved
    SAI1_IRQHandler,                   // SAI1
    UART9_IRQHandler,                  // UART9
    UART10_IRQHandler,                 // UART10
    0,                                 // Reserved
    0,                                 // Reserved
    QUADSPI_IRQHandler,                // QuadSPI
    0,                                 // Reserved
    0,                                 // Reserved
    FMPI2C1_EV_IRQHandler,             // FMPI2C1 Event
    FMPI2C1_ER_IRQHandler,             // FMPI2C1 Error
    LPTIM1_IRQHandler,                 // LPTIM1
    DFSDM2_FLT0_IRQHandler,            // DFSDM2 Filter0
    DFSDM2_FLT1_IRQHandler,            // DFSDM2 Filter1
    DFSDM2_FLT2_IRQHandler,            // DFSDM2 Filter2
    DFSDM2_FLT3_IRQHandler,            // DFSDM2 Filter3
};

// ----------------------------------------------------------------------------

/**
 * The processor ends up here if an unexpected interrupt occurs or a
 * specific handler is not present in the application code.
 * When in DEBUG, trigger a debug exception to clearly notify
 * the user of the exception and help identify the cause.
 */
void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
#if defined(DEBUG)
  os_arch_brk();
#endif
  while (1)
    {
      ;
    }
}

// ----------------------------------------------------------------------------
