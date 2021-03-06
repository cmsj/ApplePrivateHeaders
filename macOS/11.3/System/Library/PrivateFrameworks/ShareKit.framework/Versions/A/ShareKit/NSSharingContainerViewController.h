/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSSharingAccountConfigurationViewController, NSViewController, NSString;

@interface NSSharingContainerViewController : NSViewController <NSExtensionRequestHandling> {

	NSSharingAccountConfigurationViewController* _configurationViewController;
	NSViewController* _shareViewController;

}

@property (retain) NSSharingAccountConfigurationViewController * configurationViewController;              //@synthesize configurationViewController=_configurationViewController - In the implementation block
@property (retain) NSViewController * shareViewController;                                                 //@synthesize shareViewController=_shareViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)loadView;
-(void)setConfigurationViewController:(NSSharingAccountConfigurationViewController *)arg1 ;
-(void)setShareViewController:(NSViewController *)arg1 ;
-(NSSharingAccountConfigurationViewController *)configurationViewController;
-(NSViewController *)shareViewController;
@end

