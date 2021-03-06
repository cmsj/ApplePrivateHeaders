/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <Geode/PFCopyOnWriteInterest.h>

@class NSData;

@interface PA2DBufferMutableTile : PFCopyOnWriteInterest {

	char _isEmpty;
	int _format;
	PFIntRect_st _bounds;
	long long _bytesPerRow;
	NSData* _fill;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)bytesPerRow;
-(PFIntRect_st)bounds;
-(void)readBytes:(/*^block*/id)arg1 ;
-(void)writeBytes:(/*^block*/id)arg1 ;
-(void)writeBytesAt:(PFIntPoint_st)arg1 block:(/*^block*/id)arg2 ;
-(void)readBytesAt:(PFIntPoint_st)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithEmptyData:(id)arg1 bounds:(PFIntRect_st)arg2 bytesPerRow:(long long)arg3 format:(int)arg4 fill:(id)arg5 ;
-(id)newTileWithBounds:(PFIntRect_st)arg1 bytesPerRow:(long long)arg2 ;
-(id)newMutableDataWithLength:(unsigned long long)arg1 ;
-(id)_copyObject:(id)arg1 ;
@end

