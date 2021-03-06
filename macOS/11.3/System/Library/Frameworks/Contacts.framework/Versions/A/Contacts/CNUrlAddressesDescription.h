/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNUrlAddressesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)coreDataKey;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(char)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(char)isNonnull;
-(id)CNValueForContact:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(char)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(id)standardLabels;
-(void)copyFromLabeledValue:(id)arg1 toOwnedObject:(id)arg2 ;
-(void)copyValueFromContact:(id)arg1 toRemotePerson:(id)arg2 ;
-(void)copyValueFromRemotePerson:(id)arg1 toContact:(id)arg2 ;
-(id)subCoreDataPredicatePropertiesByKey;
-(id)coreDataRelationshipKeyPathsToFetch;
-(void)copyFromCoreDataContact:(id)arg1 toContact:(id)arg2 ;
-(/*^block*/id)ownedObjectToLabeledValueValueTransform;
-(id)coreDataOwnedEntityName;
@end

