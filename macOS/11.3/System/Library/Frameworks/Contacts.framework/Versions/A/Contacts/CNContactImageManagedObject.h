/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface CNContactImageManagedObject : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSString * contactIdentifier; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,retain) NSDate * lastUsedDate; 
@property (nonatomic,retain) NSString * cropRectString; 
@property (nonatomic,retain) NSString * displayString; 
@property (nonatomic,retain) NSNumber * source; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (nonatomic,retain) NSString * variant; 
+(/*^block*/id)managedObjectToContactImageTransform;
-(id)cropRectStringFromCGRect:(CGRect)arg1 ;
-(void)updateWithContactImage:(id)arg1 ;
-(void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2 ;
@end

