#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inode.h"

Inode* inode_table;

int total_inodes;

void initialize_inode_table(int inode_count)
{
    total_inodes = inode_count;
    inode_table = (Inode*) malloc(sizeof(Inode) * inode_count);

    for(int i=0; i<inode_count; i++)
    {
        inode_table[i].inode_number = -1; // mark as free
    }

}

int allocate_inode(int is_directory)
{

    for(int i=0;i < total_inodes; i++)
    {
        if(inode_table[i].inode_number == -1)
        {
            inode_table[i].inode_number = i;
            inode_table[i].file_size = 0;
            inode_table[i].is_directory = is_directory;
            inode_table[i].permissions = 0755; //default permission
            inode_table[i].creation_time = (int)time(NULL);
            inode_table[i].modification_time = inode_table[i].creation_time;
            memset(inode_table[i].block_pointers, -1, sizeof(int) * MAX_BLOCK_POINTERS);
            return i;
        }
    }

    return -1; // no free inodes available

}

void free_inode(int inode_number)
{

    if(inode_number>=0 && inode_number <total_inodes)
    {
        inode_table[inode_number].inode_number = -1; // free the inode
    }

}

Inode* read_inode(int inode_number)
{

}

void write_inode(int inode_number, Inode* inode)
{

}

int get_free_inode_count()
{

}

void get_inode_metadata(int inode_number, Inode* inode)
{

}
void update_inode_metadata(int inode_number, Inode* inode);