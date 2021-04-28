/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>

@class NSArray, ISServiceProxy;

@interface CKRestoreDownloadsRequest : SSRequest {

	NSArray* _archivedFiles;
	ISServiceProxy* _serviceProxy;
	char _userInitiated;

}

@property (assign) char userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
-(char)userInitiated;
-(void)setUserInitiated:(char)arg1 ;
-(id)initWithArchivedFiles:(id)arg1 ;
-(char)issueRequestForIdentifier:(id)arg1 error:(id*)arg2 ;
@end
