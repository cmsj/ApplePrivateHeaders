/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ABCDOwnedObject.h>

@class NSManagedObject, NSString, ABCDRecord;

@interface ABCDDateComponents : ABCDOwnedObject

@property (nonatomic,retain) NSManagedObject * contact; 
@property (assign) long long day; 
@property (assign) long long month; 
@property (assign) long long year; 
@property (assign) long long era; 
@property (assign) char isLeapMonth; 
@property (copy) NSString * calendarIdentifier; 
@property (nonatomic,retain) ABCDRecord * owner; 
-(void)setOwner:(ABCDRecord *)arg1 ;
-(ABCDRecord *)owner;
-(id)components;
-(void)setComponents:(id)arg1 ;
-(char)abHasAddressBookRelatedContent;
@end

