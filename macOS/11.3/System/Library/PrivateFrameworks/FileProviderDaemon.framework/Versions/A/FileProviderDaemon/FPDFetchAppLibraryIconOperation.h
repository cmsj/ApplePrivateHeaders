/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/FPOperationClient.h>

@class NSMutableArray, NSArray, NSProgress;

@interface FPDFetchAppLibraryIconOperation : FPOperation <FPOperationClient> {

	CGSize _desiredSize;
	double _screenScale;
	NSMutableArray* _appBundleIDsNotFound;
	char _allowLocalLookup;
	char _allowAppStoreLookup;
	NSArray* _appBundleIDs;
	NSProgress* _progress;
	/*^block*/id _perAppBundleCompletion;

}

@property (assign,nonatomic) char allowLocalLookup;                 //@synthesize allowLocalLookup=_allowLocalLookup - In the implementation block
@property (assign,nonatomic) char allowAppStoreLookup;              //@synthesize allowAppStoreLookup=_allowAppStoreLookup - In the implementation block
@property (nonatomic,readonly) NSArray * appBundleIDs;              //@synthesize appBundleIDs=_appBundleIDs - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id perAppBundleCompletion;               //@synthesize perAppBundleCompletion=_perAppBundleCompletion - In the implementation block
+(id)sharedOperationQueue;
-(void)main;
-(NSProgress *)progress;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAppBundleIDs:(id)arg1 desiredSize:(CGSize)arg2 screenScale:(double)arg3 ;
-(void)setPerAppBundleCompletion:(id)arg1 ;
-(void)_perAppBundleCompletion:(id)arg1 iconData:(id)arg2 contentType:(id)arg3 error:(id)arg4 ;
-(void)_verifyAppBundleIDsFormat;
-(void)_retrieveIconsFromLocalDevice;
-(void)_retrieveIconsFromAppStore;
-(char)_checkTypeIsValid:(id)arg1 ;
-(char)_checkIsNotPrefixedByTeamID:(id)arg1 ;
-(id)perAppBundleCompletion;
-(NSArray *)appBundleIDs;
-(char)allowLocalLookup;
-(void)setAllowLocalLookup:(char)arg1 ;
-(char)allowAppStoreLookup;
-(void)setAllowAppStoreLookup:(char)arg1 ;
@end
