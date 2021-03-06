/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RMProfilesAdapter, NSURLSession, NSString;

@interface RMProfilesController : NSObject {

	RMProfilesAdapter* _profilesAdapter;
	NSURLSession* _URLSession;
	NSString* _profileIdentifierPrefix;

}

@property (nonatomic,retain) RMProfilesAdapter * profilesAdapter;              //@synthesize profilesAdapter=_profilesAdapter - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                        //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,copy) NSString * profileIdentifierPrefix;                 //@synthesize profileIdentifierPrefix=_profileIdentifierPrefix - In the implementation block
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(RMProfilesAdapter *)profilesAdapter;
-(void)uninstallProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithURLSession:(id)arg1 profilesAdapter:(id)arg2 profileIdentifierPrefix:(id)arg3 ;
-(NSString *)profileIdentifierPrefix;
-(id)profileIdentifierForConfiguration:(id)arg1 ;
-(void)_installProfileAtPath:(id)arg1 identifier:(id)arg2 deviceChannel:(char)arg3 configuration:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_installProfileData:(id)arg1 configuration:(id)arg2 deviceChannel:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithProfileIdentifierPrefix:(id)arg1 ;
-(id)installedProfileIdentifiers;
-(void)downloadAndInstallProfileConfiguration:(id)arg1 fromURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)profileNameForConfiguration:(id)arg1 ;
-(void)setProfilesAdapter:(RMProfilesAdapter *)arg1 ;
-(void)setProfileIdentifierPrefix:(NSString *)arg1 ;
@end

