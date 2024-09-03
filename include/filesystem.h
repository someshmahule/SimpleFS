#ifndef FILESYSTEM_H
#define FILESYSTEM_H

typedef struct 
{
    /* data */
    int fs_size;
    int inode_count;
    int block_count;
    int free_inodes;
    int free_blocks;
    char fs_name[16];

} Superblock;


void initialize_filesystem(int size);
void create_superblock();
void load_superblock();
void save_superblock();
void display_filesystem_info();

#endif // FILESYSTEM_H