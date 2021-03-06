/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISDPropertyValue;

@interface ISDPropertyChange : NSObject {

	ISDPropertyValue* _propertyValue;
	int _action;

}
+(id)propertyChangeWithAction:(int)arg1 propertyType:(int)arg2 name:(id)arg3 value:(id)arg4 lastModifiedGeneration:(unsigned)arg5 clientId:(id)arg6 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)action;
-(id)value;
-(id)clientId;
-(int)propertyType;
-(id)fastClientId;
-(id)fastName;
-(id)fastValue;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(unsigned)lastModifiedGeneration;
-(void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2 ;
-(id)propertyValueInstance;
-(id)initWithAction:(int)arg1 propertyType:(int)arg2 name:(id)arg3 value:(id)arg4 lastModifiedGeneration:(unsigned)arg5 clientId:(id)arg6 ;
-(id)initWithQuickDirtyCoder:(id)arg1 ;
-(void)encodeWithQuickDirtyCoder:(id)arg1 ;
-(int)isd_quickDirtyCoderType;
-(id)initWithAction:(int)arg1 propertyValue:(id)arg2 ;
-(char)isDefaultValue;
-(void)setIsDefaultValue:(char)arg1 ;
-(char)_valuesAreEqual:(id)arg1 ;
-(int)propertyCollectionType;
@end

