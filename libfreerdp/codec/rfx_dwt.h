/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * RemoteFX Codec Library - DWT
 *
 * Copyright 2011 Vic Lee
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_LIB_CODEC_RFX_DWT_H
#define FREERDP_LIB_CODEC_RFX_DWT_H

#include <freerdp/codec/rfx.h>
#include <freerdp/api.h>

FREERDP_LOCAL void rfx_dwt_2d_decode(INT16* buffer, INT16* dwt_buffer);
FREERDP_LOCAL void rfx_dwt_2d_encode(INT16* buffer, INT16* dwt_buffer);
FREERDP_LOCAL void rfx_dwt_2d_extrapolate_decode(INT16* buffer, INT16* dwt_buffer);

#endif /* FREERDP_LIB_CODEC_RFX_DWT_H */
