/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface MFBitmap : NSObject {

	int m_width;
	int m_height;
	unsigned m_bitsPerPixel;
	int m_compression;
	char m_isOS2;
	unsigned m_infoHeaderSize;
	unsigned m_paletteSize;
	NSMutableData* m_bmpData;

}
-(id)init;
-(char)isEmpty;
-(char)isFlipped;
-(unsigned)coloursUsed:(const char*)arg1 in_headerSize:(unsigned)arg2 in_usage:(int)arg3 ;
-(void)writePaletteEntry:(id)arg1 in_index:(int)arg2 ;
-(void)setNull;
-(char)parseHeader:(const char*)arg1 in_headerSize:(unsigned)arg2 ;
-(void)appendDIBPalette:(id)arg1 in_header:(const char*)arg2 in_headerSize:(unsigned)arg3 in_usage:(int)arg4 ;
-(char)processDIBHeader:(id)arg1 in_header:(const char*)arg2 in_headerSize:(unsigned)arg3 in_usage:(int)arg4 ;
-(unsigned)pixelDataOffset:(const char*)arg1 in_headerSize:(unsigned)arg2 in_usage:(int)arg3 ;
-(void)writeFileHeader;
-(void)writeInfoHeader;
-(const char*)pixelData;
-(unsigned long long)pixelDataLength;
-(id)initWithDIBitmap:(id)arg1 in_dib:(const char*)arg2 in_dibSize:(unsigned)arg3 in_usage:(int)arg4 ;
-(id)initWithDIBitmap:(id)arg1 in_header:(const char*)arg2 in_headerSize:(unsigned)arg3 in_bitmap:(const char*)arg4 in_bitmapSize:(unsigned)arg5 in_usage:(int)arg6 ;
-(id)initWithBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char*)arg6 in_bitmapSize:(unsigned)arg7 ;
-(void)setMonoPalette:(id)arg1 ;
@end

