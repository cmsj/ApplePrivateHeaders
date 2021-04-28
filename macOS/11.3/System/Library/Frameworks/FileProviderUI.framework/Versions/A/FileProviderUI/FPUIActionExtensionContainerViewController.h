/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/Versions/A/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSServiceViewController.h>
#import <libobjc.A.dylib/FPUIActionExtensionViewControllerProtocol.h>

@class FPUIActionExtensionViewController;

@interface FPUIActionExtensionContainerViewController : NSServiceViewController <FPUIActionExtensionViewControllerProtocol> {

	FPUIActionExtensionViewController* _actionExtensionViewController;

}
-(id)exportedObject;
-(id)exportedInterface;
-(void)loadView;
-(void)_prepareForActionWithIdentifier:(id)arg1 items:(id)arg2 ;
-(void)_prepareForServerCreation;
-(void)_prepareForError:(id)arg1 ;
-(void)_prepareAuthenticationUsingURL:(id)arg1 ;
-(void)_prepareAuthenticationUsingServerURL:(id)arg1 ;
-(void)_configureWithDomainIdentifier:(id)arg1 ;
-(unsigned long long)awakeFromRemoteView;
-(void)_embedActionExtensionViewController;
@end
