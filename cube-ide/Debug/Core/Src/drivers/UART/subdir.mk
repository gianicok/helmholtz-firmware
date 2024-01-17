################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/drivers/UART/UART.c 

OBJS += \
./Core/Src/drivers/UART/UART.o 

C_DEPS += \
./Core/Src/drivers/UART/UART.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/drivers/UART/%.o Core/Src/drivers/UART/%.su Core/Src/drivers/UART/%.cyclo: ../Core/Src/drivers/UART/%.c Core/Src/drivers/UART/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L452xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-drivers-2f-UART

clean-Core-2f-Src-2f-drivers-2f-UART:
	-$(RM) ./Core/Src/drivers/UART/UART.cyclo ./Core/Src/drivers/UART/UART.d ./Core/Src/drivers/UART/UART.o ./Core/Src/drivers/UART/UART.su

.PHONY: clean-Core-2f-Src-2f-drivers-2f-UART

