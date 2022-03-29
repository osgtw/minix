/*
server/ip/gen/tcp_hdr.h
*/

#ifndef __SERVER__IP__GEN__TCP_HDR_H__
#define __SERVER__IP__GEN__TCP_HDR_H__

typedef struct tcp_hdr
{
	tcpport_t th_srcport;
	tcpport_t th_dstport;
	u32_t th_seq_nr;
	u32_t th_ack_nr;
	u8_t th_data_off;
	u8_t th_flags;
	u16_t th_window;
	u16_t th_chksum;
	u16_t th_urgptr;
} tcp_hdr_t;

#define TH_DO_MASK	0xf0

#define TH_FLAGS_MASK	0x3f
#define THF_FIN		0x1
#define THF_SYN		0x2
#define THF_RST		0x4
#define THF_PSH		0x8
#define THF_ACK		0x10
#define THF_URG		0x20

typedef struct tcp_hdropt
{
	int tho_opt_siz;
	u8_t tho_data[TCP_MAX_HDR_SIZE-TCP_MIN_HDR_SIZE];
} tcp_hdropt_t;

#endif /* __SERVER__IP__GEN__TCP_HDR_H__ */
