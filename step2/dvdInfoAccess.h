//
//  dvdInfoAccess.h
//  step2
//
//  Created by hyungwook on 2021/03/05.
//

#ifndef _DVDINFOACCESS_H_
#define _DVDINFOACCESS_H_

int AddDvdInfo(char *ISBN, char *title, int genre);
dvdInfo *GetdvdPtrByISBN(char *ISBN);
int IsRegistISBN(char *ISBN);

#endif
