/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFRemoteUserInterface.h>

@protocol WFUserInterfaceHost, WFActionUserInterfaceDelegate;
@class WFDialogAttribution, NSString;

@interface WFActionUserInterface : NSObject <WFRemoteUserInterface> {

	id<WFUserInterfaceHost> _userInterfaceHost;
	id<WFActionUserInterfaceDelegate> _delegate;
	WFDialogAttribution* _attribution;

}

@property (nonatomic,readonly) id<WFUserInterfaceHost> userInterfaceHost;                    //@synthesize userInterfaceHost=_userInterfaceHost - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionUserInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDialogAttribution * attribution;                            //@synthesize attribution=_attribution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionUserInterfaceDelegate>)delegate;
-(void)setDelegate:(id<WFActionUserInterfaceDelegate>)arg1 ;
-(WFDialogAttribution *)attribution;
-(id)userInterfaceType;
-(id)initWithUserInterfaceHost:(id)arg1 ;
-(id)initWithUserInterfaceHost:(id)arg1 attribution:(id)arg2 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<WFUserInterfaceHost>)userInterfaceHost;
@end
