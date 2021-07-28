/*   SCE CONFIDENTIAL                                       */
/*   PlayStation(R)3 Programmer Tool Runtime Library 310.001 */
/*   Copyright (C) 2008 Sony Computer Entertainment Inc.    */
/*   All Rights Reserved.                                   */

#ifndef __CELL_GCM_MACROS_H__
#define __CELL_GCM_MACROS_H__

#ifdef CELL_GCM_LITTLE_ENDIAN
# define CELL_GCM_ENDIAN_SWAP(value) \
	( (((value) >> 24) & 0xFF)\
	| (((value) >> 8) & 0xFF00) \
	| (((value) << 8) & 0xFF0000) \
	| (((value) << 24) & 0xFF000000) )
#else
# define CELL_GCM_ENDIAN_SWAP(value) (value)
#endif

#ifdef CELL_GCM_CAST_UINT32
# define CELL_GCM_COMMAND_CAST(value) (uint32_t)(value)
#else
# define CELL_GCM_COMMAND_CAST(value) (value)
#endif

#define CELL_GCM_C    					(0)
#define CELL_GCM_CPP_IMPLICIT			(1)
#define CELL_GCM_CPP_EXPLICIT_METHOD	(2)
#define CELL_GCM_CPP_EXPLICIT_NAMESPACE	(3)
#define CELL_GCM_CPP_EXPLICIT_PRIVATE	(4)

//
// GPU Class Handles
//

#define CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER		(0xFEED0000)
#define CELL_GCM_CONTEXT_DMA_MEMORY_HOST_BUFFER			(0xFEED0001)
#define CELL_GCM_CONTEXT_SURFACE2D						(0x313371C3)
#define CELL_GCM_CONTEXT_SWIZZLE2D						(0x31337A73)
#define CELL_GCM_CONTEXT_DMA_TO_MEMORY_GET_REPORT		(0x66626660)
#define CELL_GCM_CONTEXT_DMA_REPORT_LOCATION_MAIN		(0xbad68000)
#define CELL_GCM_CONTEXT_DMA_SEMAPHORE_LOCATION_MAIN	(0x13378086)
#define CELL_GCM_CONTEXT_DMA_SEMAPHORE_LOCATION_LOCAL	(0x66606660)
#define CELL_GCM_CONTEXT_DMA_NOTIFY_MAIN_0				(0x6660420F)

//
// GPU Method Flags
//

#define CELL_GCM_METHOD_FLAG_NON_INCREMENT  (0x40000000)
#define CELL_GCM_METHOD_FLAG_JUMP           (0x20000000)
#define CELL_GCM_METHOD_FLAG_CALL           (0x00000002)
#define CELL_GCM_METHOD_FLAG_RETURN         (0x00020000)

//
// GPU Method Addresses
//

// NV40_CHANNEL_DMA (NV406E)
#define CELL_GCM_NV406E_SET_REFERENCE				(0x00000050)
#define CELL_GCM_NV406E_SET_CONTEXT_DMA_SEMAPHORE	(0x00000060)
#define CELL_GCM_NV406E_SEMAPHORE_OFFSET			(0x00000064)
#define CELL_GCM_NV406E_SEMAPHORE_ACQUIRE			(0x00000068)
#define CELL_GCM_NV406E_SEMAPHORE_RELEASE			(0x0000006c)

// NV40_CURIE_PRIMITIVE	(NV4097)

#define CELL_GCM_NV4097_SET_OBJECT		(0x00000000)
#define	CELL_GCM_NV4097_NO_OPERATION	(0x00000100)
#define	CELL_GCM_NV4097_NOTIFY	(0x00000104)
#define	CELL_GCM_NV4097_WAIT_FOR_IDLE	(0x00000110)
#define	CELL_GCM_NV4097_PM_TRIGGER	(0x00000140)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_NOTIFIES	(0x00000180)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_A	(0x00000184)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_B	(0x00000188)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_B	(0x0000018c)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_STATE	(0x00000190)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_A	(0x00000194)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_ZETA	(0x00000198)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_VERTEX_A	(0x0000019c)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_VERTEX_B	(0x000001a0)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_SEMAPHORE	(0x000001a4)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_REPORT	(0x000001a8)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_CLIP_ID	(0x000001ac)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_CULL_DATA	(0x000001b0)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_C	(0x000001b4)
#define	CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_D	(0x000001b8)
#define	CELL_GCM_NV4097_SET_SURFACE_CLIP_HORIZONTAL	(0x00000200)
#define	CELL_GCM_NV4097_SET_SURFACE_CLIP_VERTICAL	(0x00000204)
#define	CELL_GCM_NV4097_SET_SURFACE_FORMAT	(0x00000208)
#define	CELL_GCM_NV4097_SET_SURFACE_PITCH_A	(0x0000020c)
#define	CELL_GCM_NV4097_SET_SURFACE_COLOR_AOFFSET	(0x00000210)
#define	CELL_GCM_NV4097_SET_SURFACE_ZETA_OFFSET	(0x00000214)
#define	CELL_GCM_NV4097_SET_SURFACE_COLOR_BOFFSET	(0x00000218)
#define	CELL_GCM_NV4097_SET_SURFACE_PITCH_B	(0x0000021c)
#define	CELL_GCM_NV4097_SET_SURFACE_COLOR_TARGET	(0x00000220)
#define	CELL_GCM_NV4097_SET_SURFACE_PITCH_Z	(0x0000022c)
#define	CELL_GCM_NV4097_INVALIDATE_ZCULL	(0x00000234)
#define	CELL_GCM_NV4097_SET_CYLINDRICAL_WRAP	(0x00000238)
#define	CELL_GCM_NV4097_SET_CYLINDRICAL_WRAP1	(0x0000023c)
#define	CELL_GCM_NV4097_SET_SURFACE_PITCH_C	(0x00000280)
#define	CELL_GCM_NV4097_SET_SURFACE_PITCH_D	(0x00000284)
#define	CELL_GCM_NV4097_SET_SURFACE_COLOR_COFFSET	(0x00000288)
#define	CELL_GCM_NV4097_SET_SURFACE_COLOR_DOFFSET	(0x0000028c)
#define	CELL_GCM_NV4097_SET_WINDOW_OFFSET	(0x000002b8)
#define	CELL_GCM_NV4097_SET_WINDOW_CLIP_TYPE	(0x000002bc)
#define	CELL_GCM_NV4097_SET_WINDOW_CLIP_HORIZONTAL	(0x000002c0)
#define	CELL_GCM_NV4097_SET_WINDOW_CLIP_VERTICAL	(0x000002c4)
#define	CELL_GCM_NV4097_SET_DITHER_ENABLE	(0x00000300)
#define	CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE	(0x00000304)
#define	CELL_GCM_NV4097_SET_ALPHA_FUNC	(0x00000308)
#define	CELL_GCM_NV4097_SET_ALPHA_REF	(0x0000030c)
#define	CELL_GCM_NV4097_SET_BLEND_ENABLE	(0x00000310)
#define	CELL_GCM_NV4097_SET_BLEND_FUNC_SFACTOR	(0x00000314)
#define	CELL_GCM_NV4097_SET_BLEND_FUNC_DFACTOR	(0x00000318)
#define	CELL_GCM_NV4097_SET_BLEND_COLOR	(0x0000031c)
#define	CELL_GCM_NV4097_SET_BLEND_EQUATION	(0x00000320)
#define	CELL_GCM_NV4097_SET_COLOR_MASK	(0x00000324)
#define	CELL_GCM_NV4097_SET_STENCIL_TEST_ENABLE	(0x00000328)
#define	CELL_GCM_NV4097_SET_STENCIL_MASK	(0x0000032c)
#define	CELL_GCM_NV4097_SET_STENCIL_FUNC	(0x00000330)
#define	CELL_GCM_NV4097_SET_STENCIL_FUNC_REF	(0x00000334)
#define	CELL_GCM_NV4097_SET_STENCIL_FUNC_MASK	(0x00000338)
#define	CELL_GCM_NV4097_SET_STENCIL_OP_FAIL	(0x0000033c)
#define	CELL_GCM_NV4097_SET_STENCIL_OP_ZFAIL	(0x00000340)
#define	CELL_GCM_NV4097_SET_STENCIL_OP_ZPASS	(0x00000344)
#define	CELL_GCM_NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE	(0x00000348)
#define	CELL_GCM_NV4097_SET_BACK_STENCIL_MASK	(0x0000034c)
#define	CELL_GCM_NV4097_SET_BACK_STENCIL_FUNC	(0x00000350)
#define	CELL_GCM_NV4097_SET_BACK_STENCIL_FUNC_REF	(0x00000354)
#define	CELL_GCM_NV4097_SET_BACK_STENCIL_FUNC_MASK	(0x00000358)
#define	CELL_GCM_NV4097_SET_BACK_STENCIL_OP_FAIL	(0x0000035c)
#define	CELL_GCM_NV4097_SET_BACK_STENCIL_OP_ZFAIL	(0x00000360)
#define	CELL_GCM_NV4097_SET_BACK_STENCIL_OP_ZPASS	(0x00000364)
#define	CELL_GCM_NV4097_SET_SHADE_MODE	(0x00000368)
#define	CELL_GCM_NV4097_SET_BLEND_ENABLE_MRT	(0x0000036c)
#define	CELL_GCM_NV4097_SET_COLOR_MASK_MRT	(0x00000370)
#define	CELL_GCM_NV4097_SET_LOGIC_OP_ENABLE	(0x00000374)
#define	CELL_GCM_NV4097_SET_LOGIC_OP	(0x00000378)
#define	CELL_GCM_NV4097_SET_BLEND_COLOR2	(0x0000037c)
#define	CELL_GCM_NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE	(0x00000380)
#define	CELL_GCM_NV4097_SET_DEPTH_BOUNDS_MIN	(0x00000384)
#define	CELL_GCM_NV4097_SET_DEPTH_BOUNDS_MAX	(0x00000388)
#define	CELL_GCM_NV4097_SET_CLIP_MIN	(0x00000394)
#define	CELL_GCM_NV4097_SET_CLIP_MAX	(0x00000398)
#define	CELL_GCM_NV4097_SET_CONTROL0	(0x000003b0)
#define	CELL_GCM_NV4097_SET_LINE_WIDTH	(0x000003b8)
#define	CELL_GCM_NV4097_SET_LINE_SMOOTH_ENABLE	(0x000003bc)
#define CELL_GCM_NV4097_SET_ANISO_SPREAD       	(0x000003c0)
#define	CELL_GCM_NV4097_SET_SCISSOR_HORIZONTAL	(0x000008c0)
#define	CELL_GCM_NV4097_SET_SCISSOR_VERTICAL	(0x000008c4)
#define	CELL_GCM_NV4097_SET_FOG_MODE	(0x000008cc)
#define	CELL_GCM_NV4097_SET_FOG_PARAMS	(0x000008d0)
#define	CELL_GCM_NV4097_SET_SHADER_PROGRAM	(0x000008e4)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_OFFSET	(0x00000900)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_FORMAT	(0x00000904)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_ADDRESS	(0x00000908)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_CONTROL0	(0x0000090c)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_CONTROL3	(0x00000910)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_FILTER	(0x00000914)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT	(0x00000918)
#define	CELL_GCM_NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR	(0x0000091c)
#define	CELL_GCM_NV4097_SET_VIEWPORT_HORIZONTAL	(0x00000a00)
#define	CELL_GCM_NV4097_SET_VIEWPORT_VERTICAL	(0x00000a04)
#define	CELL_GCM_NV4097_SET_POINT_CENTER_MODE	(0x00000a0c)
#define	CELL_GCM_NV4097_ZCULL_SYNC	(0x00000a1c)
#define	CELL_GCM_NV4097_SET_VIEWPORT_OFFSET	(0x00000a20)
#define	CELL_GCM_NV4097_SET_VIEWPORT_SCALE	(0x00000a30)
#define	CELL_GCM_NV4097_SET_POLY_OFFSET_POINT_ENABLE	(0x00000a60)
#define	CELL_GCM_NV4097_SET_POLY_OFFSET_LINE_ENABLE	(0x00000a64)
#define	CELL_GCM_NV4097_SET_POLY_OFFSET_FILL_ENABLE	(0x00000a68)
#define	CELL_GCM_NV4097_SET_DEPTH_FUNC	(0x00000a6c)
#define	CELL_GCM_NV4097_SET_DEPTH_MASK	(0x00000a70)
#define	CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE	(0x00000a74)
#define	CELL_GCM_NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR	(0x00000a78)
#define	CELL_GCM_NV4097_SET_POLYGON_OFFSET_BIAS	(0x00000a7c)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA_SCALED4S_M	(0x00000a80)
#define	CELL_GCM_NV4097_SET_TEXTURE_CONTROL2	(0x00000b00)
#define	CELL_GCM_NV4097_SET_TEX_COORD_CONTROL	(0x00000b40)
#define	CELL_GCM_NV4097_SET_TRANSFORM_PROGRAM	(0x00000b80)
#define	CELL_GCM_NV4097_SET_SPECULAR_ENABLE	(0x00001428)
#define	CELL_GCM_NV4097_SET_TWO_SIDE_LIGHT_EN	(0x0000142c)
#define	CELL_GCM_NV4097_CLEAR_ZCULL_SURFACE	(0x00001438)
#define	CELL_GCM_NV4097_SET_PERFORMANCE_PARAMS	(0x00001450)
#define	CELL_GCM_NV4097_SET_FLAT_SHADE_OP	(0x00001454)
#define	CELL_GCM_NV4097_SET_EDGE_FLAG	(0x0000145c)
#define	CELL_GCM_NV4097_SET_USER_CLIP_PLANE_CONTROL	(0x00001478)
#define	CELL_GCM_NV4097_SET_POLYGON_STIPPLE	(0x0000147c)
#define	CELL_GCM_NV4097_SET_POLYGON_STIPPLE_PATTERN	(0x00001480)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA3F_M	(0x00001500)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET	(0x00001680)
#define	CELL_GCM_NV4097_INVALIDATE_VERTEX_CACHE_FILE	(0x00001710)
#define	CELL_GCM_NV4097_INVALIDATE_VERTEX_FILE	(0x00001714)
#define	CELL_GCM_NV4097_PIPE_NOP	(0x00001718)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA_BASE_OFFSET	(0x00001738)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA_BASE_INDEX	(0x0000173c)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT	(0x00001740)
#define	CELL_GCM_NV4097_CLEAR_REPORT_VALUE	(0x000017c8)
#define	CELL_GCM_NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE	(0x000017cc)
#define	CELL_GCM_NV4097_GET_REPORT	(0x00001800)
#define	CELL_GCM_NV4097_SET_ZCULL_STATS_ENABLE	(0x00001804)
#define	CELL_GCM_NV4097_SET_BEGIN_END	(0x00001808)
#define	CELL_GCM_NV4097_ARRAY_ELEMENT16	(0x0000180c)
#define	CELL_GCM_NV4097_ARRAY_ELEMENT32	(0x00001810)
#define	CELL_GCM_NV4097_DRAW_ARRAYS	(0x00001814)
#define	CELL_GCM_NV4097_INLINE_ARRAY	(0x00001818)
#define	CELL_GCM_NV4097_SET_INDEX_ARRAY_ADDRESS	(0x0000181c)
#define	CELL_GCM_NV4097_SET_INDEX_ARRAY_DMA	(0x00001820)
#define	CELL_GCM_NV4097_DRAW_INDEX_ARRAY	(0x00001824)
#define	CELL_GCM_NV4097_SET_FRONT_POLYGON_MODE	(0x00001828)
#define	CELL_GCM_NV4097_SET_BACK_POLYGON_MODE	(0x0000182c)
#define	CELL_GCM_NV4097_SET_CULL_FACE	(0x00001830)
#define	CELL_GCM_NV4097_SET_FRONT_FACE	(0x00001834)
#define	CELL_GCM_NV4097_SET_POLY_SMOOTH_ENABLE	(0x00001838)
#define	CELL_GCM_NV4097_SET_CULL_FACE_ENABLE	(0x0000183c)
#define	CELL_GCM_NV4097_SET_TEXTURE_CONTROL3	(0x00001840)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA2F_M	(0x00001880)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA2S_M	(0x00001900)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA4UB_M	(0x00001940)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA4S_M	(0x00001980)
#define	CELL_GCM_NV4097_SET_TEXTURE_OFFSET	(0x00001a00)
#define	CELL_GCM_NV4097_SET_TEXTURE_FORMAT	(0x00001a04)
#define	CELL_GCM_NV4097_SET_TEXTURE_ADDRESS	(0x00001a08)
#define	CELL_GCM_NV4097_SET_TEXTURE_CONTROL0	(0x00001a0c)
#define	CELL_GCM_NV4097_SET_TEXTURE_CONTROL1	(0x00001a10)
#define	CELL_GCM_NV4097_SET_TEXTURE_FILTER	(0x00001a14)
#define	CELL_GCM_NV4097_SET_TEXTURE_IMAGE_RECT	(0x00001a18)
#define	CELL_GCM_NV4097_SET_TEXTURE_BORDER_COLOR	(0x00001a1c)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA4F_M	(0x00001c00)
#define	CELL_GCM_NV4097_SET_COLOR_KEY_COLOR	(0x00001d00)
#define	CELL_GCM_NV4097_SET_SHADER_CONTROL	(0x00001d60)
#define	CELL_GCM_NV4097_SET_INDEXED_CONSTANT_READ_LIMITS	(0x00001d64)
#define	CELL_GCM_NV4097_SET_SEMAPHORE_OFFSET	(0x00001d6c)
#define	CELL_GCM_NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE	(0x00001d70)
#define	CELL_GCM_NV4097_TEXTURE_READ_SEMAPHORE_RELEASE	(0x00001d74)
#define	CELL_GCM_NV4097_SET_ZMIN_MAX_CONTROL	(0x00001d78)
#define	CELL_GCM_NV4097_SET_ANTI_ALIASING_CONTROL	(0x00001d7c)
#define	CELL_GCM_NV4097_SET_SURFACE_COMPRESSION	(0x00001d80)
#define	CELL_GCM_NV4097_SET_ZCULL_EN	(0x00001d84)
#define	CELL_GCM_NV4097_SET_SHADER_WINDOW	(0x00001d88)
#define	CELL_GCM_NV4097_SET_ZSTENCIL_CLEAR_VALUE	(0x00001d8c)
#define	CELL_GCM_NV4097_SET_COLOR_CLEAR_VALUE	(0x00001d90)
#define	CELL_GCM_NV4097_CLEAR_SURFACE	(0x00001d94)
#define	CELL_GCM_NV4097_SET_CLEAR_RECT_HORIZONTAL	(0x00001d98)
#define	CELL_GCM_NV4097_SET_CLEAR_RECT_VERTICAL	(0x00001d9c)
#define	CELL_GCM_NV4097_SET_CLIP_ID_TEST_ENABLE	(0x00001da4)
#define	CELL_GCM_NV4097_SET_RESTART_INDEX_ENABLE	(0x00001dac)
#define	CELL_GCM_NV4097_SET_RESTART_INDEX	(0x00001db0)
#define	CELL_GCM_NV4097_SET_LINE_STIPPLE	(0x00001db4)
#define	CELL_GCM_NV4097_SET_LINE_STIPPLE_PATTERN	(0x00001db8)
#define	CELL_GCM_NV4097_SET_VERTEX_DATA1F_M	(0x00001e40)
#define	CELL_GCM_NV4097_SET_TRANSFORM_EXECUTION_MODE	(0x00001e94)
#define	CELL_GCM_NV4097_SET_RENDER_ENABLE	(0x00001e98)
#define	CELL_GCM_NV4097_SET_TRANSFORM_PROGRAM_LOAD	(0x00001e9c)
#define	CELL_GCM_NV4097_SET_TRANSFORM_PROGRAM_START	(0x00001ea0)
#define	CELL_GCM_NV4097_SET_ZCULL_CONTROL0	(0x00001ea4)
#define	CELL_GCM_NV4097_SET_ZCULL_CONTROL1	(0x00001ea8)
#define	CELL_GCM_NV4097_SET_SCULL_CONTROL	(0x00001eac)
#define	CELL_GCM_NV4097_SET_POINT_SIZE	(0x00001ee0)
#define	CELL_GCM_NV4097_SET_POINT_PARAMS_ENABLE	(0x00001ee4)
#define	CELL_GCM_NV4097_SET_POINT_SPRITE_CONTROL	(0x00001ee8)
#define	CELL_GCM_NV4097_SET_TRANSFORM_TIMEOUT	(0x00001ef8)
#define	CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD	(0x00001efc)
#define	CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT	(0x00001f00)
#define	CELL_GCM_NV4097_SET_FREQUENCY_DIVIDER_OPERATION	(0x00001fc0)
#define	CELL_GCM_NV4097_SET_ATTRIB_COLOR	(0x00001fc4)
#define	CELL_GCM_NV4097_SET_ATTRIB_TEX_COORD	(0x00001fc8)
#define	CELL_GCM_NV4097_SET_ATTRIB_TEX_COORD_EX	(0x00001fcc)
#define	CELL_GCM_NV4097_SET_ATTRIB_UCLIP0	(0x00001fd0)
#define	CELL_GCM_NV4097_SET_ATTRIB_UCLIP1	(0x00001fd4)
#define	CELL_GCM_NV4097_INVALIDATE_L2	(0x00001fd8)
#define	CELL_GCM_NV4097_SET_REDUCE_DST_COLOR	(0x00001fe0)
#define	CELL_GCM_NV4097_SET_SHADER_PACKER	(0x00001fec)
#define	CELL_GCM_NV4097_SET_VERTEX_ATTRIB_INPUT_MASK	(0x00001ff0)
#define	CELL_GCM_NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK	(0x00001ff4)
#define	CELL_GCM_NV4097_SET_TRANSFORM_BRANCH_BITS	(0x00001ff8)

// NV03_MEMORY_TO_MEMORY_FORMAT	(NV0039)
#define CELL_GCM_NV0039_SET_OBJECT					(0x00002000)
#define CELL_GCM_NV0039_SET_CONTEXT_DMA_NOTIFIES	(0x00002180)
#define CELL_GCM_NV0039_SET_CONTEXT_DMA_BUFFER_IN	(0x00002184)
#define CELL_GCM_NV0039_SET_CONTEXT_DMA_BUFFER_OUT	(0x00002188)
#define CELL_GCM_NV0039_OFFSET_IN					(0x0000230C)
#define CELL_GCM_NV0039_OFFSET_OUT					(0x00002310)
#define CELL_GCM_NV0039_PITCH_IN					(0x00002314)
#define CELL_GCM_NV0039_PITCH_OUT					(0x00002318)
#define CELL_GCM_NV0039_LINE_LENGTH_IN				(0x0000231C)
#define CELL_GCM_NV0039_LINE_COUNT					(0x00002320)
#define CELL_GCM_NV0039_FORMAT						(0x00002324)
#define CELL_GCM_NV0039_BUFFER_NOTIFY				(0x00002328)

// NV30_CONTEXT_SURFACES_2D	(NV3062)
#define CELL_GCM_NV3062_SET_OBJECT						(0x00006000)
#define CELL_GCM_NV3062_SET_CONTEXT_DMA_NOTIFIES		(0x00006180)
#define CELL_GCM_NV3062_SET_CONTEXT_DMA_IMAGE_SOURCE	(0x00006184)
#define CELL_GCM_NV3062_SET_CONTEXT_DMA_IMAGE_DESTIN	(0x00006188)
#define CELL_GCM_NV3062_SET_COLOR_FORMAT				(0x00006300)
#define CELL_GCM_NV3062_SET_PITCH						(0x00006304)
#define CELL_GCM_NV3062_SET_OFFSET_SOURCE				(0x00006308)
#define CELL_GCM_NV3062_SET_OFFSET_DESTIN				(0x0000630C)

// NV30_CONTEXT_SURFACE_SWIZZLED (NV309E)
#define CELL_GCM_NV309E_SET_OBJECT					(0x00008000)
#define CELL_GCM_NV309E_SET_CONTEXT_DMA_NOTIFIES	(0x00008180)
#define CELL_GCM_NV309E_SET_CONTEXT_DMA_IMAGE		(0x00008184)
#define CELL_GCM_NV309E_SET_FORMAT					(0x00008300)
#define CELL_GCM_NV309E_SET_OFFSET					(0x00008304)

// NV30_IMAGE_FROM_CPU (NV308A)
#define CELL_GCM_NV308A_SET_OBJECT					(0x0000A000)
#define CELL_GCM_NV308A_SET_CONTEXT_DMA_NOTIFIES	(0x0000A180)
#define CELL_GCM_NV308A_SET_CONTEXT_COLOR_KEY		(0x0000A184)
#define CELL_GCM_NV308A_SET_CONTEXT_CLIP_RECTANGLE	(0x0000A188)
#define CELL_GCM_NV308A_SET_CONTEXT_PATTERN			(0x0000A18C)
#define CELL_GCM_NV308A_SET_CONTEXT_ROP				(0x0000A190)
#define CELL_GCM_NV308A_SET_CONTEXT_BETA1			(0x0000A194)
#define CELL_GCM_NV308A_SET_CONTEXT_BETA4			(0x0000A198)
#define CELL_GCM_NV308A_SET_CONTEXT_SURFACE			(0x0000A19C)
#define CELL_GCM_NV308A_SET_COLOR_CONVERSION		(0x0000A2F8)
#define CELL_GCM_NV308A_SET_OPERATION				(0x0000A2FC)
#define CELL_GCM_NV308A_SET_COLOR_FORMAT			(0x0000A300)
#define CELL_GCM_NV308A_POINT						(0x0000A304)
#define CELL_GCM_NV308A_SIZE_OUT					(0x0000A308)
#define CELL_GCM_NV308A_SIZE_IN						(0x0000A30C)
#define CELL_GCM_NV308A_COLOR						(0x0000A400)

// NV30_SCALED_IMAGE_FROM_MEMORY (NV3089)
#define CELL_GCM_NV3089_SET_OBJECT					(0x0000C000)
#define CELL_GCM_NV3089_SET_CONTEXT_DMA_NOTIFIES	(0x0000C180)
#define CELL_GCM_NV3089_SET_CONTEXT_DMA_IMAGE		(0x0000C184)
#define CELL_GCM_NV3089_SET_CONTEXT_PATTERN			(0x0000C188)
#define CELL_GCM_NV3089_SET_CONTEXT_ROP				(0x0000C18C)
#define CELL_GCM_NV3089_SET_CONTEXT_BETA1			(0x0000C190)
#define CELL_GCM_NV3089_SET_CONTEXT_BETA4			(0x0000C194)
#define CELL_GCM_NV3089_SET_CONTEXT_SURFACE			(0x0000C198)
#define CELL_GCM_NV3089_SET_COLOR_CONVERSION		(0x0000C2FC)
#define CELL_GCM_NV3089_SET_COLOR_FORMAT			(0x0000C300)
#define CELL_GCM_NV3089_SET_OPERATION				(0x0000C304)
#define CELL_GCM_NV3089_CLIP_POINT					(0x0000C308)
#define CELL_GCM_NV3089_CLIP_SIZE					(0x0000C30C)
#define CELL_GCM_NV3089_IMAGE_OUT_POINT				(0x0000C310)
#define CELL_GCM_NV3089_IMAGE_OUT_SIZE				(0x0000C314)
#define CELL_GCM_NV3089_DS_DX						(0x0000C318)
#define CELL_GCM_NV3089_DT_DY						(0x0000C31C)
#define CELL_GCM_NV3089_IMAGE_IN_SIZE				(0x0000C400)
#define CELL_GCM_NV3089_IMAGE_IN_FORMAT				(0x0000C404)
#define CELL_GCM_NV3089_IMAGE_IN_OFFSET				(0x0000C408)
#define CELL_GCM_NV3089_IMAGE_IN					(0x0000C40C)

// SCE DRIVER
#define CELL_GCM_DRIVER_INTERRUPT		(0x0000EB00)
#define CELL_GCM_DRIVER_QUEUE			(0x0000E944)
#define CELL_GCM_DRIVER_FLIP			(0x0000E924)


#define CELL_GCM_VTXPRG_MAX_CONST           (468)
#define CELL_GCM_VTXPRG_MAX_INST            (512)
#define CELL_GCM_GET_REPORT_PERF_COUNT      (2048)
#define CELL_GCM_MAX_USER_QUERIES           (2048)
#define CELL_GCM_MAX_DRIVER_QUERIES         (2048)
#define CELL_GCM_MAX_RT_DIMENSION           (4096)
#define CELL_GCM_MAX_USER_SEMAPHORES        (256)
#define CELL_GCM_MAX_SHADER_TEXCOORD_COUNT  (10)
#define CELL_GCM_MAX_TEXIMAGE_COUNT         (16)
#define CELL_GCM_MAX_LOD_COUNT              (13)
#define CELL_GCM_MAX_TEX_DIMENSION          (4096)
#define CELL_GCM_MAX_VERTEX_TEXTURE			(4)
#define CELL_GCM_MAX_TILE_INDEX				(15)
#define CELL_GCM_MAX_ZCULL_INDEX			(8)

#define CELL_GCM_COUNT_SHIFT (18)
#define CELL_GCM_MAX_METHOD_COUNT (2047)

#define CELL_GCM_IO_PAGE_SIZE (0x100000)
#define CELL_GCM_INIT_STATE_OFFSET	(0x1000)
#define CELL_GCM_REPORT_IO_ADDRESS_BASE		(0x0e000000)
#define CELL_GCM_REPORT_IO_ADDRESS_SIZE		(0x01000000)	// 1024*1024*16B
#define CELL_GCM_NOTIFY_IO_ADDRESS_BASE		(0x0f100000)
#define CELL_GCM_NOTIFY_IO_ADDRESS_SIZE		(0x00000200)	// 8*64B
#define CELL_GCM_REPORT_MAIN_MAX_COUNT		(0x100000)
#define CELL_GCM_NOTIFY_MAIN_MAX_COUNT		(8)
#define CELL_GCM_REPORT_MAIN_ALIGN_SIZE		(16)			// 16B
#define CELL_GCM_NOTIFY_MAIN_ALIGN_SIZE		(64)			// 64B

#define CELL_GCM_METHOD(method, count) \
	CELL_GCM_ENDIAN_SWAP(((count) << CELL_GCM_COUNT_SHIFT) | (method))

#define CELL_GCM_METHOD_NI(method, count) \
	CELL_GCM_ENDIAN_SWAP(((count) << CELL_GCM_COUNT_SHIFT) | (method) | CELL_GCM_METHOD_FLAG_NON_INCREMENT)

#define CELL_GCM_JUMP(offset) \
	CELL_GCM_ENDIAN_SWAP((offset) | CELL_GCM_METHOD_FLAG_JUMP)

#define CELL_GCM_CALL(offset) \
	CELL_GCM_ENDIAN_SWAP((offset) | CELL_GCM_METHOD_FLAG_CALL)

#define CELL_GCM_RETURN() \
	CELL_GCM_ENDIAN_SWAP(CELL_GCM_METHOD_FLAG_RETURN)

#define CELL_GCM_UNUSED(value) do { \
	uint32_t cellGcmUnused = (uint32_t)(value); \
	(void)cellGcmUnused; \
	} while(false)

#define CELL_GCM_REMAP_MODE(order, inputA, inputR, inputG, inputB, outputA, outputR, outputG, outputB) \
	(((order)<<16)|((inputA))|((inputR)<<2)|((inputG)<<4)|((inputB)<<6)|((outputA)<<8)|((outputR)<<10)|((outputG)<<12)|((outputB)<<14))


#ifdef CELL_GCM_DEBUG
# define CELL_GCM_ASSERT_VAL(x) #x
# define CELL_GCM_ASSERT_STRIZE(x) CELL_GCM_ASSERT_VAL(x)

# define CELL_GCM_DEBUG_CHECK(cmd)         \
	if(cellGcmIsDebugCheckEnabled()) {           \
	  cellGcmDebugCheck(cmd);         \
	}

# define CELL_GCM_DEBUG_FINISH(con)       \
	if(gCellGcmDebugCallback) {           \
	  gCellGcmDebugCallback(con);         \
	}

# if __SPU__
#  define CELL_GCM_ASSERT(condition) 
#  define CELL_GCM_ASSERTS(condition, description) 
# else
#  define CELL_GCM_ASSERT(cond) do { if (!(cond)) { printf("Assertation failed: '(%s) == false' at "__FILE__ ":" CELL_GCM_ASSERT_STRIZE(__LINE__) "\n", #cond); assert(false); }} while (false)
#  define CELL_GCM_ASSERTS(cond, desc) do { if (!(cond)) { printf("Assertation failed: '(%s) == false' at "__FILE__ ":" CELL_GCM_ASSERT_STRIZE(__LINE__) " with %s\n", #cond, desc); assert(false); }} while (false)
#  define CELL_GCM_ASSERT_ENABLE
# endif
#else
# define CELL_GCM_ASSERT(condition) 
# define CELL_GCM_ASSERTS(condition, description) 
# define CELL_GCM_DEBUG_CHECK(cmd)
# define CELL_GCM_DEBUG_FINISH(con)
#endif

#endif /* __CELL_GCM_MACROS_H__ */