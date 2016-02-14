/*
 * Copyright (c) 2016 Joshua Scoggins
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 * 
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 * 
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgement in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

// arch.h - detects the given target you are currently on

#ifndef __ARCH_H__
#define __ARCH_H__

#if defined(__i386__) || defined(i386) || defined(__i386) || defined(_M_IX86) || \
	defined(_X86_) || defined(_i386) || defined(__X86__)
#define ARCH_X86_32
#elif defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64) || \
	  defined(__amd64__) || defined(__amd64) || defined(__x86_64)
#define ARCH_X86_64
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || \
	  defined(_M_IA64) || defined(__itanium__)
#define ARCH_ITANIUM
#elif defined(__ppc__) || defined(__powerpc) || defined(__powerpc__) || \
	  defined(__POWERPC__) || defined(_M_PPC) || defined(_ARCH_PPC)
#define ARCH_POWERPC_32
#elif defined(__ppc64__)
#define ARCH_POWERPC_64
#elif defined(__arm__)
#define ARCH_ARM32
#elif defined(__aarch64__)
#define ARCH_ARM64
#elif defined(__alpha__)
#define ARCH_ALPHA
#elif defined(__sparc__)
#define ARCH_SPARC
#elif defined(__hppa) || defined(_hppa)
#define ARCH_HPPA
#elif defined(__m68k__) || defined(M68000)
#define ARCH_M68K
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__)
#define ARCH_MIPS
#elif defined(__sh__)
#define ARCH_SH
#elif defined(__s390x__)
#define ARCH_S390X
#else
#warning "Unknown architecture specified!"
#define ARCH_UNKNOWN
#endif

#endif // end __ARCH_H__
