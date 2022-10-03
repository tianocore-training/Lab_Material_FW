/** @file
  TODO: Brief Description of Protocol MyProtocol
  
  TODO: Detailed Description of Protocol MyProtocol

  TODO: Copyright for Protocol MyProtocol
  
  TODO: License for Protocol MyProtocol
  
**/

#ifndef __MY_PROTOCOL_H__
#define __MY_PROTOCOL_H__

#define EFI_MY_PROTOCOL_PROTOCOL_GUID \
  {0xa951a2c0, 0xf239, 0x11ec, {0xa4, 0x1d, 0x44, 0x85, 0x00, 0x2a, 0x45, 0x85}}

///
/// Forward declaration
///  
typedef struct _EFI_MY_PROTOCOL_PROTOCOL EFI_MY_PROTOCOL_PROTOCOL;

///
/// Function prototypes
///
typedef
EFI_STATUS
(EFIAPI *EFI_MY_PROTOCOL_FUNCTION_NAME_1)(
  IN EFI_MY_PROTOCOL_PROTOCOL  *This
  //
  // Place additional function arguments here
  //
  );

typedef
EFI_STATUS
(EFIAPI *EFI_MY_PROTOCOL_FUNCTION_NAME_2)(
  IN EFI_MY_PROTOCOL_PROTOCOL  *This
  //
  // Place additional function arguments here
  //
  );

typedef
EFI_STATUS
(EFIAPI *EFI_MY_PROTOCOL_FUNCTION_NAME_N)(
  IN EFI_MY_PROTOCOL_PROTOCOL  *This
  //
  // Place additional function arguments here
  //
  );

///
/// Protocol structure
///
typedef struct _EFI_MY_PROTOCOL_PROTOCOL {
  EFI_MY_PROTOCOL_FUNCTION_NAME_1  Function1;
  EFI_MY_PROTOCOL_FUNCTION_NAME_2  Function2;
  // . . .
  EFI_MY_PROTOCOL_FUNCTION_NAME_N  FunctionN;
  //
  // Place protocol data fields here
  //
}

extern EFI_GUID gEfiMyProtocolProtocolGuid;

#endif
