/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, NSArray;

@interface CNUICoreFamilyInfo : NSObject {

	CNContact* _meContact;
	NSArray* _elements;

}

@property (nonatomic,readonly) CNContact * meContact;              //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,readonly) NSArray * elements;                 //@synthesize elements=_elements - In the implementation block
-(id)description;
-(id)init;
-(NSArray *)elements;
-(CNContact *)meContact;
-(id)initWithMeContact:(id)arg1 elements:(id)arg2 ;
@end

