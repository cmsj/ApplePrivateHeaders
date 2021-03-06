/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNCDPersistenceContext;

@interface CNCDCustomPropertyValueFetcher : NSObject {

	NSString* _identifier;
	CNCDPersistenceContext* _persistenceContext;

}

@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) CNCDPersistenceContext * persistenceContext;              //@synthesize persistenceContext=_persistenceContext - In the implementation block
+(id)_remoteCustomPropertyForCustomProperty:(id)arg1 ;
+(id)_createRemoteObjectsFromCustomPropertyValues:(id)arg1 ;
+(id)customPropertyValuesForRecordWithIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)_remoteCustomPropertyValueForCustomPropertyValue:(id)arg1 ;
+(id)allCustomPropertiesWithPersistenceStack:(id)arg1 ;
+(id)customPropertyValuesForRecordWithIdentifier:(id)arg1 persistenceStack:(id)arg2 error:(id*)arg3 ;
-(NSString *)identifier;
-(CNCDPersistenceContext *)persistenceContext;
-(id)initWithRecordIdentifier:(id)arg1 persistenceContext:(id)arg2 ;
-(id)fetchCustomPropertyValues:(id*)arg1 ;
@end

