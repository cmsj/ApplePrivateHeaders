/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/Versions/A/FindMyDeviceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKSignInViewControllerDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class NSImage, AKInlineSignInViewController, NSError, NSString;

@interface FMDUIFMMController : NSObject <AKSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate> {

	NSImage* _displayImage;
	AKInlineSignInViewController* _inlineSignInViewController;
	unsigned long long _disableContext;
	NSError* _disableFMMError;

}

@property (retain) AKInlineSignInViewController * inlineSignInViewController;              //@synthesize inlineSignInViewController=_inlineSignInViewController - In the implementation block
@property (assign,nonatomic) unsigned long long disableContext;                            //@synthesize disableContext=_disableContext - In the implementation block
@property (nonatomic,retain) NSError * disableFMMError;                                    //@synthesize disableFMMError=_disableFMMError - In the implementation block
@property (nonatomic,retain) NSImage * displayImage;                                       //@synthesize displayImage=_displayImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disableFMMOnHostWindow:(id)arg1 orHostView:(id)arg2 abortConditions:(unsigned long long)arg3 usingCallback:(/*^block*/id)arg4 ;
-(id)fmmManager;
-(void)setDisableContext:(unsigned long long)arg1 ;
-(void)disableFMMForAccount:(id)arg1 abortConditions:(unsigned long long)arg2 hostWindow:(id)arg3 hostView:(id)arg4 usingCallback:(/*^block*/id)arg5 ;
-(void)disableFMMForAccount:(id)arg1 abortConditions:(unsigned long long)arg2 hostWindow:(id)arg3 usingCallback:(/*^block*/id)arg4 ;
-(NSError *)disableFMMError;
-(void)setDisableFMMError:(NSError *)arg1 ;
-(unsigned long long)disableContext;
-(void)getWipeTokenForAccount:(id)arg1 passwordToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)basicAuthHeaderValueForUsername:(id)arg1 password:(id)arg2 ;
-(void)disableFMMOnHostWindow:(id)arg1 abortConditions:(unsigned long long)arg2 usingCallback:(/*^block*/id)arg3 ;
-(void)disableFMMForRemoveDiskVolue:(id)arg1 hostWindow:(id)arg2 usingCallback:(/*^block*/id)arg3 ;
-(void)disableFMMForRemoveUser:(id)arg1 hostWindow:(id)arg2 usingCallback:(/*^block*/id)arg3 ;
-(AKInlineSignInViewController *)inlineSignInViewController;
-(void)setInlineSignInViewController:(AKInlineSignInViewController *)arg1 ;
-(void)setDisplayImage:(NSImage *)arg1 ;
-(NSImage *)displayImage;
-(void)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)disableFMMOnHostWindow:(id)arg1 usingCallback:(/*^block*/id)arg2 ;
-(void)disableFMMForRemoveDiskVolumes:(id)arg1 hostWindow:(id)arg2 usingCallback:(/*^block*/id)arg3 ;
@end
