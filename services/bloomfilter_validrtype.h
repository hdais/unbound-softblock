#ifndef BLOOMFILTER_VALIDRTYPE
#define BLOOMFILTER_VALIDRTYPE

static uint16_t validrtype[] = {
  1,              /* A */
  2,              /* NS */
  5,              /* CNAME */
  6,              /* SOA */
  /* 11, */       /* WKS */
  12,             /* PTR */
  /* 13, */       /* HINFO */
  /* 14, */       /* MINFO */
  15,             /* MX */
  16,             /* TXT */
  18,             /* AFSDB */
  /* 22, */       /* NSAP */
  /* 23, */       /* NSAP-PTR */
  /* 26, */       /* PX */
  28,             /* AAAA */
  29,             /* LOC */
  33,             /* SRV */
  35,             /* NAPTR */
  36,             /* KX */
  37,             /* CERT */
  39,             /* DNAME */
  /* 40, */       /* SINK */
  /* 41, */       /* OPT */
  /* 42, */       /* APL */
  43,             /* DS */
  44,             /* SSHFP */
  45,             /* IPSECKEY */
  46,             /* RRSIG */
  47,             /* NSEC */
  48,             /* DNSKEY */
  49,             /* DHCID */
  50,             /* NSEC3 */
  51,             /* NSEC3PARAM */
  52,             /* TLSA */
  /* 55, */       /* HIP */
  /* 56, */       /* NINFO */
  /* 57, */       /* RKEY */
  /* 58, */       /* TALINK */
  59,             /* CDS */
  60,             /* CDNSKEY */
  61,             /* OPENPGPKEY */  
  62,             /* CSYNC */  
  99,             /* SPF */
  255,            /* ANY */
  257,            /* CAA */
  32769           /* DLV */
};

#endif /* BLOOMFILTER_VALIDRTYPE */
