/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKWebProcessPlugIn.h>

@class NSMapTable, WKWebProcessPlugInController, NSArray, WBSSearchProvider, NSString;

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn> {

	NSMapTable* _browserContextControllersToWebProcessPlugInPageControllers;
	WKWebProcessPlugInController* _plugInController;

}

@property (nonatomic,readonly) WKWebProcessPlugInController * plugInController;                          //@synthesize plugInController=_plugInController - In the implementation block
@property (nonatomic,readonly) NSArray * searchEnginesForRedirectToSafeSearch; 
@property (nonatomic,readonly) WBSSearchProvider * defaultSearchProvider; 
@property (getter=isParsecABTestingEnabled,nonatomic,readonly) char parsecABTestingEnabled; 
@property (nonatomic,readonly) unsigned long long parsecABGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2 ;
-(void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2 ;
-(void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2 ;
-(WBSSearchProvider *)defaultSearchProvider;
-(WKWebProcessPlugInController *)plugInController;
-(id)pageControllerWithBrowserContextController:(id)arg1 ;
-(void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(NSArray *)searchEnginesForRedirectToSafeSearch;
-(char)isParsecABTestingEnabled;
-(unsigned long long)parsecABGroupIdentifier;
@end

