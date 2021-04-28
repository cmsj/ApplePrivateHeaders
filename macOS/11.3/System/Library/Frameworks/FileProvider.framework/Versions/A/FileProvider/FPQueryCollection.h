/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPItemCollection.h>
#import <libobjc.A.dylib/FPSpotlightDataSourceDelegate.h>

@class FPQueryEnumerationSettings, NSPredicate, NSString, NSNumber, NSArray;

@interface FPQueryCollection : FPItemCollection <FPSpotlightDataSourceDelegate> {

	FPQueryEnumerationSettings* _settings;
	Class _descriptorClass;
	NSPredicate* _predicate;
	unsigned long long _itemsOrigin;
	NSString* _descriptionName;

}

@property (readonly) FPQueryEnumerationSettings * settings;                 //@synthesize settings=_settings - In the implementation block
@property (readonly) NSPredicate * predicate;                               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned long long itemsOrigin;              //@synthesize itemsOrigin=_itemsOrigin - In the implementation block
@property (copy) NSNumber * desiredNumberOfItems; 
@property (copy) NSArray * allowedProviderIdentifiers; 
@property (copy) NSArray * excludedFileTypes; 
@property (copy) NSArray * allowedFileTypes; 
@property (copy) NSString * tagIdentifier; 
@property (copy) NSString * descriptionName;                                //@synthesize descriptionName=_descriptionName - In the implementation block
@property (readonly) unsigned long long lastForcedUpdate; 
+(void)suspendAllQueries;
+(void)resumeAllQueries;
-(id)description;
-(void)setAllowedFileTypes:(NSArray *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)allowedFileTypes;
-(FPQueryEnumerationSettings *)settings;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
-(id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2 paced:(char)arg3 ;
-(id)_enumerationSettingsPredicate;
-(id)_createDescriptorWithSortDescriptors:(id)arg1 ;
-(void)setDesiredNumberOfItems:(NSNumber *)arg1 ;
-(NSNumber *)desiredNumberOfItems;
-(void)setExcludedFileTypes:(NSArray *)arg1 ;
-(NSArray *)excludedFileTypes;
-(void)setTagIdentifier:(NSString *)arg1 ;
-(NSString *)tagIdentifier;
-(void)dataSource:(id)arg1 didChangeItemsOrigin:(unsigned long long)arg2 ;
-(id)initWithQueryDescriptorClass:(Class)arg1 ;
-(id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2 ;
-(void)setAllowedProviderIdentifiers:(NSArray *)arg1 ;
-(NSArray *)allowedProviderIdentifiers;
-(id)underlyingQueryStringForMountPoint:(id)arg1 ;
-(unsigned long long)itemsOrigin;
-(NSString *)descriptionName;
-(void)setDescriptionName:(NSString *)arg1 ;
@end
