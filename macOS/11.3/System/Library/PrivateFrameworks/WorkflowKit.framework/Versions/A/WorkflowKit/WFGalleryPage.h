/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CKRecordID, NSString, NSNumber, NSArray, NSData;

@interface WFGalleryPage : NSObject <WFCloudKitItem, NSMutableCopying> {

	CKRecordID* _identifier;
	NSString* _name;
	NSNumber* _minVersion;
	NSNumber* _isRoot;
	NSArray* _banners;
	NSArray* _collections;
	NSArray* _routines;
	NSArray* _donations;
	NSArray* _donationsGroupedByApp;
	NSArray* _automationSuggestions;
	NSString* _language;
	CKRecordID* _base;
	NSString* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * minVersion;                        //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * isRoot;                            //@synthesize isRoot=_isRoot - In the implementation block
@property (nonatomic,readonly) NSArray * banners;                            //@synthesize banners=_banners - In the implementation block
@property (nonatomic,readonly) NSArray * collections;                        //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) NSArray * routines;                           //@synthesize routines=_routines - In the implementation block
@property (nonatomic,readonly) NSArray * donations;                          //@synthesize donations=_donations - In the implementation block
@property (nonatomic,readonly) NSArray * donationsGroupedByApp;              //@synthesize donationsGroupedByApp=_donationsGroupedByApp - In the implementation block
@property (nonatomic,copy) NSArray * automationSuggestions;                  //@synthesize automationSuggestions=_automationSuggestions - In the implementation block
@property (nonatomic,readonly) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) CKRecordID * base;                            //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordType;
+(id)properties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(NSArray *)collections;
-(NSNumber *)isRoot;
-(CKRecordID *)base;
-(NSNumber *)minVersion;
-(NSArray *)banners;
-(unsigned long long)referenceActionForKey:(id)arg1 ;
-(NSArray *)donations;
-(id)subPageMatchingName:(id)arg1 ;
-(id)subPageWithIdentifier:(id)arg1 ;
-(NSArray *)routines;
-(NSArray *)donationsGroupedByApp;
-(NSArray *)automationSuggestions;
-(void)setAutomationSuggestions:(NSArray *)arg1 ;
@end
