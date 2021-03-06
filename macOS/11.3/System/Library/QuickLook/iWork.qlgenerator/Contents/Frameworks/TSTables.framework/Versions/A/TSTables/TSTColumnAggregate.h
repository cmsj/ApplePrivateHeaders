/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSKit/TSKSosBase.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTColumnAggregate : TSKSosBase <NSCopying> {

	UUIDData<TSP::UUIDData> _columnUid;
	int _level;
	unsigned char _aggregateType;

}

@property (nonatomic,readonly) TSKUIDStruct columnUid; 
@property (nonatomic,readonly) int level;                              //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned char aggregateType;              //@synthesize aggregateType=_aggregateType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)level;
-(unsigned char)aggregateType;
-(void)setAggregateType:(unsigned char)arg1 ;
-(id)initWithArchive:(const ColumnAggregateArchive*)arg1 ;
-(void)encodeToArchive:(ColumnAggregateArchive*)arg1 archiver:(id)arg2 ;
-(TSKUIDStruct)columnUid;
-(id)initWithColumnUid:(TSKUIDStruct)arg1 level:(int)arg2 aggregateType:(unsigned char)arg3 ;
@end

