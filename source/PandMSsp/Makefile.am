AM_CFLAGS = -D_ANSC_LINUX
AM_CFLAGS += -D_ANSC_USER
AM_CFLAGS += -D_ANSC_LITTLE_ENDIAN_
AM_LDFLAGS = -lccsp_common

AM_CPPFLAGS = -Wall -Werror
ACLOCAL_AMFLAGS = -I m4
hardware_platform = i686-linux-gnu
bin_PROGRAMS = CcspPandMSsp
CcspPandMSsp_CPPFLAGS = -I$(top_srcdir)/source/TR-181/board_sbapi -I$(top_srcdir)/source/TR-181/middle_layer_src -I$(top_srcdir)/source-pc/TR-181/board_include -I$(top_srcdir)/custom/ga/source/TR-181/custom_include -I$(top_srcdir)/custom/comcast -I$(top_srcdir)/source/TR-181/include -I$(top_srcdir)/source-pc/TR-181/board_sbapi -I$(top_srcdir)/source/Custom $(CPPFLAGS)
CcspPandMSsp_SOURCES = ssp_messagebus_interface.c ssp_main.c ssp_action.c
CcspPandMSsp_LDFLAGS = -lccsp_common
