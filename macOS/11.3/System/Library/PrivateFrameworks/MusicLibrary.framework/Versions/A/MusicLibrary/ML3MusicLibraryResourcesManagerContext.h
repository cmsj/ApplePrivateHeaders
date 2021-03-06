/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLMediaLibraryResourcesServiceProtocol, ML3AccountInformationProviding, MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface ML3MusicLibraryResourcesManagerContext : NSObject {

	char _runningInDaemon;
	char _multiUserSupported;
	id<MLMediaLibraryResourcesServiceProtocol> _resourcesService;
	id<ML3AccountInformationProviding> _accountInfo;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
	NSString* _libraryContainerIdentifier;

}

@property (getter=isRunningInDaemon,nonatomic,readonly) char runningInDaemon;                              //@synthesize runningInDaemon=_runningInDaemon - In the implementation block
@property (getter=isMultiUserSupported,nonatomic,readonly) char multiUserSupported;                        //@synthesize multiUserSupported=_multiUserSupported - In the implementation block
@property (nonatomic,readonly) id<MLMediaLibraryResourcesServiceProtocol> resourcesService;                //@synthesize resourcesService=_resourcesService - In the implementation block
@property (nonatomic,readonly) id<ML3AccountInformationProviding> accountInfo;                             //@synthesize accountInfo=_accountInfo - In the implementation block
@property (nonatomic,readonly) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,readonly) NSString * libraryContainerIdentifier;                                      //@synthesize libraryContainerIdentifier=_libraryContainerIdentifier - In the implementation block
+(id)contextForAutoupdatingSharedLibrary;
+(id)contextForSingleUserLibraryWithAccountInfo:(id)arg1 ;
+(id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)arg1 ;
+(id)contextForMultiUserFrameworkLibraryWithService:(id)arg1 ;
+(id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2 ;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(id<ML3AccountInformationProviding>)accountInfo;
-(id)_initWithResourcesService:(id)arg1 accountInfo:(id)arg2 libraryContainerIdentifier:(id)arg3 accountChangeObserver:(id)arg4 supportsMultiUsers:(char)arg5 runningInDaemon:(char)arg6 ;
-(char)isRunningInDaemon;
-(char)isMultiUserSupported;
-(id<MLMediaLibraryResourcesServiceProtocol>)resourcesService;
-(NSString *)libraryContainerIdentifier;
@end

