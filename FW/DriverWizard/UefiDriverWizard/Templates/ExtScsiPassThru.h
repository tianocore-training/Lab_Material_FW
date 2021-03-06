<<BEGIN>><<SKIP>>
/** @file
  UEFI Driver Wizard template file

Copyright (c) 2012, Intel Corporation. All rights reserved.<BR>

This program and the accompanying materials are licensed and made 
available under the terms and conditions of the BSD License which 
accompanies this distribution.  The full text of the license may 
be found at http://opensource.org/licenses/bsd-license.php.

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" 
BASIS, WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER 
EXPRESS OR IMPLIED.

**/
<<END>>
/** @file
  <<BriefDescription>>
  
  <<DetailedDescription>>

  <<Copyright>>
  
  <<License>>

**/

/**
  Sends a SCSI Request Packet to a SCSI device that is attached to the SCSI channel. This function   
  supports both blocking I/O and nonblocking I/O. The blocking I/O functionality is required, and the
  nonblocking I/O functionality is optional.                                                             

  @param  This    A pointer to the EFI_EXT_SCSI_PASS_THRU_PROTOCOL instance.
  @param  Target  The Target is an array of size TARGET_MAX_BYTES and it represents
                  the id of the SCSI device to send the SCSI Request Packet. Each
                  transport driver may choose to utilize a subset of this size to suit the needs
                  of transport target representation. For example, a Fibre Channel driver
                  may use only 8 bytes (WWN) to represent an FC target.
  @param  Lun     The LUN of the SCSI device to send the SCSI Request Packet.
  @param  Packet  A pointer to the SCSI Request Packet to send to the SCSI device
                  specified by Target and Lun.
  @param  Event   If nonblocking I/O is not supported then Event is ignored, and blocking
                  I/O is performed. If Event is NULL, then blocking I/O is performed. If
                  Event is not NULL and non blocking I/O is supported, then
                  nonblocking I/O is performed, and Event will be signaled when the
                  SCSI Request Packet completes.

  @retval EFI_SUCCESS           The SCSI Request Packet was sent by the host. For bi-directional
                                commands, InTransferLength bytes were transferred from
                                InDataBuffer. For write and bi-directional commands,
                                OutTransferLength bytes were transferred by
                                OutDataBuffer.
  @retval EFI_BAD_BUFFER_SIZE   The SCSI Request Packet was not executed. The number of bytes that
                                could be transferred is returned in InTransferLength. For write
                                and bi-directional commands, OutTransferLength bytes were
                                transferred by OutDataBuffer.
  @retval EFI_NOT_READY         The SCSI Request Packet could not be sent because there are too many
                                SCSI Request Packets already queued. The caller may retry again later.
  @retval EFI_DEVICE_ERROR      A device error occurred while attempting to send the SCSI Request
                                Packet.
  @retval EFI_INVALID_PARAMETER Target, Lun, or the contents of ScsiRequestPacket are invalid.
  @retval EFI_UNSUPPORTED       The command described by the SCSI Request Packet is not supported
                                by the host adapter. This includes the case of Bi-directional SCSI
                                commands not supported by the implementation. The SCSI Request
                                Packet was not sent, so no additional status information is available.
  @retval EFI_TIMEOUT           A timeout occurred while waiting for the SCSI Request Packet to execute.

**/
EFI_STATUS
EFIAPI
<<DriverName>>ExtScsiPassThruPassThru (
  IN EFI_EXT_SCSI_PASS_THRU_PROTOCOL                *This,
  IN UINT8                                          *Target,
  IN UINT64                                         Lun,
  IN OUT EFI_EXT_SCSI_PASS_THRU_SCSI_REQUEST_PACKET *Packet,
  IN EFI_EVENT                                      Event     OPTIONAL
  );  

/**
  Used to retrieve the list of legal Target IDs and LUNs for SCSI devices on a SCSI channel. These       
  can either be the list SCSI devices that are actually present on the SCSI channel, or the list of legal
  Target Ids and LUNs for the SCSI channel. Regardless, the caller of this function must probe the       
  Target ID and LUN returned to see if a SCSI device is actually present at that location on the SCSI    
  channel.                                                                                               

  @param  This   A pointer to the EFI_EXT_SCSI_PASS_THRU_PROTOCOL instance.
  @param  Target On input, a pointer to the Target ID (an array of size
                 TARGET_MAX_BYTES) of a SCSI device present on the SCSI channel.
                 On output, a pointer to the Target ID (an array of
                 TARGET_MAX_BYTES) of the next SCSI device present on a SCSI
                 channel. An input value of 0xF(all bytes in the array are 0xF) in the
                 Target array retrieves the Target ID of the first SCSI device present on a
                 SCSI channel.
  @param  Lun    On input, a pointer to the LUN of a SCSI device present on the SCSI
                 channel. On output, a pointer to the LUN of the next SCSI device present
                 on a SCSI channel.

  @retval EFI_SUCCESS           The Target ID and LUN of the next SCSI device on the SCSI
                                channel was returned in Target and Lun.
  @retval EFI_INVALID_PARAMETER Target array is not all 0xF, and Target and Lun were
                                not returned on a previous call to GetNextTargetLun().
  @retval EFI_NOT_FOUND         There are no more SCSI devices on this SCSI channel.

**/
EFI_STATUS
EFIAPI
<<DriverName>>ExtScsiPassThruGetNextTargetLun (
  IN EFI_EXT_SCSI_PASS_THRU_PROTOCOL                *This,
  IN OUT UINT8                                      **Target,
  IN OUT UINT64                                     *Lun
  );

/**
  Used to allocate and build a device path node for a SCSI device on a SCSI channel.

  @param  This       A pointer to the EFI_EXT_SCSI_PASS_THRU_PROTOCOL instance.
  @param  Target     The Target is an array of size TARGET_MAX_BYTES and it specifies the
                     Target ID of the SCSI device for which a device path node is to be
                     allocated and built. Transport drivers may chose to utilize a subset of
                     this size to suit the representation of targets. For example, a Fibre
                     Channel driver may use only 8 bytes (WWN) in the array to represent a
                     FC target.
  @param  Lun        The LUN of the SCSI device for which a device path node is to be
                     allocated and built.
  @param  DevicePath A pointer to a single device path node that describes the SCSI device
                     specified by Target and Lun. This function is responsible for
                     allocating the buffer DevicePath with the boot service
                     AllocatePool(). It is the caller's responsibility to free
                     DevicePath when the caller is finished with DevicePath.

  @retval EFI_SUCCESS           The device path node that describes the SCSI device specified by
                                Target and Lun was allocated and returned in
                                DevicePath.
  @retval EFI_INVALID_PARAMETER DevicePath is NULL.
  @retval EFI_NOT_FOUND         The SCSI devices specified by Target and Lun does not exist
                                on the SCSI channel.
  @retval EFI_OUT_OF_RESOURCES  There are not enough resources to allocate DevicePath.

**/
EFI_STATUS
EFIAPI
<<DriverName>>ExtScsiPassThruBuildDevicePath (
  IN EFI_EXT_SCSI_PASS_THRU_PROTOCOL               *This,
  IN UINT8                                         *Target,
  IN UINT64                                        Lun,
  IN OUT EFI_DEVICE_PATH_PROTOCOL                  **DevicePath
  );

/**
  Used to translate a device path node to a Target ID and LUN.

  @param  This       A pointer to the EFI_EXT_SCSI_PASS_THRU_PROTOCOL instance.
  @param  DevicePath A pointer to a single device path node that describes the SCSI device
                     on the SCSI channel.
  @param  Target     A pointer to the Target Array which represents the ID of a SCSI device
                     on the SCSI channel.
  @param  Lun        A pointer to the LUN of a SCSI device on the SCSI channel.

  @retval EFI_SUCCESS           DevicePath was successfully translated to a Target ID and
                                LUN, and they were returned in Target and Lun.
  @retval EFI_INVALID_PARAMETER DevicePath or Target or Lun is NULL.
  @retval EFI_NOT_FOUND         A valid translation from DevicePath to a Target ID and LUN
                                does not exist.
  @retval EFI_UNSUPPORTED       This driver does not support the device path node type in
                                 DevicePath.

**/
EFI_STATUS
EFIAPI
<<DriverName>>ExtScsiPassThruGetTargetLun (
  IN EFI_EXT_SCSI_PASS_THRU_PROTOCOL               *This,
  IN EFI_DEVICE_PATH_PROTOCOL                      *DevicePath,
  OUT UINT8                                        **Target,
  OUT UINT64                                       *Lun
  );

/**
  Resets a SCSI channel. This operation resets all the SCSI devices connected to the SCSI channel.

  @param  This A pointer to the EFI_EXT_SCSI_PASS_THRU_PROTOCOL instance.

  @retval EFI_SUCCESS      The SCSI channel was reset.
  @retval EFI_DEVICE_ERROR A device error occurred while attempting to reset the SCSI channel.
  @retval EFI_TIMEOUT      A timeout occurred while attempting to reset the SCSI channel.
  @retval EFI_UNSUPPORTED  The SCSI channel does not support a channel reset operation.

**/
EFI_STATUS
EFIAPI
<<DriverName>>ExtScsiPassThruResetChannel (
  IN EFI_EXT_SCSI_PASS_THRU_PROTOCOL               *This
  );
  
/**
  Resets a SCSI logical unit that is connected to a SCSI channel.

  @param  This   A pointer to the EFI_EXT_SCSI_PASS_THRU_PROTOCOL instance.
  @param  Target The Target is an array of size TARGET_MAX_BYTE and it represents the
                 target port ID of the SCSI device containing the SCSI logical unit to
                 reset. Transport drivers may chose to utilize a subset of this array to suit
                 the representation of their targets.
  @param  Lun    The LUN of the SCSI device to reset.

  @retval EFI_SUCCESS           The SCSI device specified by Target and Lun was reset.
  @retval EFI_INVALID_PARAMETER Target or Lun is NULL.
  @retval EFI_TIMEOUT           A timeout occurred while attempting to reset the SCSI device
                                specified by Target and Lun.
  @retval EFI_UNSUPPORTED       The SCSI channel does not support a target reset operation.
  @retval EFI_DEVICE_ERROR      A device error occurred while attempting to reset the SCSI device
                                 specified by Target and Lun.

**/
EFI_STATUS
EFIAPI
<<DriverName>>ExtScsiPassThruResetTargetLun (
  IN EFI_EXT_SCSI_PASS_THRU_PROTOCOL               *This,
  IN UINT8                                         *Target,
  IN UINT64                                        Lun
  );

/**
  Used to retrieve the list of legal Target IDs for SCSI devices on a SCSI channel. These can either     
  be the list SCSI devices that are actually present on the SCSI channel, or the list of legal Target IDs
  for the SCSI channel. Regardless, the caller of this function must probe the Target ID returned to     
  see if a SCSI device is actually present at that location on the SCSI channel.                         

  @param  This   A pointer to the EFI_EXT_SCSI_PASS_THRU_PROTOCOL instance.
  @param  Target (TARGET_MAX_BYTES) of a SCSI device present on the SCSI channel.
                 On output, a pointer to the Target ID (an array of
                 TARGET_MAX_BYTES) of the next SCSI device present on a SCSI
                 channel. An input value of 0xF(all bytes in the array are 0xF) in the
                 Target array retrieves the Target ID of the first SCSI device present on a
                 SCSI channel.

  @retval EFI_SUCCESS           The Target ID of the next SCSI device on the SCSI
                                channel was returned in Target.
  @retval EFI_INVALID_PARAMETER Target or Lun is NULL.
  @retval EFI_TIMEOUT           Target array is not all 0xF, and Target was not
                                returned on a previous call to GetNextTarget().
  @retval EFI_NOT_FOUND         There are no more SCSI devices on this SCSI channel.

**/
EFI_STATUS
EFIAPI
<<DriverName>>ExtScsiPassThruGetNextTarget (
  IN EFI_EXT_SCSI_PASS_THRU_PROTOCOL               *This,
  IN OUT UINT8                                     **Target
  );  
