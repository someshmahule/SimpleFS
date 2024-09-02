# SimpleFS
Build a basic filesystem that supports file and directory creation, reading, writing, and deletion.


Core Features:
Creating, reading, writing, and deleting files and directories.
Basic file metadata (size, creation/modification time).
Simple directory structure (hierarchical).


simple-filesystem/
├── src/               # Source code
│   ├── main.c         # Entry point
│   ├── filesystem.c   # Core filesystem logic
│   ├── inode.c        # Inode management
│   └── utils.c        # Utility functions
├── include/           # Header files
│   ├── filesystem.h
│   ├── inode.h
│   └── utils.h
├── tests/             # Unit tests
├── README.md          # Project documentation
├── Makefile           # Build script
└── .gitignore         # Ignore list
