/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPipe.h>

@class NSFileHandle;

@interface NSConcretePipe : NSPipe {

	NSFileHandle* _readHandle;
	NSFileHandle* _writeHandle;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_closeOnDealloc;
-(id)fileHandleForReading;
-(id)fileHandleForWriting;
@end

