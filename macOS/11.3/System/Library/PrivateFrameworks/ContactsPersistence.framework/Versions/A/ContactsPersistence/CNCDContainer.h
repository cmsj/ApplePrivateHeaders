/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ContactsPersistence-Structs.h>
#import <ContactsPersistence/ABCDRecord.h>

@class ABCDContact, ABCDInfo, NSString, NSDate, NSSet;

@interface CNCDContainer : ABCDRecord

@property (nonatomic,retain) ABCDContact * me; 
@property (nonatomic,retain) ABCDInfo * info; 
@property (nonatomic,retain) NSString * remoteLocation; 
@property (nonatomic,retain) NSString * serialNumber; 
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (assign,nonatomic) unsigned short guardianFlags; 
@property (nonatomic,retain) NSSet * contacts; 
@property (nonatomic,retain) NSSet * deletedRecords; 
@property (nonatomic,retain) NSSet * groups; 
+(void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(CFDictionaryRef)arg4 valueWithEntityConverter:(CFDictionaryRef)arg5 ;
+(id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5 ;
+(id)metadataType;
+(id)containerWithAddressBook:(id)arg1 store:(id)arg2 ;
+(id)_table;
+(id)abEntityName;
+(char)_isPublicRecord;
+(id)containerWithManagedObjectContext:(id)arg1 store:(id)arg2 ;
-(id)description;
-(id)initWithUniqueId:(id)arg1 addressBook:(id)arg2 ;
-(id)description;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(char)validateForDelete:(id*)arg1 ;
-(char)validateForGuardianRestrictions:(id*)arg1 ;
-(id)parentGroups;
@end

