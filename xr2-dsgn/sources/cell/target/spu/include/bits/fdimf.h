/* SCE CONFIDENTIAL
PlayStation(R)3 Programmer Tool Runtime Library 310.001
* Copyright (C) 2004 Sony Computer Entertainment Inc. 
* All Rights Reserved.
*/
_FUNC_DEF(
      float,
      fdimf,
      ( float x, float y ))
{
   return spu_extract( fdimf4( spu_promote( x, 0 ), spu_promote( y, 0)), 0 );
}
