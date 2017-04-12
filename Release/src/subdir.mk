################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Llist.cpp \
../src/RjExceptions.cpp \
../src/SinglyLinkedListDriver.cpp 

OBJS += \
./src/Llist.o \
./src/RjExceptions.o \
./src/SinglyLinkedListDriver.o 

CPP_DEPS += \
./src/Llist.d \
./src/RjExceptions.d \
./src/SinglyLinkedListDriver.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


