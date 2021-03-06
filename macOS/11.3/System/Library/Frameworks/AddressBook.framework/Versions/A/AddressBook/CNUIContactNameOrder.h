/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNUIContactNameOrder : NSObject

@property (nonatomic,readonly) NSArray * nameKeys; 
@property (nonatomic,readonly) NSArray * phoneticNameKeys; 
+(char)contactHasName:(id)arg1 ;
+(id)defaultNameOrderForContact:(id)arg1 ;
+(id)namelessContactNameOrderForContact:(id)arg1 ;
+(id)givenNameFirstNameOrder;
+(id)familyNameFirstNameOrder;
+(id)displayNameOrderForContact:(id)arg1 ;
-(NSArray *)nameKeys;
-(NSArray *)phoneticNameKeys;
@end

