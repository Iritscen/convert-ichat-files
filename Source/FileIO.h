//
//  FileIO.h
//  Convert ichat Files
//
//  Created by Iritscen on 3/26/17.
//  Copyright © 2017 iritscen@yahoo.com. All rights reserved.
//

#ifndef FileIO_h
#define FileIO_h

// Allows us to build a table of possible errors that C file I/O functions might return
typedef struct FileError
{
    int   feCode;
    char *feDesc;
} FileError;

bool LoadInFile(char *srcPath);
void ReportInFileError(FILE *stream);
bool CreateOutFile(bool useRTF);
void WriteToOutFile(char *output);
void CloseOutFile(void);

#endif /* FileIO_h */
