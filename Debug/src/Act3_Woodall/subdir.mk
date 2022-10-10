################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Act3_Woodall/woodall.cpp 

CPP_DEPS += \
./src/Act3_Woodall/woodall.d 

OBJS += \
./src/Act3_Woodall/woodall.o 


# Each subdirectory must supply rules for building sources it contributes
src/Act3_Woodall/%.o: ../src/Act3_Woodall/%.cpp src/Act3_Woodall/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-Act3_Woodall

clean-src-2f-Act3_Woodall:
	-$(RM) ./src/Act3_Woodall/woodall.d ./src/Act3_Woodall/woodall.o

.PHONY: clean-src-2f-Act3_Woodall

