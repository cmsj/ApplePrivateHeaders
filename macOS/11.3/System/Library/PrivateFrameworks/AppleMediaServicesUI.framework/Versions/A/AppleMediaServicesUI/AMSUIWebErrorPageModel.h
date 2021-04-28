/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@protocol AMSUIWebActionRunnable;
@class NSString, AMSMetricsEvent, AMSUIWebNavigationBarModel, NSBundle, AMSUIWebClientContext;

@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider> {

	char _errorMessageInternalOnly;
	NSString* _backgroundColor;
	NSString* _errorMessage;
	AMSMetricsEvent* _impressionEvent;
	AMSUIWebNavigationBarModel* _navigationBar;
	id<AMSUIWebActionRunnable> _action;
	/*^block*/id _actionBlock;
	NSString* _actionButtonTitle;
	NSString* _errorTitle;
	NSBundle* _bundle;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (retain) NSBundle * bundle;                                         //@synthesize bundle=_bundle - In the implementation block
@property (retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (retain) id<AMSUIWebActionRunnable> action;                         //@synthesize action=_action - In the implementation block
@property (copy) id actionBlock;                                              //@synthesize actionBlock=_actionBlock - In the implementation block
@property (retain) NSString * actionButtonTitle;                              //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (readonly) NSString * errorMessage;                                 //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign) char errorMessageInternalOnly;                             //@synthesize errorMessageInternalOnly=_errorMessageInternalOnly - In the implementation block
@property (retain) NSString * errorTitle;                                     //@synthesize errorTitle=_errorTitle - In the implementation block
@property (readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) AMSMetricsEvent * impressionEvent;                       //@synthesize impressionEvent=_impressionEvent - In the implementation block
@property (readonly) char disableReappearPlaceholder; 
@property (readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_messageFromError:(id)arg1 ;
-(id<AMSUIWebActionRunnable>)action;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(CGSize)windowSize;
-(NSString *)errorMessage;
-(NSString *)errorTitle;
-(void)setErrorTitle:(NSString *)arg1 ;
-(AMSMetricsEvent *)impressionEvent;
-(id)createViewController;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(char)disableReappearPlaceholder;
-(char)errorMessageInternalOnly;
-(id)initWithError:(id)arg1 context:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(void)setErrorMessageInternalOnly:(char)arg1 ;
@end
