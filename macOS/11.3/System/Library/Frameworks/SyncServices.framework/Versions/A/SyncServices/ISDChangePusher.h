/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ISDRecord;

@interface ISDChangePusher : NSObject {

	NSString* _clientId;
	ISDRecord* _record;
	char _clientFormatsRelationships;

}
-(void)dealloc;
-(id)changeBuilder:(id)arg1 createDeltaBetweenOldValue:(id)arg2 newValue:(id)arg3 propertyDescription:(id)arg4 name:(id)arg5 lastModifiedGeneration:(unsigned)arg6 ;
-(void)changeBuilder:(id)arg1 didCreateDelta:(id)arg2 betweenOldValue:(id)arg3 newValue:(id)arg4 ;
-(id)changeBuilder:(id)arg1 createChangeWithEntityName:(id)arg2 recordId:(id)arg3 changeType:(int)arg4 deltas:(id)arg5 fromGeneration:(unsigned)arg6 toGeneration:(unsigned)arg7 ;
-(char)_addDeletedTuple:(id)arg1 tuples:(id)arg2 ;
-(void)updateRecordWithPropertyValue:(id)arg1 unformattedRelationshipTuples:(id)arg2 propertyDescription:(id)arg3 name:(id)arg4 lastModifiedGeneration:(unsigned)arg5 isDefaultValue:(char)arg6 ;
-(void)createArrayOfFormattedTuples:(id*)arg1 unformattedTuples:(id*)arg2 byCombiningNewRecordIds:(id)arg3 withOldTuples:(id)arg4 oldUnformattedTuples:(id)arg5 relationshipIsToMany:(char)arg6 builder:(id)arg7 ;
-(id)initWithClientId:(id)arg1 clientFormatsRelationships:(char)arg2 ;
-(void)prepareForNewChange:(id)arg1 ;
@end

