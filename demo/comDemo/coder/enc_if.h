/*
** enc_if.h - common encoder interface
**
** Copyright (C) 2001-2003 Nullsoft, Inc.
**
** This software is provided 'as-is', without any express or implied warranty.  
** In no event will the authors be held liable for any damages arising from the use of this software.
**
** Permission is granted to anyone to use this software for any purpose, including commercial 
** applications, and to alter it and redistribute it freely, subject to the following restrictions:
**  1. The origin of this software must not be misrepresented; you must not claim that you wrote the 
**     original software. If you use this software in a product, an acknowledgment in the product 
**     documentation would be appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be misrepresented as 
**     being the original software.
**  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef _NSV_ENC_IF_H_
#define _NSV_ENC_IF_H_
class VideoCoder
{
  public:
    VideoCoder() { }
    virtual int Encode(void *in, void *out, int *iskf)=0; // returns bytes in out
    virtual ~VideoCoder() { };
};

#endif //_NSV_ENC_IF_H_
