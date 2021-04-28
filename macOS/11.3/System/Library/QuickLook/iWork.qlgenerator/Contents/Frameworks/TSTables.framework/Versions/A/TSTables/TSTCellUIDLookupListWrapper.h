/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTCellUIDLookupListWrapper : NSObject <NSCopying> {

	TSTCellUIDLookupList* _UIDLookupList;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)reserve:(unsigned long long)arg1 ;
-(TSTCellUIDLookupList*)UIDLookupList;
-(void)addCellUID:(const TSKUIDStructCoord*)arg1 ;
-(id)initWithCellUIDList:(id)arg1 ;
-(void)addCellRegion:(id)arg1 withColumnUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 rowUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg3 ;
-(TSKUIDStructCoord)cellUIDAtIndex:(unsigned long long)arg1 ;
@end
