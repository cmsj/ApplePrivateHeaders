/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned long long allocSize;
	char safe;
	char usedMalloc;

}
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 ;
-(id)initWithPropertyList:(void*)arg1 ;
-(char)beginAccessing;
-(void)endAccessing;
-(char)purgable;
@end

