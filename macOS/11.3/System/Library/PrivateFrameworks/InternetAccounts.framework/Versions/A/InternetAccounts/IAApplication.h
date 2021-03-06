/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSImage, NSMutableDictionary;

@interface IAApplication : NSObject {

	NSString* _bundleID;
	NSString* _displayName;
	NSString* _imagePath;
	NSImage* _image;
	NSMutableDictionary* _userInfo;
	char _enabled;
	char _alreadyEnabled;

}

@property (retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * imagePath;                        //@synthesize imagePath=_imagePath - In the implementation block
@property (retain) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSImage * image; 
@property (assign) char enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (assign) char alreadyEnabled;                         //@synthesize alreadyEnabled=_alreadyEnabled - In the implementation block
+(id)appWithBundleID:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSMutableDictionary *)userInfo;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)displayName;
-(id)initWithBundleID:(id)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSImage *)image;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)imagePath;
-(void)setImagePath:(NSString *)arg1 ;
-(id)displayNameForData;
-(id)associatedPluginID;
-(id)associatedProviderID;
-(long long)sortValue;
-(char)alreadyEnabled;
-(void)setAlreadyEnabled:(char)arg1 ;
@end

