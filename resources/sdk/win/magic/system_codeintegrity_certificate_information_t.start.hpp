#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_CODEINTEGRITY_CERTIFICATE_INFORMATION.ImageFile", image_file, 0x0, 0x40, true, 0x2514902f3f63ff66)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CODEINTEGRITY_CERTIFICATE_INFORMATION.Type", type, 0x40, 0x20, true, 0xd18c91259fbd754c)
#else
#define _m00
#define _m01
#endif