#include <types.h>
#define FS_ROOT_INODE	1
#define FS_BSIZE	512
#define FS_NDIRECT	12
#define FS_NINDIRECT	(BASE / sizeof(u32))
#define FS_MAXFILE	(FS_NINDIRECT + FS_NDIRECT)
#define FS_IPB		(FS_BSIZE / sizeof(struct dinode)
#define FS_IBLOCK(i, sb) ((i) / IPB + sb.inodestart)
#define FS_BPB		(FS_BSIZE * 8)
#define FS_BBLOCK(b, sb) (b/FS_BPB + b.bmapstart)
#define FS_DIRSIZ	14

struct superblock {
	u32 size;
	u32 nblock;
	u32 ninode;
	u32 nlog;
	u32 firstlog;
	u32 firstinode;
	u32 firstfreemapblock;
};

struct dirent {
	u16	inum;
	s8	name[FS_DIRSIZ];
};
