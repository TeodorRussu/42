################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ft_atoi.c \
../src/ft_bzero.c \
../src/ft_isalnum.c \
../src/ft_isalpha.c \
../src/ft_isascii.c \
../src/ft_isdigit.c \
../src/ft_isprint.c \
../src/ft_memccpy.c \
../src/ft_memchr.c \
../src/ft_memcmp.c \
../src/ft_memcpy.c \
../src/ft_memmove.c \
../src/ft_memset.c \
../src/ft_strcat.c \
../src/ft_strchr.c \
../src/ft_strcmp.c \
../src/ft_strcpy.c \
../src/ft_strdup.c \
../src/ft_strlcat.c \
../src/ft_strlen.c \
../src/ft_strncat.c \
../src/ft_strncmp.c \
../src/ft_strncpy.c \
../src/ft_strnstr.c \
../src/ft_strrchr.c \
../src/ft_strstr.c \
../src/ft_tolower.c \
../src/ft_toupper.c 

OBJS += \
./src/ft_atoi.o \
./src/ft_bzero.o \
./src/ft_isalnum.o \
./src/ft_isalpha.o \
./src/ft_isascii.o \
./src/ft_isdigit.o \
./src/ft_isprint.o \
./src/ft_memccpy.o \
./src/ft_memchr.o \
./src/ft_memcmp.o \
./src/ft_memcpy.o \
./src/ft_memmove.o \
./src/ft_memset.o \
./src/ft_strcat.o \
./src/ft_strchr.o \
./src/ft_strcmp.o \
./src/ft_strcpy.o \
./src/ft_strdup.o \
./src/ft_strlcat.o \
./src/ft_strlen.o \
./src/ft_strncat.o \
./src/ft_strncmp.o \
./src/ft_strncpy.o \
./src/ft_strnstr.o \
./src/ft_strrchr.o \
./src/ft_strstr.o \
./src/ft_tolower.o \
./src/ft_toupper.o 

C_DEPS += \
./src/ft_atoi.d \
./src/ft_bzero.d \
./src/ft_isalnum.d \
./src/ft_isalpha.d \
./src/ft_isascii.d \
./src/ft_isdigit.d \
./src/ft_isprint.d \
./src/ft_memccpy.d \
./src/ft_memchr.d \
./src/ft_memcmp.d \
./src/ft_memcpy.d \
./src/ft_memmove.d \
./src/ft_memset.d \
./src/ft_strcat.d \
./src/ft_strchr.d \
./src/ft_strcmp.d \
./src/ft_strcpy.d \
./src/ft_strdup.d \
./src/ft_strlcat.d \
./src/ft_strlen.d \
./src/ft_strncat.d \
./src/ft_strncmp.d \
./src/ft_strncpy.d \
./src/ft_strnstr.d \
./src/ft_strrchr.d \
./src/ft_strstr.d \
./src/ft_tolower.d \
./src/ft_toupper.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


