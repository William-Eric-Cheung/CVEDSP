/*
 * LogicArray.h
 * Copyright (C) 2013 Sleepwalking
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name ``Sleepwalking'' nor the name of any other
 *    contributor may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 * 
 * CVEDSP IS PROVIDED BY Sleepwalking ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Sleepwalking OR ANY OTHER CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef LOGICARRAY_H
#define LOGICARRAY_H
#include <stdint.h>

#ifdef __cplusplus
extern "C"{
#endif

extern void Boost_LogicAnd(void* Dest, void* Src, int32_t Mask, int DWAmount);
extern void Boost_LogicAndNot(void* Dest, void* Src, int32_t Mask, int DWAmount);
extern void Boost_LogicOr(void* Dest, void* Src, int32_t Mask, int DWAmount);
extern void Boost_LogicXor(void* Dest, void* Src, int32_t Mask, int DWAmount);

extern void Boost_LogicAndArr(void* Dest, void* Data1, void* Data2, int DWAmount);
extern void Boost_LogicAndNotArr(void* Dest, void* Data1, void* Data2, int DWAmount);
extern void Boost_LogicOrArr(void* Dest, void* Data1, void* Data2, int DWAmount);
extern void Boost_LogicXorArr(void* Dest, void* Data1, void* Data2, int DWAmount);

#ifdef __cplusplus
}
#endif

#endif
