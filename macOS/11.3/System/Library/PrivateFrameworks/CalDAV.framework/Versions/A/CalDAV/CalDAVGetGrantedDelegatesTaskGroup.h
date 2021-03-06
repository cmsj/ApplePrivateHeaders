/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	char _fetchPrincipalDetails;
	int _state;

}

@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char fetchPrincipalDetails;              //@synthesize fetchPrincipalDetails=_fetchPrincipalDetails - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(void)startTaskGroup;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)_getChildProperties;
-(void)setFetchPrincipalDetails:(char)arg1 ;
-(id)_urlAppendingSegmentWithAllowWrite:(char)arg1 ;
-(char)fetchPrincipalDetails;
-(void)_expandPropertiesWithAllowWrite:(char)arg1 ;
-(void)_fetchOnlyHrefs;
@end

