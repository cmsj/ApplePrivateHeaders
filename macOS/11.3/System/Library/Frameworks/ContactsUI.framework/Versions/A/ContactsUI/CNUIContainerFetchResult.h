/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContainer, NSArray;

@interface CNUIContainerFetchResult : NSObject {

	CNContainer* _parentConrtainer;
	NSArray* _linkedParentContainers;

}

@property (nonatomic,readonly) CNContainer * parentConrtainer;                //@synthesize parentConrtainer=_parentConrtainer - In the implementation block
@property (nonatomic,readonly) NSArray * linkedParentContainers;              //@synthesize linkedParentContainers=_linkedParentContainers - In the implementation block
-(id)description;
-(CNContainer *)parentConrtainer;
-(NSArray *)linkedParentContainers;
-(id)initWithParentContainer:(id)arg1 linkedParentContainers:(id)arg2 ;
@end
