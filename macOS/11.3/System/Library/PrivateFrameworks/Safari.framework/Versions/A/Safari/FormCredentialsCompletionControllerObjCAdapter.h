/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/FormAutoFillCompletionControllerObjCAdapter.h>
#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASCredentialListViewControllerDelegate.h>
#import <libobjc.A.dylib/_ASPasswordCredentialAuthenticationViewControllerDelegate.h>

@class AutoFillLocalAuthenticationManager, _ASCredentialListViewController, _ASPasswordCredentialAuthenticationViewController, NSString;

@interface FormCredentialsCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter <SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate> {

	AutoFillLocalAuthenticationManager* _autoFillLocalAuthenticationManager;
	_ASCredentialListViewController* _credentialListViewController;
	_ASPasswordCredentialAuthenticationViewController* _externalCredentialViewController;
	/*^block*/id _externalCredentialCompletionHandler;
	char _didPresentExternalCredentialViewController;
	char _hasCredentialProviderExtension;

}

@property (nonatomic,readonly) char abortCompletionBlocked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)_url;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)credentialListViewControllerDidPrepareInterface:(id)arg1 ;
-(void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCompletionController:(FormAutoFillCompletionController*)arg1 ;
-(void)didRefreshCompletionListItems:(const Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::RawPtrTraits<Safari::CompletionListItem>, WTF::DefaultRefDerefTraits<Safari::CompletionListItem>>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg1 ;
-(double)widthOfCellForItem:(CompletionListItem*)arg1 ;
-(id)_itemNameForAutoFillAuthorizationSheetWithItem:(const CompletionListItem*)arg1 ;
-(void)showCredentialListForExtension:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveCredentialIdentityMatch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerCredentialAutoFillTableViewCellClasses;
-(FormCredentialsCompletionController*)_formCredentialsCompletionController;
-(char)abortCompletionBlocked;
-(id)_firstExistingCellViewPassingTest:(/*^block*/id)arg1 ;
@end

