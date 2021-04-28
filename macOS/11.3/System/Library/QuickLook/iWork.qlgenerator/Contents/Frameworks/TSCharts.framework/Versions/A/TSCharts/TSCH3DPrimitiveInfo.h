/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCH3DResource;

@interface TSCH3DPrimitiveInfo : NSObject {

	int _type;
	int _offset;
	unsigned _count;
	TSCH3DResource* _indices;

}

@property (nonatomic,readonly) int type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned count;                               //@synthesize count=_count - In the implementation block
@property (nonatomic,retain,readonly) TSCH3DResource * indices;              //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) char hasOffset; 
@property (nonatomic,readonly) char hasCount; 
@property (nonatomic,readonly) char hasEmptyCount; 
+(id)infoWithType:(int)arg1 offset:(int)arg2 count:(unsigned)arg3 indices:(id)arg4 ;
+(id)infoWithType:(int)arg1 ;
-(unsigned)count;
-(int)type;
-(int)offset;
-(id)initWithType:(int)arg1 ;
-(TSCH3DResource *)indices;
-(char)hasCount;
-(char)hasOffset;
-(id)initWithType:(int)arg1 offset:(int)arg2 count:(unsigned)arg3 indices:(id)arg4 ;
-(char)hasEmptyCount;
@end
