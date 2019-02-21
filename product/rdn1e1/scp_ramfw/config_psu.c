/*
 * Arm SCP/MCP Software
 * Copyright (c) 2017-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <fwk_element.h>
#include <fwk_module.h>
#include <fwk_module_idx.h>
#include <mod_mock_psu.h>
#include <mod_psu.h>

static const struct fwk_element element_table[] = {
    {
        .name = "DVFS_GROUP0",
        .data = &(const struct mod_psu_element_cfg) {
            .driver_id = FWK_ID_ELEMENT_INIT(FWK_MODULE_IDX_MOCK_PSU, 0),
            .driver_api_id = FWK_ID_API_INIT(FWK_MODULE_IDX_MOCK_PSU,
                                             MOD_MOCK_PSU_API_IDX_PSU_DRIVER)
        },
    },
    {
        .name = "DVFS_GROUP1",
        .data = &(const struct mod_psu_element_cfg){
            .driver_id = FWK_ID_ELEMENT_INIT(FWK_MODULE_IDX_MOCK_PSU, 1),
            .driver_api_id = FWK_ID_API_INIT(FWK_MODULE_IDX_MOCK_PSU,
                                             MOD_MOCK_PSU_API_IDX_PSU_DRIVER)
        },
    },
    { 0 }
};

static const struct fwk_element *psu_get_element_table(fwk_id_t module_id)
{
    return element_table;
}

const struct fwk_module_config config_psu = {
    .get_element_table = psu_get_element_table,
};
