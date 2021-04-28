/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSNumber, NSURL;

@interface DMFInstallManagedBookRequest : DMFTaskRequest {

	NSString* _originator;
	NSNumber* _iTunesStoreID;
	NSString* _persistentID;
	NSString* _author;
	NSString* _title;
	NSString* _version;
	NSURL* _URL;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * originator;                  //@synthesize originator=_originator - In the implementation block
@property (nonatomic,copy) NSNumber * iTunesStoreID;               //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,copy) NSString * persistentID;                //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSString * author;                      //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * version;                     //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
+(id)permittedPlatforms;
+(char)isPermittedOnSystemConnection;
+(char)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSURL *)URL;
-(NSString *)version;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)persistentID;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(void)setPersistentID:(NSString *)arg1 ;
@end
