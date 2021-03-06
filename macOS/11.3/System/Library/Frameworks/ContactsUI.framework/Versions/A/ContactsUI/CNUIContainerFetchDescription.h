/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, CNContactStore;

@interface CNUIContainerFetchDescription : NSObject {

	char _fetchAsynchronously;
	char _fetchingDuringLaunch;
	CNContact* _contact;
	CNContactStore* _mainContactStore;
	CNContactStore* _alternateContactStore;

}

@property (nonatomic,readonly) CNContact * contact;                                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContactStore * mainContactStore;                   //@synthesize mainContactStore=_mainContactStore - In the implementation block
@property (nonatomic,readonly) CNContactStore * alternateContactStore;              //@synthesize alternateContactStore=_alternateContactStore - In the implementation block
@property (nonatomic,readonly) char fetchAsynchronously;                            //@synthesize fetchAsynchronously=_fetchAsynchronously - In the implementation block
@property (nonatomic,readonly) char fetchingDuringLaunch;                           //@synthesize fetchingDuringLaunch=_fetchingDuringLaunch - In the implementation block
+(id)fetchDescriptionWithContact:(id)arg1 contactStore:(id)arg2 alternateContactStore:(id)arg3 fetchAsynchronously:(char)arg4 fetchingDuringLaunch:(char)arg5 ;
-(id)description;
-(id)init;
-(CNContact *)contact;
-(CNContactStore *)mainContactStore;
-(CNContactStore *)alternateContactStore;
-(char)fetchAsynchronously;
-(char)fetchingDuringLaunch;
-(id)initWithFetchDescriptionWithContact:(id)arg1 contactStore:(id)arg2 alternateContactStore:(id)arg3 fetchAsynchronously:(char)arg4 fetchingDuringLaunch:(char)arg5 ;
@end

