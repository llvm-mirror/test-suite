/*
 *                 Copyright (C) 2017, UChicago Argonne, LLC
 *                            All Rights Reserved
 *
 *           Hardware/Hybrid Cosmology Code (HACC), Version 1.0
 *
 * Salman Habib, Adrian Pope, Hal Finkel, Nicholas Frontiere, Katrin Heitmann,
 *      Vitali Morozov, Jeffrey Emberson, Thomas Uram, Esteban Rangel
 *                        (Argonne National Laboratory)
 *
 *  David Daniel, Patricia Fasel, Chung-Hsing Hsu, Zarija Lukic, James Ahrens
 *                      (Los Alamos National Laboratory)
 *
 *                               George Zagaris
 *                                 (Kitware)
 *
 *                            OPEN SOURCE LICENSE
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer. Software changes,
 *      modifications, or derivative works, should be noted with comments and
 *      the author and organization’s name.
 *
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *   3. Neither the names of UChicago Argonne, LLC or the Department of Energy
 *      nor the names of its contributors may be used to endorse or promote
 *      products derived from this software without specific prior written
 *      permission.
 *
 *   4. The software and the end-user documentation included with the
 *      redistribution, if any, must include the following acknowledgment:
 *
 *     "This product includes software produced by UChicago Argonne, LLC under
 *      Contract No. DE-AC02-06CH11357 with the Department of Energy."
 *
 * *****************************************************************************
 *                                DISCLAIMER
 * THE SOFTWARE IS SUPPLIED "AS IS" WITHOUT WARRANTY OF ANY KIND. NEITHER THE
 * UNITED STATES GOVERNMENT, NOR THE UNITED STATES DEPARTMENT OF ENERGY, NOR 
 * UCHICAGO ARGONNE, LLC, NOR ANY OF THEIR EMPLOYEES, MAKES ANY WARRANTY, 
 * EXPRESS OR IMPLIED, OR ASSUMES ANY LEGAL LIABILITY OR RESPONSIBILITY FOR THE
 * ACCURARY, COMPLETENESS, OR USEFULNESS OF ANY INFORMATION, DATA, APPARATUS,
 * PRODUCT, OR PROCESS DISCLOSED, OR REPRESENTS THAT ITS USE WOULD NOT INFRINGE
 * PRIVATELY OWNED RIGHTS.
 *
 * *****************************************************************************
 */

#ifndef RESTRICT
#if defined(__GNUC__) || defined(__clang__)
#define RESTRICT __restrict__
#elif defined(_MSC_VER)
#define RESTRICT __restrict
#else
#define RESTRICT /* empty */
#endif
#endif

typedef void
  (*GravityForceKernelFunc)(int n, float *RESTRICT x, float *RESTRICT y,
                            float *RESTRICT z, float *RESTRICT mass,
                            float x0, float y0, float z0,
                            float MaxSepSqrd, float SofteningLenSqrd,
                            float &RESTRICT ax, float &RESTRICT ay,
                            float &RESTRICT az);

void GravityForceKernel4(int n, float *RESTRICT x, float *RESTRICT y,
                         float *RESTRICT z, float *RESTRICT mass,
                         float x0, float y0, float z0,
                         float MaxSepSqrd, float SofteningLenSqrd,
                         float &RESTRICT ax, float &RESTRICT ay,
                         float &RESTRICT az);

void GravityForceKernel5(int n, float *RESTRICT x, float *RESTRICT y,
                         float *RESTRICT z, float *RESTRICT mass,
                         float x0, float y0, float z0,
                         float MaxSepSqrd, float SofteningLenSqrd,
                         float &RESTRICT ax, float &RESTRICT ay,
                         float &RESTRICT az);

void GravityForceKernel6(int n, float *RESTRICT x, float *RESTRICT y,
                         float *RESTRICT z, float *RESTRICT mass,
                         float x0, float y0, float z0,
                         float MaxSepSqrd, float SofteningLenSqrd,
                         float &RESTRICT ax, float &RESTRICT ay,
                         float &RESTRICT az);

