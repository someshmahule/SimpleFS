#ifndef INODE_H
#define INODE_H

#define MAX_BLOCK_POINTERS 10

typedef struct
{
    /* data */
    int inode_number;
    int file_size;
    int block_pointers[10];
    int permissions;
    int is_directory;
    int creation_time;
    int modification_time;

}Inode;


void initialize_inode_table(int inode_count);
int allocate_inode(int is_directory);
void free_inode(int inode_number);
Inode* read_inode(int inode_number);
void write_inode(int inode_number, Inode* inode);
int get_free_inode_count();
void get_inode_metadata(int inode_number, Inode* inode);
void update_inode_metadata(int inode_number, Inode* inode);

#endif // INODE_H