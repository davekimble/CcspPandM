AM_CFLAGS = -D_ANSC_LINUX
AM_CFLAGS += -D_ANSC_USER
AM_CFLAGS += -D_ANSC_LITTLE_ENDIAN_
AM_LDFLAGS = -lccsp_common

AM_CPPFLAGS = -Wall -Werror
ACLOCAL_AMFLAGS = -I m4
hardware_platform = i686-linux-gnu

noinst_LTLIBRARIES = libCcspPandM_board_sbapi.la
libCcspPandM_board_sbapi_la_CPPFLAGS = -I$(top_srcdir)/source/TR-181/board_sbapi -I$(top_srcdir)/source/TR-181/middle_layer_src -I$(top_srcdir)/source-pc/TR-181/board_include -I$(top_srcdir)/custom/ga/source/TR-181/custom_include -I$(top_srcdir)/custom/comcast -I$(top_srcdir)/source/TR-181/include $(CPPFLAGS)
libCcspPandM_board_sbapi_la_SOURCES = cosa_x_cisco_com_devicecontrol_apis.c cosa_ra_apis.c cosa_ppp_apis.c cosa_dhcpv6_apis.c cosa_routing_apis.c cosa_neighdisc_apis.c cosa_x_cisco_com_rlog_apis.c cosa_userinterface_apis.c cosa_ethernet_apis.c cosa_gatewayinfo_apis.c cosa_x_cisco_com_ddns_apis.c cosa_time_apis.c cosa_drg_common.c cosa_upnp_apis.c cosa_x_cisco_com_mld_apis.c cosa_x_cisco_com_diagnostics_apis.c cosa_interfacestack_apis.c cosa_moca_apis.c cosa_deviceinfo_apis.c cosa_hosts_apis.c cosa_users_apis.c cosa_x_cisco_com_security_apis.c cosa_dns_apis.c cosa_ipv6rd_apis.c cosa_nat_apis.c cosa_firewall_apis.c cosa_ip_apis.c cosa_dhcpv4_apis.c cosa_bridging_apis.c
libCcspPandM_board_sbapi_la_LDFLAGS = -lccsp_common
