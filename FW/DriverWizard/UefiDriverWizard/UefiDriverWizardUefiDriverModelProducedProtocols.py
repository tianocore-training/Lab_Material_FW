## @file
# Subclass of UefiDriverModelProducedProtocols, which is generated by wxFormBuilder.
#
# Copyright (c) 2012, Intel Corporation. All rights reserved.<BR>
#
# This program and the accompanying materials are licensed and made available
# under the terms and conditions of the BSD License which accompanies this
# distribution. The full text of the license may be found at
# http://opensource.org/licenses/bsd-license.php
#
# THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
# WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
#
##

"""Subclass of UefiDriverModelProducedProtocols, which is generated by wxFormBuilder."""

##
# Import Modules
#
import Config
import wx
import os
import sys
import uuid
import string
import TemplateString
import UefiDriverWizard
import UefiDriverWizardNewPackage
import UefiDriverWizardNewUefiDriver
import UefiDriverWizardNewProtocol
import UefiDriverWizardNewGuid
import UefiDriverWizardNewLibraryClass
import UefiDriverWizardUefiDriverWizard
import UefiDriverWizardUefiDriverModelOptionalFeatures
import UefiDriverWizardUefiDriverModelConsumedProtocols
import UefiDriverWizardUefiDriverModelProducedProtocols

# Implementing UefiDriverModelProducedProtocols
class UefiDriverWizardUefiDriverModelProducedProtocols( UefiDriverWizard.UefiDriverModelProducedProtocols ):
  def __init__( self, parent ):
    UefiDriverWizard.UefiDriverModelProducedProtocols.__init__( self, parent )
    self.UefiDriverProducedProtocols.SetCheckedStrings(Config.UefiDriverProducedProtocols)
    self.UsbMajorVersion.SetValue (Config.UsbMajorVersion)
    self.UsbMinorVersion.SetValue (Config.UsbMinorVersion)
    if u"USB Host Controller producing the USB Host Controller 2 Protocol" in Config.UefiDriverProducedProtocols:
      self.UsbMajorVersion.Enable()
      self.UsbMinorVersion.Enable()
    else:
      self.UsbMajorVersion.Disable()
      self.UsbMinorVersion.Disable()

  # Handlers for UefiDriverModelProducedProtocols events.
  def UefiDriverProducedProtocolsOnCheckListBoxToggled( self, event ):
    Config.UefiDriverProducedProtocols = self.UefiDriverProducedProtocols.GetCheckedStrings()
    if u"USB Host Controller producing the USB Host Controller 2 Protocol" in Config.UefiDriverProducedProtocols:
      self.UsbMajorVersion.Enable()
      self.UsbMinorVersion.Enable()
    else:
      self.UsbMajorVersion.Disable()
      self.UsbMinorVersion.Disable()

  def UsbMajorVersionOnText( self, event ):
    Config.UsbMajorVersion = event.GetString()

  def UsbMinorVersionOnText( self, event ):
    Config.UsbMinorVersion = event.GetString()

  def PrevOnButtonClick( self, event ):
    self.Destroy()
    frame = UefiDriverWizardUefiDriverModelConsumedProtocols.UefiDriverWizardUefiDriverModelConsumedProtocols (None)
    frame.Show()

  def FinishOnButtonClick( self, event ):
    if Config.UefiDriverName == '':
      Config.UefiDriverName = os.path.split(Config.UefiDriverPath)[-1]
    Result, Message = Config.App.CreateUefiDriver()
    if not Result:
      dlg = wx.MessageDialog(
            self,
            Message,
            'ERROR',
            wx.OK | wx.ICON_ERROR
            )
      dlg.ShowModal()
      dlg.Destroy()
      return
    dlg = wx.MessageDialog(
          self,
          Message,
          'New UEFI Driver',
          wx.OK | wx.ICON_INFORMATION
          )
    dlg.ShowModal()
    dlg.Destroy()
    Config.UefiDriverName    = ''
    Config.UefiDriverVersion = ''
    Config.UefiDriverGuid    = ''
    self.Destroy()

  def CancelOnButtonClick( self, event ):
    Config.UefiDriverName    = ''
    Config.UefiDriverVersion = ''
    Config.UefiDriverGuid    = ''
    self.Destroy()