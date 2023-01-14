/*
 * telekom / sysrepo-plugin-system
 *
 * This program is made available under the terms of the
 * BSD 3-Clause license which is available at
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * SPDX-FileCopyrightText: 2022 Deutsche Telekom AG
 * SPDX-FileContributor: Sartura Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef INTERFACES_PLUGIN_COMMON_H
#define INTERFACES_PLUGIN_COMMON_H

// #define PLUGIN_NAME "ietf-interfaces-plugin"
extern const char* const PLUGIN_NAME;

#define IETF_INTERFACES_YANG_MODULE "ietf-interfaces"
#define IETF_IP_YANG_MODULE "ietf-ip"
#define IETF_IF_EXTENSIONS_YANG_MODULE "ietf-if-extensions"

#define INTERFACES_INTERFACES_CONTAINER_YANG_PATH "/" IETF_INTERFACES_YANG_MODULE ":interfaces"
#define INTERFACES_INTERFACES_LIST_YANG_PATH INTERFACES_INTERFACES_CONTAINER_YANG_PATH "/interface"

#define INTERFACES_INTERFACES_STATE_INTERFACE_NAME_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/name"
#define INTERFACES_INTERFACES_STATE_INTERFACE_TYPE_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/type"
#define INTERFACES_INTERFACES_STATE_INTERFACE_ADMIN_STATUS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/admin-status"
#define INTERFACES_INTERFACES_STATE_INTERFACE_OPER_STATUS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/oper-status"
#define INTERFACES_INTERFACES_STATE_INTERFACE_LAST_CHANGE_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/last-change"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IF_INDEX_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/if-index"
#define INTERFACES_INTERFACES_STATE_INTERFACE_PHYS_ADDRESS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/phys-address"
#define INTERFACES_INTERFACES_STATE_INTERFACE_HIGHER_LAYER_IF_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/higher-layer-if"
#define INTERFACES_INTERFACES_STATE_INTERFACE_LOWER_LAYER_IF_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/lower-layer-if"
#define INTERFACES_INTERFACES_STATE_INTERFACE_SPEED_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/speed"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_DISCONTINUITY_TIME_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/discontinuity-time"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_IN_OCTETS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/in-octets"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_IN_UNICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/in-unicast-pkts"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_IN_BROADCAST_PKTS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/in-broadcast-pkts"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_IN_MULTICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/in-multicast-pkts"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_IN_DISCARDS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/in-discards"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_IN_ERRORS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/in-errors"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_IN_UNKNOWN_PROTOS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/in-unknown-protos"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_OUT_OCTETS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/out-octets"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_OUT_UNICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/out-unicast-pkts"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_OUT_BROADCAST_PKTS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/out-broadcast-pkts"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_OUT_MULTICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/out-multicast-pkts"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_OUT_DISCARDS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/out-discards"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_OUT_ERRORS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH "/out-errors"
#define INTERFACES_INTERFACES_STATE_INTERFACE_STATISTICS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/statistics"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_FORWARDING_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_YANG_PATH "/forwarding"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_MTU_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_YANG_PATH "/mtu"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_IP_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_PREFIX_LENGTH_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_YANG_PATH "/prefix-length"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_NETMASK_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_YANG_PATH "/netmask"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_ORIGIN_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_ADDRESS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_YANG_PATH "/address"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_NEIGHBOR_IP_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_NEIGHBOR_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_NEIGHBOR_LINK_LAYER_ADDRESS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_NEIGHBOR_YANG_PATH "/link-layer-address"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_NEIGHBOR_ORIGIN_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_NEIGHBOR_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_NEIGHBOR_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_YANG_PATH "/neighbor"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV4_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/ipv4"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_FORWARDING_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_YANG_PATH "/forwarding"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_MTU_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_YANG_PATH "/mtu"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_IP_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_PREFIX_LENGTH_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_YANG_PATH "/prefix-length"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_ORIGIN_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_STATUS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_YANG_PATH "/status"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_ADDRESS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_YANG_PATH "/address"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_IP_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_LINK_LAYER_ADDRESS_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/link-layer-address"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_ORIGIN_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_IS_ROUTER_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/is-router"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_STATE_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/state"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_NEIGHBOR_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_YANG_PATH "/neighbor"
#define INTERFACES_INTERFACES_STATE_INTERFACE_IPV6_YANG_PATH INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH "/ipv6"
#define INTERFACES_INTERFACES_STATE_INTERFACE_YANG_PATH INTERFACES_INTERFACES_STATE_YANG_PATH "/interface"
#define INTERFACES_INTERFACES_STATE_YANG_PATH "/ietf-interfaces:interfaces-state"
#define INTERFACES_INTERFACES_INTERFACE_NAME_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/name"
#define INTERFACES_INTERFACES_INTERFACE_DESCRIPTION_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/description"
#define INTERFACES_INTERFACES_INTERFACE_TYPE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/type"
#define INTERFACES_INTERFACES_INTERFACE_ENABLED_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/enabled"
#define INTERFACES_INTERFACES_INTERFACE_LINK_UP_DOWN_TRAP_ENABLE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/link-up-down-trap-enable"
#define INTERFACES_INTERFACES_INTERFACE_ADMIN_STATUS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/admin-status"
#define INTERFACES_INTERFACES_INTERFACE_OPER_STATUS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/oper-status"
#define INTERFACES_INTERFACES_INTERFACE_LAST_CHANGE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/last-change"
#define INTERFACES_INTERFACES_INTERFACE_IF_INDEX_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/if-index"
#define INTERFACES_INTERFACES_INTERFACE_PHYS_ADDRESS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/phys-address"
#define INTERFACES_INTERFACES_INTERFACE_HIGHER_LAYER_IF_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/higher-layer-if"
#define INTERFACES_INTERFACES_INTERFACE_LOWER_LAYER_IF_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/lower-layer-if"
#define INTERFACES_INTERFACES_INTERFACE_SPEED_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/speed"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_DISCONTINUITY_TIME_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/discontinuity-time"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_OCTETS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-octets"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_UNICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-unicast-pkts"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_BROADCAST_PKTS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-broadcast-pkts"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_MULTICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-multicast-pkts"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_DISCARDS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-discards"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_ERRORS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-errors"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_UNKNOWN_PROTOS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-unknown-protos"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_OUT_OCTETS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/out-octets"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_OUT_UNICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/out-unicast-pkts"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_OUT_BROADCAST_PKTS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/out-broadcast-pkts"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_OUT_MULTICAST_PKTS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/out-multicast-pkts"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_OUT_DISCARDS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/out-discards"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_OUT_ERRORS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/out-errors"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_IN_DISCARD_UNKNOWN_ENCAPS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH "/in-discard-unknown-encaps"
#define INTERFACES_INTERFACES_INTERFACE_STATISTICS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/statistics"
#define INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_DOWN_YANG_PATH INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_YANG_PATH "/down"
#define INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_UP_YANG_PATH INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_YANG_PATH "/up"
#define INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_CARRIER_TRANSITIONS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_YANG_PATH "/carrier-transitions"
#define INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_TIMER_RUNNING_YANG_PATH INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_YANG_PATH "/timer-running"
#define INTERFACES_INTERFACES_INTERFACE_CARRIER_DELAY_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/carrier-delay"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_HALF_LIFE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH "/half-life"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_REUSE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH "/reuse"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_SUPPRESS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH "/suppress"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_MAX_SUPPRESS_TIME_YANG_PATH INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH "/max-suppress-time"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_PENALTY_YANG_PATH INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH "/penalty"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_SUPPRESSED_YANG_PATH INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH "/suppressed"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_TIME_REMAINING_YANG_PATH INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH "/time-remaining"
#define INTERFACES_INTERFACES_INTERFACE_DAMPENING_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/dampening"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_OUTER_TAG_TAG_TYPE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_OUTER_TAG_YANG_PATH "/tag-type"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_OUTER_TAG_VLAN_ID_YANG_PATH INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_OUTER_TAG_YANG_PATH "/vlan-id"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_OUTER_TAG_YANG_PATH INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_YANG_PATH "/outer-tag"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_SECOND_TAG_TAG_TYPE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_SECOND_TAG_YANG_PATH "/tag-type"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_SECOND_TAG_VLAN_ID_YANG_PATH INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_SECOND_TAG_YANG_PATH "/vlan-id"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_SECOND_TAG_YANG_PATH INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_YANG_PATH "/second-tag"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_DOT1Q_VLAN_YANG_PATH INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_YANG_PATH "/dot1q-vlan"
#define INTERFACES_INTERFACES_INTERFACE_ENCAPSULATION_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/encapsulation"
#define INTERFACES_INTERFACES_INTERFACE_LOOPBACK_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/loopback"
#define INTERFACES_INTERFACES_INTERFACE_MAX_FRAME_SIZE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/max-frame-size"
#define INTERFACES_INTERFACES_INTERFACE_FORWARDING_MODE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/forwarding-mode"
#define INTERFACES_INTERFACES_INTERFACE_PARENT_INTERFACE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/parent-interface"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_ENABLED_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_YANG_PATH "/enabled"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_FORWARDING_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_YANG_PATH "/forwarding"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_MTU_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_YANG_PATH "/mtu"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_IP_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_PREFIX_LENGTH_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_YANG_PATH "/prefix-length"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_NETMASK_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_YANG_PATH "/netmask"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_ORIGIN_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_ADDRESS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_YANG_PATH "/address"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_NEIGHBOR_IP_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_NEIGHBOR_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_NEIGHBOR_LINK_LAYER_ADDRESS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_NEIGHBOR_YANG_PATH "/link-layer-address"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_NEIGHBOR_ORIGIN_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_NEIGHBOR_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_NEIGHBOR_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV4_YANG_PATH "/neighbor"
#define INTERFACES_INTERFACES_INTERFACE_IPV4_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/ietf-ip:ipv4"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_ENABLED_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH "/enabled"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_FORWARDING_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH "/forwarding"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_MTU_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH "/mtu"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_IP_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_PREFIX_LENGTH_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_YANG_PATH "/prefix-length"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_ORIGIN_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_STATUS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_YANG_PATH "/status"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_ADDRESS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH "/address"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_IP_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/ip"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_LINK_LAYER_ADDRESS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/link-layer-address"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_ORIGIN_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/origin"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_IS_ROUTER_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/is-router"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_STATE_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_YANG_PATH "/state"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_NEIGHBOR_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH "/neighbor"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_DUP_ADDR_DETECT_TRANSMITS_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH "/dup-addr-detect-transmits"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_CREATE_GLOBAL_ADDRESSES_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_YANG_PATH "/create-global-addresses"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_CREATE_TEMPORARY_ADDRESSES_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_YANG_PATH "/create-temporary-addresses"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_TEMPORARY_VALID_LIFETIME_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_YANG_PATH "/temporary-valid-lifetime"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_TEMPORARY_PREFERRED_LIFETIME_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_YANG_PATH "/temporary-preferred-lifetime"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_AUTOCONF_YANG_PATH INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH "/autoconf"
#define INTERFACES_INTERFACES_INTERFACE_IPV6_YANG_PATH INTERFACES_INTERFACES_INTERFACE_YANG_PATH "/ipv6"
#define INTERFACES_INTERFACES_INTERFACE_YANG_PATH INTERFACES_INTERFACES_YANG_PATH "/interface"
#define INTERFACES_INTERFACES_YANG_PATH "/ietf-interfaces:interfaces"

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

#define ADDR_STR_BUF_SIZE 45 // max ip string length (15 for ipv4 and 45 for ipv6)

#endif // INTERFACES_PLUGIN_COMMON_H
