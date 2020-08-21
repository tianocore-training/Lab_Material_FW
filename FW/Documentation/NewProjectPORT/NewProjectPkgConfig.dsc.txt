#
# This file contains an 'Intel Peripheral Driver' and is
# licensed for Intel CPUs and chipsets under the terms of your
# license agreement with Intel or your vendor.  This file may
# be modified by the user, subject to additional terms of the
# license agreement
#
#/** @file
# platform configuration file.
#
# Copyright (c) 2012 - 2016, Intel Corporation. All rights reserved.<BR>
# This software and associated documentation (if any) is furnished
# under a license and may only be used or copied in accordance
# with the terms of the license. Except as permitted by such
# license, no part of this software or documentation may be
# reproduced, stored in a retrieval system, or transmitted in any
# form or by any means without the express written consent of
# Intel Corporation.
#
#**/

#
# TRUE is ENABLE. FASLE is DISABLE.
#

#
# FSP selection
#
DEFINE MINNOW2_FSP_BUILD = FALSE

#
# BIOS selection
#
DEFINE MINNOW2_PO = TRUE


DEFINE CRYPTO_BIN_ENABLE = FALSE


DEFINE SCSI_ENABLE = TRUE


#
# To enable extra configuration for clk gen
#
DEFINE CLKGEN_CONFIG_EXTRA_ENABLE=TRUE

#
# Feature selection
#

DEFINE DDR_DUAL_CHANNEL_ENABLE = TRUE       #Dual Channel; FALSE Single Channel
#
# Select system timer which is used to produce Timer Arch Protocol:
# TRUE  - HPET timer is used.
# FALSE - 8254 timer is used.
#
DEFINE USE_HPET_TIMER = FALSE


DEFINE SEC_ENABLE = TRUE
DEFINE SEC_DEBUG_INFO_ENABLE = TRUE

!if $(TARGET) == DEBUG
  DEFINE MRCDEBUG_ENABLE = TRUE
!else
  DEFINE MRCDEBUG_ENABLE = FALSE
!endif

#
# Feature selection
#

DEFINE TPM_ENABLED = FALSE

DEFINE FTPM_ENABLE = TRUE

DEFINE AT_ENABLE = FALSE
DEFINE FTPM_ERROR_WR = FALSE

DEFINE ACPI50_ENABLE = TRUE
DEFINE INTEL_FPDT_ENABLE = TRUE
DEFINE PERFORMANCE_ENABLE = FALSE 


DEFINE LFMA_ENABLE = FALSE              # Load module at fixed address feature
DEFINE DXE_COMPRESS_ENABLE = TRUE
DEFINE DXE_CRC32_SECTION_ENABLE = TRUE
DEFINE SSE2_ENABLE = FALSE

DEFINE RECOVERY_ENABLE = FALSE
DEFINE RECOVERY_CDROM_ENABLE = FALSE
DEFINE SECURE_BOOT_ENABLE = TRUE
DEFINE USER_IDENTIFICATION_ENABLE = FALSE
DEFINE VARIABLE_INFO_ENABLE = FALSE
DEFINE S3_ENABLE = TRUE
DEFINE CAPSULE_ENABLE = FALSE
DEFINE CAPSULE_RESET_ENABLE = TRUE

DEFINE GOP_DRIVER_ENABLE = TRUE
DEFINE DATAHUB_ENABLE = TRUE
DEFINE DATAHUB_STATUS_CODE_ENABLE = TRUE
DEFINE USB_ENABLE = TRUE
DEFINE AHCI_ENABLE = TRUE
DEFINE IGD_ENABLE = TRUE
DEFINE BEEP_STATUS_CODE_ENABLE = FALSE
DEFINE POSTCODE_STATUS_CODE_ENABLE = TRUE
DEFINE ISA_SERIAL_STATUS_CODE_ENABLE = TRUE
DEFINE USB_SERIAL_STATUS_CODE_ENABLE = FALSE
DEFINE RAM_SERIAL_STATUS_CODE_ENABLE = FALSE

DEFINE MPTABLE_ENABLE = TRUE

DEFINE SETUP_ENABLE = TRUE

DEFINE ENBDT_S3_SUPPORT = TRUE

DEFINE LZMA_ENABLE = TRUE
DEFINE S4_ENABLE = TRUE
DEFINE NETWORK_ENABLE = TRUE
DEFINE NETWORK_IP6_ENABLE = FALSE
DEFINE NETWORK_ISCSI_ENABLE = FALSE
DEFINE NETWORK_VLAN_ENABLE = FALSE

DEFINE SATA_ENABLE       = TRUE
DEFINE PCIESC_ENABLE     = TRUE

#
# Enable source level debug default
#
!if $(TARGET) == RELEASE
  DEFINE SOURCE_DEBUG_ENABLE     = FALSE
  DEFINE SOURCE_DEBUG_ENABLE_USE_USB3 = FALSE
!else
  DEFINE SOURCE_DEBUG_ENABLE     = TRUE
  DEFINE SOURCE_DEBUG_ENABLE_USE_USB3 = FALSE
!endif



