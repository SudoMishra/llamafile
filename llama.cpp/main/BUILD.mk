#-*-mode:makefile-gmake;indent-tabs-mode:t;tab-width:8;coding:utf-8-*-┐
#───vi: set et ft=make ts=8 tw=8 fenc=utf-8 :vi───────────────────────┘

PKGS += LLAMA_CPP_MAIN

LLAMA_CPP_MAIN_FILES := $(wildcard llama.cpp/main/*)
LLAMA_CPP_MAIN_HDRS = $(filter %.h,$(LLAMA_CPP_MAIN_FILES))
LLAMA_CPP_MAIN_SRCS = $(filter %.cc,$(LLAMA_CPP_MAIN_FILES))
LLAMA_CPP_MAIN_OBJS = $(LLAMA_CPP_MAIN_SRCS:%.cc=o/$(MODE)/%.o)

.PHONY: o/$(MODE)/llama.cpp/main
o/$(MODE)/llama.cpp/main:				\
		o/$(MODE)/llama.cpp/main/main

o/$(MODE)/llama.cpp/main/main:				\
		o/$(MODE)/llama.cpp/main/main.o		\
		o/$(MODE)/llama.cpp/llama.cpp.a
