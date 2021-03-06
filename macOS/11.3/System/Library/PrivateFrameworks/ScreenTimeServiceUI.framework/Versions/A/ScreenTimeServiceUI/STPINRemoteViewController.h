/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeServiceUI.framework/Versions/A/ScreenTimeServiceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSRemoteViewController.h>
#import <libobjc.A.dylib/STPINRemoteViewController.h>

@protocol STPINRemoteViewController <NSObject>
@required
-(void)pinServiceDidCompleteWithError:(id)arg1 reply:(/*^block*/id)arg2;

@end


@class NSString;

@interface STPINRemoteViewController : NSRemoteViewController <STPINRemoteViewController> {

	/*^block*/id _pinServiceDidComplete;

}

@property (nonatomic,copy) id pinServiceDidComplete;                //@synthesize pinServiceDidComplete=_pinServiceDidComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestPINViewControllerWithUserURI:(id)arg1 mode:(long long)arg2 completionHandler:(/*^block*/id)arg3 pinServiceCompletionHandler:(/*^block*/id)arg4 ;
-(void)viewWillAppear;
-(void)pinServiceDidCompleteWithError:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setPinServiceDidComplete:(id)arg1 ;
-(id)pinServiceDidComplete;
@end

