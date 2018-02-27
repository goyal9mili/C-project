#ifndef VFS_3_INCLUDED  //lines 1 , 2 and 10 are used so that the below text will be included only if it has not been included before  
#define VFS_3_INCLUDED  // we can use any name instead of 'VFS_3_INCLUDED'.

int vfsunmount(char label[]);

int vfslistfile(char *, char *);

int vfssearchfile(char *, char *);

#endif 
