/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <fwk_module.h>
#include <mod_n1sdp_flash.h>
#include <mod_n1sdp_rom.h>
#include <n1sdp_scp_system_mmap.h>

const struct fwk_module_config config_n1sdp_rom = {
    .data = &((struct n1sdp_rom_config) {
        .ramfw_base = SCP_RAM0_BASE,
        .image_type = MOD_N1SDP_FIP_TYPE_SCP_BL2,
    })
};
