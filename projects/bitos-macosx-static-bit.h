/*
    bit.h -- Build It Configuration Header for macosx-x64-static

    This header is created by Bit during configuration. To change settings, re-run
    configure or define variables in your Makefile to override these default values.
 */


/* Settings */
#ifndef BIT_BUILD_NUMBER
    #define BIT_BUILD_NUMBER "0"
#endif
#ifndef BIT_COMPANY
    #define BIT_COMPANY "Embedthis"
#endif
#ifndef BIT_DEBUG
    #define BIT_DEBUG 1
#endif
#ifndef BIT_DEPTH
    #define BIT_DEPTH 1
#endif
#ifndef BIT_DISCOVER
    #define BIT_DISCOVER ""
#endif
#ifndef BIT_HAS_ATOMIC
    #define BIT_HAS_ATOMIC 1
#endif
#ifndef BIT_HAS_ATOMIC64
    #define BIT_HAS_ATOMIC64 1
#endif
#ifndef BIT_HAS_DOUBLE_BRACES
    #define BIT_HAS_DOUBLE_BRACES 1
#endif
#ifndef BIT_HAS_DYN_LOAD
    #define BIT_HAS_DYN_LOAD 1
#endif
#ifndef BIT_HAS_LIB_EDIT
    #define BIT_HAS_LIB_EDIT 1
#endif
#ifndef BIT_HAS_LIB_RT
    #define BIT_HAS_LIB_RT 0
#endif
#ifndef BIT_HAS_MMU
    #define BIT_HAS_MMU 1
#endif
#ifndef BIT_HAS_MTUNE
    #define BIT_HAS_MTUNE 1
#endif
#ifndef BIT_HAS_PAM
    #define BIT_HAS_PAM 1
#endif
#ifndef BIT_HAS_STACK_PROTECTOR
    #define BIT_HAS_STACK_PROTECTOR 1
#endif
#ifndef BIT_HAS_SYNC
    #define BIT_HAS_SYNC 1
#endif
#ifndef BIT_HAS_SYNC64
    #define BIT_HAS_SYNC64 1
#endif
#ifndef BIT_HAS_SYNC_CAS
    #define BIT_HAS_SYNC_CAS 1
#endif
#ifndef BIT_HAS_UNNAMED_UNIONS
    #define BIT_HAS_UNNAMED_UNIONS 1
#endif
#ifndef BIT_PREFIXES
    #define BIT_PREFIXES "embedthis-prefixes"
#endif
#ifndef BIT_PRODUCT
    #define BIT_PRODUCT "bitos"
#endif
#ifndef BIT_REQUIRES
    #define BIT_REQUIRES "compiler,lib,link"
#endif
#ifndef BIT_STATIC
    #define BIT_STATIC 1
#endif
#ifndef BIT_SYNC
    #define BIT_SYNC ""
#endif
#ifndef BIT_TITLE
    #define BIT_TITLE "Bit O/S Layer"
#endif
#ifndef BIT_VERSION
    #define BIT_VERSION "0.8.6"
#endif
#ifndef BIT_WARN64TO32
    #define BIT_WARN64TO32 1
#endif
#ifndef BIT_WARN_UNUSED
    #define BIT_WARN_UNUSED 1
#endif

/* Prefixes */
#ifndef BIT_ROOT_PREFIX
    #define BIT_ROOT_PREFIX "/"
#endif
#ifndef BIT_BASE_PREFIX
    #define BIT_BASE_PREFIX "/usr/local"
#endif
#ifndef BIT_DATA_PREFIX
    #define BIT_DATA_PREFIX "/"
#endif
#ifndef BIT_STATE_PREFIX
    #define BIT_STATE_PREFIX "/var"
#endif
#ifndef BIT_APP_PREFIX
    #define BIT_APP_PREFIX "/usr/local/lib/bitos"
#endif
#ifndef BIT_VAPP_PREFIX
    #define BIT_VAPP_PREFIX "/usr/local/lib/bitos/0.8.6"
#endif
#ifndef BIT_BIN_PREFIX
    #define BIT_BIN_PREFIX "/usr/local/bin"
#endif
#ifndef BIT_INC_PREFIX
    #define BIT_INC_PREFIX "/usr/local/include"
#endif
#ifndef BIT_LIB_PREFIX
    #define BIT_LIB_PREFIX "/usr/local/lib"
#endif
#ifndef BIT_MAN_PREFIX
    #define BIT_MAN_PREFIX "/usr/local/share/man"
#endif
#ifndef BIT_SBIN_PREFIX
    #define BIT_SBIN_PREFIX "/usr/local/sbin"
#endif
#ifndef BIT_ETC_PREFIX
    #define BIT_ETC_PREFIX "/etc/bitos"
#endif
#ifndef BIT_WEB_PREFIX
    #define BIT_WEB_PREFIX "/var/www/bitos-default"
#endif
#ifndef BIT_LOG_PREFIX
    #define BIT_LOG_PREFIX "/var/log/bitos"
#endif
#ifndef BIT_SPOOL_PREFIX
    #define BIT_SPOOL_PREFIX "/var/spool/bitos"
#endif
#ifndef BIT_CACHE_PREFIX
    #define BIT_CACHE_PREFIX "/var/spool/bitos/cache"
#endif
#ifndef BIT_SRC_PREFIX
    #define BIT_SRC_PREFIX "bitos-0.8.6"
#endif

/* Suffixes */
#ifndef BIT_EXE
    #define BIT_EXE ""
#endif
#ifndef BIT_SHLIB
    #define BIT_SHLIB ".dylib"
#endif
#ifndef BIT_SHOBJ
    #define BIT_SHOBJ ".dylib"
#endif
#ifndef BIT_LIB
    #define BIT_LIB ".a"
#endif
#ifndef BIT_OBJ
    #define BIT_OBJ ".o"
#endif

/* Profile */
#ifndef BIT_CONFIG_CMD
    #define BIT_CONFIG_CMD "bit -d -q -platform macosx-x64-static -static -configure . -gen xcode"
#endif
#ifndef BIT_BITOS_PRODUCT
    #define BIT_BITOS_PRODUCT 1
#endif
#ifndef BIT_PROFILE
    #define BIT_PROFILE "static"
#endif
#ifndef BIT_TUNE_SIZE
    #define BIT_TUNE_SIZE 1
#endif

/* Miscellaneous */
#ifndef BIT_MAJOR_VERSION
    #define BIT_MAJOR_VERSION 0
#endif
#ifndef BIT_MINOR_VERSION
    #define BIT_MINOR_VERSION 8
#endif
#ifndef BIT_PATCH_VERSION
    #define BIT_PATCH_VERSION 6
#endif
#ifndef BIT_VNUM
    #define BIT_VNUM 06
#endif

/* Packs */
#ifndef BIT_PACK_CC
    #define BIT_PACK_CC 1
#endif
#ifndef BIT_PACK_LIB
    #define BIT_PACK_LIB 1
#endif
#ifndef BIT_PACK_LINK
    #define BIT_PACK_LINK 1
#endif
#ifndef BIT_PACK_VXWORKS
    #define BIT_PACK_VXWORKS 0
#endif
#ifndef BIT_PACK_WINSDK
    #define BIT_PACK_WINSDK 0
#endif
