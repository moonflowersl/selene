#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_DPC_INFORMATION.InitialTime", initial_time, 0x0, 0x40, true, 0x42c6a877b6ddd1b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DPC_INFORMATION.DpcRoutine", dpc_routine, 0x40, 0x40, true, 0xb3c0e18c63cf56f1)
#else
#define _m00
#define _m01
#endif