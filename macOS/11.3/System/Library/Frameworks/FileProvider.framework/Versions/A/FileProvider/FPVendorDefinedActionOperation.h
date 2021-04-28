/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class NSProgress, NSString, NSArray;

@interface FPVendorDefinedActionOperation : FPActionOperation {

	NSProgress* _remoteProgress;
	NSString* _actionIdentifier;
	NSArray* _itemIdentifiers;
	NSString* _domainIdentifier;

}
-(void)cancel;
-(void)actionMain;
-(id)initWithActionIdentifier:(id)arg1 providerDomainID:(id)arg2 itemIdentifiers:(id)arg3 ;
@end
