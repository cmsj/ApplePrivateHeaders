/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OBPrivacySplashController, OBPrivacyCombinedController, NSString, NSWindow, NSWindowController, NSArray;

@interface OBPrivacyPresenter : NSObject {

	/*^block*/id _dismissHandler;
	OBPrivacySplashController* _splashController;
	OBPrivacyCombinedController* _combinedController;
	NSString* _displayLanguage;
	NSWindow* _presentingWindow;
	NSWindowController* _presentedController;
	NSArray* _presentedIdentifiers;

}

@property (retain) OBPrivacySplashController * splashController;                  //@synthesize splashController=_splashController - In the implementation block
@property (retain) OBPrivacyCombinedController * combinedController;              //@synthesize combinedController=_combinedController - In the implementation block
@property (retain) NSWindowController * presentedController;                      //@synthesize presentedController=_presentedController - In the implementation block
@property (retain) NSArray * presentedIdentifiers;                                //@synthesize presentedIdentifiers=_presentedIdentifiers - In the implementation block
@property (copy) id dismissHandler;                                               //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,retain) NSString * displayLanguage;                          //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (__weak) NSWindow * presentingWindow;                                   //@synthesize presentingWindow=_presentingWindow - In the implementation block
+(id)presenterForPrivacySplashWithBundle:(id)arg1 ;
+(id)presenterForPrivacySplashWithIdentifier:(id)arg1 ;
+(id)presenterForPrivacySplashWithIdentifer:(id)arg1 ;
+(id)presenterForPrivacySplashWithBundleAtPath:(id)arg1 ;
+(id)presenterForPrivacyUnifiedAbout;
+(id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1 ;
-(void)present;
-(NSString *)displayLanguage;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(NSWindow *)presentingWindow;
-(void)setPresentingWindow:(NSWindow *)arg1 ;
-(void)setSplashController:(OBPrivacySplashController *)arg1 ;
-(OBPrivacySplashController *)splashController;
-(void)setPresentedIdentifiers:(NSArray *)arg1 ;
-(void)setCombinedController:(OBPrivacyCombinedController *)arg1 ;
-(OBPrivacyCombinedController *)combinedController;
-(id)dismissHandler;
-(void)setPresentedController:(NSWindowController *)arg1 ;
-(NSWindowController *)presentedController;
-(void)_presenterDidDismiss;
-(NSArray *)presentedIdentifiers;
-(void)setDismissHandler:(id)arg1 ;
@end

