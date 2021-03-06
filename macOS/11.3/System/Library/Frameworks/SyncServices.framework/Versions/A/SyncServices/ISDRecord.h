/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/SyncServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface ISDRecord : NSObject <NSCopying> {

	NSString* _recordId;
	int _entityNumber;
	NSMutableArray* _propertyValues;
	NSMutableArray* _unformattedRelationshipValues;
	unsigned _addedGeneration;
	unsigned _lastChangedGeneration;
	int _state;
	int _lastChangedByClientNumber;
	char _deleted;
	char _propertyValuesIncludeDataReferences;
	NSMutableDictionary* _relationshipMap;
	NSMutableArray* _reorderOnlyPropertyNames;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)entityName;
-(char)isDeleted;
-(id)recordId;
-(id)propertyValues;
-(void)setRecordId:(id)arg1 ;
-(id)propertyNames;
-(id)fastEntityName;
-(id)fastRecordId;
-(id)propertyValueWithName:(id)arg1 ;
-(void)replaceRecordIds:(id)arg1 ;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(void)setPropertyValuesIncludeDataReferences:(char)arg1 ;
-(void)noteModificationDate:(id)arg1 inGeneration:(unsigned)arg2 byClientWithId:(id)arg3 ;
-(id)initWithRecordId:(id)arg1 entityName:(id)arg2 propertyValues:(id)arg3 addedGeneration:(unsigned)arg4 lastChangedGeneration:(unsigned)arg5 state:(int)arg6 lastChangedByClientId:(id)arg7 isDeleted:(char)arg8 ;
-(char)propertyValuesIncludeDataReferences;
-(int)entityNumber;
-(unsigned)lastChangedGeneration;
-(unsigned)addedGeneration;
-(int)lastChangedByClientNumber;
-(char)addedOrModifiedPropertyValue:(id)arg1 ;
-(char)removePropertyValuesWithNames:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 entityNumber:(int)arg2 propertyValues:(id)arg3 addedGeneration:(unsigned)arg4 lastChangedGeneration:(unsigned)arg5 state:(int)arg6 lastChangedByClientNumber:(int)arg7 isDeleted:(char)arg8 ;
-(id)unformattedRelationshipValues;
-(void)setRelationshipMap:(id)arg1 ;
-(id)relationshipMap;
-(id)unformattedRelationshipValueWithName:(id)arg1 ;
-(void)addUnformattedRelationshipValue:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 propertyChanges:(id)arg2 ;
-(id)lastChangedByClientId;
-(char)recordWithId:(id)arg1 isInCachedRelationship:(id)arg2 atIndex:(long long*)arg3 ;
-(id)setPropertyValueWithType:(int)arg1 name:(id)arg2 value:(id)arg3 unformattedValue:(id)arg4 inGeneration:(unsigned)arg5 byClientId:(id)arg6 ;
-(void)addPropertyValue:(id)arg1 ;
-(void)setLastChangedGeneration:(unsigned)arg1 ;
-(void)setDeletedInGeneration:(unsigned)arg1 byClientId:(id)arg2 ;
-(id)setPropertyValueWithType:(int)arg1 name:(id)arg2 value:(id)arg3 inGeneration:(unsigned)arg4 byClientId:(id)arg5 ;
-(void)setDeleted:(char)arg1 forPropertyValueWithName:(id)arg2 inGeneration:(unsigned)arg3 byClientId:(id)arg4 ;
-(void)takeUnformattedRelationshipValueWithName:(id)arg1 fromRecord:(id)arg2 inGeneration:(unsigned)arg3 byClientId:(id)arg4 ;
-(void)deleteUnformattedRelationshipValueWithName:(id)arg1 ;
-(void)removeAllPropertyValues;
-(void)removePropertyValueWithName:(id)arg1 ;
-(id)propertyValuesWithNames:(id)arg1 ;
-(id)createRecordDictionary;
-(id)undeletedRecordIdsForRelationshipNamed:(id)arg1 ;
-(void)addReorderOnlyPropertyName:(id)arg1 ;
-(char)isReorderOnlyChangeForPropertyName:(id)arg1 ;
-(id)fastLastChangedByClientId;
@end

