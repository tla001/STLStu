################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/STLtest.cpp \
../src/st_algorithm.cpp \
../src/st_deque.cpp \
../src/st_list.cpp \
../src/st_map.cpp \
../src/st_set.cpp \
../src/st_vector.cpp 

OBJS += \
./src/STLtest.o \
./src/st_algorithm.o \
./src/st_deque.o \
./src/st_list.o \
./src/st_map.o \
./src/st_set.o \
./src/st_vector.o 

CPP_DEPS += \
./src/STLtest.d \
./src/st_algorithm.d \
./src/st_deque.d \
./src/st_list.d \
./src/st_map.d \
./src/st_set.d \
./src/st_vector.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/tla001/workspace/STLtest/inc" -I"/home/tla001/workspace/STLtest/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


