/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	NSURL* _homeURL;
	NSURL* _cardURL;

}

@property (nonatomic,readonly) NSURL * cardURL;                     //@synthesize cardURL=_cardURL - In the implementation block
@property (nonatomic,readonly) NSURL * homeURL;                     //@synthesize homeURL=_homeURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSURL *)cardURL;
-(void)startTaskGroup;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(id)_newPropPatchTask;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4 ;
-(NSURL *)homeURL;
@end

