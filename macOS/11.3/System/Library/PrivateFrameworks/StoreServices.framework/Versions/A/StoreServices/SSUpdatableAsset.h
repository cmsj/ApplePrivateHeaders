/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface SSUpdatableAsset : NSObject {

	NSURL* _cacheURL;
	NSString* _md5;
	NSString* _name;
	NSURL* _serverURL;
	NSString* _version;

}

@property (setter=_setCacheURL:,nonatomic,retain) NSURL * cacheURL;                //@synthesize cacheURL=_cacheURL - In the implementation block
@property (setter=_setMD5:,nonatomic,copy) NSString * md5;                         //@synthesize md5=_md5 - In the implementation block
@property (setter=_setName:,nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (setter=_setServerURL:,nonatomic,retain) NSURL * serverURL;              //@synthesize serverURL=_serverURL - In the implementation block
@property (setter=_setVersion:,nonatomic,copy) NSString * version;                 //@synthesize version=_version - In the implementation block
-(NSString *)name;
-(NSString *)version;
-(NSString *)md5;
-(NSURL *)serverURL;
-(void)_setName:(id)arg1 ;
-(NSURL *)cacheURL;
-(void)_setVersion:(id)arg1 ;
-(void)_setCacheURL:(id)arg1 ;
-(void)_setServerURL:(id)arg1 ;
-(void)_setMD5:(id)arg1 ;
@end

