#include <cstdint>

#include "models/hello_world_int8_model_data.h"

const unsigned int g_hello_world_int8_model_data_size = 2704;
alignas(16) const unsigned char g_hello_world_int8_model_data[] = {0x28,0x0,0x0,0x0,0x54,0x46,0x4c,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x14,0x0,0x20,0x0,0x4,0x0,0x8,0x0,0xc,0x0,0x10,0x0,0x14,0x0,0x0,0x0,0x18,0x0,0x1c,0x0,0x14,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3c,0xa,0x0,0x0,0xf0,0x3,0x0,0x0,0xd8,0x3,0x0,0x0,0xe0,0x0,0x0,0x0,0x80,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0xa,0x0,0x10,0x0,0x4,0x0,0x8,0x0,0xc,0x0,0xa,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xf,0x0,0x0,0x0,0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,0x64,0x65,0x66,0x61,0x75,0x6c,0x74,0x0,0x1,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x98,0xff,0xff,0xff,0x8,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x7,0x0,0x0,0x0,0x64,0x65,0x6e,0x73,0x65,0x5f,0x32,0x0,0x1,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xba,0xfc,0xff,0xff,0x4,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0x64,0x65,0x6e,0x73,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x0,0x2,0x0,0x0,0x0,0x34,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xdc,0xff,0xff,0xff,0x8,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x13,0x0,0x0,0x0,0x43,0x4f,0x4e,0x56,0x45,0x52,0x53,0x49,0x4f,0x4e,0x5f,0x4d,0x45,0x54,0x41,0x44,0x41,0x54,0x41,0x0,0x8,0x0,0xc,0x0,0x4,0x0,0x8,0x0,0x8,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0x13,0x0,0x0,0x0,0x6d,0x69,0x6e,0x5f,0x72,0x75,0x6e,0x74,0x69,0x6d,0x65,0x5f,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x0,0xd,0x0,0x0,0x0,0xec,0x2,0x0,0x0,0xe4,0x2,0x0,0x0,0xcc,0x2,0x0,0x0,0x98,0x2,0x0,0x0,0x44,0x2,0x0,0x0,0x30,0x1,0x0,0x0,0xdc,0x0,0x0,0x0,0xb8,0x0,0x0,0x0,0xb0,0x0,0x0,0x0,0xa8,0x0,0x0,0x0,0xa0,0x0,0x0,0x0,0x78,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x66,0xfd,0xff,0xff,0x4,0x0,0x0,0x0,0x58,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x8,0x0,0xe,0x0,0x8,0x0,0x4,0x0,0x8,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x28,0x0,0x0,0x0,0x0,0x0,0x6,0x0,0x8,0x0,0x4,0x0,0x6,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xeb,0x3,0x0,0x0,0x0,0x0,0xa,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x4,0x0,0xa,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x32,0x2e,0x31,0x31,0x2e,0x30,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xd6,0xfd,0xff,0xff,0x4,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x31,0x2e,0x31,0x34,0x2e,0x30,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x64,0xfd,0xff,0xff,0x68,0xfd,0xff,0xff,0x6c,0xfd,0xff,0xff,0x6,0xfe,0xff,0xff,0x4,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xf7,0xca,0x39,0x47,0x68,0x73,0x62,0x63,0x40,0xe6,0x7f,0x19,0xae,0x44,0x5f,0x56,0x0,0x0,0x0,0x0,0x26,0xfe,0xff,0xff,0x4,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc2,0xea,0xff,0xff,0x75,0xea,0xff,0xff,0xb8,0xfa,0xff,0xff,0x24,0xfa,0xff,0xff,0xc8,0xef,0xff,0xff,0xac,0xff,0xff,0xff,0x44,0xd,0x0,0x0,0x0,0x0,0x0,0x0,0xbd,0x7,0x0,0x0,0x33,0xea,0xff,0xff,0x0,0x0,0x0,0x0,0xcc,0xe4,0xff,0xff,0x4f,0xd,0x0,0x0,0xcf,0xe3,0xff,0xff,0x0,0x0,0x0,0x0,0x76,0xfe,0xff,0xff,0x4,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0xf4,0x1a,0xed,0x9,0x19,0x21,0xf4,0x24,0xe0,0x21,0xef,0xbc,0xf7,0xf5,0xfa,0x19,0x3,0xdc,0xd2,0x2,0x6,0xf9,0xf4,0x2,0xff,0xfa,0xef,0xf1,0xef,0xd3,0x27,0xe1,0xfb,0x27,0xdd,0xeb,0xdb,0xe4,0x5,0x1a,0x17,0xfc,0x24,0x12,0x15,0xef,0x1e,0xe4,0x10,0xfe,0x14,0xda,0x1c,0xf8,0xf3,0xf1,0xef,0xe2,0xf3,0x9,0xe3,0xe9,0xed,0xe3,0xe4,0x15,0x7,0xb,0x4,0x1b,0x1a,0xfe,0xeb,0x1,0xde,0x21,0xe6,0xb,0xec,0x3,0x23,0xa,0x22,0x24,0x1e,0x27,0x3,0xe6,0x3,0x24,0xff,0xc0,0x11,0xf8,0xfc,0xf1,0x11,0xc,0xf5,0xe0,0xf3,0x7,0x17,0xe5,0xe8,0xed,0xfa,0xdc,0xe8,0x23,0xfb,0x7,0xdd,0xfb,0xfd,0x0,0x14,0x26,0x11,0x17,0xe7,0xf1,0x11,0xea,0x2,0x26,0x4,0x4,0x25,0x21,0x1d,0xa,0xdb,0x1d,0xdc,0x20,0x1,0xfa,0xe3,0x37,0xb,0xf1,0x1a,0x16,0xef,0x1c,0xe7,0x3,0xe0,0x16,0x2,0x3,0x21,0x18,0x9,0x2e,0xd9,0xe5,0x14,0xb,0xea,0x1a,0xfc,0xd8,0x13,0x0,0xc4,0xd8,0xec,0xd9,0xfe,0xd,0x19,0x20,0xd8,0xd6,0xe2,0x1f,0xe9,0xd7,0xca,0xe2,0xdd,0xc6,0x13,0xe7,0x4,0x3e,0x0,0x1,0x14,0xc7,0xdb,0xe7,0x15,0x15,0xf5,0x6,0xd6,0x1a,0xdc,0x9,0x22,0xfe,0x8,0x2,0x13,0xef,0x19,0x1e,0xe2,0x9,0xfd,0xf3,0x14,0xdd,0xda,0x20,0xd9,0xf,0xe3,0xf9,0xf7,0xee,0xe9,0x24,0xe6,0x29,0x0,0x7,0x16,0xe2,0x1e,0xd,0x23,0xd3,0xdd,0xf7,0x14,0xfa,0x8,0x22,0x26,0x21,0x9,0x8,0xf,0xb,0xe0,0x12,0xf4,0x7f,0xdc,0x58,0xe5,0x26,0x0,0x0,0x0,0x0,0x86,0xff,0xff,0xff,0x4,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x27,0xfd,0xff,0xff,0xa2,0x7,0x0,0x0,0x62,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0xf1,0x0,0x0,0x0,0x29,0xfe,0xff,0xff,0xdd,0xff,0xff,0xff,0x9d,0xfc,0xff,0xff,0x3b,0x2,0x0,0x0,0x45,0x2,0x0,0x0,0xa4,0x10,0x0,0x0,0x67,0xf,0x0,0x0,0x4f,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x87,0xfc,0xff,0xff,0x11,0xec,0xff,0xff,0x0,0x0,0x0,0x0,0xd6,0xff,0xff,0xff,0x4,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xd9,0x3b,0x27,0x15,0x1c,0xe0,0xde,0xdd,0xf,0x1b,0xc5,0xd7,0x12,0xdd,0xf9,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0x0,0x8,0x0,0x4,0x0,0x6,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xad,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x84,0xff,0xff,0xff,0x88,0xff,0xff,0xff,0xf,0x0,0x0,0x0,0x4d,0x4c,0x49,0x52,0x20,0x43,0x6f,0x6e,0x76,0x65,0x72,0x74,0x65,0x64,0x2e,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x18,0x0,0x4,0x0,0x8,0x0,0xc,0x0,0x10,0x0,0x14,0x0,0xe,0x0,0x0,0x0,0x4,0x1,0x0,0x0,0xf8,0x0,0x0,0x0,0xec,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x6d,0x61,0x69,0x6e,0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x94,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xca,0xff,0xff,0xff,0x0,0x0,0x0,0x8,0x1c,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x4,0x0,0x4,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x0,0x0,0x8,0x0,0xc,0x0,0x7,0x0,0x10,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x1c,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xba,0xff,0xff,0xff,0x0,0x0,0x0,0x1,0x1,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x7,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x16,0x0,0x0,0x0,0x8,0x0,0xc,0x0,0x7,0x0,0x10,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x24,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x6,0x0,0x8,0x0,0x7,0x0,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x0,0x0,0x0,0x7,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xa,0x0,0x0,0x0,0x9c,0x4,0x0,0x0,0xc,0x4,0x0,0x0,0x88,0x3,0x0,0x0,0x14,0x3,0x0,0x0,0xa8,0x2,0x0,0x0,0x34,0x2,0x0,0x0,0xd0,0x1,0x0,0x0,0x2c,0x1,0x0,0x0,0x80,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xa2,0xfb,0xff,0xff,0x0,0x0,0x9,0x1,0x64,0x0,0x0,0x0,0xa,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x8c,0xfb,0xff,0xff,0x18,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xcb,0xd6,0x7,0x3c,0x19,0x0,0x0,0x0,0x53,0x74,0x61,0x74,0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,0x30,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1a,0xfc,0xff,0xff,0x0,0x0,0x9,0x1,0x94,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x38,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x10,0x0,0x0,0x0,0x4,0xfc,0xff,0xff,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x5d,0x4f,0x51,0x3c,0x4c,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,0x52,0x65,0x6c,0x75,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xc2,0xfc,0xff,0xff,0x0,0x0,0x9,0x1,0x8c,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x38,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x10,0x0,0x0,0x0,0xac,0xfc,0xff,0xff,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x9f,0x51,0x5a,0x3c,0x46,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x52,0x65,0x6c,0x75,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xee,0xfd,0xff,0xff,0x0,0x0,0x9,0x1,0x4c,0x0,0x0,0x0,0x7,0x0,0x0,0x0,0x28,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x3c,0xfd,0xff,0xff,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xaa,0x59,0x84,0x3b,0x17,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x0,0x2,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4e,0xfe,0xff,0xff,0x0,0x0,0x2,0x1,0x60,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x2c,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x9c,0xfd,0xff,0xff,0x18,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x55,0x5b,0xcf,0x38,0x27,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,0x64,0x56,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xbe,0xfe,0xff,0xff,0x0,0x0,0x9,0x1,0x54,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x2c,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xc,0xfe,0xff,0xff,0x18,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x7f,0x7f,0x32,0x3c,0x19,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x26,0xff,0xff,0xff,0x0,0x0,0x2,0x1,0x60,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x28,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x74,0xfe,0xff,0xff,0x14,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x7b,0x39,0x18,0x39,0x29,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,0x64,0x56,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x96,0xff,0xff,0xff,0x0,0x0,0x9,0x1,0x54,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x2c,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xe4,0xfe,0xff,0xff,0x18,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x17,0x44,0x7c,0x3c,0x19,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x32,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x18,0x0,0x8,0x0,0x6,0x0,0xc,0x0,0x10,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x0,0x16,0x0,0x0,0x0,0x0,0x0,0x2,0x1,0x64,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2c,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x64,0xff,0xff,0xff,0x18,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xcb,0x41,0x4e,0x39,0x29,0x0,0x0,0x0,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x32,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,0x64,0x56,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x1c,0x0,0x8,0x0,0x6,0x0,0xc,0x0,0x10,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0x18,0x0,0x7,0x0,0x16,0x0,0x0,0x0,0x0,0x0,0x9,0x1,0x74,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x48,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0xc,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x8,0x0,0xc,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x86,0x8a,0xc8,0x3c,0x1d,0x0,0x0,0x0,0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,0x64,0x65,0x66,0x61,0x75,0x6c,0x74,0x5f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x3a,0x30,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xc,0x0,0x10,0x0,0x7,0x0,0x0,0x0,0x8,0x0,0xc,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x9,0x4,0x0,0x0,0x0,0x9,0x0,0x0,0x0};
