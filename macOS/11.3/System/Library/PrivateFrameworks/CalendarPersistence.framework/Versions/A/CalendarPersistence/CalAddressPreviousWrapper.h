/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalAddressWrapper.h>

@class NSString, NSNumber;

@interface CalAddressPreviousWrapper : CalAddressWrapper {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayedName;
	NSString* _type;
	NSString* _loginName;
	NSNumber* _recentContactIDNumber;

}
-(id)type;
-(id)firstName;
-(id)lastName;
-(id)displayedName;
-(id)completionForSubstring:(id)arg1 ;
-(char)isPerson;
-(char)isLocation;
-(char)isResource;
-(char)fromPrevious;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 displayedName:(id)arg3 address:(id)arg4 loginName:(id)arg5 type:(id)arg6 recentContactIDNumber:(id)arg7 ;
-(id)loginName;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 displayedName:(id)arg3 address:(id)arg4 loginName:(id)arg5 type:(id)arg6 ;
-(id)recentContactIDNumber;
@end

