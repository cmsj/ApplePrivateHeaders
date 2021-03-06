/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ISDRecordIdMap : NSObject {

	NSString* _localId;
	NSString* _globalId;
	int _entityNumber;

}
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)entityName;
-(void)setEntityName:(id)arg1 ;
-(id)fastEntityName;
-(id)globalId;
-(int)entityNumber;
-(id)initWithQuickDirtyCoder:(id)arg1 ;
-(void)encodeWithQuickDirtyCoder:(id)arg1 ;
-(int)isd_quickDirtyCoderType;
-(void)checkInvariant;
-(id)localId;
-(void)setLocalId:(id)arg1 ;
-(void)setGlobalId:(id)arg1 ;
-(id)fastLocalId;
-(id)fastGlobalId;
@end

