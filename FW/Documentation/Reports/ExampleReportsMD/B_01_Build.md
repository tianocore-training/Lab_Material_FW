# Build -h Command
```
Usage: build.exe [options] [all|fds|genc|genmake|clean|cleanall|cleanlib|modules|libraries|run]

Copyright (c) 2007 - 2018, Intel Corporation  All rights reserved.

Options:
  --version             show program's version number and exit
  -h, --help            show this help message and exit
  -a TARGETARCH, --arch=TARGETARCH
                        ARCHS is one of list: IA32, X64, ARM, AARCH64, RISCV64
                        or EBC, which overrides target.txt's TARGET_ARCH
                        definition. To specify more archs, please repeat this
                        option.
  -p PLATFORMFILE, --platform=PLATFORMFILE
                        Build the platform specified by the DSC file name
                        argument, overriding target.txt's ACTIVE_PLATFORM
                        definition.
  -m MODULEFILE, --module=MODULEFILE
                        Build the module specified by the INF file name
                        argument.
  -b BUILDTARGET, --buildtarget=BUILDTARGET
                        Using the TARGET to build the platform, overriding
                        target.txt's TARGET definition.
  -t TOOLCHAIN, --tagname=TOOLCHAIN
                        Using the Tool Chain Tagname to build the platform,
                        overriding target.txt's TOOL_CHAIN_TAG definition.
  -x SKUID, --sku-id=SKUID
                        Using this name of SKU ID to build the platform,
                        overriding SKUID_IDENTIFIER in DSC file.
  -n THREADNUMBER       Build the platform using multi-threaded compiler. The
                        value overrides target.txt's
                        MAX_CONCURRENT_THREAD_NUMBER. When value is set to 0,
                        tool automatically detect number of processor threads,
                        set value to 1 means disable multi-thread build, and
                        set value to more than 1 means user specify the
                        threads number to build.
  -f FDFFILE, --fdf=FDFFILE
                        The name of the FDF file to use, which overrides the
                        setting in the DSC file.
  -r ROMIMAGE, --rom-image=ROMIMAGE
                        The name of FD to be generated. The name must be from
                        [FD] section in FDF file.
  -i FVIMAGE, --fv-image=FVIMAGE
                        The name of FV to be generated. The name must be from
                        [FV] section in FDF file.
  -C CAPNAME, --capsule-image=CAPNAME
                        The name of Capsule to be generated. The name must be
                        from [Capsule] section in FDF file.
  -u, --skip-autogen    Skip AutoGen step.
  -e, --re-parse        Re-parse all meta-data files.
  -c, --case-insensitive
                        Don't check case of file name.
  -w, --warning-as-error
                        Treat warning in tools as error.
  -j LOGFILE, --log=LOGFILE
                        Put log in specified file as well as on console.
  -s, --silent          Make use of silent mode of (n)make.
  -q, --quiet           Disable all messages except FATAL ERRORS.
  -v, --verbose         Turn on verbose output with informational messages
                        printed, including library instances selected, final
                        dependency expression, and warning messages, etc.
  -d DEBUG, --debug=DEBUG
                        Enable debug messages at specified level.
  -D MACROS, --define=MACROS
                        Macro: "Name [= Value]".
  -y REPORTFILE, --report-file=REPORTFILE
                        Create/overwrite the report to the specified filename.
  -Y REPORTTYPE, --report-type=REPORTTYPE
                        Flags that control the type of build report to
                        generate.  Must be one of: [PCD, LIBRARY, FLASH,
                        DEPEX, BUILD_FLAGS, FIXED_ADDRESS, HASH,
                        EXECUTION_ORDER].  To specify more than one flag,
                        repeat this option on the command line and the default
                        flag set is [PCD, LIBRARY, FLASH, DEPEX, HASH,
                        BUILD_FLAGS, FIXED_ADDRESS]
  -F FLAG, --flag=FLAG  Specify the specific option to parse EDK UNI file.
                        Must be one of: [-c, -s]. -c is for EDK framework UNI
                        file, and -s is for EDK UEFI UNI file. This option can
                        also be specified by setting *_*_*_BUILD_FLAGS in
                        [BuildOptions] section of platform DSC. If they are
                        both specified, this value will override the setting
                        in [BuildOptions] section of platform DSC.
  -N, --no-cache        Disable build cache mechanism
  --conf=CONFDIRECTORY  Specify the customized Conf directory.
  --check-usage         Check usage content of entries listed in INF file.
  --ignore-sources      Focus to a binary build and ignore all source files
  --pcd=OPTIONPCD       Set PCD value by command line. Format: "PcdName=Value"
  -l COMMANDLENGTH, --cmd-len=COMMANDLENGTH
                        Specify the maximum line length of build command.
                        Default is 4096.
  --hash                Enable hash-based caching during build process.
  --binary-destination=BINCACHEDEST
                        Generate a cache of binary files in the specified
                        directory.
  --binary-source=BINCACHESOURCE
                        Consume a cache of binary files from the specified
                        directory.
  --genfds-multi-thread
                        Enable GenFds multi thread to generate ffs file.
  --no-genfds-multi-thread
                        Disable GenFds multi thread to generate ffs file.
  --disable-include-path-check
                        Disable the include path check for outside of package.


```