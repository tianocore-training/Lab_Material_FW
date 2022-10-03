/** @file
  TODO: Brief Description of UEFI Driver MyWizardDriver
  
  TODO: Detailed Description of UEFI Driver MyWizardDriver

  TODO: Copyright for UEFI Driver MyWizardDriver
  
  TODO: License for UEFI Driver MyWizardDriver

**/

#include "MyWizardDriver.h"

///
/// Serial I/O Protocol Mode instance
///
GLOBAL_REMOVE_IF_UNREFERENCED 
EFI_SERIAL_IO_MODE  gMyWizardDriverSerialIoMode = {
  0x00000000,      // ControlMask
  0,               // Timeout
  0,               // BaudRate
  0,               // ReceiveFifoDepth
  0,               // DataBits
  DefaultParity,   // Parity
  DefaultStopBits  // StopBits
};

///
/// Serial I/O Protocol instance
///
GLOBAL_REMOVE_IF_UNREFERENCED 
EFI_SERIAL_IO_PROTOCOL  gMyWizardDriverSerialIo = {
  EFI_SERIAL_IO_PROTOCOL_REVISION,
  MyWizardDriverSerialIoReset,
  MyWizardDriverSerialIoSetAttributes,
  MyWizardDriverSerialIoSetControl,
  MyWizardDriverSerialIoGetControl,
  MyWizardDriverSerialIoWrite,
  MyWizardDriverSerialIoRead,
  &gMyWizardDriverSerialIoMode
};

/**
  Reset the serial device.

  @param  This              Protocol instance pointer.
                            
  @retval EFI_SUCCESS       The device was reset.
  @retval EFI_DEVICE_ERROR  The serial device could not be reset.

**/
EFI_STATUS
EFIAPI
MyWizardDriverSerialIoReset (
  IN EFI_SERIAL_IO_PROTOCOL *This
  )
{
  return EFI_DEVICE_ERROR;
}

/**
  Sets the baud rate, receive FIFO depth, transmit/receice time out, parity, 
  data buts, and stop bits on a serial device.

  @param  This             Protocol instance pointer.
  @param  BaudRate         The requested baud rate. A BaudRate value of 0 will use the
                           device's default interface speed.
  @param  ReveiveFifoDepth The requested depth of the FIFO on the receive side of the
                           serial interface. A ReceiveFifoDepth value of 0 will use
                           the device's default FIFO depth.
  @param  Timeout          The requested time out for a single character in microseconds.
                           This timeout applies to both the transmit and receive side of the
                           interface. A Timeout value of 0 will use the device's default time
                           out value.
  @param  Parity           The type of parity to use on this serial device. A Parity value of
                           DefaultParity will use the device's default parity value.
  @param  DataBits         The number of data bits to use on the serial device. A DataBits
                           vaule of 0 will use the device's default data bit setting.
  @param  StopBits         The number of stop bits to use on this serial device. A StopBits
                           value of DefaultStopBits will use the device's default number of
                           stop bits.

  @retval EFI_SUCCESS      The device was reset.
  @retval EFI_DEVICE_ERROR The serial device could not be reset.

**/
EFI_STATUS
EFIAPI
MyWizardDriverSerialIoSetAttributes (
  IN EFI_SERIAL_IO_PROTOCOL         *This,
  IN UINT64                         BaudRate,
  IN UINT32                         ReceiveFifoDepth,
  IN UINT32                         Timeout,
  IN EFI_PARITY_TYPE                Parity,
  IN UINT8                          DataBits,
  IN EFI_STOP_BITS_TYPE             StopBits
  )
{
  return EFI_DEVICE_ERROR;
}

/**
  Set the control bits on a serial device

  @param  This             Protocol instance pointer.
  @param  Control          Set the bits of Control that are settable.

  @retval EFI_SUCCESS      The new control bits were set on the serial device.
  @retval EFI_UNSUPPORTED  The serial device does not support this operation.
  @retval EFI_DEVICE_ERROR The serial device is not functioning correctly.

**/
EFI_STATUS
EFIAPI
MyWizardDriverSerialIoSetControl (
  IN EFI_SERIAL_IO_PROTOCOL         *This,
  IN UINT32                         Control
  )
{
  return EFI_DEVICE_ERROR;
}

/**
  Retrieves the status of thecontrol bits on a serial device

  @param  This              Protocol instance pointer.
  @param  Control           A pointer to return the current Control signals from the serial device.
                            
  @retval EFI_SUCCESS       The control bits were read from the serial device.
  @retval EFI_DEVICE_ERROR  The serial device is not functioning correctly.

**/
EFI_STATUS
EFIAPI
MyWizardDriverSerialIoGetControl (
  IN EFI_SERIAL_IO_PROTOCOL         *This,
  OUT UINT32                        *Control
  )
{
  return EFI_DEVICE_ERROR;
}

/**
  Writes data to a serial device.

  @param  This              Protocol instance pointer.
  @param  BufferSize        On input, the size of the Buffer. On output, the amount of
                            data actually written.
  @param  Buffer            The buffer of data to write

  @retval EFI_SUCCESS       The data was written.
  @retval EFI_DEVICE_ERROR  The device reported an error.
  @retval EFI_TIMEOUT       The data write was stopped due to a timeout.

**/
EFI_STATUS
EFIAPI
MyWizardDriverSerialIoWrite (
  IN EFI_SERIAL_IO_PROTOCOL         *This,
  IN OUT UINTN                      *BufferSize,
  IN VOID                           *Buffer
  )
{  
  return EFI_DEVICE_ERROR;
}

/**
  Writes data to a serial device.

  @param  This              Protocol instance pointer.
  @param  BufferSize        On input, the size of the Buffer. On output, the amount of
                            data returned in Buffer.
  @param  Buffer            The buffer to return the data into.

  @retval EFI_SUCCESS       The data was read.
  @retval EFI_DEVICE_ERROR  The device reported an error.
  @retval EFI_TIMEOUT       The data write was stopped due to a timeout.

**/
EFI_STATUS
EFIAPI
MyWizardDriverSerialIoRead (
  IN EFI_SERIAL_IO_PROTOCOL         *This,
  IN OUT UINTN                      *BufferSize,
  OUT VOID                          *Buffer
  )
{
  return EFI_DEVICE_ERROR;
}
